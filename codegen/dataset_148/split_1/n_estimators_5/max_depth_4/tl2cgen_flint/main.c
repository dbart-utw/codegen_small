
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9722644376899696;
          result[4] += 0.02621580547112462;
          result[5] += 0.001519756838905775;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7421875;
          result[4] += 0.2578125;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7708333333333334;
          result[5] += 0.041666666666666664;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013452914798206279;
          result[3] += 0;
          result[4] += 0.9852017937219731;
          result[5] += 0.0013452914798206279;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.999234459528427;
          result[1] += 0;
          result[2] += 0.0006634684086965398;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010207206287639073;
        } else {
          result[0] += 0.9335548172757475;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0664451827242525;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.42105263157894735;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5789473684210527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9877404354259142;
          result[1] += 0.003593320651025153;
          result[2] += 0.007609384908053266;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001056859015007398;
        } else {
          result[0] += 0.9294554455445545;
          result[1] += 0;
          result[2] += 0.004455445544554455;
          result[3] += 0.06608910891089109;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.5293066476054324;
          result[1] += 0;
          result[2] += 0.008220157255182273;
          result[3] += 0.4610436025732666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014295925661186562;
        } else {
          result[0] += 0.6464384828862164;
          result[1] += 0;
          result[2] += 0.0033302497687326548;
          result[3] += 0.3500462534690102;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018501387604070305;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0013309671694764862;
          result[2] += 0;
          result[3] += 0.9946761313220941;
          result[4] += 0.0022182786157941437;
          result[5] += 0.001774622892635315;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.037037037037037035;
          result[1] += 0;
          result[2] += 0.8518518518518519;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1111111111111111;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9850235620682978;
          result[1] += 0.0009683041766186818;
          result[2] += 0.002517590859208573;
          result[3] += 0.011361435672325866;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001291072235491576;
        } else {
          result[0] += 0.9981732983877373;
          result[1] += 0;
          result[2] += 0.0018267016122627273;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0.8528301886792453;
          result[1] += 0;
          result[2] += 0.006386066763425254;
          result[3] += 0.13875181422351235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020319303338171262;
        } else {
          result[0] += 0.5200529701097238;
          result[1] += 0;
          result[2] += 0.0024593265228906543;
          result[3] += 0.47748770336738555;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.1957894736842105;
          result[1] += 0.00631578947368421;
          result[2] += 0;
          result[3] += 0.7978947368421052;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.4478114478114478;
          result[1] += 0;
          result[2] += 0.03367003367003367;
          result[3] += 0.5185185185185185;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.017333333333333333;
          result[2] += 0;
          result[3] += 0.9826666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9993770634772317;
          result[1] += 0;
          result[2] += 0.0005606428704914969;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.229365227683299e-05;
        } else {
          result[0] += 0.9999015069437605;
          result[1] += 0;
          result[2] += 9.849305623953512e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43238000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.03165938864628821;
          result[1] += 0.004002911208151383;
          result[2] += 0.009461426491994178;
          result[3] += 0.8413391557496361;
          result[4] += 0.11135371179039301;
          result[5] += 0.002183406113537118;
          result[6] += 0;
        } else {
          result[0] += 0.9845360824742269;
          result[1] += 0;
          result[2] += 0.0042525773195876285;
          result[3] += 0.010051546391752578;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011597938144329897;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0034403669724770644;
          result[2] += 0;
          result[3] += 0.2121559633027523;
          result[4] += 0.7844036697247706;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007790368271954674;
          result[3] += 0.990084985835694;
          result[4] += 0.002124645892351275;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004197271773347324;
          result[2] += 0;
          result[3] += 0.9958027282266527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.0365296803652968;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9634703196347032;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0.5222222222222223;
          result[4] += 0.36666666666666664;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.12631578947368421;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8736842105263158;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022590361445783132;
          result[4] += 0.9774096385542169;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.7142857142857143;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006639427987742594;
          result[1] += 0.004596527068437181;
          result[2] += 0.008171603677221655;
          result[3] += 0.9805924412665986;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.07692307692307693;
          result[2] += 0;
          result[3] += 0.8461538461538461;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0016129032258064516;
          result[1] += 0.012903225806451613;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9854838709677419;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
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
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7606699081577526;
          result[1] += 0;
          result[2] += 0.007833603457590491;
          result[3] += 0.22204213938411668;
          result[4] += 0.008103727714748784;
          result[5] += 0.0002701242571582928;
          result[6] += 0.0010804970286331713;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01700921332388377;
          result[3] += 0.848334514528703;
          result[4] += 0.1339475549255847;
          result[5] += 0.0007087172218284905;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14162162162162162;
          result[1] += 0;
          result[2] += 0.006486486486486486;
          result[3] += 0.8508108108108108;
          result[4] += 0;
          result[5] += 0.001081081081081081;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9933137638617091;
          result[1] += 0.0009784735812133072;
          result[2] += 0.0018482278756251358;
          result[3] += 0.0036420961078495323;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021743857360295715;
        } else {
          result[0] += 0.6995849187132481;
          result[1] += 0;
          result[2] += 0.0006918021445866484;
          result[3] += 0.2995503286060187;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001729505361466621;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.11028460543337645;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8657826649417852;
          result[4] += 0.02296248382923674;
          result[5] += 0.0009702457956015524;
          result[6] += 0;
        } else {
          result[0] += 0.28616684266103487;
          result[1] += 0.0010559662090813093;
          result[2] += 0;
          result[3] += 0.53220696937698;
          result[4] += 0.1805702217529039;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d00000))) ) ) {
          result[0] += 0;
          result[1] += 0.010493827160493827;
          result[2] += 0.006172839506172839;
          result[3] += 0;
          result[4] += 0.9833333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9696969696969697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010101010101010102;
          result[5] += 0.020202020202020204;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9974086645498011;
          result[1] += 0.0008029490127376913;
          result[2] += 0.0015694003430782148;
          result[3] += 7.299536479433557e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014599072958867114;
        } else {
          result[0] += 0.9098712446351931;
          result[1] += 0;
          result[2] += 0.03862660944206009;
          result[3] += 0.05150214592274678;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 0.013071895424836602;
          result[2] += 0;
          result[3] += 0.9869281045751634;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.33222591362126247;
          result[1] += 0;
          result[2] += 0.03322259136212625;
          result[3] += 0.06312292358803986;
          result[4] += 0.5714285714285714;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010180109631949883;
          result[1] += 0;
          result[2] += 0.009397024275646046;
          result[3] += 0.9749412685982772;
          result[4] += 0.00548159749412686;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.4727646454265159;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024665981500513873;
          result[4] += 0.5025693730729702;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01733531451213472;
          result[1] += 0;
          result[2] += 0.0029717682020802376;
          result[3] += 0.9757305596830114;
          result[4] += 0.00396235760277365;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0.9985163204747775;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.001483679525222552;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.8962264150943396;
          result[1] += 0;
          result[2] += 0.08018867924528301;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.02358490566037736;
        } else {
          result[0] += 0.989821882951654;
          result[1] += 0;
          result[2] += 0.007633587786259542;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002544529262086514;
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
  result[6] /= 5;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
