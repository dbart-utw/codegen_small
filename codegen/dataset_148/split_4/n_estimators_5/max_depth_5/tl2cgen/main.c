
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += 0.9454545454545454;
            result[1] += 0;
            result[2] += 0.05454545454545454;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
            result[0] += 0.01722158438576349;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9758897818599311;
            result[4] += 0.004592422502870264;
            result[5] += 0.002296211251435132;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004570383912248629;
            result[2] += 0;
            result[3] += 0.5712979890310786;
            result[4] += 0.42413162705667273;
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
            result[0] += 0.9735202492211839;
            result[1] += 0;
            result[2] += 0.004672897196261682;
            result[3] += 0.02118380062305296;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0006230529595015577;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014308426073131956;
            result[3] += 0.985691573926868;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.045454545454545456;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
            result[0] += 0.004132231404958678;
            result[1] += 0.008264462809917356;
            result[2] += 0;
            result[3] += 0.987603305785124;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0.9694599228461209;
            result[1] += 0.0008572653236176596;
            result[2] += 0.0015002143163309043;
            result[3] += 0.02786112301757394;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003214744963566224;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
            result[0] += 0.9979426690440268;
            result[1] += 0;
            result[2] += 0.0020573309559731175;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7094362497474237;
            result[1] += 0;
            result[2] += 0.0016164881794301878;
            result[3] += 0.2889472620731461;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)24) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += 0.005643919958953309;
            result[1] += 0.005643919958953309;
            result[2] += 0.018471010774756286;
            result[3] += 0.9681888147768086;
            result[4] += 0;
            result[5] += 0.002052334530528476;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += 0.9954545454545455;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004545454545454545;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.911504424778761;
            result[1] += 0;
            result[2] += 0.08849557522123894;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9880174291938998;
            result[1] += 0;
            result[2] += 0.00980392156862745;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002178649237472767;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.975609756097561;
            result[1] += 0;
            result[2] += 0.024390243902439025;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9999162093091457;
            result[1] += 0;
            result[2] += 8.37906908542461e-05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0.0032076984763432237;
            result[1] += 0.010425020048115477;
            result[2] += 0.0032076984763432237;
            result[3] += 0.9783480352846833;
            result[4] += 0;
            result[5] += 0.0048115477145148355;
            result[6] += 0;
          } else {
            result[0] += 0.995;
            result[1] += 0;
            result[2] += 0.00375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00125;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9304835924006909;
            result[1] += 0;
            result[2] += 0.008203799654576857;
            result[3] += 0.05656303972366149;
            result[4] += 0;
            result[5] += 0.0004317789291882556;
            result[6] += 0.004317789291882556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010566480774875257;
            result[3] += 0.791899031405929;
            result[4] += 0.19753448781919578;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            result[0] += 0.019099590723055934;
            result[1] += 0;
            result[2] += 0.02592087312414734;
            result[3] += 0.9508867667121419;
            result[4] += 0.004092769440654843;
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
            result[1] += 0;
            result[2] += 0.05054151624548736;
            result[3] += 0.9458483754512635;
            result[4] += 0;
            result[5] += 0.0036101083032490976;
            result[6] += 0;
          }
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-28.5) ) ) {
            result[0] += 0.3793103448275862;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6206896551724138;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1467304625199362;
            result[1] += 0.007974481658692184;
            result[2] += 0.007177033492822967;
            result[3] += 0.8381180223285486;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
            result[0] += 0;
            result[1] += 0.004098360655737705;
            result[2] += 0;
            result[3] += 0.9959016393442623;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.10526315789473684;
            result[1] += 0.3157894736842105;
            result[2] += 0;
            result[3] += 0.5789473684210527;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9923857868020305;
            result[1] += 0;
            result[2] += 0.00676818950930626;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008460236886632825;
          } else {
            result[0] += 0.9997719888274526;
            result[1] += 0;
            result[2] += 0.00022801117254745484;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)6) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.04885057471264368;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9511494252873564;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)14.5) ) ) {
            result[0] += 0.9936880072137061;
            result[1] += 0;
            result[2] += 0.005410279531109108;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0009017132551848512;
            result[6] += 0;
          } else {
            result[0] += 0.9705882352941176;
            result[1] += 0;
            result[2] += 0.01838235294117647;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.011029411764705883;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.4585079631181894;
            result[1] += 0.008801341156747695;
            result[2] += 0.008382229673093043;
            result[3] += 0.5167644593461861;
            result[4] += 0.006286672254819782;
            result[5] += 0;
            result[6] += 0.0012573344509639564;
          } else {
            result[0] += 0.6664501461513478;
            result[1] += 0.0006495615459564793;
            result[2] += 0.002923026956804157;
            result[3] += 0.31698603442676193;
            result[4] += 0.012991230919129588;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0.34738617200674543;
            result[1] += 0;
            result[2] += 0.004215851602023609;
            result[3] += 0.6429173693086004;
            result[4] += 0.005480607082630692;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6298507462686567;
            result[1] += 0;
            result[2] += 0.06567164179104477;
            result[3] += 0;
            result[4] += 0.291044776119403;
            result[5] += 0.004477611940298508;
            result[6] += 0.008955223880597015;
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
            result[1] += 0.060240963855421686;
            result[2] += 0;
            result[3] += 0.9397590361445783;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5.5) ) ) {
            result[0] += 0.006573859242072699;
            result[1] += 0;
            result[2] += 0.009280742459396751;
            result[3] += 0.5104408352668214;
            result[4] += 0.4737045630317092;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0006447453255963894;
            result[1] += 0;
            result[2] += 0.0006447453255963894;
            result[3] += 0.63571889103804;
            result[4] += 0.36299161831076726;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            result[0] += 0.9923595505617978;
            result[1] += 0;
            result[2] += 0.0031460674157303375;
            result[3] += 0.0035955056179775287;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008988764044943822;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += 0.9696969696969697;
            result[1] += 0;
            result[2] += 0.030303030303030304;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
            result[0] += 0.6858730622989179;
            result[1] += 0;
            result[2] += 0.0023398654577361806;
            result[3] += 0.2916057326703715;
            result[4] += 0.01959637320854051;
            result[5] += 0;
            result[6] += 0.0005849663644340451;
          } else {
            result[0] += 0.11472448057813911;
            result[1] += 0.007226738934056007;
            result[2] += 0;
            result[3] += 0.5130984643179766;
            result[4] += 0.36495031616982837;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)96.5) ) ) {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9615384615384616;
            result[1] += 0;
            result[2] += 0.026755852842809364;
            result[3] += 0;
            result[4] += 0.0016722408026755853;
            result[5] += 0.005016722408026756;
            result[6] += 0.005016722408026756;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
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
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.4;
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
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.9905741216795202;
            result[1] += 0;
            result[2] += 0.009425878320479864;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9996480938416422;
            result[1] += 0;
            result[2] += 0.00035190615835777126;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.7121917571995171;
            result[1] += 0.0015519917227108122;
            result[2] += 0.007070184514571478;
            result[3] += 0.2450422486635627;
            result[4] += 0.032591826176927054;
            result[5] += 0.0006897740989825832;
            result[6] += 0.000862217623728229;
          } else {
            result[0] += 0;
            result[1] += 0.0011049723756906078;
            result[2] += 0;
            result[3] += 0.9966850828729282;
            result[4] += 0.0011049723756906078;
            result[5] += 0.0011049723756906078;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
            result[0] += 0.990521327014218;
            result[1] += 0;
            result[2] += 0.00631911532385466;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00315955766192733;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9957081545064378;
            result[5] += 0.004291845493562232;
            result[6] += 0;
          }
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.056768558951965066;
            result[2] += 0;
            result[3] += 0.9432314410480349;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.8809523809523809;
            result[1] += 0;
            result[2] += 0.11904761904761904;
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
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0.0006583278472679394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9980250164581962;
            result[4] += 0.0003291639236339697;
            result[5] += 0.0009874917709019092;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18840579710144928;
            result[3] += 0;
            result[4] += 0.782608695652174;
            result[5] += 0.028985507246376812;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.24390243902439024;
            result[4] += 0.7560975609756098;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.008928571428571428;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9910714285714286;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += 0.995825448068574;
            result[1] += 0.0009462317711232327;
            result[2] += 0.0030056773906267393;
            result[3] += 0.00016698207725704108;
            result[4] += 0;
            result[5] += 0;
            result[6] += 5.566069241901369e-05;
          } else {
            result[0] += 0.9358288770053476;
            result[1] += 0;
            result[2] += 0.03208556149732621;
            result[3] += 0.03208556149732621;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
            result[0] += 0.999791013584117;
            result[1] += 0;
            result[2] += 0.0001044932079414838;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0001044932079414838;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
            result[0] += 0;
            result[1] += 1;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            result[0] += 0.8412698412698413;
            result[1] += 0;
            result[2] += 0.0873015873015873;
            result[3] += 0.07142857142857142;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.35294117647058826;
            result[1] += 0;
            result[2] += 0.4411764705882353;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0.08823529411764706;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9032258064516129;
            result[1] += 0;
            result[2] += 0.07834101382488479;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.018433179723502304;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
            result[0] += 0.059113300492610835;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9408866995073891;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            result[0] += 0.21795487277964473;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7820451272203552;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)193) ) ) {
            result[0] += 0.9935979513444302;
            result[1] += 0;
            result[2] += 0.004694835680751174;
            result[3] += 0.0012804097311139564;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0004268032437046522;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
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
