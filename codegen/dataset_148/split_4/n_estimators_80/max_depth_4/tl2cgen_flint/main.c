
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x40c00000))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0003053435114503817;
          result[2] += 0;
          result[3] += 0.9987786259541984;
          result[4] += 0;
          result[5] += 0.000916030534351145;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45470800))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0038461538461538464;
          result[2] += 0.005128205128205128;
          result[3] += 0;
          result[4] += 0.9893162393162394;
          result[5] += 0.0017094017094017094;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 0.9974160206718347;
          result[1] += 0.0008268733850129199;
          result[2] += 0.0013436692506459949;
          result[3] += 0.00020671834625322997;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00020671834625322997;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9155666818388711;
          result[1] += 0.004779244424214839;
          result[2] += 0.010696404187528447;
          result[3] += 0.06804733727810651;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009103322712790169;
        } else {
          result[0] += 0.004359490274983233;
          result[1] += 0;
          result[2] += 0.006371562709590879;
          result[3] += 0.9889336016096579;
          result[4] += 0;
          result[5] += 0.00033534540576794097;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9916687086498407;
          result[1] += 0;
          result[2] += 0.004165645675079637;
          result[3] += 0.0031854937515314874;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00098015192354815;
        } else {
          result[0] += 0.9382059800664452;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.061794019933554815;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.00044603033006244426;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.995985727029438;
          result[4] += 0.0022301516503122213;
          result[5] += 0.0013380909901873326;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03322259136212625;
          result[3] += 0;
          result[4] += 0.946843853820598;
          result[5] += 0.019933554817275746;
          result[6] += 0;
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
          result[0] += 0.9624060150375939;
          result[1] += 0;
          result[2] += 0.03759398496240601;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9267382174521699;
          result[1] += 0;
          result[2] += 0.0036164255716285582;
          result[3] += 0.06906206252916472;
          result[4] += 0;
          result[5] += 0.00011665888940737284;
          result[6] += 0.0004666355576294914;
        } else {
          result[0] += 0.8335117773019272;
          result[1] += 0;
          result[2] += 0.0026766595289079227;
          result[3] += 0.16381156316916487;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9990510215473931;
          result[1] += 0;
          result[2] += 0.0009489784526068996;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7042021833408105;
          result[1] += 0.0031404217137729925;
          result[2] += 0.0059817556452818905;
          result[3] += 0.2857783759533423;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008972633467922835;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0.13167259786476868;
          result[1] += 0.006405693950177936;
          result[2] += 0.00498220640569395;
          result[3] += 0.8569395017793594;
          result[4] += 0;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9772727272727273;
          result[4] += 0.022727272727272728;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5121555915721232;
          result[1] += 0;
          result[2] += 0.01539708265802269;
          result[3] += 0.4619124797406807;
          result[4] += 0.01053484602917342;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.20406865861411316;
          result[1] += 0.0050858232676414495;
          result[2] += 0.008900190718372537;
          result[3] += 0.7819453273998729;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0.05194805194805195;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.935064935064935;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0;
          result[1] += 0.15;
          result[2] += 0;
          result[3] += 0.85;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9970041941282205;
          result[1] += 0;
          result[2] += 0.0029958058717795086;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9806763285024155;
          result[1] += 0;
          result[2] += 0.014492753623188406;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004830917874396135;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997526079247928;
          result[1] += 0;
          result[2] += 0.0002473920752071909;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.001455604075691412;
          result[1] += 0.011644832605531296;
          result[2] += 0;
          result[3] += 0.24890829694323144;
          result[4] += 0.7379912663755459;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05776173285198556;
          result[4] += 0.9422382671480144;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.7558339859044637;
          result[1] += 0.0012529365700861396;
          result[2] += 0.00610806577916993;
          result[3] += 0.21534847298355522;
          result[4] += 0.02083007047768207;
          result[5] += 0.0003132341425215349;
          result[6] += 0.0003132341425215349;
        } else {
          result[0] += 0.42178447276940906;
          result[1] += 0;
          result[2] += 0.008883738895326381;
          result[3] += 0.5656624179219776;
          result[4] += 0.002317497103128621;
          result[5] += 0.0009656237929702588;
          result[6] += 0.0003862495171881035;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9491884262526464;
          result[4] += 0.05010585744530699;
          result[5] += 0.0007057163020465773;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8710865561694291;
          result[4] += 0.1289134438305709;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.06842105263157895;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9315789473684211;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011566265060240964;
          result[3] += 0;
          result[4] += 0.9850602409638555;
          result[5] += 0.0033734939759036144;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9936350777934937;
          result[1] += 0;
          result[2] += 0.005657708628005659;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007072135785007073;
        } else {
          result[0] += 0.9996729532323122;
          result[1] += 0;
          result[2] += 0.00032704676768777934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.961023289489562;
          result[1] += 0.0010860383733558585;
          result[2] += 0.008929648847592614;
          result[3] += 0.027874984916133702;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010860383733558585;
        } else {
          result[0] += 0.2365079365079365;
          result[1] += 0.020634920634920634;
          result[2] += 0;
          result[3] += 0.7428571428571429;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0.5625;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0010626992561105207;
          result[3] += 0.9989373007438895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 0.0037854889589905363;
          result[2] += 0.0018927444794952682;
          result[3] += 0.9917981072555205;
          result[4] += 0;
          result[5] += 0.002523659305993691;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.9973983221832855;
          result[1] += 0.00015928639694170118;
          result[2] += 0.00042476372517786983;
          result[3] += 0.001911436763300414;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010619093129446746;
        } else {
          result[0] += 0.9705357142857143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029464285714285714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9921346933759371;
          result[1] += 0.0013518495760108148;
          result[2] += 0.005653189136045226;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008602679120068822;
        } else {
          result[0] += 0.6328809895520595;
          result[1] += 0;
          result[2] += 0.005524198390776991;
          result[3] += 0.3606340819022457;
          result[4] += 0;
          result[5] += 0.00012009126936471719;
          result[6] += 0.0008406388855530203;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9478211009174312;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05217889908256881;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955070603337612;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0036371416345742404;
          result[4] += 0;
          result[5] += 0.0008557980316645272;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.3552123552123552;
          result[1] += 0;
          result[2] += 0.06563706563706563;
          result[3] += 0.5791505791505791;
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.22209821428571427;
          result[1] += 0.0011160714285714285;
          result[2] += 0;
          result[3] += 0.7120535714285714;
          result[4] += 0.06473214285714286;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0663265306122449;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14540816326530612;
          result[4] += 0.7882653061224489;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.6151860615186061;
          result[1] += 0;
          result[2] += 0.001505700150570015;
          result[3] += 0.36459453645945367;
          result[4] += 0.018713701871370187;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9722222222222222;
          result[1] += 0;
          result[2] += 0.013888888888888888;
          result[3] += 0;
          result[4] += 0.005787037037037037;
          result[5] += 0.003472222222222222;
          result[6] += 0.004629629629629629;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
          result[0] += 0.9992005542823642;
          result[1] += 0;
          result[2] += 0.0005862601929328998;
          result[3] += 0;
          result[4] += 0.00010659276235143633;
          result[5] += 0;
          result[6] += 0.00010659276235143633;
        } else {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0.5472108495394064;
          result[1] += 0.0019191402251791197;
          result[2] += 0.005629477993858751;
          result[3] += 0.4187563971340839;
          result[4] += 0.025076765609007165;
          result[5] += 0.0005117707267144319;
          result[6] += 0.0008955987717502559;
        } else {
          result[0] += 0.5291222313371617;
          result[1] += 0;
          result[2] += 0.008203445447087778;
          result[3] += 0;
          result[4] += 0.46021328958162433;
          result[5] += 0;
          result[6] += 0.0024610336341263335;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0.16124469589816123;
          result[1] += 0.014144271570014143;
          result[2] += 0;
          result[3] += 0.8246110325318247;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009523809523809525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9904761904761905;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.16145833333333334;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0.8072916666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.011506276150627616;
          result[4] += 0.9884937238493724;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
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
          result[3] += 0.9984819734345352;
          result[4] += 0;
          result[5] += 0.0015180265654648956;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9951690821256038;
          result[5] += 0.004830917874396135;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0.42857142857142855;
          result[3] += 0.03571428571428571;
          result[4] += 0;
          result[5] += 0.03571428571428571;
          result[6] += 0;
        } else {
          result[0] += 0.8974358974358975;
          result[1] += 0;
          result[2] += 0.10256410256410256;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x45c89c00))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.026856240126382307;
          result[2] += 0;
          result[3] += 0.9731437598736177;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9941246440543561;
          result[1] += 0.000684857441516779;
          result[2] += 0.0010813538550264931;
          result[3] += 0.0038568287495944925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025231589950618175;
        } else {
          result[0] += 0.7484472049689441;
          result[1] += 0;
          result[2] += 0.043478260869565216;
          result[3] += 0.2080745341614907;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0.8411993337034981;
          result[1] += 0;
          result[2] += 0.004441976679622432;
          result[3] += 0.1524153248195447;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001943364797334814;
        } else {
          result[0] += 0.5164454702827467;
          result[1] += 0;
          result[2] += 0.0030775149067128293;
          result[3] += 0.4804770148105405;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42640000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0003869969040247678;
          result[1] += 0;
          result[2] += 0.0027089783281733747;
          result[3] += 0.9941950464396285;
          result[4] += 0;
          result[5] += 0.0027089783281733747;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0.988458415497042;
          result[1] += 0.0006959749449019835;
          result[2] += 0.0023199164830066117;
          result[3] += 0.00788771604222248;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006379770328268183;
        } else {
          result[0] += 0.1378504672897196;
          result[1] += 0.010514018691588784;
          result[2] += 0;
          result[3] += 0.8516355140186916;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9997244166819769;
          result[1] += 0;
          result[2] += 0.000275583318023149;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4074074074074074;
          result[3] += 0.5925925925925926;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0.020781637717121586;
          result[1] += 0;
          result[2] += 0.0012406947890818859;
          result[3] += 0.9770471464019851;
          result[4] += 0;
          result[5] += 0.0009305210918114144;
          result[6] += 0;
        } else {
          result[0] += 0.9773030707610146;
          result[1] += 0;
          result[2] += 0.022696929238985315;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9935213414634146;
          result[1] += 0;
          result[2] += 0.004382621951219513;
          result[3] += 0.0009527439024390244;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011432926829268292;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
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
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 0.0031690140845070424;
          result[2] += 0.00528169014084507;
          result[3] += 0.9883802816901408;
          result[4] += 0;
          result[5] += 0.0031690140845070424;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42740000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9969151670951157;
          result[1] += 0.0005508630187293428;
          result[2] += 0.0011384502387073083;
          result[3] += 0.0010650018362100627;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00033051781123760564;
        } else {
          result[0] += 0.8797327394209354;
          result[1] += 0;
          result[2] += 0.025612472160356347;
          result[3] += 0.09465478841870824;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6944444444444444;
          result[1] += 0.3055555555555556;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.8910364145658264;
          result[1] += 0;
          result[2] += 0.004761904761904762;
          result[3] += 0.10196078431372549;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002240896358543417;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.031746031746031744;
          result[3] += 0.9682539682539683;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.23907766990291263;
          result[1] += 0;
          result[2] += 0.0057645631067961165;
          result[3] += 0.7551577669902912;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
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
          result[0] += 0.7230582524271845;
          result[1] += 0;
          result[2] += 0.00558252427184466;
          result[3] += 0.2507281553398058;
          result[4] += 0.018446601941747572;
          result[5] += 0.0004854368932038835;
          result[6] += 0.0016990291262135922;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021352313167259787;
          result[3] += 0.8619217081850534;
          result[4] += 0.11601423487544484;
          result[5] += 0.0007117437722419929;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993356953055802;
          result[1] += 0;
          result[2] += 0.0006643046944198405;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7462115414051738;
          result[1] += 0.001224552273075157;
          result[2] += 0.006275830399510179;
          result[3] += 0.21506199295882442;
          result[4] += 0.030766875861013315;
          result[5] += 0.00030613806826878924;
          result[6] += 0.00015306903413439462;
        } else {
          result[0] += 0;
          result[1] += 0.004625346901017576;
          result[2] += 0.00046253469010175765;
          result[3] += 0.7654949121184089;
          result[4] += 0.2294172062904718;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5518672199170125;
          result[1] += 0;
          result[2] += 0.024896265560165973;
          result[3] += 0.42323651452282157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011578947368421053;
          result[2] += 0;
          result[3] += 0.988421052631579;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008097165991902834;
          result[1] += 0.048582995951417005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9433198380566802;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15503875968992248;
          result[4] += 0.8449612403100775;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0036900369003690036;
          result[2] += 0;
          result[3] += 0.02029520295202952;
          result[4] += 0.9760147601476015;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9989102796948783;
          result[1] += 0;
          result[2] += 0.0009081002542680712;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018162005085361425;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x430d0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.4222010253964469;
          result[1] += 0.0022654107547394778;
          result[2] += 0.005842375104328127;
          result[3] += 0.48575175867413856;
          result[4] += 0.08215094789555265;
          result[5] += 0.0007153928699177298;
          result[6] += 0.0010730893048765948;
        } else {
          result[0] += 0.9718343195266272;
          result[1] += 0;
          result[2] += 0.004260355029585799;
          result[3] += 0.02319526627218935;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007100591715976331;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010046885465505693;
          result[1] += 0;
          result[2] += 0.016744809109176157;
          result[3] += 0.7836570663094441;
          result[4] += 0.18888144675150703;
          result[5] += 0.0006697923643670462;
          result[6] += 0;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.58125;
          result[1] += 0;
          result[2] += 0.010416666666666666;
          result[3] += 0.4083333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0017777777777777779;
          result[1] += 0.022222222222222223;
          result[2] += 0;
          result[3] += 0.976;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
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
          result[2] += 0.011959521619135235;
          result[3] += 0.9865072063784115;
          result[4] += 0;
          result[5] += 0.0015332720024532351;
          result[6] += 0;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42040000))) ) ) {
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
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0.1095890410958904;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8904109589041096;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.33070866141732286;
          result[1] += 0.01968503937007874;
          result[2] += 0;
          result[3] += 0.6496062992125984;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.9902038058777165;
          result[1] += 0.0023645985812408513;
          result[2] += 0.002702398378560973;
          result[3] += 0.004729197162481703;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9975082606576026;
          result[1] += 0;
          result[2] += 0.0019500568766589025;
          result[3] += 0.00010833649314771681;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00043334597259086724;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.17039633324346184;
          result[1] += 0;
          result[2] += 0.005392289026691831;
          result[3] += 0.8239417632785118;
          result[4] += 0;
          result[5] += 0.00026961445133459155;
          result[6] += 0;
        } else {
          result[0] += 0.9941882991088725;
          result[1] += 0;
          result[2] += 0.0038744672607516468;
          result[3] += 0.001162340178225494;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007748934521503294;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00029171528588098014;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9331971995332555;
          result[4] += 0.06534422403733955;
          result[5] += 0.0011668611435239206;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.978021978021978;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.02197802197802198;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01038961038961039;
          result[2] += 0.008441558441558441;
          result[3] += 0;
          result[4] += 0.9811688311688311;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006896551724137931;
          result[1] += 0.041379310344827586;
          result[2] += 0;
          result[3] += 0.9517241379310345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9978637894203267;
          result[1] += 0.00047069046670770125;
          result[2] += 0.0015206922770556503;
          result[3] += 7.241391795503097e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.241391795503097e-05;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26582278481012656;
          result[3] += 0.7341772151898734;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.17270788912579957;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8272921108742004;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.877373417721519;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12262658227848101;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43438000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.984646581691773;
          result[1] += 0;
          result[2] += 0.013035921205098496;
          result[3] += 0.0011587485515643107;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011587485515643107;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.990990990990991;
          result[5] += 0.009009009009009009;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.0009708737864077671;
          result[1] += 0;
          result[2] += 0.0029126213592233015;
          result[3] += 0.994822006472492;
          result[4] += 0;
          result[5] += 0.0012944983818770229;
          result[6] += 0;
        } else {
          result[0] += 0.9923371647509579;
          result[1] += 0;
          result[2] += 0.007662835249042145;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
          result[0] += 0.9975609756097561;
          result[1] += 0;
          result[2] += 0.0024390243902439024;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999475478625754;
          result[1] += 0;
          result[2] += 0.0005245213742460005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.9874191857417438;
          result[1] += 0.0022715359077406954;
          result[2] += 0.008212475974139438;
          result[3] += 0.0010484011881880134;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010484011881880134;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0.02922077922077922;
          result[2] += 0;
          result[3] += 0.9577922077922078;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0044486812837623135;
          result[3] += 0.9955513187162377;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9852879361076082;
          result[1] += 0;
          result[2] += 0.011769651113913409;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0029424127784783522;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f800000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008760107816711592;
          result[3] += 0.5613207547169813;
          result[4] += 0.4285714285714286;
          result[5] += 0.0013477088948787065;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004449838187702266;
          result[3] += 0.9288025889967638;
          result[4] += 0.06593851132686085;
          result[5] += 0.0008090614886731393;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3073170731707317;
          result[4] += 0.6926829268292682;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011194029850746268;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9888059701492538;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9905385735080058;
          result[1] += 0;
          result[2] += 0.008005822416302766;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001455604075691412;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.9998259557927713;
          result[1] += 0;
          result[2] += 0.00017404420722863607;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999337638681901;
          result[1] += 0;
          result[2] += 0.000662361318099023;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9872286079182632;
          result[1] += 0.004895700297999149;
          result[2] += 0.006811409110259686;
          result[3] += 0.0004257130693912304;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006385696040868456;
        } else {
          result[0] += 0.8073333333333333;
          result[1] += 0;
          result[2] += 0.009333333333333334;
          result[3] += 0.18333333333333332;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.0042780748663101605;
          result[1] += 0;
          result[2] += 0.006060606060606061;
          result[3] += 0.9896613190730837;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.836441893830703;
          result[1] += 0;
          result[2] += 0.014705882352941176;
          result[3] += 0.14670014347202295;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002152080344332855;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9851485148514851;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01485148514851485;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0022271714922048997;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9977728285077951;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0.999128775307003;
          result[1] += 0.0002074344507135745;
          result[2] += 0.0005808164619980086;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8.297378028542981e-05;
        } else {
          result[0] += 0.9860751295336787;
          result[1] += 0.0025906735751295338;
          result[2] += 0.0042098445595854924;
          result[3] += 0.005829015544041451;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012953367875647669;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.17775779376498801;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.822242206235012;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
          result[0] += 0.9871156661786238;
          result[1] += 0;
          result[2] += 0.009956076134699855;
          result[3] += 0.0008784773060029284;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020497803806735;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07368421052631578;
          result[3] += 0;
          result[4] += 0.9263157894736842;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9958847736625515;
          result[5] += 0.00411522633744856;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e80000))) ) ) {
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
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.004694835680751174;
          result[2] += 0.012407780013413815;
          result[3] += 0.9805499664654594;
          result[4] += 0;
          result[5] += 0.002347417840375587;
          result[6] += 0;
        } else {
          result[0] += 0.9813311688311689;
          result[1] += 0;
          result[2] += 0.00892857142857143;
          result[3] += 0.009740259740259742;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9565217391304348;
          result[5] += 0.043478260869565216;
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
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0.0003201024327784891;
          result[2] += 0;
          result[3] += 0.9993597951344431;
          result[4] += 0;
          result[5] += 0.0003201024327784891;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.24489795918367346;
          result[2] += 0.6122448979591837;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.9997146932952924;
          result[1] += 0;
          result[2] += 0.0002853067047075606;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9948593073593074;
          result[1] += 0;
          result[2] += 0.00487012987012987;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027056277056277056;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0.9938612645794966;
          result[1] += 0.003069367710251688;
          result[2] += 0.003069367710251688;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005050505050505051;
          result[1] += 0;
          result[2] += 0.005772005772005772;
          result[3] += 0.9891774891774892;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9441814595660749;
          result[1] += 0;
          result[2] += 0.011637080867850098;
          result[3] += 0.04220907297830375;
          result[4] += 0;
          result[5] += 0.000591715976331361;
          result[6] += 0.0013806706114398422;
        } else {
          result[0] += 0.24587458745874588;
          result[1] += 0.0165016501650165;
          result[2] += 0;
          result[3] += 0.7376237623762376;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.9986077271145144;
          result[1] += 0;
          result[2] += 0.0013922728854855553;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995900199133185;
          result[1] += 0;
          result[2] += 0.0003514115028698606;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.856858381164344e-05;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.0019801980198019802;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.994059405940594;
          result[5] += 0.0039603960396039604;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0.018177469504903135;
          result[1] += 0.009088734752451567;
          result[2] += 0.00597943075819182;
          result[3] += 0.9657976560631428;
          result[4] += 0;
          result[5] += 0.0009567089213106913;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433c8000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9828923076923075;
          result[1] += 0;
          result[2] += 0.006030769230769229;
          result[3] += 0.010584615384615383;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004923076923076922;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0.9796954314720813;
          result[1] += 0;
          result[2] += 0.02030456852791878;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
          result[0] += 0.2704280155642024;
          result[1] += 0.02334630350194553;
          result[2] += 0;
          result[3] += 0.698443579766537;
          result[4] += 0.007782101167315176;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00558659217877095;
          result[1] += 0;
          result[2] += 0.0006983240223463687;
          result[3] += 0.9937150837988827;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002197802197802198;
          result[1] += 0.00989010989010989;
          result[2] += 0;
          result[3] += 0.11428571428571428;
          result[4] += 0.8736263736263736;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x44f6d000))) ) ) {
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
          result[4] += 0.9962825278810409;
          result[5] += 0.0037174721189591076;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0020013342228152103;
          result[2] += 0.01000667111407605;
          result[3] += 0.9853235490326885;
          result[4] += 0;
          result[5] += 0.00266844563042028;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0.9982118021060997;
          result[1] += 0.0007152791575601033;
          result[2] += 0.00039737730975561295;
          result[3] += 0.0005960659646334195;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.947546195112258e-05;
        } else {
          result[0] += 0.9529267294310274;
          result[1] += 0;
          result[2] += 0.008595988538681949;
          result[3] += 0.03806794924273434;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00040933278755628325;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.44442389495098944;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5555761050490106;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9841932597673726;
          result[1] += 0;
          result[2] += 0.012526096033402925;
          result[3] += 0.0002982403817476887;
          result[4] += 0;
          result[5] += 0.0008947211452430661;
          result[6] += 0.0020876826722338207;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.0012734797835084368;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9968163005412289;
          result[4] += 0.0009551098376313276;
          result[5] += 0.0009551098376313276;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0896551724137931;
          result[3] += 0;
          result[4] += 0.8896551724137931;
          result[5] += 0.020689655172413793;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
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
          result[2] += 0.01664145234493192;
          result[3] += 0;
          result[4] += 0.983358547655068;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.027559055118110236;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9724409448818898;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0007530120481927711;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9992469879518072;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9375247133254251;
          result[1] += 0;
          result[2] += 0.0039541320680110716;
          result[3] += 0.05852115460656386;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.38345864661654133;
          result[1] += 0;
          result[2] += 0.008928571428571428;
          result[3] += 0.6038533834586466;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0037593984962406013;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
          result[0] += 0.02127659574468085;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9787234042553191;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5401929260450161;
          result[1] += 0.02572347266881029;
          result[2] += 0;
          result[3] += 0.4340836012861736;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9995441335688644;
          result[1] += 0;
          result[2] += 0.0003988831272437176;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.6983303891959665e-05;
        } else {
          result[0] += 0.7072318444241872;
          result[1] += 0.0015192950470981465;
          result[2] += 0.007292616226071103;
          result[3] += 0.28365238529322395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00030385900941962927;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9969173859432799;
          result[4] += 0.002157829839704069;
          result[5] += 0.0009247842170160296;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.1891891891891892;
          result[2] += 0.6216216216216216;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1891891891891892;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9979512694812323;
          result[1] += 0.0007682739445379382;
          result[2] += 0.0008780273651862151;
          result[3] += 0.00010975342064827689;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00029267578839540506;
        } else {
          result[0] += 0.7449664429530202;
          result[1] += 0;
          result[2] += 0.2348993288590604;
          result[3] += 0.020134228187919462;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0.007692307692307693;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9923076923076923;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.41329479768786126;
          result[1] += 0.028901734104046242;
          result[2] += 0;
          result[3] += 0.5578034682080925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.19320261437908498;
          result[1] += 0;
          result[2] += 0.00026143790849673205;
          result[3] += 0.8065359477124183;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979177511712649;
          result[1] += 0;
          result[2] += 0.002082248828735034;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9888661002050981;
          result[1] += 0;
          result[2] += 0.00849692352768825;
          result[3] += 0.0011719894520949312;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001464986815118664;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000407000407000407;
          result[2] += 0;
          result[3] += 0.9967439967439967;
          result[4] += 0.002035002035002035;
          result[5] += 0.000814000814000814;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
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
          result[2] += 0.025537634408602152;
          result[3] += 0;
          result[4] += 0.9731182795698925;
          result[5] += 0.0013440860215053765;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9863013698630136;
          result[4] += 0.0136986301369863;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.04054054054054054;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9594594594594594;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9944375772558715;
          result[1] += 0;
          result[2] += 0.004326328800988875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012360939431396785;
        } else {
          result[0] += 0.9998873493297286;
          result[1] += 0;
          result[2] += 0.00011265067027148812;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.061514195583596214;
          result[1] += 0.014195583596214511;
          result[2] += 0.014195583596214511;
          result[3] += 0.9085173501577287;
          result[4] += 0;
          result[5] += 0.0015772870662460567;
          result[6] += 0;
        } else {
          result[0] += 0.9816818293582491;
          result[1] += 0;
          result[2] += 0.005163511187607573;
          result[3] += 0.011310548315711825;
          result[4] += 0;
          result[5] += 0.0003688222276862551;
          result[6] += 0.0014752889107450204;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015341701534170154;
          result[3] += 0.9846582984658299;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002457002457002457;
          result[2] += 0.0009828009828009828;
          result[3] += 0.9965601965601966;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.000925925925925926;
          result[1] += 0.00030864197530864197;
          result[2] += 0;
          result[3] += 0.9978395061728395;
          result[4] += 0.0006172839506172839;
          result[5] += 0.00030864197530864197;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9956427015250545;
          result[5] += 0.004357298474945534;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0.898989898989899;
          result[1] += 0.10101010101010101;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8717948717948718;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1282051282051282;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9917127071823204;
          result[1] += 0;
          result[2] += 0.007596685082872928;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006906077348066298;
        } else {
          result[0] += 0.999618715616319;
          result[1] += 0;
          result[2] += 0.00038128438368102837;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.11126760563380282;
          result[1] += 0.038028169014084505;
          result[2] += 0.036619718309859155;
          result[3] += 0.8140845070422535;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9784694881889764;
          result[1] += 0;
          result[2] += 0.0063976377952755905;
          result[3] += 0.01390255905511811;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012303149606299212;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.375;
          result[2] += 0.375;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003534817956875221;
          result[3] += 0.9964651820431247;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9932659932659933;
          result[5] += 0.006734006734006734;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.0003176620076238882;
          result[1] += 0.0003176620076238882;
          result[2] += 0;
          result[3] += 0.9974587039390089;
          result[4] += 0;
          result[5] += 0.0019059720457433292;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.32258064516129037;
          result[2] += 0.5161290322580646;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.16129032258064518;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.9951129626662395;
          result[1] += 0.0008011536612722322;
          result[2] += 0.003444960743470598;
          result[3] += 0.00024034609838166962;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004005768306361161;
        } else {
          result[0] += 0.15;
          result[1] += 0.85;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.999535747446611;
          result[1] += 0;
          result[2] += 0.00046425255338904364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016666666666666666;
          result[3] += 0.9833333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006635071090047393;
          result[3] += 0.9933649289099526;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9889267461669506;
          result[1] += 0;
          result[2] += 0.009369676320272573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017035775127768314;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9555555555555556;
          result[1] += 0;
          result[2] += 0.044444444444444446;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9948619139370585;
          result[1] += 0;
          result[2] += 0.0038535645472061657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012845215157353885;
        } else {
          result[0] += 0.9995873906585245;
          result[1] += 0;
          result[2] += 0.000412609341475491;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8850015211439002;
          result[1] += 0;
          result[2] += 0.004867660480681472;
          result[3] += 0.10830544569516276;
          result[4] += 0;
          result[5] += 0.000608457560085184;
          result[6] += 0.001216915120170368;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.019815994338287332;
          result[3] += 0.8690728945506015;
          result[4] += 0.1111111111111111;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.16088117489986647;
          result[1] += 0.004005340453938585;
          result[2] += 0.008678237650200267;
          result[3] += 0.8257676902536716;
          result[4] += 0;
          result[5] += 0.0006675567423230974;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.7540316267418193;
          result[1] += 0.0028182245185533112;
          result[2] += 0.008924377642085486;
          result[3] += 0.20823547831532802;
          result[4] += 0.025677156724596837;
          result[5] += 0.0001565680288085173;
          result[6] += 0.0001565680288085173;
        } else {
          result[0] += 0.05451792024230187;
          result[1] += 0.00757193336698637;
          result[2] += 0.005047955577990914;
          result[3] += 0.3619384149419485;
          result[4] += 0.5709237758707724;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9936440677966102;
          result[5] += 0.006355932203389831;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002767017155506364;
          result[2] += 0;
          result[3] += 0.9972329828444937;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.992;
          result[1] += 0;
          result[2] += 0.008;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9534883720930233;
          result[1] += 0;
          result[2] += 0.04186046511627907;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004651162790697674;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9995954283402447;
          result[1] += 0;
          result[2] += 0.00040457165975523417;
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.34673748103186647;
          result[1] += 0.004931714719271623;
          result[2] += 0.00834597875569044;
          result[3] += 0.6388467374810318;
          result[4] += 0.0011380880121396055;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001053740779768177;
          result[1] += 0.0036880927291886197;
          result[2] += 0;
          result[3] += 0.14436248682824027;
          result[4] += 0.850895679662803;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.041179744017807454;
          result[1] += 0.008347245409015025;
          result[2] += 0.013912075681691708;
          result[3] += 0.869226488592098;
          result[4] += 0.06622148024485253;
          result[5] += 0.0011129660545353367;
          result[6] += 0;
        } else {
          result[0] += 0.9827466258522332;
          result[1] += 0;
          result[2] += 0.005287324335605955;
          result[3] += 0.010713788785306804;
          result[4] += 0;
          result[5] += 0.00013914011409489355;
          result[6] += 0.0011131209127591484;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0.002320185614849188;
          result[2] += 0;
          result[3] += 0.9976798143851509;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9285714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07142857142857142;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0.08209338122113904;
          result[1] += 0.007696254489481785;
          result[2] += 0.0015392508978963571;
          result[3] += 0.9081580297588507;
          result[4] += 0.000513083632632119;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011627906976744186;
          result[1] += 0.050387596899224806;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.937984496124031;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.926605504587156;
          result[1] += 0;
          result[2] += 0.07339449541284404;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9989413376510151;
          result[1] += 0;
          result[2] += 0.0009963880931622867;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.227425582264292e-05;
        } else {
          result[0] += 0.999900911613159;
          result[1] += 0;
          result[2] += 9.908838684106223e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007547169811320755;
          result[1] += 0.018867924528301886;
          result[2] += 0;
          result[3] += 0.9735849056603774;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7946646003984944;
          result[1] += 0.0009962364401151205;
          result[2] += 0.006752269205224705;
          result[3] += 0.1796546380340934;
          result[4] += 0.016050475979632495;
          result[5] += 0.0007748505645339825;
          result[6] += 0.0011069293779056894;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01181948424068768;
          result[3] += 0.9842406876790831;
          result[4] += 0.0032234957020057307;
          result[5] += 0.0007163323782234957;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9977900552486187;
          result[5] += 0.0022099447513812156;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.0008841732979664014;
          result[1] += 0.0008841732979664014;
          result[2] += 0.007957559681697613;
          result[3] += 0.9893899204244032;
          result[4] += 0;
          result[5] += 0.0008841732979664014;
          result[6] += 0;
        } else {
          result[0] += 0.9692737430167597;
          result[1] += 0;
          result[2] += 0.030726256983240222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9547066224408096;
          result[1] += 0.00102939494452705;
          result[2] += 0.0032597506576689914;
          result[3] += 0.040661100308818476;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00034313164817568337;
        } else {
          result[0] += 0.7801251246713211;
          result[1] += 0;
          result[2] += 0.0010880406201831535;
          result[3] += 0.21878683470849578;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.989739079448842;
          result[1] += 0;
          result[2] += 0.0079155672823219;
          result[3] += 0.001759014951627089;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005863383172090296;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0055248618784530384;
          result[3] += 0.994475138121547;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9806451612903225;
          result[1] += 0;
          result[2] += 0.01935483870967742;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0.008287292817679558;
          result[2] += 0;
          result[3] += 0.9917127071823204;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2727272727272727;
          result[1] += 0.7272727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9975579975579976;
          result[1] += 0;
          result[2] += 0.002442002442002442;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977678571428571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002232142857142857;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.31028610354223435;
          result[1] += 0.007833787465940054;
          result[2] += 0.006811989100817439;
          result[3] += 0.6750681198910081;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.04365781710914454;
          result[1] += 0.0058997050147492625;
          result[2] += 0.00943952802359882;
          result[3] += 0.8672566371681416;
          result[4] += 0.07315634218289085;
          result[5] += 0.0005899705014749262;
          result[6] += 0;
        } else {
          result[0] += 0.9831305309734512;
          result[1] += 0;
          result[2] += 0.005116150442477875;
          result[3] += 0.01092367256637168;
          result[4] += 0;
          result[5] += 0.0001382743362831858;
          result[6] += 0.0006913716814159291;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0.002990033222591362;
          result[2] += 0;
          result[3] += 0.9970099667774086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.2222222222222222;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0.00303951367781155;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.993920972644377;
          result[5] += 0.00303951367781155;
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
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41f40000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9798370789762552;
          result[1] += 0.00046218730140389395;
          result[2] += 0.001328788491536195;
          result[3] += 0.01825639840545381;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011554682535097349;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.7185289957567187;
          result[1] += 0.0008933224149482618;
          result[2] += 0.004094394401846201;
          result[3] += 0.25668130722846727;
          result[4] += 0.019504206059703717;
          result[5] += 7.444353457902183e-05;
          result[6] += 0.00022333060373706546;
        } else {
          result[0] += 0.9821344616831218;
          result[1] += 0;
          result[2] += 0.010813352139163141;
          result[3] += 0;
          result[4] += 0.004231311706629055;
          result[5] += 0.0023507287259050304;
          result[6] += 0.0004701457451810061;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.32904984423676015;
          result[1] += 0;
          result[2] += 0.00661993769470405;
          result[3] += 0.6643302180685359;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.15314632297194844;
          result[1] += 0.01288855193328279;
          result[2] += 0.0037907505686125853;
          result[3] += 0.8301743745261562;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
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
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0398406374501992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9601593625498008;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9326923076923077;
          result[1] += 0;
          result[2] += 0.0673076923076923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9950495049504952;
          result[1] += 0;
          result[2] += 0.004331683168316833;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006188118811881189;
        } else {
          result[0] += 0.9997507995182124;
          result[1] += 0;
          result[2] += 0.00024920048178759814;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.5227012254253725;
          result[1] += 0.0027329630609186284;
          result[2] += 0.005289605924358635;
          result[3] += 0.4679538041082606;
          result[4] += 0.0006171206911751741;
          result[5] += 0.0005289605924358636;
          result[6] += 0.00017632019747862118;
        } else {
          result[0] += 0.65860400829302;
          result[1] += 0;
          result[2] += 0.038700760193503804;
          result[3] += 0;
          result[4] += 0.2957843814789219;
          result[5] += 0.0034554250172771253;
          result[6] += 0.0034554250172771253;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.025691699604743087;
          result[2] += 0;
          result[3] += 0.624505928853755;
          result[4] += 0.349802371541502;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.019700551615445233;
          result[4] += 0.9802994483845547;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0.6178756476683938;
          result[1] += 0;
          result[2] += 0.0019430051813471502;
          result[3] += 0.3646373056994819;
          result[4] += 0.012953367875647668;
          result[5] += 0;
          result[6] += 0.0025906735751295338;
        } else {
          result[0] += 0.17843866171003717;
          result[1] += 0;
          result[2] += 0.007434944237918215;
          result[3] += 0.4879182156133829;
          result[4] += 0.32620817843866173;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1875;
          result[4] += 0.8125;
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.13773717498243152;
          result[1] += 0.000702740688685875;
          result[2] += 0;
          result[3] += 0.8559381588193957;
          result[4] += 0.0028109627547435;
          result[5] += 0.0028109627547435;
          result[6] += 0;
        } else {
          result[0] += 0.053516819571865444;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.944954128440367;
          result[4] += 0.0015290519877675841;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42280000))) ) ) {
          result[0] += 0.9957718243120103;
          result[1] += 0.0004738472753781666;
          result[2] += 0.0009112447603426281;
          result[3] += 0.0027337342810278844;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010934937124111538;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0851063829787234;
          result[3] += 0.9148936170212766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 0.2625448028673836;
          result[1] += 0.0031362007168458787;
          result[2] += 0.005824372759856632;
          result[3] += 0.7240143369175628;
          result[4] += 0.004480286738351255;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006430868167202572;
          result[1] += 0.028938906752411574;
          result[2] += 0;
          result[3] += 0.15112540192926044;
          result[4] += 0.8135048231511254;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6802325581395349;
          result[1] += 0;
          result[2] += 0.0872093023255814;
          result[3] += 0.23255813953488372;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0.0006572461386789353;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9993427538613211;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9907600596125187;
          result[1] += 0;
          result[2] += 0.005663189269746647;
          result[3] += 0.00029806259314456036;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003278688524590164;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013966480446927375;
          result[3] += 0;
          result[4] += 0.9972067039106145;
          result[5] += 0.0013966480446927375;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0.07142857142857142;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41380000))) ) ) {
          result[0] += 0.004484304932735426;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9955156950672646;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.25806451612903225;
          result[2] += 0.4838709677419355;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.25806451612903225;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.95260663507109;
          result[1] += 0.04739336492890995;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9982821719321829;
          result[1] += 0.00041078497273881536;
          result[2] += 0.0008962581223392335;
          result[3] += 0.0001493763537232056;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002614086190156098;
        } else {
          result[0] += 0.946319018404908;
          result[1] += 0;
          result[2] += 0.05214723926380368;
          result[3] += 0.0015337423312883436;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.0057000356252226575;
          result[1] += 0;
          result[2] += 0.004631278945493409;
          result[3] += 0.9896686854292839;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8357196684250189;
          result[1] += 0;
          result[2] += 0.009419743782969104;
          result[3] += 0.15071590052750566;
          result[4] += 0;
          result[5] += 0.0011303692539562924;
          result[6] += 0.003014318010550113;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0.0038022813688212928;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9961977186311787;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012118018967334035;
          result[2] += 0.01053740779768177;
          result[3] += 0.9773445732349842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
          result[2] += 0;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7909604519774012;
          result[1] += 0;
          result[2] += 0.03389830508474576;
          result[3] += 0.1751412429378531;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9186046511627907;
          result[1] += 0;
          result[2] += 0.08139534883720931;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45470800))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19739952718676124;
          result[4] += 0.8014184397163121;
          result[5] += 0.001182033096926714;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.019490254872563718;
          result[3] += 0.9377811094452774;
          result[4] += 0.035982008995502246;
          result[5] += 0.006746626686656672;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9912653305414298;
          result[1] += 0.001316183069099611;
          result[2] += 0.001316183069099611;
          result[3] += 0.005803170804666467;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002991325157044571;
        } else {
          result[0] += 0.23348017621145375;
          result[1] += 0;
          result[2] += 0.032305433186490456;
          result[3] += 0.7327459618208517;
          result[4] += 0;
          result[5] += 0.0014684287812041115;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.9988344988344988;
          result[1] += 0;
          result[2] += 0.0008965393580778196;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026896180742334586;
        } else {
          result[0] += 0.664247311827957;
          result[1] += 0;
          result[2] += 0.002956989247311828;
          result[3] += 0.3325268817204301;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026881720430107527;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9985163204747775;
          result[4] += 0.001483679525222552;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002942907592701589;
          result[1] += 0.0011771630370806356;
          result[2] += 0.00824014125956445;
          result[3] += 0.9523248969982343;
          result[4] += 0.032371983519717484;
          result[5] += 0.002942907592701589;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.9986357435197817;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.001364256480218281;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02564102564102564;
          result[3] += 0;
          result[4] += 0.9743589743589743;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.24719101123595505;
          result[4] += 0.7528089887640449;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007028753993610224;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9929712460063898;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9891225525743292;
          result[1] += 0;
          result[2] += 0.009427121102248005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014503263234227702;
        } else {
          result[0] += 0.9998765889176848;
          result[1] += 0;
          result[2] += 0.0001234110823151919;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0.3950617283950617;
          result[1] += 0.030864197530864196;
          result[2] += 0;
          result[3] += 0.5740740740740741;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9871359656959086;
          result[1] += 0.004109344291584777;
          result[2] += 0.006968018581382884;
          result[3] += 0.0008933357155619082;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008933357155619082;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8468271334792122;
          result[1] += 0;
          result[2] += 0.010211524434719184;
          result[3] += 0.14040846097738877;
          result[4] += 0;
          result[5] += 0.0007293946024799417;
          result[6] += 0.0018234865061998542;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0035087719298245615;
          result[3] += 0.9964912280701754;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
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
          result[4] += 0.9989154013015185;
          result[5] += 0.0010845986984815619;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0008830022075055188;
          result[1] += 0;
          result[2] += 0.013245033112582781;
          result[3] += 0.9832229580573951;
          result[4] += 0;
          result[5] += 0.0026490066225165563;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9971140485267396;
          result[1] += 0.0005700644885452666;
          result[2] += 0.0014251612213631666;
          result[3] += 0.0007125806106815833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017814515267039583;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0.9411764705882353;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.17820117680022415;
          result[1] += 0;
          result[2] += 0.0036424768842813113;
          result[3] += 0.8175959652563743;
          result[4] += 0;
          result[5] += 0.0005603810591202018;
          result[6] += 0;
        } else {
          result[0] += 0.9944598337950139;
          result[1] += 0;
          result[2] += 0.0037593984962406013;
          result[3] += 0.001187178472497032;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000593589236248516;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41300000))) ) ) {
          result[0] += 0.15952143569292124;
          result[1] += 0.023928215353938187;
          result[2] += 0;
          result[3] += 0.8165503489531406;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05217391304347826;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9478260869565217;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.2897196261682243;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.32242990654205606;
          result[4] += 0.3878504672897196;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.051075268817204304;
          result[1] += 0;
          result[2] += 0.026881720430107527;
          result[3] += 0.34946236559139787;
          result[4] += 0.5725806451612904;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x45102800))) ) ) {
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
          result[4] += 0.9994169096209913;
          result[5] += 0.0005830903790087463;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.17214996174445293;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8275950012751849;
          result[4] += 0;
          result[5] += 0.0002550369803621525;
          result[6] += 0;
        } else {
          result[0] += 0.8083333333333333;
          result[1] += 0.11666666666666667;
          result[2] += 0.058333333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.016666666666666666;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9945894689870594;
          result[1] += 0.0008366800535475234;
          result[2] += 0.0037929495760821064;
          result[3] += 0.0005577867023650157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022311468094600624;
        } else {
          result[0] += 0.9987528580336729;
          result[1] += 0;
          result[2] += 0.0004157139887757223;
          result[3] += 0.0008314279775514446;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0.4629080118694362;
          result[1] += 0.03857566765578635;
          result[2] += 0;
          result[3] += 0.49851632047477745;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00558659217877095;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.994413407821229;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07654836464857341;
          result[1] += 0;
          result[2] += 0.016701461377870562;
          result[3] += 0.9067501739735561;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0.9875389408099688;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012461059190031152;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9628378378378378;
          result[1] += 0;
          result[2] += 0.028716216216216218;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008445945945945946;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.005405405405405406;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7698198198198198;
          result[4] += 0.22477477477477478;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8858447488584476;
          result[1] += 0;
          result[2] += 0.0032615786040443577;
          result[3] += 0.10632746249184606;
          result[4] += 0.0032615786040443577;
          result[5] += 0;
          result[6] += 0.0013046314416177431;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987228607918263;
          result[1] += 0;
          result[2] += 0.001277139208173691;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.15837773830669036;
          result[1] += 0.0053285968028419185;
          result[2] += 0.0041444641799881585;
          result[3] += 0.7572528123149793;
          result[4] += 0.0748963883955003;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.023485784919653894;
          result[1] += 0;
          result[2] += 0.019777503090234856;
          result[3] += 0.04882571075401731;
          result[4] += 0.9079110012360939;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.00117096018735363;
          result[1] += 0.00117096018735363;
          result[2] += 0;
          result[3] += 0.9871194379391101;
          result[4] += 0.00702576112412178;
          result[5] += 0.00351288056206089;
          result[6] += 0;
        } else {
          result[0] += 0.985781990521327;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014218009478672985;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0.9976070091474005;
          result[1] += 0.0003859662665483037;
          result[2] += 0.0011578987996449111;
          result[3] += 0.0005403527731676251;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00030877301323864296;
        } else {
          result[0] += 0;
          result[1] += 0.024390243902439025;
          result[2] += 0;
          result[3] += 0.975609756097561;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.07256894049346879;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9274310595065312;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2083514571552849;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7916485428447151;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9889070146818923;
          result[1] += 0;
          result[2] += 0.004567699836867863;
          result[3] += 0.0006525285481239804;
          result[4] += 0.0032626427406199023;
          result[5] += 0.0009787928221859706;
          result[6] += 0.0016313213703099511;
        } else {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0.1;
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
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5162907268170427;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4786967418546366;
          result[4] += 0.005012531328320803;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.036101083032490974;
          result[3] += 0;
          result[4] += 0.9566787003610109;
          result[5] += 0.007220216606498195;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0011074197120708748;
          result[2] += 0.009413067552602437;
          result[3] += 0.9883720930232558;
          result[4] += 0;
          result[5] += 0.0011074197120708748;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9973525518458597;
          result[1] += 0;
          result[2] += 0.00044124135902338577;
          result[3] += 0.0021081531597783986;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.805363533853018e-05;
        } else {
          result[0] += 0.2542372881355932;
          result[1] += 0.06779661016949153;
          result[2] += 0;
          result[3] += 0.6779661016949152;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9029951537300389;
          result[1] += 0.0006355763883371733;
          result[2] += 0.006117422737745293;
          result[3] += 0.08937792960991499;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008739175339636132;
        } else {
          result[0] += 0.506560449859419;
          result[1] += 0;
          result[2] += 0.0049203373945641985;
          result[3] += 0.4885192127460169;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42080000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.24503311258278146;
          result[1] += 0.019867549668874173;
          result[2] += 0;
          result[3] += 0.6900662251655629;
          result[4] += 0.045033112582781455;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00145985401459854;
          result[1] += 0.010218978102189781;
          result[2] += 0;
          result[3] += 0.7518248175182481;
          result[4] += 0.2364963503649635;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0.6527777777777778;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.2847222222222222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01775147928994083;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9822485207100592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11574074074074074;
          result[4] += 0.8842592592592593;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 0.9893899204244032;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010610079575596816;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0008126777732629012;
          result[2] += 0.004876066639577408;
          result[3] += 0.8870377895164567;
          result[4] += 0.10402275497765136;
          result[5] += 0.003250711093051605;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 0.709349593495935;
          result[1] += 0;
          result[2] += 0.016260162601626018;
          result[3] += 0.27439024390243905;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9960826594788859;
          result[1] += 0.0006109613656783468;
          result[2] += 0.0018688230008984726;
          result[3] += 0.0012938005390835579;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014375561545372867;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9949698189134809;
          result[4] += 0.00335345405767941;
          result[5] += 0.001676727028839705;
          result[6] += 0;
        } else {
          result[0] += 0.48218347232752085;
          result[1] += 0;
          result[2] += 0.02122820318423048;
          result[3] += 0;
          result[4] += 0.4965883244882487;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.9993999399939995;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0006000600060006001;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9845330160618679;
          result[1] += 0;
          result[2] += 0.013087447947650209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002379535990481856;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.14350453172205438;
          result[1] += 0.012084592145015106;
          result[2] += 0;
          result[3] += 0.8444108761329305;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0.18037974683544303;
          result[1] += 0.00949367088607595;
          result[2] += 0;
          result[3] += 0.810126582278481;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.13218390804597702;
          result[1] += 0;
          result[2] += 0.040229885057471264;
          result[3] += 0.8275862068965517;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.010044642857142858;
          result[4] += 0.9899553571428571;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0.9986225895316805;
          result[1] += 0;
          result[2] += 0.0013774104683195593;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1574963609898108;
          result[1] += 0.006404657933042213;
          result[2] += 0.006404657933042213;
          result[3] += 0.7604075691411937;
          result[4] += 0.06928675400291122;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.625;
          result[1] += 0;
          result[2] += 0.048728813559322036;
          result[3] += 0;
          result[4] += 0.326271186440678;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03765971755211836;
          result[1] += 0;
          result[2] += 0.007397444519166106;
          result[3] += 0.0531271015467384;
          result[4] += 0.9018157363819771;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.002418379685610641;
          result[1] += 0.0012091898428053206;
          result[2] += 0;
          result[3] += 0.9879081015719469;
          result[4] += 0.003627569528415962;
          result[5] += 0.004836759371221282;
          result[6] += 0;
        } else {
          result[0] += 0.9856459330143541;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014354066985645933;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41b00000))) ) ) {
          result[0] += 0.9436936936936937;
          result[1] += 0;
          result[2] += 0.007882882882882882;
          result[3] += 0.04842342342342342;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9974098425981271;
          result[1] += 0.0003984857541342897;
          result[2] += 0.0009165172345088663;
          result[3] += 0.0011157601115760112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015939430165371588;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009612197547232353;
          result[3] += 0.8475306595956249;
          result[4] += 0.14086841233012928;
          result[5] += 0.00198873052701359;
          result[6] += 0;
        } else {
          result[0] += 0.9863731656184487;
          result[1] += 0;
          result[2] += 0.011530398322851153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020964360587002098;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8470319634703196;
          result[1] += 0;
          result[2] += 0.00684931506849315;
          result[3] += 0.14383561643835616;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00228310502283105;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6600265604249668;
          result[4] += 0.3399734395750332;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44d7b000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9875647668393782;
          result[1] += 0;
          result[2] += 0.00932642487046632;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0031088082901554403;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9888475836431226;
          result[1] += 0;
          result[2] += 0.011152416356877323;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0.025165929203539824;
          result[1] += 0.00995575221238938;
          result[2] += 0.00497787610619469;
          result[3] += 0.9576880530973452;
          result[4] += 0.0013827433628318584;
          result[5] += 0.000829646017699115;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04065040650406504;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.959349593495935;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008733624454148471;
          result[3] += 0.019962570180910792;
          result[4] += 0.9713038053649408;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02843216896831844;
          result[3] += 0.4337936636880585;
          result[4] += 0.5312753858651503;
          result[5] += 0.006498781478472786;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0.9925850166197904;
          result[1] += 0;
          result[2] += 0.005880848887752493;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001534134492457172;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012636899747262005;
          result[3] += 0.9987363100252739;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.8876404494382023;
          result[1] += 0;
          result[2] += 0.010905485789821548;
          result[3] += 0.10079312623925976;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006609385327164574;
        } else {
          result[0] += 0.9504734158776402;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.049526584122359794;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9904264577893821;
          result[1] += 0;
          result[2] += 0.006092254134029591;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0034812880765883376;
        } else {
          result[0] += 0.9998222748815165;
          result[1] += 0;
          result[2] += 0.00017772511848341231;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41980000))) ) ) {
          result[0] += 0.9100410600970511;
          result[1] += 0.005599104143337066;
          result[2] += 0.0033594624860022394;
          result[3] += 0.08062709966405375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003732736095558044;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9773755656108598;
          result[4] += 0.009049773755656111;
          result[5] += 0.013574660633484165;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.004001778568252558;
          result[2] += 0.005780346820809249;
          result[3] += 0.9466429524232993;
          result[4] += 0.043574922187638955;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990530303030303;
          result[1] += 0;
          result[2] += 0.000946969696969697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004014049172102358;
          result[1] += 0.0030105368790767687;
          result[2] += 0.014550928248871048;
          result[3] += 0.9771700953336678;
          result[4] += 0;
          result[5] += 0.001254390366281987;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43438000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9892290249433107;
          result[1] += 0;
          result[2] += 0.008219954648526076;
          result[3] += 0.001417233560090703;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011337868480725624;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.008107155445893549;
          result[2] += 0.00634473034896017;
          result[3] += 0.8910821290095171;
          result[4] += 0.09446598519562918;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011063306699446834;
          result[3] += 0.04363859864781807;
          result[4] += 0.9452980946527351;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9873617693522907;
          result[1] += 0.0007898894154818325;
          result[2] += 0.011848341232227487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999104744852283;
          result[1] += 0;
          result[2] += 0.0008952551477170994;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.9972480078863059;
          result[1] += 0.0001642980366384622;
          result[2] += 0.0009857882198307732;
          result[3] += 0.001355458802267313;
          result[4] += 0.0001642980366384622;
          result[5] += 0;
          result[6] += 8.21490183192311e-05;
        } else {
          result[0] += 0.8762506582411795;
          result[1] += 0.004739336492890996;
          result[2] += 0.004739336492890996;
          result[3] += 0.11269088994207478;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001579778830963665;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0.8181818181818182;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004457652303120356;
          result[2] += 0;
          result[3] += 0.9955423476968797;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0.23429381199811053;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7657061880018895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0843585237258348;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9156414762741653;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0.7862068965517242;
          result[1] += 0;
          result[2] += 0.21379310344827587;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9886223862238622;
          result[1] += 0;
          result[2] += 0.008302583025830259;
          result[3] += 0.0009225092250922509;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002152521525215252;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030120481927710845;
          result[3] += 0;
          result[4] += 0.9969879518072289;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5714285714285714;
          result[5] += 0.42857142857142855;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.1676483914816493;
          result[1] += 0.004984141368373357;
          result[2] += 0;
          result[3] += 0.6139555958314454;
          result[4] += 0.21341187131853195;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4068522483940043;
          result[1] += 0;
          result[2] += 0.01641684511063526;
          result[3] += 0.3404710920770878;
          result[4] += 0.23625981441827265;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.027777777777777776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9722222222222222;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0033500837520938024;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9966499162479062;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9941434846266471;
          result[1] += 0;
          result[2] += 0.004880429477794046;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009760858955588092;
        } else {
          result[0] += 0.9998765432098765;
          result[1] += 0;
          result[2] += 0.0001234567901234568;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.8807489547355026;
          result[1] += 0.003453917469550991;
          result[2] += 0.002544991819669151;
          result[3] += 0.11252499545537176;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007271405199054717;
        } else {
          result[0] += 0.4050119771512806;
          result[1] += 0;
          result[2] += 0.009581721024507094;
          result[3] += 0.5358393219089737;
          result[4] += 0.048277132854247284;
          result[5] += 0.00018426386585590566;
          result[6] += 0.001105583195135434;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9946380697050938;
          result[5] += 0.005361930294906166;
          result[6] += 0;
        } else {
          result[0] += 0.02313030069390902;
          result[1] += 0;
          result[2] += 0.017733230531996914;
          result[3] += 0.8496530454895914;
          result[4] += 0.10485736314572089;
          result[5] += 0.004626060138781804;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9954291518537328;
          result[1] += 0;
          result[2] += 0.002031488065007618;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0025393600812595226;
        } else {
          result[0] += 0.9998343548119927;
          result[1] += 0;
          result[2] += 0.00016564518800728838;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.6126593806921676;
          result[1] += 0.0012750455373406193;
          result[2] += 0.0025500910746812386;
          result[3] += 0.38287795992714024;
          result[4] += 0;
          result[5] += 0.000273224043715847;
          result[6] += 0.00036429872495446266;
        } else {
          result[0] += 0.09373668512995313;
          result[1] += 0.004686834256497656;
          result[2] += 0.011077971878994461;
          result[3] += 0.8892202812100554;
          result[4] += 0.0012782275244993609;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.9522212908633697;
          result[1] += 0;
          result[2] += 0.041911148365465216;
          result[3] += 0.0008382229673093043;
          result[4] += 0;
          result[5] += 0.0008382229673093043;
          result[6] += 0.004191114836546521;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0.0012406947890818859;
          result[1] += 0.009925558312655087;
          result[2] += 0;
          result[3] += 0.09429280397022333;
          result[4] += 0.8945409429280397;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4603421461897356;
          result[4] += 0.5396578538102644;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0003635041802980734;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9727371864776445;
          result[4] += 0.026535805161759362;
          result[5] += 0.0003635041802980734;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42120000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0015060240963855422;
          result[2] += 0;
          result[3] += 0.7575301204819277;
          result[4] += 0.24096385542168675;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0.19444444444444445;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8055555555555556;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.08206686930091185;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9179331306990881;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01411042944785276;
          result[3] += 0;
          result[4] += 0.9815950920245399;
          result[5] += 0.004294478527607362;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9983127109111362;
          result[1] += 0;
          result[2] += 0.001687289088863892;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9761904761904763;
          result[1] += 0;
          result[2] += 0.014880952380952382;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00892857142857143;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0.9996666666666667;
          result[1] += 0;
          result[2] += 0.0003333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999016425690961;
          result[1] += 0;
          result[2] += 9.83574309039048e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.9898363479758829;
          result[1] += 0.0022394487510766586;
          result[2] += 0.0070628768303186915;
          result[3] += 0.00017226528854435833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006890611541774333;
        } else {
          result[0] += 0;
          result[1] += 0.04666666666666667;
          result[2] += 0;
          result[3] += 0.9533333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.011939218523878437;
          result[1] += 0;
          result[2] += 0.003979739507959479;
          result[3] += 0.984081041968162;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8564176939811459;
          result[1] += 0;
          result[2] += 0.010877447425670778;
          result[3] += 0.13016678752719366;
          result[4] += 0;
          result[5] += 0.0007251631617113852;
          result[6] += 0.001812907904278463;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.07801047120418848;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.918848167539267;
          result[4] += 0.0020942408376963353;
          result[5] += 0.0010471204188481676;
          result[6] += 0;
        } else {
          result[0] += 0.9898415657036347;
          result[1] += 0.00130475302889096;
          result[2] += 0.0029822926374650513;
          result[3] += 0.005591798695246971;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027958993476234854;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.4782608695652174;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5217391304347826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9963101792198665;
          result[1] += 0;
          result[2] += 0.0006442544219280779;
          result[3] += 0.002869860606770529;
          result[4] += 0.00011713716762328689;
          result[5] += 5.8568583811643444e-05;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3487589398401346;
          result[1] += 0.0033655868742111907;
          result[2] += 0.01851072780816155;
          result[3] += 0.6293647454774927;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0.013793103448275862;
          result[2] += 0;
          result[3] += 0.21724137931034482;
          result[4] += 0.7689655172413793;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004694835680751174;
          result[2] += 0;
          result[3] += 0.056338028169014086;
          result[4] += 0.9389671361502347;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14451505940867643;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8554849405913235;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.4838709677419355;
          result[1] += 0;
          result[2] += 0.5161290322580645;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9818398332837154;
          result[1] += 0;
          result[2] += 0.011312890741292051;
          result[3] += 0.0008931229532598987;
          result[4] += 0.0026793688597796963;
          result[5] += 0.0020839535576064306;
          result[6] += 0.0011908306043465317;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45f59000))) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.998747763864043;
          result[1] += 0;
          result[2] += 0.0009838998211091235;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026833631484794273;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
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
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0.002751031636863824;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9958734525447043;
          result[5] += 0.001375515818431912;
          result[6] += 0;
        } else {
          result[0] += 0.023243933588761177;
          result[1] += 0.004342273307790549;
          result[2] += 0.01685823754789272;
          result[3] += 0.9545338441890167;
          result[4] += 0;
          result[5] += 0.0010217113665389529;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3610648918469218;
          result[4] += 0.6389351081530782;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0063025210084033615;
          result[2] += 0;
          result[3] += 0.055322128851540614;
          result[4] += 0.938375350140056;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.994256541161455;
          result[1] += 0;
          result[2] += 0.002871729419272495;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002871729419272495;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011682242990654205;
          result[3] += 0.9988317757009346;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9773941635840526;
          result[1] += 0;
          result[2] += 0.007398273736128237;
          result[3] += 0.013974517057131115;
          result[4] += 0;
          result[5] += 0.0002055076037813399;
          result[6] += 0.0010275380189066995;
        } else {
          result[0] += 0.8486486486486486;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15135135135135136;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0.0005752085130859936;
          result[2] += 0;
          result[3] += 0.9295369571469658;
          result[4] += 0.06931262582686223;
          result[5] += 0.0005752085130859936;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003878474466709761;
          result[2] += 0.008403361344537815;
          result[3] += 0;
          result[4] += 0.9864253393665159;
          result[5] += 0.001292824822236587;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9974203393525416;
          result[1] += 0.000581331976892054;
          result[2] += 0.0017803291792319153;
          result[3] += 0.00010899974566726012;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010899974566726012;
        } else {
          result[0] += 0.7451923076923077;
          result[1] += 0;
          result[2] += 0.04807692307692308;
          result[3] += 0.20673076923076922;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x43140000))) ) ) {
          result[0] += 0;
          result[1] += 0.03900709219858156;
          result[2] += 0;
          result[3] += 0.9609929078014184;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0.8471953578336557;
          result[1] += 0;
          result[2] += 0.0061250805931656995;
          result[3] += 0.14055448098001289;
          result[4] += 0.0038684719535783366;
          result[5] += 0.0012894906511927789;
          result[6] += 0.0009671179883945841;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          result[2] += 0.009427121102248005;
          result[3] += 0.990572878897752;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.408203125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.591796875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980183211815292;
          result[1] += 0.0005234623294073659;
          result[2] += 0.000710413161338568;
          result[3] += 0.00048607216302112545;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026173116470368295;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.4684014869888476;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5241635687732342;
          result[4] += 0;
          result[5] += 0.007434944237918215;
          result[6] += 0;
        } else {
          result[0] += 0.7080536912751678;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.28859060402684567;
          result[4] += 0;
          result[5] += 0.003355704697986577;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006811989100817439;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9931880108991825;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.04291187739463601;
          result[1] += 0;
          result[2] += 0.00842911877394636;
          result[3] += 0.9455938697318008;
          result[4] += 0.0030651340996168583;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18144654088050313;
          result[1] += 0.004088050314465409;
          result[2] += 0.012578616352201259;
          result[3] += 0.46540880503144655;
          result[4] += 0.33647798742138363;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0022181146025878;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9977818853974122;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423c0000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42060000))) ) ) {
          result[0] += 0.9812889812889813;
          result[1] += 0;
          result[2] += 0.012177012177012177;
          result[3] += 0.000297000297000297;
          result[4] += 0.002673002673002673;
          result[5] += 0.001782001782001782;
          result[6] += 0.001782001782001782;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5714285714285714;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42e30000))) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f800000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9988392338943702;
          result[5] += 0.0011607661056297156;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002128306476132563;
          result[2] += 0.010641532380662816;
          result[3] += 0.985101854667072;
          result[4] += 0;
          result[5] += 0.002128306476132563;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9954707214493691;
          result[1] += 0.002588159171789065;
          result[2] += 0.0012940795858945326;
          result[3] += 0.0006470397929472663;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997310623038996;
          result[1] += 0;
          result[2] += 0.0002689376961004034;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.9920879120879121;
          result[1] += 0;
          result[2] += 0.00043956043956043956;
          result[3] += 0.0074725274725274725;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9787626962142197;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02123730378578024;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.05815602836879433;
          result[1] += 0.02695035460992908;
          result[2] += 0.02553191489361702;
          result[3] += 0.8893617021276595;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9400131839156229;
          result[1] += 0;
          result[2] += 0.0042847725774555045;
          result[3] += 0.05454845088991431;
          result[4] += 0;
          result[5] += 0.00024719841793012525;
          result[6] += 0.0009063941990771259;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.043498817966903074;
          result[1] += 0;
          result[2] += 0.00851063829787234;
          result[3] += 0.9479905437352246;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.958029197080292;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.041970802919708027;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.998314606741573;
          result[1] += 0;
          result[2] += 0.0016853932584269663;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9855491329479769;
          result[1] += 0;
          result[2] += 0.008670520231213872;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005780346820809248;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9816176470588235;
          result[1] += 0;
          result[2] += 0.01838235294117647;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997902684563759;
          result[1] += 0;
          result[2] += 0.00020973154362416107;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.025071405902887964;
          result[1] += 0.003808314820691843;
          result[2] += 0.009203427483338621;
          result[3] += 0.8771818470326879;
          result[4] += 0.08283084735004759;
          result[5] += 0.0019041574103459216;
          result[6] += 0;
        } else {
          result[0] += 0.7140999241356888;
          result[1] += 0;
          result[2] += 0.0021675517502980383;
          result[3] += 0.28340739135146853;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00032513276254470577;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9624542124542125;
          result[1] += 0;
          result[2] += 0.023809523809523808;
          result[3] += 0;
          result[4] += 0.00641025641025641;
          result[5] += 0.0027472527472527475;
          result[6] += 0.004578754578754579;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.033426183844011144;
          result[3] += 0;
          result[4] += 0.9623955431754875;
          result[5] += 0.004178272980501393;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0.23860182370820668;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7264437689969605;
          result[4] += 0.034954407294832825;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008928571428571428;
          result[1] += 0.026785714285714284;
          result[2] += 0;
          result[3] += 0.15401785714285715;
          result[4] += 0.8102678571428571;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.13956466069142126;
          result[1] += 0.014084507042253521;
          result[2] += 0.012804097311139564;
          result[3] += 0.8335467349551856;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001692047377326565;
          result[2] += 0;
          result[3] += 0.05245346869712352;
          result[4] += 0.9458544839255499;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9901960784313726;
          result[5] += 0.00980392156862745;
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
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
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
          result[2] += 0.006487488415199258;
          result[3] += 0.9919678714859438;
          result[4] += 0;
          result[5] += 0.0015446400988569664;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.9950980392156863;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004901960784313725;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987406983400114;
          result[1] += 0.0005724098454493417;
          result[2] += 0.0006868918145392101;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9873259550160658;
          result[1] += 0;
          result[2] += 0.001249553730810425;
          result[3] += 0.010710460549803643;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007140307033202429;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.7889135959339263;
          result[1] += 0;
          result[2] += 0.0054002541296060995;
          result[3] += 0.20378017789072428;
          result[4] += 0;
          result[5] += 0.0003176620076238882;
          result[6] += 0.0015883100381194409;
        } else {
          result[0] += 0.8204825209256524;
          result[1] += 0.0009847365829640572;
          result[2] += 0.0045297882816346625;
          result[3] += 0.17341211225997047;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005908419497784342;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.4695121951219512;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5304878048780488;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0031645569620253164;
          result[1] += 0.015822784810126583;
          result[2] += 0;
          result[3] += 0.9810126582278481;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.999862315847446;
          result[1] += 0;
          result[2] += 0.00013768415255404102;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9956885620086229;
          result[1] += 0;
          result[2] += 0.003550595992898808;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000760841998478316;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9979716024340771;
          result[5] += 0.002028397565922921;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.5756748559296331;
          result[1] += 0.001061571125265393;
          result[2] += 0.006369426751592358;
          result[3] += 0.415984228086139;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009099181073703368;
        } else {
          result[0] += 0.7259702575262967;
          result[1] += 0.001632208922742111;
          result[2] += 0.007254261878853826;
          result[3] += 0.26423648893725066;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009067827348567283;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0.07530581039755353;
          result[1] += 0.005351681957186545;
          result[2] += 0.012232415902140675;
          result[3] += 0.9059633027522936;
          result[4] += 0;
          result[5] += 0.0011467889908256884;
          result[6] += 0;
        } else {
          result[0] += 0.1875;
          result[1] += 0.8125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f800000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0.0009422110552763819;
          result[2] += 0;
          result[3] += 0.9984296482412061;
          result[4] += 0;
          result[5] += 0.000628140703517588;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0.6363636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9944507915782602;
          result[1] += 0.0011424840868287907;
          result[2] += 0.003427452260486372;
          result[3] += 0.00032642402480822597;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006528480496164519;
        } else {
          result[0] += 0.9988832687380936;
          result[1] += 0;
          result[2] += 0.0008539709649871904;
          result[3] += 0.0002627602969191355;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
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
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.19699248120300752;
          result[1] += 0;
          result[2] += 0.0007518796992481203;
          result[3] += 0.8022556390977443;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979581419091373;
          result[1] += 0;
          result[2] += 0.002041858090862685;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9898360655737705;
          result[1] += 0;
          result[2] += 0.006885245901639345;
          result[3] += 0.0013114754098360656;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019672131147540984;
        } else {
          result[0] += 0.9607250755287009;
          result[1] += 0;
          result[2] += 0.03927492447129909;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9881516587677726;
          result[1] += 0;
          result[2] += 0.011848341232227487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9104477611940298;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.08955223880597014;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9702970297029703;
          result[1] += 0;
          result[2] += 0.0297029702970297;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9996573777980813;
          result[1] += 0;
          result[2] += 0.00034262220191868436;
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x42320000))) ) ) {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5975632614807873;
          result[1] += 0.0018744142455482664;
          result[2] += 0.0039362699156513595;
          result[3] += 0.30121836925960643;
          result[4] += 0.09297094657919401;
          result[5] += 0.0003748828491096533;
          result[6] += 0.0020618556701030933;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.18791722296395194;
          result[1] += 0.004672897196261682;
          result[2] += 0.008678237650200267;
          result[3] += 0.39886515353805074;
          result[4] += 0.3998664886515354;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8126768534238823;
          result[1] += 0.00207508017355216;
          result[2] += 0.007545746085644218;
          result[3] += 0.1588379551028108;
          result[4] += 0.017921146953405017;
          result[5] += 0.00018864365214110544;
          result[6] += 0.0007545746085644218;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.023255813953488372;
          result[2] += 0;
          result[3] += 0.9627906976744186;
          result[4] += 0.004651162790697674;
          result[5] += 0.009302325581395349;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9986038394415359;
          result[4] += 0.0003490401396160559;
          result[5] += 0.0010471204188481679;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
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
          result[2] += 0.88;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.12;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0.014227642276422764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.983739837398374;
          result[5] += 0.0020325203252032522;
          result[6] += 0;
        } else {
          result[0] += 0.0023961661341853034;
          result[1] += 0.001597444089456869;
          result[2] += 0;
          result[3] += 0.9952076677316294;
          result[4] += 0;
          result[5] += 0.0007987220447284345;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
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
          result[2] += 0.04060913705583756;
          result[3] += 0;
          result[4] += 0.9593908629441624;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.004662004662004662;
          result[1] += 0.000777000777000777;
          result[2] += 0.003108003108003108;
          result[3] += 0;
          result[4] += 0.9906759906759907;
          result[5] += 0.000777000777000777;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0015690376569037657;
          result[2] += 0.0010460251046025104;
          result[3] += 0.9973849372384938;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42820000))) ) ) {
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
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.964;
          result[1] += 0.036;
          result[2] += 0;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0.43478260869565216;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5652173913043478;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08870967741935484;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9112903225806451;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0.9979523182682464;
          result[1] += 0.0006947491589878602;
          result[2] += 0.0008775778850372972;
          result[3] += 0.0001828287260494369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00029252596167909906;
        } else {
          result[0] += 0.10526315789473684;
          result[1] += 0;
          result[2] += 0.5921052631578947;
          result[3] += 0.3026315789473684;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0.8394062078272605;
          result[1] += 0;
          result[2] += 0.004588394062078272;
          result[3] += 0.15411605937921727;
          result[4] += 0;
          result[5] += 0.0005398110661268556;
          result[6] += 0.001349527665317139;
        } else {
          result[0] += 0.5319745699326851;
          result[1] += 0;
          result[2] += 0.002617801047120419;
          result[3] += 0.46540762902019445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43750000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9860335195530726;
          result[1] += 0;
          result[2] += 0.013966480446927373;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994989400655232;
          result[1] += 0;
          result[2] += 0.00034688764694546155;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015417228753131625;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0.5551123241654419;
          result[1] += 0;
          result[2] += 0.00881797186647071;
          result[3] += 0.3884106655469241;
          result[4] += 0.04534956959899222;
          result[5] += 0.0010497585555322275;
          result[6] += 0.001259710266638673;
        } else {
          result[0] += 0.497015994270709;
          result[1] += 0.0038195273334924802;
          result[2] += 0.0167104320840296;
          result[3] += 0.3898305084745763;
          result[4] += 0.0907137741704464;
          result[5] += 0.00023872045834328001;
          result[6] += 0.0016710432084029601;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.0008077544426494346;
          result[1] += 0;
          result[2] += 0.0024232633279483036;
          result[3] += 0.7455573505654282;
          result[4] += 0.25121163166397414;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7701654601861427;
          result[1] += 0;
          result[2] += 0.001034126163391934;
          result[3] += 0.2282833505687694;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000517063081695967;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3032258064516129;
          result[1] += 0;
          result[2] += 0.01935483870967742;
          result[3] += 0.6774193548387096;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.002012072434607646;
          result[1] += 0.03621730382293763;
          result[2] += 0;
          result[3] += 0.9617706237424547;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014760147601476014;
          result[2] += 0;
          result[3] += 0.985239852398524;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42fb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10040160642570281;
          result[4] += 0.8995983935742972;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.14634146341463414;
          result[2] += 0;
          result[3] += 0.2682926829268293;
          result[4] += 0.5853658536585366;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0005602240896358543;
          result[3] += 0.9977591036414566;
          result[4] += 0.0016806722689075631;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.967991169977925;
          result[1] += 0.01655629139072848;
          result[2] += 0.015452538631346581;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.9469026548672567;
          result[1] += 0;
          result[2] += 0.05309734513274336;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0.8823529411764706;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.9754306794169264;
          result[1] += 0.0009311987393001684;
          result[2] += 0.0007879373947924502;
          result[3] += 0.02259947709609255;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002507073528885069;
        } else {
          result[0] += 0.024896265560165977;
          result[1] += 0;
          result[2] += 0.018257261410788386;
          result[3] += 0.8481327800829876;
          result[4] += 0.10539419087136931;
          result[5] += 0.003319502074688797;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.44664967225054625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5533503277494537;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9784382284382286;
          result[1] += 0;
          result[2] += 0.015151515151515154;
          result[3] += 0.0008741258741258742;
          result[4] += 0.00407925407925408;
          result[5] += 0;
          result[6] += 0.0014568764568764572;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0.9902200488997555;
          result[1] += 0;
          result[2] += 0.004889975550122249;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004889975550122249;
        } else {
          result[0] += 0.9987113402061856;
          result[1] += 0;
          result[2] += 0.001288659793814433;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994925918408768;
          result[1] += 0;
          result[2] += 0.0005074081591231987;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.8852746396571874;
          result[1] += 0.0017530190884300742;
          result[2] += 0.006038176860148034;
          result[3] += 0.10323334631865992;
          result[4] += 0;
          result[5] += 0.001363459291001169;
          result[6] += 0.0023373587845734326;
        } else {
          result[0] += 0.9471830985915493;
          result[1] += 0;
          result[2] += 0.0009603072983354673;
          result[3] += 0.05121638924455826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006402048655569782;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.13133874239350915;
          result[1] += 0.004056795131845843;
          result[2] += 0.0025354969574036515;
          result[3] += 0.6004056795131847;
          result[4] += 0.2611561866125761;
          result[5] += 0.0005070993914807303;
          result[6] += 0;
        } else {
          result[0] += 0.1017146178436501;
          result[1] += 0.0026155187445510027;
          result[2] += 0.012786980528916013;
          result[3] += 0.5062481836675385;
          result[4] += 0.37663469921534437;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0.011538461538461539;
          result[2] += 0;
          result[3] += 0.9615384615384616;
          result[4] += 0.019230769230769232;
          result[5] += 0.007692307692307693;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9988880652335063;
          result[4] += 0;
          result[5] += 0.001111934766493699;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
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
          result[2] += 0.0015360983102918587;
          result[3] += 0;
          result[4] += 0.9984639016897081;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9874371859296482;
          result[1] += 0;
          result[2] += 0.011306532663316583;
          result[3] += 0.001256281407035176;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.07763300760043432;
          result[1] += 0.007057546145494028;
          result[2] += 0.002171552660152009;
          result[3] += 0.9125950054288816;
          result[4] += 0.0005428881650380022;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.17262512768130744;
          result[4] += 0.8273748723186926;
          result[5] += 0;
          result[6] += 0;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x45ad0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.10377358490566038;
          result[2] += 0;
          result[3] += 0.8962264150943396;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9992913903932783;
          result[1] += 0;
          result[2] += 0.00040491977526952474;
          result[3] += 0;
          result[4] += 0.00020245988763476237;
          result[5] += 0;
          result[6] += 0.00010122994381738119;
        } else {
          result[0] += 0.9093525179856116;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09064748201438849;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.0011185682326621924;
          result[1] += 0.003355704697986577;
          result[2] += 0;
          result[3] += 0.24049217002237136;
          result[4] += 0.7527964205816555;
          result[5] += 0.0022371364653243847;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0.7719298245614035;
          result[4] += 0.07017543859649122;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.016034206306787813;
          result[1] += 0.006413682522715126;
          result[2] += 0.009620523784072688;
          result[3] += 0.8818813468733298;
          result[4] += 0.08284339925173703;
          result[5] += 0.003206841261357563;
          result[6] += 0;
        } else {
          result[0] += 0.9148627987446687;
          result[1] += 0;
          result[2] += 0.0032187977790295317;
          result[3] += 0.0811137040315442;
          result[4] += 0;
          result[5] += 8.046994447573829e-05;
          result[6] += 0.0007242295002816447;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.3267822736030829;
          result[1] += 0;
          result[2] += 0.004238921001926782;
          result[3] += 0.6689788053949903;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0003664345914254306;
          result[2] += 0;
          result[3] += 0.9974349578600221;
          result[4] += 0.001099303774276292;
          result[5] += 0.001099303774276292;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9986807387862797;
          result[5] += 0.0013192612137203166;
          result[6] += 0;
        } else {
          result[0] += 0.6590909090909092;
          result[1] += 0;
          result[2] += 0.3068181818181819;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.034090909090909095;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9986541774332472;
          result[1] += 0.0002691645133505599;
          result[2] += 0.0007536606373815676;
          result[3] += 0.0002691645133505599;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.383290267011197e-05;
        } else {
          result[0] += 0.9434276206322796;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.056572379367720464;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9906015037593985;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009398496240601503;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.9865067466266867;
          result[1] += 0.004997501249375313;
          result[2] += 0.006496751624187906;
          result[3] += 0.0007496251874062968;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012493753123438282;
        } else {
          result[0] += 0.8725905936777179;
          result[1] += 0;
          result[2] += 0.004047802621434078;
          result[3] += 0.12336160370084812;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0.8168214654282766;
          result[1] += 0;
          result[2] += 0.007997936016511867;
          result[3] += 0.17363261093911248;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015479876160990713;
        } else {
          result[0] += 0.46501425751261244;
          result[1] += 0;
          result[2] += 0.004386926957666155;
          result[3] += 0.5305988155297214;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9990601503759399;
          result[1] += 0;
          result[2] += 0.0008928571428571428;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.699248120300752e-05;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9176672384219555;
          result[1] += 0.0018377848566527813;
          result[2] += 0.0039206076941926005;
          result[3] += 0.07547169811320756;
          result[4] += 0;
          result[5] += 0.00024503798088703753;
          result[6] += 0.0008576329331046313;
        } else {
          result[0] += 0.17048497470990776;
          result[1] += 0.002975304968759298;
          result[2] += 0.019041951800059506;
          result[3] += 0.7893484082118417;
          result[4] += 0.016661707825052066;
          result[5] += 0.001487652484379649;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0026711185308848084;
          result[2] += 0;
          result[3] += 0.9959933222036729;
          result[4] += 0.0010016694490818032;
          result[5] += 0.00033388981636060105;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04755043227665706;
          result[3] += 0;
          result[4] += 0.952449567723343;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.00145985401459854;
          result[1] += 0.016058394160583942;
          result[2] += 0;
          result[3] += 0.04525547445255475;
          result[4] += 0.9372262773722628;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3903177004538578;
          result[4] += 0.6096822995461422;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9854014598540146;
          result[1] += 0;
          result[2] += 0.010948905109489052;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0036496350364963502;
        } else {
          result[0] += 0.9998040240397178;
          result[1] += 0;
          result[2] += 0.00019597596028220538;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9991007194244604;
          result[1] += 0;
          result[2] += 0.0008992805755395684;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.01671530910055718;
          result[1] += 0.006367736800212258;
          result[2] += 0.010082249933669409;
          result[3] += 0.9644468028654816;
          result[4] += 0.0015919342000530645;
          result[5] += 0.0007959671000265323;
          result[6] += 0;
        } else {
          result[0] += 0.7122362869198312;
          result[1] += 0;
          result[2] += 0.002426160337552743;
          result[3] += 0.28470464135021095;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006329113924050633;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.6554898093359631;
          result[1] += 0;
          result[2] += 0.027613412228796836;
          result[3] += 0;
          result[4] += 0.3129520052596975;
          result[5] += 0.0006574621959237343;
          result[6] += 0.0032873109796186712;
        } else {
          result[0] += 0.44017094017094016;
          result[1] += 0;
          result[2] += 0.010683760683760684;
          result[3] += 0.01282051282051282;
          result[4] += 0.5299145299145299;
          result[5] += 0;
          result[6] += 0.00641025641025641;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0.875;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.9570552147239264;
          result[1] += 0;
          result[2] += 0.04294478527607362;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.003076923076923077;
          result[1] += 0.043076923076923075;
          result[2] += 0;
          result[3] += 0.11692307692307692;
          result[4] += 0.8369230769230769;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07778369738945126;
          result[1] += 0.0026638252530633995;
          result[2] += 0.003196590303676079;
          result[3] += 0.915290356952584;
          result[4] += 0.0010655301012253598;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.762589928057554;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.23741007194244604;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.16666666666666669;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.16666666666666669;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.10107655502392345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8965311004784688;
          result[4] += 0.0017942583732057417;
          result[5] += 0.0005980861244019139;
          result[6] += 0;
        } else {
          result[0] += 0.23923444976076555;
          result[1] += 0;
          result[2] += 0.1339712918660287;
          result[3] += 0.009569377990430622;
          result[4] += 0.6028708133971292;
          result[5] += 0.014354066985645933;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9594287014908388;
          result[1] += 0.0006828269033799933;
          result[2] += 0.0021053829520883125;
          result[3] += 0.03727096847615797;
          result[4] += 0;
          result[5] += 5.690224194833277e-05;
          result[6] += 0.0004552179355866622;
        } else {
          result[0] += 0.8628391705314782;
          result[1] += 0;
          result[2] += 0.0023455408070792686;
          result[3] += 0.1342289034596727;
          result[4] += 0;
          result[5] += 5.3307745615437925e-05;
          result[6] += 0.0005330774561543792;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.35294117647058826;
          result[2] += 0;
          result[3] += 0.6470588235294118;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0040609137055837565;
          result[1] += 0.005076142131979695;
          result[2] += 0.006598984771573604;
          result[3] += 0.984263959390863;
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
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.9285714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9956875898418783;
          result[1] += 0;
          result[2] += 0.003833253473885961;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004791566842357451;
        } else {
          result[0] += 0.9997522299306244;
          result[1] += 0;
          result[2] += 0.0002477700693756194;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0.002574002574002574;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9974259974259975;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4032610091154192;
          result[1] += 0.002054178970342791;
          result[2] += 0.007574784953139042;
          result[3] += 0.586211323661574;
          result[4] += 0;
          result[5] += 0.0005135447425856978;
          result[6] += 0.0003851585569392733;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.7978021978021979;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2021978021978022;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9882385120350109;
          result[1] += 0;
          result[2] += 0.004923413566739606;
          result[3] += 0.005196936542669584;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016411378555798686;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006371455877668047;
          result[2] += 0;
          result[3] += 0.9980885632366996;
          result[4] += 0.0006371455877668047;
          result[5] += 0.0006371455877668047;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004;
          result[2] += 0.006222222222222222;
          result[3] += 0;
          result[4] += 0.9871111111111112;
          result[5] += 0.0026666666666666666;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9915966386554622;
          result[1] += 0;
          result[2] += 0.0070028011204481795;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014005602240896359;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9956709956709957;
          result[1] += 0;
          result[2] += 0.004329004329004329;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999569299681281;
          result[1] += 0;
          result[2] += 4.3070031871823586e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.08456659619450317;
          result[1] += 0.02536997885835095;
          result[2] += 0.039112050739957716;
          result[3] += 0.8509513742071881;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5800974689514228;
          result[1] += 0;
          result[2] += 0.0037729916679767332;
          result[3] += 0.41550070743593776;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006288319446627889;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.8044943820224719;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19550561797752808;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9879612666841142;
          result[1] += 0;
          result[2] += 0.005234231876472128;
          result[3] += 0.005757655064119341;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010468463752944257;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.9637462235649547;
          result[1] += 0;
          result[2] += 0.03625377643504532;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.006825938566552901;
          result[1] += 0.030716723549488054;
          result[2] += 0;
          result[3] += 0.11945392491467577;
          result[4] += 0.8430034129692833;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08587987355110643;
          result[1] += 0.005795574288724974;
          result[2] += 0.0026343519494204425;
          result[3] += 0.9051633298208641;
          result[4] += 0.0005268703898840885;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.8521739130434782;
          result[1] += 0;
          result[2] += 0.09565217391304348;
          result[3] += 0.05217391304347826;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12598425196850394;
          result[4] += 0.8740157480314961;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.3054662379421222;
          result[1] += 0.003215434083601286;
          result[2] += 0;
          result[3] += 0.6720257234726688;
          result[4] += 0.00964630225080386;
          result[5] += 0.00964630225080386;
          result[6] += 0;
        } else {
          result[0] += 0.9982941543582275;
          result[1] += 0.0003744539213646765;
          result[2] += 0.0006240898689411275;
          result[3] += 0.0007073018514666112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.6138739309471017;
          result[1] += 0;
          result[2] += 0.0031675641431738997;
          result[3] += 0.37979094076655057;
          result[4] += 0.00063351282863478;
          result[5] += 0.0009502692429521699;
          result[6] += 0.0015837820715869499;
        } else {
          result[0] += 0.8771812080536913;
          result[1] += 0;
          result[2] += 0.015436241610738255;
          result[3] += 0.022818791946308724;
          result[4] += 0.08456375838926175;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.36166756903086084;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6383324309691392;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8084415584415584;
          result[1] += 0;
          result[2] += 0.027597402597402596;
          result[3] += 0;
          result[4] += 0.15665584415584416;
          result[5] += 0;
          result[6] += 0.007305194805194805;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.6944537253591714;
          result[1] += 0;
          result[2] += 0.0013364517206815904;
          result[3] += 0.303374540594721;
          result[4] += 0.000835282325425994;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0020325203252032522;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9979674796747967;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0;
          result[1] += 0.014285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9857142857142858;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0007127583749109052;
          result[1] += 0.00023758612497030174;
          result[2] += 0.0011879306248515087;
          result[3] += 0.7431693989071039;
          result[4] += 0.2539795675932526;
          result[5] += 0.0007127583749109052;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 0.028;
          result[2] += 0;
          result[3] += 0.972;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9970564721273348;
          result[1] += 0.0004360782033578022;
          result[2] += 0.0022530707173486447;
          result[3] += 7.26797005596337e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018169925139908423;
        } else {
          result[0] += 0.23255813953488372;
          result[1] += 0;
          result[2] += 0.05813953488372093;
          result[3] += 0.7093023255813954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2629700142789148;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7370299857210852;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9914150384843103;
          result[1] += 0;
          result[2] += 0.006216696269982239;
          result[3] += 0.0005920663114268799;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017761989342806397;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00424929178470255;
          result[3] += 0;
          result[4] += 0.9957507082152974;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9920437593237196;
          result[1] += 0;
          result[2] += 0.007458975634012929;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004972650422675286;
        } else {
          result[0] += 0.9999586263963591;
          result[1] += 0;
          result[2] += 4.137360364087712e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8981966259453171;
          result[1] += 0.0023269342641070393;
          result[2] += 0.0023269342641070393;
          result[3] += 0.09540430482838862;
          result[4] += 0;
          result[5] += 0.0005817335660267598;
          result[6] += 0.0011634671320535197;
        } else {
          result[0] += 0;
          result[1] += 0.0027183146449201497;
          result[2] += 0.00781515460414543;
          result[3] += 0.9571865443425076;
          result[4] += 0.032279986408426775;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.814385150812065;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18561484918793503;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9867680180180181;
          result[1] += 0;
          result[2] += 0.00563063063063063;
          result[3] += 0.00563063063063063;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019707207207207205;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.0003417634996582365;
          result[1] += 0;
          result[2] += 0.000683526999316473;
          result[3] += 0.9969241285030759;
          result[4] += 0.001367053998632946;
          result[5] += 0.000683526999316473;
          result[6] += 0;
        } else {
          result[0] += 0.9815891472868217;
          result[1] += 0.006782945736434108;
          result[2] += 0.011627906976744186;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.23529411764705882;
          result[1] += 0.7647058823529411;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.256;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.034666666666666665;
          result[4] += 0.7066666666666667;
          result[5] += 0.0026666666666666666;
          result[6] += 0;
        } else {
          result[0] += 0.1223021582733813;
          result[1] += 0;
          result[2] += 0.06954436450839328;
          result[3] += 0.7673860911270983;
          result[4] += 0.03117505995203837;
          result[5] += 0.009592326139088728;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04219409282700422;
          result[4] += 0.9578059071729957;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0018018018018018018;
          result[4] += 0.9981981981981982;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x44f6b000))) ) ) {
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
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 0.20833333333333334;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2916666666666667;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009416195856873823;
          result[2] += 0.003138731952291274;
          result[3] += 0.9956057752667922;
          result[4] += 0;
          result[5] += 0.00031387319522912746;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990109555690809;
          result[1] += 7.608034083992696e-05;
          result[2] += 0.0009129640900791236;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0.9832703723691312;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01672962763086886;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9224812454626119;
          result[1] += 0.0008066467693796886;
          result[2] += 0.004920545293216101;
          result[3] += 0.07090425102847463;
          result[4] += 0;
          result[5] += 8.066467693796887e-05;
          result[6] += 0.0008066467693796886;
        } else {
          result[0] += 0.5039981185324554;
          result[1] += 0;
          result[2] += 0.0037629350893697085;
          result[3] += 0.492238946378175;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.4838709677419355;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5161290322580645;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006024096385542169;
          result[1] += 0.03614457831325301;
          result[2] += 0;
          result[3] += 0.9578313253012049;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.0030263726761781237;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9943795936013835;
          result[4] += 0.00216169476869866;
          result[5] += 0.00043233895373973193;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.0051813471502590676;
          result[1] += 0;
          result[2] += 0.09844559585492228;
          result[3] += 0;
          result[4] += 0.8963730569948186;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020188425302826378;
          result[3] += 0;
          result[4] += 0.9784656796769852;
          result[5] += 0.0013458950201884253;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 0.7388663967611336;
          result[1] += 0;
          result[2] += 0.024291497975708502;
          result[3] += 0.23684210526315788;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9958009049773756;
          result[1] += 0.00047058823529411766;
          result[2] += 0.0019547511312217195;
          result[3] += 0.0015203619909502262;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000253393665158371;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4228913337193592;
          result[1] += 0;
          result[2] += 0.006562439683458792;
          result[3] += 0.5682300714147848;
          result[4] += 0;
          result[5] += 0.0009650646593321753;
          result[6] += 0.0013510905230650454;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0.9090909090909091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008;
          result[1] += 0.032;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.96;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9351851851851852;
          result[1] += 0.06481481481481481;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.926829268292683;
          result[1] += 0;
          result[2] += 0.07317073170731707;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02512562814070352;
          result[3] += 0.9748743718592965;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12272727272727273;
          result[4] += 0.8772727272727273;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9929939280709948;
          result[1] += 0;
          result[2] += 0.006071929005137786;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009341429238673517;
        } else {
          result[0] += 0.9997518713039163;
          result[1] += 0;
          result[2] += 0.0002481286960837021;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.035110533159947985;
          result[1] += 0.005635023840485479;
          result[2] += 0.014304291287386216;
          result[3] += 0.6675335934113568;
          result[4] += 0.2761161681837885;
          result[5] += 0.0013003901170351106;
          result[6] += 0;
        } else {
          result[0] += 0.7479366928828042;
          result[1] += 0;
          result[2] += 0.0038838722206039423;
          result[3] += 0.24730556364695602;
          result[4] += 0;
          result[5] += 9.709680551509856e-05;
          result[6] += 0.0007767744441207885;
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
          result[0] += 0.006791171477079796;
          result[1] += 0;
          result[2] += 0.02631578947368421;
          result[3] += 0.966044142614601;
          result[4] += 0;
          result[5] += 0.0008488964346349745;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0.00625;
          result[1] += 0.0625;
          result[2] += 0;
          result[3] += 0.93125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18538324420677363;
          result[1] += 0.011586452762923352;
          result[2] += 0;
          result[3] += 0.803030303030303;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.8846153846153846;
          result[1] += 0;
          result[2] += 0.11538461538461539;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011450381679389313;
          result[3] += 0.9885496183206107;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9466442439993885;
          result[1] += 0.0006115272894052897;
          result[2] += 0.0019874636905671916;
          result[3] += 0.049380828619477145;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013759364011619018;
        } else {
          result[0] += 0.9986996098829649;
          result[1] += 0.00022615480296262792;
          result[2] += 0.00022615480296262792;
          result[3] += 0.0006784644088878838;
          result[4] += 0.00016961610222197094;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9954954954954955;
          result[4] += 0;
          result[5] += 0.0045045045045045045;
          result[6] += 0;
        } else {
          result[0] += 0.9970690114575007;
          result[1] += 0;
          result[2] += 0.002398081534772182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005329070077271516;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6222222222222222;
          result[4] += 0.37777777777777777;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.15518744551002617;
          result[1] += 0.004940424295263005;
          result[2] += 0.003777971519907004;
          result[3] += 0.7686718977041558;
          result[4] += 0.06655042138913107;
          result[5] += 0.0008718395815170009;
          result[6] += 0;
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
          result[0] += 0.25609756097560976;
          result[1] += 0;
          result[2] += 0.21341463414634146;
          result[3] += 0.5304878048780488;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.46296296296296297;
          result[3] += 0;
          result[4] += 0.2037037037037037;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.15396659707724425;
          result[1] += 0;
          result[2] += 0.0013048016701461378;
          result[3] += 0.843945720250522;
          result[4] += 0;
          result[5] += 0.0007828810020876827;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.9935921598190728;
          result[1] += 0;
          result[2] += 0.003392385978137957;
          result[3] += 0.0022615906520919715;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007538635506973238;
        } else {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0.42857142857142855;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.989010989010989;
          result[5] += 0.01098901098901099;
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
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.05542590431738623;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9428238039673279;
          result[4] += 0;
          result[5] += 0.001750291715285881;
          result[6] += 0;
        } else {
          result[0] += 0.15653495440729484;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8434650455927052;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0.582089552238806;
          result[1] += 0.07462686567164178;
          result[2] += 0.31343283582089554;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.029850746268656716;
          result[6] += 0;
        } else {
          result[0] += 0.348292029470864;
          result[1] += 0.0026791694574681848;
          result[2] += 0.0013395847287340924;
          result[3] += 0.6470194239785666;
          result[4] += 0;
          result[5] += 0.0006697923643670462;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0.5925925925925926;
          result[1] += 0.015432098765432098;
          result[2] += 0;
          result[3] += 0.39197530864197533;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.026143790849673203;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9738562091503268;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0.9753466872110941;
          result[1] += 0;
          result[2] += 0.021571648690292763;
          result[3] += 0.0030816640986132517;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979692708532895;
          result[1] += 0.0005364190198858194;
          result[2] += 0.001072838039771639;
          result[3] += 0.00015326257711023412;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002682095099429097;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          result[2] += 0.004016064257028112;
          result[3] += 0.995366079703429;
          result[4] += 0;
          result[5] += 0.0006178560395427865;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 0.9934915773353752;
          result[1] += 0;
          result[2] += 0.004211332312404288;
          result[3] += 0.0019142419601837673;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00038284839203675346;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.3333333333333333;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44668000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9932137663596704;
          result[1] += 0;
          result[2] += 0.0058167716917111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009694619486185168;
        } else {
          result[0] += 0.9997488488907493;
          result[1] += 0;
          result[2] += 0.00012557555462536628;
          result[3] += 0;
          result[4] += 0.00012557555462536628;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02836637047163363;
          result[1] += 0.008544087491455913;
          result[2] += 0.017429938482570063;
          result[3] += 0.9439507860560492;
          result[4] += 0;
          result[5] += 0.0017088174982911825;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9841289834991812;
          result[1] += 0;
          result[2] += 0.0055422597304446404;
          result[3] += 0.009321073183020532;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001007683587353571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011737089201877935;
          result[3] += 0.9988262910798122;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0.1460885956644675;
          result[1] += 0.013195098963242224;
          result[2] += 0;
          result[3] += 0.8407163053722903;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2727272727272727;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7272727272727273;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.013888888888888888;
          result[1] += 0.06944444444444445;
          result[2] += 0;
          result[3] += 0.9166666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008130081300813009;
          result[3] += 0.991869918699187;
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
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41480000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.14098360655737704;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5901639344262295;
          result[4] += 0.26885245901639343;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9959869576122398;
          result[1] += 0;
          result[2] += 0.001254075746175069;
          result[3] += 0.0027589666415851516;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.3328671328671329;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6671328671328671;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8243243243243245;
          result[1] += 0;
          result[2] += 0.0250965250965251;
          result[3] += 0.005791505791505792;
          result[4] += 0.13899613899613902;
          result[5] += 0.005791505791505792;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.010064701653486701;
          result[1] += 0.007189072609633357;
          result[2] += 0.01509705248023005;
          result[3] += 0.723939611790079;
          result[4] += 0.2437095614665708;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7150137201097608;
          result[1] += 0;
          result[2] += 0.00862406899255194;
          result[3] += 0.2724421795374363;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003920031360250882;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.08558558558558559;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9144144144144144;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3649230769230769;
          result[1] += 0.0073846153846153844;
          result[2] += 0.016;
          result[3] += 0.6116923076923076;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.999450005499945;
          result[1] += 0;
          result[2] += 0.00043999560004399956;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010999890001099989;
        } else {
          result[0] += 0.42857142857142855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5714285714285714;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.7195340501792115;
          result[1] += 0.0035842293906810036;
          result[2] += 0.00739247311827957;
          result[3] += 0.24775985663082437;
          result[4] += 0.020161290322580645;
          result[5] += 0.00044802867383512545;
          result[6] += 0.0011200716845878136;
        } else {
          result[0] += 0.3356958762886598;
          result[1] += 0;
          result[2] += 0.0016108247422680414;
          result[3] += 0.4913015463917526;
          result[4] += 0.16978092783505158;
          result[5] += 0.0009664948453608249;
          result[6] += 0.0006443298969072166;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f800000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9990079365079365;
          result[4] += 0.00033068783068783067;
          result[5] += 0.0006613756613756613;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03431372549019608;
          result[3] += 0;
          result[4] += 0.9595588235294118;
          result[5] += 0.006127450980392157;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7871287128712872;
          result[4] += 0.21287128712871287;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006060606060606061;
          result[2] += 0;
          result[3] += 0.008484848484848486;
          result[4] += 0.9854545454545455;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.9939418416801292;
          result[1] += 0.0014539579967689823;
          result[2] += 0.0039579967689822295;
          result[3] += 0.00024232633279483036;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004038772213247173;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.9431311329170383;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05686886708296164;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9959315765141008;
          result[1] += 0;
          result[2] += 0.0008321775312066575;
          result[3] += 0.003236245954692557;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.005706134094151213;
          result[1] += 0;
          result[2] += 0.006062767475035664;
          result[3] += 0.9882310984308131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.83765752409192;
          result[1] += 0;
          result[2] += 0.01223128243143069;
          result[3] += 0.14899925871015568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001111934766493699;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011295180722891566;
          result[1] += 0.00037650602409638556;
          result[2] += 0.007906626506024096;
          result[3] += 0.870105421686747;
          result[4] += 0.11746987951807229;
          result[5] += 0.0030120481927710845;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9904292550532104;
          result[1] += 0.0007142346975216056;
          result[2] += 0.002178415827440897;
          result[3] += 0.0064995357474466105;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001785586743804014;
        } else {
          result[0] += 0.657571936260461;
          result[1] += 0;
          result[2] += 0.004814857273873668;
          result[3] += 0.33612289349994273;
          result[4] += 0;
          result[5] += 0.000114639458901754;
          result[6] += 0.001375673506821048;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40d00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
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
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.3953488372093023;
          result[1] += 0;
          result[2] += 0.026578073089700997;
          result[3] += 0.5780730897009967;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.019908116385911178;
          result[2] += 0;
          result[3] += 0.9800918836140888;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011627906976744186;
          result[1] += 0.09302325581395349;
          result[2] += 0;
          result[3] += 0.8953488372093024;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
