
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.006430868167202572;
          result[1] += 0.01607717041800643;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.932475884244373;
          result[5] += 0.04501607717041801;
        } else {
          result[0] += 0.5620437956204379;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.26277372262773724;
          result[5] += 0.17518248175182483;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0.0048543689320388345;
          result[2] += 0;
          result[3] += 0.022653721682847898;
          result[4] += 0.024271844660194174;
          result[5] += 0.948220064724919;
        } else {
          result[0] += 0;
          result[1] += 0.002793296089385475;
          result[2] += 0.00558659217877095;
          result[3] += 0.16759776536312848;
          result[4] += 0.12290502793296089;
          result[5] += 0.7011173184357542;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7406542056074767;
          result[1] += 0.06542056074766356;
          result[2] += 0.0015576323987538943;
          result[3] += 0.04361370716510904;
          result[4] += 0.09813084112149534;
          result[5] += 0.05062305295950156;
        } else {
          result[0] += 0.08865248226950355;
          result[1] += 0.008865248226950355;
          result[2] += 0.21453900709219859;
          result[3] += 0.4148936170212766;
          result[4] += 0.06914893617021277;
          result[5] += 0.20390070921985815;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04878048780487805;
          result[3] += 0.024390243902439025;
          result[4] += 0;
          result[5] += 0.926829268292683;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.04081632653061224;
          result[1] += 0.04081632653061224;
          result[2] += 0.09183673469387756;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.25510204081632654;
        } else {
          result[0] += 0.2;
          result[1] += 0.11428571428571428;
          result[2] += 0.5142857142857142;
          result[3] += 0.05714285714285714;
          result[4] += 0.11428571428571428;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.7272727272727273;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7695852534562212;
          result[3] += 0.20276497695852536;
          result[4] += 0;
          result[5] += 0.027649769585253458;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.6428571428571429;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002857142857142857;
          result[1] += 0;
          result[2] += 0.9685714285714285;
          result[3] += 0.025714285714285714;
          result[4] += 0;
          result[5] += 0.002857142857142857;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        } else {
          result[0] += 0.01048951048951049;
          result[1] += 0.017482517482517484;
          result[2] += 0;
          result[3] += 0.0034965034965034965;
          result[4] += 0.9335664335664335;
          result[5] += 0.03496503496503497;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.5210526315789474;
          result[1] += 0.05789473684210527;
          result[2] += 0;
          result[3] += 0.010526315789473686;
          result[4] += 0.2947368421052632;
          result[5] += 0.11578947368421054;
        } else {
          result[0] += 0.010801080108010801;
          result[1] += 0;
          result[2] += 0.011701170117011701;
          result[3] += 0.09720972097209721;
          result[4] += 0.05850585058505851;
          result[5] += 0.8217821782178217;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0.30434782608695654;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6521739130434783;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0;
          result[1] += 0.9909502262443439;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00904977375565611;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.845227062094532;
          result[1] += 0.012048192771084338;
          result[2] += 0.012048192771084338;
          result[3] += 0.03521779425393883;
          result[4] += 0.05282669138090825;
          result[5] += 0.042632066728452274;
        } else {
          result[0] += 0.17355371900826447;
          result[1] += 0.026446280991735537;
          result[2] += 0.1487603305785124;
          result[3] += 0.3834710743801653;
          result[4] += 0.0512396694214876;
          result[5] += 0.21652892561983472;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0.9354838709677419;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0.5789473684210527;
          result[2] += 0.2631578947368421;
          result[3] += 0;
          result[4] += 0.15789473684210525;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47115384615384615;
          result[3] += 0.34615384615384615;
          result[4] += 0;
          result[5] += 0.18269230769230768;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8598726114649682;
          result[3] += 0.10191082802547771;
          result[4] += 0;
          result[5] += 0.03821656050955414;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0.012711864406779662;
          result[1] += 0;
          result[2] += 0.9548022598870056;
          result[3] += 0.029661016949152543;
          result[4] += 0;
          result[5] += 0.002824858757062147;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0.030201342281879196;
          result[1] += 0.010067114093959731;
          result[2] += 0;
          result[3] += 0.016778523489932886;
          result[4] += 0.8389261744966443;
          result[5] += 0.1040268456375839;
        } else {
          result[0] += 0.7349397590361446;
          result[1] += 0.024096385542168676;
          result[2] += 0;
          result[3] += 0.012048192771084338;
          result[4] += 0.0963855421686747;
          result[5] += 0.13253012048192772;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0010438413361169101;
          result[2] += 0.0010438413361169101;
          result[3] += 0.04488517745302714;
          result[4] += 0.08037578288100208;
          result[5] += 0.872651356993737;
        } else {
          result[0] += 0;
          result[1] += 0.0113314447592068;
          result[2] += 0.0113314447592068;
          result[3] += 0.5524079320113314;
          result[4] += 0.031161473087818695;
          result[5] += 0.3937677053824363;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.4444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5555555555555556;
          result[5] += 0;
        } else {
          result[0] += 0.0021321961620469083;
          result[1] += 0.997867803837953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.06790123456790123;
          result[1] += 0.25308641975308643;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6790123456790124;
          result[5] += 0;
        } else {
          result[0] += 0.7071129707112971;
          result[1] += 0.012552301255230125;
          result[2] += 0.06903765690376569;
          result[3] += 0.07810320781032078;
          result[4] += 0.05578800557880056;
          result[5] += 0.07740585774058577;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.23529411764705882;
          result[4] += 0;
          result[5] += 0.7647058823529411;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3409090909090909;
          result[3] += 0.5909090909090909;
          result[4] += 0;
          result[5] += 0.06818181818181818;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.45454545454545453;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0.09090909090909091;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0.029649595687331536;
          result[1] += 0;
          result[2] += 0.816711590296496;
          result[3] += 0.12129380053908356;
          result[4] += 0;
          result[5] += 0.03234501347708895;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.006622516556291391;
          result[1] += 0;
          result[2] += 0.9337748344370861;
          result[3] += 0.059602649006622516;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9887133182844243;
          result[3] += 0.011286681715575621;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0.007326007326007326;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9157509157509157;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.018957345971563982;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0485781990521327;
          result[4] += 0.07109004739336493;
          result[5] += 0.8613744075829384;
        } else {
          result[0] += 0.07692307692307694;
          result[1] += 0.09018567639257295;
          result[2] += 0.10610079575596819;
          result[3] += 0.4111405835543767;
          result[4] += 0.01591511936339523;
          result[5] += 0.2997347480106101;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0.23529411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7647058823529411;
          result[5] += 0;
        } else {
          result[0] += 0.0044742729306487695;
          result[1] += 0.9888143176733781;
          result[2] += 0.0022371364653243847;
          result[3] += 0;
          result[4] += 0.0044742729306487695;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.11585365853658537;
          result[1] += 0.17682926829268292;
          result[2] += 0.012195121951219513;
          result[3] += 0.018292682926829267;
          result[4] += 0.6585365853658537;
          result[5] += 0.018292682926829267;
        } else {
          result[0] += 0.7473684210526316;
          result[1] += 0.016842105263157894;
          result[2] += 0.03508771929824561;
          result[3] += 0.07157894736842105;
          result[4] += 0.05824561403508772;
          result[5] += 0.07087719298245614;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0.15789473684210525;
          result[2] += 0.05263157894736842;
          result[3] += 0;
          result[4] += 0.7894736842105263;
          result[5] += 0;
        } else {
          result[0] += 0.01639344262295082;
          result[1] += 0.01639344262295082;
          result[2] += 0.04918032786885246;
          result[3] += 0.04918032786885246;
          result[4] += 0.01639344262295082;
          result[5] += 0.8524590163934426;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1103448275862069;
          result[3] += 0.7241379310344828;
          result[4] += 0.006896551724137931;
          result[5] += 0.15862068965517243;
        } else {
          result[0] += 0.010869565217391304;
          result[1] += 0.021739130434782608;
          result[2] += 0.5652173913043478;
          result[3] += 0.2608695652173913;
          result[4] += 0;
          result[5] += 0.14130434782608695;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.013333333333333334;
          result[1] += 0;
          result[2] += 0.5733333333333334;
          result[3] += 0.38666666666666666;
          result[4] += 0;
          result[5] += 0.02666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9166666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.003676470588235294;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0.003676470588235294;
        } else {
          result[0] += 0.0017421602787456446;
          result[1] += 0;
          result[2] += 0.9738675958188153;
          result[3] += 0.020905923344947737;
          result[4] += 0;
          result[5] += 0.003484320557491289;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.011019283746556474;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.859504132231405;
          result[5] += 0.03856749311294766;
        } else {
          result[0] += 0.7613168724279835;
          result[1] += 0.04938271604938271;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.12551440329218108;
          result[5] += 0.06378600823045268;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0013717421124828531;
          result[2] += 0;
          result[3] += 0.019204389574759947;
          result[4] += 0.05212620027434842;
          result[5] += 0.9272976680384087;
        } else {
          result[0] += 0;
          result[1] += 0.014634146341463415;
          result[2] += 0.004878048780487805;
          result[3] += 0.28292682926829266;
          result[4] += 0.1024390243902439;
          result[5] += 0.5951219512195122;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.004694835680751174;
          result[1] += 0;
          result[2] += 0.014084507042253521;
          result[3] += 0.1643192488262911;
          result[4] += 0.1643192488262911;
          result[5] += 0.6525821596244131;
        } else {
          result[0] += 0.1213768115942029;
          result[1] += 0.11594202898550725;
          result[2] += 0.02355072463768116;
          result[3] += 0.41847826086956524;
          result[4] += 0.1105072463768116;
          result[5] += 0.21014492753623187;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.9583333333333334;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0.3055555555555556;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.9842271293375395;
          result[1] += 0;
          result[2] += 0.006309148264984228;
          result[3] += 0.003154574132492114;
          result[4] += 0.006309148264984228;
          result[5] += 0;
        } else {
          result[0] += 0.43333333333333335;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.03333333333333333;
          result[4] += 0.03333333333333333;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3181818181818182;
          result[3] += 0.4090909090909091;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6857142857142857;
          result[3] += 0.28095238095238095;
          result[4] += 0;
          result[5] += 0.03333333333333333;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.23214285714285718;
          result[1] += 0;
          result[2] += 0.6607142857142858;
          result[3] += 0.03571428571428572;
          result[4] += 0;
          result[5] += 0.07142857142857144;
        } else {
          result[0] += 0.0085995085995086;
          result[1] += 0;
          result[2] += 0.9422604422604423;
          result[3] += 0.04914004914004914;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  
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
