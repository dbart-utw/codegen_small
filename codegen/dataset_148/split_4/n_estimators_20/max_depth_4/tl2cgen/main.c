
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9926614481409002;
          result[1] += 0;
          result[2] += 0.004892367906066536;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002446183953033268;
        } else {
          result[0] += 0.9996709037804928;
          result[1] += 0;
          result[2] += 0.0003290962195071784;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)10343) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.02088235294117647;
          result[1] += 0.0058823529411764705;
          result[2] += 0.011764705882352941;
          result[3] += 0.9385294117647058;
          result[4] += 0.022058823529411766;
          result[5] += 0.0008823529411764706;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003925417075564278;
          result[2] += 0;
          result[3] += 0.14867517173699707;
          result[4] += 0.8473994111874387;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.7952380952380952;
          result[1] += 0;
          result[2] += 0.02142857142857143;
          result[3] += 0.17857142857142858;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004761904761904762;
        } else {
          result[0] += 0.990058862001308;
          result[1] += 0;
          result[2] += 0.005886200130804447;
          result[3] += 0.0035317200784826686;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005232177894048398;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3373205741626794;
          result[4] += 0.6626794258373205;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.015283842794759825;
          result[2] += 0;
          result[3] += 0.1462882096069869;
          result[4] += 0.834061135371179;
          result[5] += 0.004366812227074236;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)22) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005858659831563529;
          result[3] += 0.9941413401684365;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3548387096774194;
          result[3] += 0;
          result[4] += 0.6129032258064516;
          result[5] += 0.03225806451612903;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)65) ) ) {
          result[0] += 0.6758147512864494;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.31732418524871353;
          result[4] += 0.005145797598627788;
          result[5] += 0.0017152658662092624;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.036101083032490974;
          result[3] += 0;
          result[4] += 0.9566787003610109;
          result[5] += 0.007220216606498195;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00047596382674916705;
          result[2] += 0.006187529747739172;
          result[3] += 0.991432651118515;
          result[4] += 0;
          result[5] += 0.0019038553069966682;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9968316126735491;
          result[1] += 0.0005339978640085439;
          result[2] += 0.0016731933072267706;
          result[3] += 0.0007119971520113919;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002491990032039871;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04216867469879518;
          result[3] += 0.9578313253012049;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.8929608127721336;
          result[1] += 0;
          result[2] += 0.005805515239477504;
          result[3] += 0.09869375907111756;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0025399129172714078;
        } else {
          result[0] += 0.5396960901485403;
          result[1] += 0;
          result[2] += 0.003073245688919242;
          result[3] += 0.45723066416254055;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004761904761904762;
          result[3] += 0.9952380952380953;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.96875;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.49038461538461536;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5096153846153846;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011428571428571429;
          result[2] += 0;
          result[3] += 0.9885714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.007272727272727273;
          result[1] += 0.03636363636363636;
          result[2] += 0;
          result[3] += 0.08727272727272728;
          result[4] += 0.8690909090909091;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
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
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.977818853974122;
          result[1] += 0;
          result[2] += 0.022181146025878003;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.18896999188969993;
          result[1] += 0.008921330089213302;
          result[2] += 0;
          result[3] += 0.8012976480129764;
          result[4] += 0.0008110300081103001;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22985781990521326;
          result[4] += 0.7701421800947867;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.0027397260273972603;
          result[2] += 0;
          result[3] += 0.3150684931506849;
          result[4] += 0.6821917808219178;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.06498194945848373;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8363417569193741;
          result[4] += 0.0974729241877256;
          result[5] += 0.0012033694344163657;
          result[6] += 0;
        } else {
          result[0] += 0.1393372982158029;
          result[1] += 0;
          result[2] += 0.0076465590484282074;
          result[3] += 0.7162276975361087;
          result[4] += 0.13423959218351741;
          result[5] += 0.002548853016142736;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
          result[0] += 0.9937973314100252;
          result[1] += 0.0003606202668589975;
          result[2] += 0.0015146051208077894;
          result[3] += 0.00425531914893617;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.21240533717995e-05;
        } else {
          result[0] += 0.16;
          result[1] += 0;
          result[2] += 0.28;
          result[3] += 0.56;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2722564734895191;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7277435265104809;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9861601884570083;
          result[1] += 0;
          result[2] += 0.011189634864546525;
          result[3] += 0.001177856301531213;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014723203769140165;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9896296296296296;
          result[5] += 0.01037037037037037;
          result[6] += 0;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          result[0] += 0.982573726541555;
          result[1] += 0;
          result[2] += 0.01742627345844504;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004689331770222743;
          result[3] += 0.9953106682297772;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
          result[0] += 0.16179159049360145;
          result[1] += 0.02010968921389397;
          result[2] += 0;
          result[3] += 0.8180987202925045;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.9997466537178566;
          result[1] += 0;
          result[2] += 0.0002533462821433095;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9984561945194905;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015438054805094559;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0.005405405405405406;
          result[1] += 0.03783783783783784;
          result[2] += 0;
          result[3] += 0.9567567567567568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0029154518950437317;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9927113702623906;
          result[5] += 0.004373177842565598;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.7505748888548214;
          result[1] += 0.0027594665031427257;
          result[2] += 0.005978844090142573;
          result[3] += 0.22259696458684655;
          result[4] += 0.017629924881189637;
          result[5] += 0.00015330369461904033;
          result[6] += 0.00030660738923808065;
        } else {
          result[0] += 0.42741935483870974;
          result[1] += 0;
          result[2] += 0.008640552995391708;
          result[3] += 0.5587557603686637;
          result[4] += 0.003072196620583718;
          result[5] += 0.0007680491551459294;
          result[6] += 0.0013440860215053767;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.997588908981314;
          result[1] += 0;
          result[2] += 0.0024110910186859553;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9791666666666667;
          result[1] += 0;
          result[2] += 0.01822916666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002604166666666667;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.984251968503937;
          result[1] += 0;
          result[2] += 0.015748031496062992;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998749895824652;
          result[1] += 0;
          result[2] += 0.00012501041753479458;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.0010449320794148381;
          result[1] += 0.006269592476489028;
          result[2] += 0;
          result[3] += 0.22675026123301986;
          result[4] += 0.7648902821316614;
          result[5] += 0.0010449320794148381;
          result[6] += 0;
        } else {
          result[0] += 0.025068119891008173;
          result[1] += 0.005449591280653951;
          result[2] += 0.013896457765667575;
          result[3] += 0.9362397820163487;
          result[4] += 0.016893732970027248;
          result[5] += 0.002452316076294278;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9806403574087863;
          result[1] += 0;
          result[2] += 0.0047158103747828245;
          result[3] += 0.013154628940183669;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014892032762472078;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002337358784573432;
          result[3] += 0.9976626412154266;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9961240310077519;
          result[4] += 0.003875968992248062;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.022556390977443608;
          result[1] += 0.03383458646616541;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.943609022556391;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.09699321047526673;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.88360814742968;
          result[4] += 0.019398642095053348;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2897800776196636;
          result[1] += 0.01164294954721863;
          result[2] += 0;
          result[3] += 0.6532988357050453;
          result[4] += 0.045278137128072445;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.6363636363636364;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9967585089141004;
          result[5] += 0.0032414910858995136;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9212438244696309;
          result[1] += 0;
          result[2] += 0.0066841034582970065;
          result[3] += 0.06829410055216507;
          result[4] += 0;
          result[5] += 0.0005812263876780006;
          result[6] += 0.0031967451322290033;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017592592592592594;
          result[3] += 0.9824074074074074;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.986744106593782;
          result[1] += 0.0002733173898189272;
          result[2] += 0.0007516228220020498;
          result[3] += 0.011957635804578067;
          result[4] += 0.0002733173898189272;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008213552361396304;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9917864476386037;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          result[0] += 0.797439544807966;
          result[1] += 0.0009483167377904221;
          result[2] += 0.002655286865813182;
          result[3] += 0.19867235656709345;
          result[4] += 0;
          result[5] += 9.483167377904222e-05;
          result[6] += 0.00018966334755808443;
        } else {
          result[0] += 0.05583756345177665;
          result[1] += 0;
          result[2] += 0.02622673434856176;
          result[3] += 0.7343485617597293;
          result[4] += 0.18358714043993232;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1426403641881639;
          result[1] += 0.021244309559939303;
          result[2] += 0;
          result[3] += 0.8361153262518968;
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
          result[0] += 0.0903954802259887;
          result[1] += 0;
          result[2] += 0.07909604519774012;
          result[3] += 0.8305084745762712;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9929328621908127;
          result[1] += 0;
          result[2] += 0.007067137809187279;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999656632711457;
          result[1] += 0;
          result[2] += 0.00034336728854297816;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976359338061466;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002364066193853428;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.856921373200443;
          result[1] += 0.0007751937984496125;
          result[2] += 0.005647840531561463;
          result[3] += 0.13521594684385385;
          result[4] += 0;
          result[5] += 0.0005537098560354375;
          result[6] += 0.0008859357696567;
        } else {
          result[0] += 0;
          result[1] += 0.0013609145345672292;
          result[2] += 0.007621121393576484;
          result[3] += 0.8130103429504627;
          result[4] += 0.17719107240065324;
          result[5] += 0.0008165487207403375;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.17305976806422838;
          result[1] += 0.014272970561998216;
          result[2] += 0.003568242640499554;
          result[3] += 0.8090990187332738;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016116653875671526;
          result[3] += 0.9332310053722179;
          result[4] += 0.04911742133537989;
          result[5] += 0.0015349194167306216;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7297297297297297;
          result[4] += 0.2702702702702703;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005212858384013901;
          result[2] += 0;
          result[3] += 0.12771503040834056;
          result[4] += 0.8670721112076455;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
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
          result[4] += 0.9972565157750343;
          result[5] += 0.0027434842249657062;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
          result[2] += 0.011450381679389313;
          result[3] += 0.9881255301102629;
          result[4] += 0;
          result[5] += 0.00042408821034775233;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9975742874469375;
          result[1] += 0;
          result[2] += 0.002425712553062462;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9838709677419355;
          result[1] += 0;
          result[2] += 0.009216589861751152;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0069124423963133645;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9993786890338614;
          result[1] += 0;
          result[2] += 0.0006213109661385523;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998620213866851;
          result[1] += 0;
          result[2] += 0.0001379786133149362;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.9573721163490472;
          result[1] += 0.008274824473420261;
          result[2] += 0.006770310932798395;
          result[3] += 0.026328986960882646;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012537612838515546;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006856540084388186;
          result[3] += 0.9926160337552743;
          result[4] += 0;
          result[5] += 0.0005274261603375527;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.7966101694915254;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2033898305084746;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9836233367451381;
          result[1] += 0;
          result[2] += 0.007420675537359263;
          result[3] += 0.006908904810644831;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020470829068577278;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.12134977287475666;
          result[1] += 0;
          result[2] += 0.010382868267358859;
          result[3] += 0.774172615184945;
          result[4] += 0.09344581440622973;
          result[5] += 0.0006489292667099287;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.47058823529411764;
          result[4] += 0.5294117647058824;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.4437246963562753;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1020242914979757;
          result[4] += 0.454251012145749;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000580720092915215;
          result[2] += 0.004065040650406505;
          result[3] += 0.9622531939605111;
          result[4] += 0.030197444831591178;
          result[5] += 0.0029036004645760748;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0036231884057971015;
          result[2] += 0;
          result[3] += 0.9963768115942029;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
          result[0] += 0.9948256385963634;
          result[1] += 0.0006559049666581642;
          result[2] += 0.002404984877746602;
          result[3] += 0.0018219582407171227;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002915133185147396;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9285714285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.25974647213585267;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7402535278641473;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9874476987447699;
          result[1] += 0;
          result[2] += 0.009563658099222952;
          result[3] += 0.0008965929468021519;
          result[4] += 0;
          result[5] += 0.00029886431560071725;
          result[6] += 0.0017931858936043037;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
          result[0] += 0.9990128331688055;
          result[1] += 0;
          result[2] += 0.0009871668311944718;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8198462101794215;
          result[1] += 0.0029293299157817647;
          result[2] += 0.004760161113145368;
          result[3] += 0.17136580007323324;
          result[4] += 0;
          result[5] += 0.0003661662394727206;
          result[6] += 0.0007323324789454412;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
          result[0] += 0.22372881355932206;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7627118644067797;
          result[4] += 0.01016949152542373;
          result[5] += 0.0033898305084745766;
          result[6] += 0;
        } else {
          result[0] += 0.9964922660806356;
          result[1] += 0.00021130927225086637;
          result[2] += 0.0005916659623024258;
          result[3] += 0.002662496830360916;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.2261854450173275e-05;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.18312883435582822;
          result[1] += 0.00245398773006135;
          result[2] += 0.004294478527607362;
          result[3] += 0.8070552147239264;
          result[4] += 0.00245398773006135;
          result[5] += 0.0006134969325153375;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02904162633107454;
          result[3] += 0.05324298160696999;
          result[4] += 0.9177153920619555;
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
          result[0] += 0.01834862385321101;
          result[1] += 0.10091743119266056;
          result[2] += 0;
          result[3] += 0.8807339449541285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4814528593508501;
          result[1] += 0;
          result[2] += 0.01777434312210201;
          result[3] += 0;
          result[4] += 0.500772797527048;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          result[0] += 0.989345509893455;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0106544901065449;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.10852713178294573;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8914728682170543;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.9338492261607588;
          result[1] += 0;
          result[2] += 0.006989515726410384;
          result[3] += 0.0581627558662007;
          result[4] += 0;
          result[5] += 0.00024962556165751375;
          result[6] += 0.0007488766849725411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7850467289719626;
          result[4] += 0.205607476635514;
          result[5] += 0.009345794392523364;
          result[6] += 0;
        }
      }
    }
  }
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9775474956822107;
          result[1] += 0;
          result[2] += 0.018998272884283247;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0034542314335060447;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9960191082802548;
          result[1] += 0;
          result[2] += 0.003980891719745223;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997688662891483;
          result[1] += 0;
          result[2] += 0.00023113371085172773;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.03536006899525657;
          result[1] += 0.0068995256576110395;
          result[2] += 0.0129366106080207;
          result[3] += 0.671841310909875;
          result[4] += 0.27253126347563605;
          result[5] += 0.00043122035360068997;
          result[6] += 0;
        } else {
          result[0] += 0.7504809542131589;
          result[1] += 0;
          result[2] += 0.005098114659484417;
          result[3] += 0.24374759522893422;
          result[4] += 0;
          result[5] += 0.00038476337052712584;
          result[6] += 0.00028857252789534437;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0.42328042328042326;
          result[1] += 0.08994708994708994;
          result[2] += 0;
          result[3] += 0.48148148148148145;
          result[4] += 0.005291005291005291;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05604982206405694;
          result[1] += 0;
          result[2] += 0.013345195729537367;
          result[3] += 0.902135231316726;
          result[4] += 0.026690391459074734;
          result[5] += 0.0017793594306049821;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006872852233676976;
          result[1] += 0.01718213058419244;
          result[2] += 0;
          result[3] += 0.9759450171821306;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9939393939393939;
          result[5] += 0.006060606060606061;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)55) ) ) {
          result[0] += 0.0012566760917373547;
          result[1] += 0.002827521206409048;
          result[2] += 0.004084197298146403;
          result[3] += 0.9883757461514294;
          result[4] += 0;
          result[5] += 0.0034558592522777255;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9968282736746715;
          result[1] += 0;
          result[2] += 0.002718622564567286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00045310376076121433;
        } else {
          result[0] += 0.9995916462489791;
          result[1] += 0.00017500875043752187;
          result[2] += 0.00011667250029168125;
          result[3] += 0.00011667250029168125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.0328125;
          result[1] += 0.034375;
          result[2] += 0.0359375;
          result[3] += 0.896875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9414496599767789;
          result[1] += 0;
          result[2] += 0.003980759661635429;
          result[3] += 0.05374025543207829;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000829324929507381;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007662835249042145;
          result[3] += 0.9923371647509579;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0.0027624309392265192;
          result[1] += 0.0038674033149171273;
          result[2] += 0.004419889502762431;
          result[3] += 0;
          result[4] += 0.987292817679558;
          result[5] += 0.0016574585635359116;
          result[6] += 0;
        } else {
          result[0] += 0.000945179584120983;
          result[1] += 0;
          result[2] += 0.000315059861373661;
          result[3] += 0.9987397605545053;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008264462809917356;
          result[2] += 0.004132231404958678;
          result[3] += 0.987603305785124;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9968815350185274;
          result[1] += 0.0007337564662288586;
          result[2] += 0.002164581575375133;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002201269398686576;
        } else {
          result[0] += 0.6708860759493671;
          result[1] += 0.0189873417721519;
          result[2] += 0.04113924050632911;
          result[3] += 0.2689873417721519;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.25806451612903225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7419354838709677;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9472382522671065;
          result[1] += 0;
          result[2] += 0.037098103874690855;
          result[3] += 0.004946413849958781;
          result[4] += 0.005770816158285244;
          result[5] += 0.0016488046166529269;
          result[6] += 0.0032976092333058538;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)9643) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9963503649635036;
          result[5] += 0.0036496350364963502;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)55) ) ) {
          result[0] += 0.00031084861672365556;
          result[1] += 0.003730183400683867;
          result[2] += 0.004351880634131178;
          result[3] += 0.9906745414982904;
          result[4] += 0;
          result[5] += 0.0009325458501709667;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9747474747474748;
          result[1] += 0;
          result[2] += 0.01767676767676768;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007575757575757577;
        } else {
          result[0] += 0.9993853718500307;
          result[1] += 0;
          result[2] += 0.0006146281499692685;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9981532779316713;
          result[1] += 0;
          result[2] += 0.0018467220683287165;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999506708760852;
          result[1] += 0;
          result[2] += 4.9329123914759274e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.4423076923076923;
          result[1] += 0.017094017094017096;
          result[2] += 0;
          result[3] += 0.5405982905982906;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9886629476336153;
          result[1] += 0.002879251394637394;
          result[2] += 0.006478315637934137;
          result[3] += 0.001079719272989023;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008997660608241857;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8362068965517241;
          result[1] += 0;
          result[2] += 0.011619190404797601;
          result[3] += 0.14955022488755623;
          result[4] += 0;
          result[5] += 0.0003748125937031484;
          result[6] += 0.0022488755622188904;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00719165767709457;
          result[3] += 0.9928083423229054;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 0.9813895781637717;
          result[1] += 0;
          result[2] += 0.018610421836228287;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.0049261083743842365;
          result[2] += 0.0016420361247947454;
          result[3] += 0.9928845101258894;
          result[4] += 0.0005473453749315818;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.017341040462427744;
          result[2] += 0;
          result[3] += 0.3468208092485549;
          result[4] += 0.6358381502890174;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003667481662591687;
          result[2] += 0;
          result[3] += 0.13202933985330073;
          result[4] += 0.8643031784841075;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          result[0] += 0.994535519125683;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00546448087431694;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22595596755504055;
          result[4] += 0.7728852838933952;
          result[5] += 0.0011587485515643105;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0.0021291696238466998;
          result[2] += 0.007806955287437899;
          result[3] += 0.9815471965933286;
          result[4] += 0.0049680624556423;
          result[5] += 0.0035486160397444995;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.043795620437956206;
          result[3] += 0;
          result[4] += 0.9562043795620438;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9982717429980177;
          result[1] += 0.0002541554414680019;
          result[2] += 0.0006099730595232045;
          result[3] += 0.0007116352361104053;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015249326488080112;
        } else {
          result[0] += 0.900887573964497;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09911242603550297;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.7276414912111262;
          result[1] += 0.0010623913463395792;
          result[2] += 0.0032837550705041535;
          result[3] += 0.2674328761831177;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005794861889124977;
        } else {
          result[0] += 0.9486950303897033;
          result[1] += 0;
          result[2] += 0.007686807293528781;
          result[3] += 0.042366821594565604;
          result[4] += 0;
          result[5] += 0.0003575259206292456;
          result[6] += 0.000893814801573114;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
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
          result[0] += 0.9990038938694196;
          result[1] += 0;
          result[2] += 0.0007244408222403332;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027166530834012495;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40) ) ) {
          result[0] += 0.004329004329004329;
          result[1] += 0.030303030303030304;
          result[2] += 0;
          result[3] += 0.9653679653679653;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9471852610030707;
          result[1] += 0.001842374616171955;
          result[2] += 0.0030706243602865915;
          result[3] += 0.04667349027635619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012282497441146367;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9525248165731549;
          result[1] += 0;
          result[2] += 0.00906344410876133;
          result[3] += 0.03625377643504532;
          result[4] += 0;
          result[5] += 0.00043159257660768235;
          result[6] += 0.0017263703064307294;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010211267605633803;
          result[3] += 0.9552816901408451;
          result[4] += 0.03450704225352113;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.0026478375992939106;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9902912621359224;
          result[4] += 0.0035304501323918805;
          result[5] += 0.0035304501323918805;
          result[6] += 0;
        } else {
          result[0] += 0.37012987012987014;
          result[1] += 0.00463821892393321;
          result[2] += 0.013914656771799629;
          result[3] += 0.5946196660482375;
          result[4] += 0.015460729746444033;
          result[5] += 0.0012368583797155227;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.75;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.022508038585209004;
          result[2] += 0;
          result[3] += 0.21221864951768488;
          result[4] += 0.7652733118971061;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0018058690744920992;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9923250564334086;
          result[4] += 0.003160270880361174;
          result[5] += 0.002708803611738149;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.010869565217391304;
          result[1] += 0;
          result[2] += 0.06884057971014493;
          result[3] += 0;
          result[4] += 0.9057971014492754;
          result[5] += 0.014492753623188406;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9975397333070904;
          result[1] += 0;
          result[2] += 0.0006396693401564729;
          result[3] += 0.001722186685036658;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.841066771638045e-05;
        } else {
          result[0] += 0.26;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0.64;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9996631862579993;
          result[1] += 0;
          result[2] += 0.0003368137420006736;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7086473247927656;
          result[1] += 0.0007535795026375283;
          result[2] += 0.006970610399397136;
          result[3] += 0.2822155237377543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014129615674453656;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.3027823240589198;
          result[1] += 0.01800327332242226;
          result[2] += 0;
          result[3] += 0.679214402618658;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.029535864978902954;
          result[1] += 0;
          result[2] += 0.01828410689170183;
          result[3] += 0.9521800281293952;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007633587786259542;
          result[2] += 0;
          result[3] += 0.09796437659033079;
          result[4] += 0.8944020356234097;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.001305909239307868;
          result[1] += 0.000652954619653934;
          result[2] += 0;
          result[3] += 0.9960822722820764;
          result[4] += 0.000652954619653934;
          result[5] += 0.001305909239307868;
          result[6] += 0;
        } else {
          result[0] += 0.9971098265895953;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002890173410404624;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015068493150684932;
          result[3] += 0;
          result[4] += 0.9808219178082191;
          result[5] += 0.00410958904109589;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9940476190476191;
          result[4] += 0.005952380952380952;
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
          result[0] += 0;
          result[1] += 0.04059040590405904;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.959409594095941;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9926362297496318;
          result[1] += 0;
          result[2] += 0.005891016200294551;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014727540500736377;
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
          result[0] += 0;
          result[1] += 0.15254237288135594;
          result[2] += 0;
          result[3] += 0.847457627118644;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8933333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10666666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.47797270955165694;
          result[1] += 0.0013645224171539962;
          result[2] += 0.003703703703703704;
          result[3] += 0.5167641325536062;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001949317738791423;
        } else {
          result[0] += 0.6735159817351598;
          result[1] += 0.005936073059360731;
          result[2] += 0.0182648401826484;
          result[3] += 0.30228310502283107;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.9902714932126697;
          result[1] += 0;
          result[2] += 0.004298642533936652;
          result[3] += 0.004751131221719457;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006787330316742081;
        } else {
          result[0] += 0.929;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.071;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
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
          result[4] += 0.9989949748743718;
          result[5] += 0.0010050251256281408;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0004916420845624387;
          result[2] += 0.010324483775811211;
          result[3] += 0.9882005899705015;
          result[4] += 0;
          result[5] += 0.0009832841691248774;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          result[0] += 0.6326530612244898;
          result[1] += 0;
          result[2] += 0.013605442176870748;
          result[3] += 0.35374149659863946;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9924323936589915;
          result[1] += 0.0004662506276450757;
          result[2] += 0.0017574062118929775;
          result[3] += 0.004985295172512732;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003586543289577505;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.17645421653214585;
          result[1] += 0;
          result[2] += 0.004453103256331756;
          result[3] += 0.8171444475368773;
          result[4] += 0;
          result[5] += 0.0019482326746451434;
          result[6] += 0;
        } else {
          result[0] += 0.992566510172144;
          result[1] += 0;
          result[2] += 0.004890453834115807;
          result[3] += 0.0011737089201877937;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001369327073552426;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.4976851851851852;
          result[1] += 0;
          result[2] += 0.013888888888888888;
          result[3] += 0.48842592592592593;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006952491309385863;
          result[2] += 0;
          result[3] += 0.9930475086906141;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7272727272727273;
          result[4] += 0.2727272727272727;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0022727272727272726;
          result[1] += 0.015909090909090907;
          result[2] += 0;
          result[3] += 0.11818181818181818;
          result[4] += 0.8636363636363636;
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
          result[0] += 0;
          result[1] += 0.016129032258064516;
          result[2] += 0;
          result[3] += 0.9838709677419355;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          result[0] += 0.9879461673493272;
          result[1] += 0;
          result[2] += 0.00035108250438853133;
          result[3] += 0.011585722644821534;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011702750146284379;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9914163090128756;
          result[4] += 0;
          result[5] += 0.008583690987124463;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.447018447018447;
          result[1] += 0.002574002574002574;
          result[2] += 0;
          result[3] += 0.49335049335049336;
          result[4] += 0.057057057057057055;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16702819956616052;
          result[1] += 0;
          result[2] += 0.013015184381778741;
          result[3] += 0.0455531453362256;
          result[4] += 0.7744034707158352;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.2901023890784983;
          result[1] += 0;
          result[2] += 0.034129692832764506;
          result[3] += 0.051194539249146756;
          result[4] += 0.6245733788395904;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012872083668543845;
          result[3] += 0.9790828640386162;
          result[4] += 0.004022526146419952;
          result[5] += 0.004022526146419952;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
          result[0] += 0.9985994397759104;
          result[1] += 0;
          result[2] += 0.0014005602240896359;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.972939729397294;
          result[1] += 0;
          result[2] += 0.012300123001230012;
          result[3] += 0.012300123001230012;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0024600246002460025;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          result[0] += 0.10820895522388059;
          result[1] += 0.0007462686567164179;
          result[2] += 0;
          result[3] += 0.8865671641791045;
          result[4] += 0.002238805970149254;
          result[5] += 0.002238805970149254;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00847457627118644;
          result[3] += 0;
          result[4] += 0.9872881355932204;
          result[5] += 0.00423728813559322;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9990611884250056;
          result[1] += 0;
          result[2] += 0.0008835873647006848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.52242102937928e-05;
        } else {
          result[0] += 0.7022156573116691;
          result[1] += 0.0022156573116691287;
          result[2] += 0.006499261447562777;
          result[3] += 0.28862629246676513;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004431314623338257;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.10918114143920596;
          result[1] += 0.02109181141439206;
          result[2] += 0.004962779156327543;
          result[3] += 0.8647642679900744;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
