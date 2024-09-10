
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.9802955665024631;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.019704433497536946;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9867256637168141;
          result[4] += 0.0029498525073746312;
          result[5] += 0.01032448377581121;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.855072463768116;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14492753623188406;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9981077778215792;
          result[1] += 0.0007490046122915598;
          result[2] += 0.0009066897938266251;
          result[3] += 0.00011826388615129894;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011826388615129894;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.008431703204047219;
          result[2] += 0.005059021922428331;
          result[3] += 0.9042158516020237;
          result[4] += 0.08229342327150085;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008766437069505322;
          result[3] += 0.07075767063243582;
          result[4] += 0.9204758922980588;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.9880952380952381;
          result[1] += 0.0007936507936507937;
          result[2] += 0.011111111111111112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987775061124694;
          result[1] += 0;
          result[2] += 0.0012224938875305623;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.09407216494845361;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9059278350515464;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9550173010380623;
          result[1] += 0;
          result[2] += 0.03633217993079585;
          result[3] += 0;
          result[4] += 0.00865051903114187;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
          result[0] += 0.9874720357941834;
          result[1] += 0;
          result[2] += 0.0058165548098434005;
          result[3] += 0.004026845637583893;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0026845637583892616;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1574.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9981949458483754;
          result[1] += 0;
          result[2] += 0.0018050541516245488;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9878934624697336;
          result[1] += 0;
          result[2] += 0.009685230024213076;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002421307506053269;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997425334706488;
          result[1] += 0;
          result[2] += 0.00025746652935118434;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0.010989010989010992;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9780219780219781;
          result[5] += 0.010989010989010992;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009575923392612859;
          result[2] += 0.0047879616963064295;
          result[3] += 0.9839261285909713;
          result[4] += 0;
          result[5] += 0.001709986320109439;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9876543209876544;
          result[1] += 0.008230452674897122;
          result[2] += 0.004115226337448561;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9978139421909158;
          result[1] += 0;
          result[2] += 0.0017002671848433328;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004857906242409522;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1343645738550197;
          result[1] += 0;
          result[2] += 0.007885956930542918;
          result[3] += 0.8574461631786473;
          result[4] += 0;
          result[5] += 0.00030330603579011223;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.09129106187929717;
          result[1] += 0.004965622612681436;
          result[2] += 0.0030557677616501145;
          result[3] += 0.32505729564553093;
          result[4] += 0.5756302521008403;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8635644191199747;
          result[1] += 0;
          result[2] += 0.011079455523899969;
          result[3] += 0.07755618866729978;
          result[4] += 0.045900601456157014;
          result[5] += 0.0012662234884457107;
          result[6] += 0.0006331117442228553;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
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
          result[4] += 0.9985815602836879;
          result[5] += 0.0014184397163120568;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.06312935708752905;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9368706429124709;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7460317460317462;
          result[1] += 0;
          result[2] += 0.20634920634920637;
          result[3] += 0.015873015873015876;
          result[4] += 0;
          result[5] += 0.03174603174603175;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9875;
          result[4] += 0.0125;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.045454545454545456;
          result[4] += 0.9545454545454546;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
          result[0] += 0;
          result[1] += 0.0021961932650073207;
          result[2] += 0;
          result[3] += 0.0029282576866764276;
          result[4] += 0.9948755490483162;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03859649122807018;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9614035087719298;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.016516516516516516;
          result[2] += 0;
          result[3] += 0.9834834834834835;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9940968553000765;
          result[1] += 0.0004737091425864519;
          result[2] += 0.0010567357796159311;
          result[3] += 0.0042269431184637244;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001457566592573698;
        } else {
          result[0] += 0.7897623400365631;
          result[1] += 0;
          result[2] += 0.04753199268738574;
          result[3] += 0.16270566727605118;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.28082633957391867;
          result[1] += 0;
          result[2] += 0.009683666881859263;
          result[3] += 0.709489993544222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5218786464410735;
          result[1] += 0;
          result[2] += 0.0005834305717619603;
          result[3] += 0.4775379229871645;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02040816326530612;
          result[3] += 0.9795918367346939;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.992767211358157;
          result[1] += 0;
          result[2] += 0.005625502276989018;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001607286364854005;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
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
          result[3] += 0.9680930930930931;
          result[4] += 0.03078078078078078;
          result[5] += 0.0011261261261261261;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037037037037037035;
          result[4] += 0.9629629629629629;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9995845450768591;
          result[5] += 0.0004154549231408392;
          result[6] += 0;
        } else {
          result[0] += 0.3137254901960784;
          result[1] += 0.23529411764705882;
          result[2] += 0.43137254901960786;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0196078431372549;
          result[6] += 0;
        }
      }
    }
  } else {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9943293347873501;
          result[1] += 0;
          result[2] += 0.0054525627044711015;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021810250817884405;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.09006211180124224;
          result[2] += 0.031055900621118012;
          result[3] += 0.8788819875776398;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9956868665085185;
          result[1] += 0.0006469700237222342;
          result[2] += 0.0028035367694630147;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008626266982963123;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.5336860121363001;
          result[1] += 0;
          result[2] += 0.008557647424926094;
          result[3] += 0.45697837249105344;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000777967947720554;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0077951002227171495;
          result[3] += 0.9910913140311804;
          result[4] += 0;
          result[5] += 0.0011135857461024498;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9909154437456325;
          result[1] += 0;
          result[2] += 0.007686932215234102;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001397624039133473;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9996360989810772;
          result[1] += 0;
          result[2] += 0.000363901018922853;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          result[0] += 0.5876288659793815;
          result[1] += 0;
          result[2] += 0.00874047512326311;
          result[3] += 0.34917077543702374;
          result[4] += 0.05445988346033169;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8614652388237294;
          result[1] += 0.002209756926738059;
          result[2] += 0.00543940166581676;
          result[3] += 0.12799592044875063;
          result[4] += 0.0005099439061703213;
          result[5] += 0.0008499065102838688;
          result[6] += 0.0015298317185109638;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          result[0] += 0.0025188916876574307;
          result[1] += 0.020151133501259445;
          result[2] += 0;
          result[3] += 0.09445843828715365;
          result[4] += 0.8828715365239295;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.116804168475901;
          result[1] += 0.006513243595310464;
          result[2] += 0.0034737299174989146;
          result[3] += 0.5445071645679549;
          result[4] += 0.3287016934433348;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.023076923076923078;
          result[2] += 0;
          result[3] += 0.9615384615384616;
          result[4] += 0;
          result[5] += 0.015384615384615385;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
          result[2] += 0.631578947368421;
          result[3] += 0;
          result[4] += 0.3684210526315789;
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
          result[0] += 0.9930875576036866;
          result[1] += 0;
          result[2] += 0.0069124423963133645;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995897856630089;
          result[1] += 0;
          result[2] += 0.00041021433699107784;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
          result[0] += 0.6370776066962901;
          result[1] += 0.0023767696600186005;
          result[2] += 0.0066136199235300175;
          result[3] += 0.34752505941924144;
          result[4] += 0.005786917433088766;
          result[5] += 0.00020667562261031305;
          result[6] += 0.0004133512452206261;
        } else {
          result[0] += 0.9690005344735435;
          result[1] += 0;
          result[2] += 0.0085515766969535;
          result[3] += 0.018172100481026188;
          result[4] += 0;
          result[5] += 0.002137894174238375;
          result[6] += 0.002137894174238375;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0012944983818770227;
          result[2] += 0.005501618122977346;
          result[3] += 0.9932038834951457;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01440922190201729;
          result[3] += 0;
          result[4] += 0.984149855907781;
          result[5] += 0.001440922190201729;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009230769230769232;
          result[1] += 0.027692307692307693;
          result[2] += 0;
          result[3] += 0.963076923076923;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)3.5) ) ) {
          result[0] += 0.0015128593040847202;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984871406959153;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.22650056625141562;
          result[1] += 0;
          result[2] += 0.013590033975084938;
          result[3] += 0.7542468856172141;
          result[4] += 0.0011325028312570782;
          result[5] += 0.004530011325028313;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9983202687569989;
          result[4] += 0.0011198208286674132;
          result[5] += 0.0005599104143337066;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08571428571428572;
          result[3] += 0;
          result[4] += 0.9142857142857143;
          result[5] += 0;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0.09090909090909091;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          result[0] += 0.9888336033325619;
          result[1] += 0.0008099976857208979;
          result[2] += 0.0028928488775746353;
          result[3] += 0.007289979171488082;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017357093265447812;
        } else {
          result[0] += 0.1403091557669441;
          result[1] += 0.014268727705112961;
          result[2] += 0;
          result[3] += 0.845422116527943;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-14) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995438372411276;
          result[1] += 0;
          result[2] += 0.00045616275887236564;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3721590909090909;
          result[1] += 0;
          result[2] += 0.014678030303030304;
          result[3] += 0.6107954545454546;
          result[4] += 0;
          result[5] += 0.0004734848484848485;
          result[6] += 0.001893939393939394;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.2538310412573674;
          result[1] += 0;
          result[2] += 0.0011787819253438114;
          result[3] += 0.7449901768172889;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.994745575221239;
          result[1] += 0;
          result[2] += 0.0030420353982300885;
          result[3] += 0.0019358407079646017;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002765486725663717;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
          result[0] += 0.03153153153153153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9684684684684685;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006255864873318737;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9978104472943384;
          result[4] += 0;
          result[5] += 0.0015639662183296842;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.13157894736842105;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.868421052631579;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.5359116022099447;
          result[1] += 0;
          result[2] += 0.143646408839779;
          result[3] += 0;
          result[4] += 0.292817679558011;
          result[5] += 0.027624309392265192;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9985461946645345;
          result[1] += 0.0003271062004797558;
          result[2] += 0.0009813186014392674;
          result[3] += 7.269026677327907e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.269026677327907e-05;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0;
          result[2] += 0.07342657342657342;
          result[3] += 0.017482517482517484;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
          result[0] += 0;
          result[1] += 0.022435897435897436;
          result[2] += 0;
          result[3] += 0.9775641025641025;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5454545454545454;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9244031830238727;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07559681697612732;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3692561302287245;
          result[1] += 0;
          result[2] += 0.002678755409025345;
          result[3] += 0.6280651143622502;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          result[0] += 0.8934426229508197;
          result[1] += 0;
          result[2] += 0.10655737704918032;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9925581395348837;
          result[1] += 0;
          result[2] += 0.0065116279069767444;
          result[3] += 0.000310077519379845;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00062015503875969;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9986075407026563;
          result[1] += 0;
          result[2] += 0.001392459297343616;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994065281899109;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005934718100890207;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.002280501710376283;
          result[1] += 0.00798175598631699;
          result[2] += 0;
          result[3] += 0.22120866590649943;
          result[4] += 0.7673888255416191;
          result[5] += 0.0011402508551881414;
          result[6] += 0;
        } else {
          result[0] += 0.02166354640278149;
          result[1] += 0.005081572612998127;
          result[2] += 0.013372559507889811;
          result[3] += 0.9427654453062316;
          result[4] += 0.016047071409467772;
          result[5] += 0.0010698047606311847;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9836289222373806;
          result[1] += 0;
          result[2] += 0.004340816073421803;
          result[3] += 0.011038075158129728;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009921865310678407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0018825301204819277;
          result[3] += 0.9981174698795181;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.006211180124223602;
          result[1] += 0.037267080745341616;
          result[2] += 0;
          result[3] += 0.9565217391304348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08482871125611746;
          result[4] += 0.9151712887438825;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007761966364812419;
          result[2] += 0;
          result[3] += 0.1410090556274256;
          result[4] += 0.851228978007762;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9988469299509946;
          result[1] += 0;
          result[2] += 0.0011530700490054772;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9986842105263158;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013157894736842105;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8601216333622936;
          result[1] += 0.0011946133796698524;
          result[2] += 0.0055386620330147695;
          result[3] += 0.13216768027801912;
          result[4] += 0;
          result[5] += 0.00032580364900086883;
          result[6] += 0.0006516072980017377;
        } else {
          result[0] += 0;
          result[1] += 0.00026881720430107527;
          result[2] += 0.0077956989247311825;
          result[3] += 0.8204301075268817;
          result[4] += 0.17096774193548386;
          result[5] += 0.0005376344086021505;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
          result[0] += 0.08927789934354485;
          result[1] += 0.006564551422319475;
          result[2] += 0.009190371991247264;
          result[3] += 0.8905908096280087;
          result[4] += 0.003938730853391685;
          result[5] += 0.000437636761487965;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7037037037037037;
          result[4] += 0.2962962962962963;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0035587188612099642;
          result[1] += 0.03914590747330961;
          result[2] += 0;
          result[3] += 0.9572953736654805;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
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
          result[4] += 0.9986449864498645;
          result[5] += 0.0013550135501355014;
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
          result[1] += 0;
          result[2] += 0.008289124668435014;
          result[3] += 0.9890583554376657;
          result[4] += 0;
          result[5] += 0.002652519893899204;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
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
          result[1] += 0.043243243243243246;
          result[2] += 0;
          result[3] += 0.9567567567567568;
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
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9990285872883709;
          result[1] += 0.00048570635581459895;
          result[2] += 0.00020815986677768527;
          result[3] += 0.0002775464890369137;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9895089285714286;
          result[1] += 0;
          result[2] += 0.0006696428571428571;
          result[3] += 0.009375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004464285714285714;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.38461538461538464;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8143181818181818;
          result[1] += 0.006136363636363636;
          result[2] += 0.008636363636363636;
          result[3] += 0.16977272727272727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011363636363636363;
        } else {
          result[0] += 0.1308442650521359;
          result[1] += 0;
          result[2] += 0.0030272452068617556;
          result[3] += 0.8661284897410023;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.9979256422530717;
          result[1] += 0;
          result[2] += 0.002074357746928355;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9681844716870986;
          result[1] += 0;
          result[2] += 0.004086398131932283;
          result[3] += 0.026853473438412143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008756567425569177;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
          result[0] += 0.9796744739976181;
          result[1] += 0.00031758634378721714;
          result[2] += 0.000833664152441445;
          result[3] += 0.018737594283445812;
          result[4] += 0.00015879317189360857;
          result[5] += 3.969829297340214e-05;
          result[6] += 0.00023818975784041285;
        } else {
          result[0] += 0.6057396651861975;
          result[1] += 0;
          result[2] += 0.007516228220020499;
          result[3] += 0.3387427400068329;
          result[4] += 0.04748889648103861;
          result[5] += 0;
          result[6] += 0.0005124701059104886;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          result[0] += 0.8588235294117648;
          result[1] += 0;
          result[2] += 0.002647058823529412;
          result[3] += 0.13176470588235298;
          result[4] += 0.005294117647058824;
          result[5] += 0;
          result[6] += 0.0014705882352941178;
        } else {
          result[0] += 0.4982482021021575;
          result[1] += 0;
          result[2] += 0.005900792919048497;
          result[3] += 0.49585100497879403;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23651452282157676;
          result[1] += 0;
          result[2] += 0.04149377593360996;
          result[3] += 0.7219917012448133;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0.024691358024691357;
          result[2] += 0;
          result[3] += 0.9753086419753086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6363636363636364;
          result[2] += 0;
          result[3] += 0.36363636363636365;
          result[4] += 0;
          result[5] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)50) ) ) {
          result[0] += 0.7391304347826086;
          result[1] += 0;
          result[2] += 0.2608695652173913;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0058451047247929854;
          result[2] += 0;
          result[3] += 0.9941548952752071;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0.991304347826087;
          result[1] += 0;
          result[2] += 0.008695652173913044;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1974.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0012330456226880395;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9963008631319359;
          result[5] += 0.002466091245376079;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.1022400919012062;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.897185525560023;
          result[4] += 0;
          result[5] += 0.0005743825387708214;
          result[6] += 0;
        } else {
          result[0] += 0.5119047619047619;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.03571428571428571;
          result[4] += 0;
          result[5] += 0.023809523809523808;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9921633554083885;
          result[1] += 0;
          result[2] += 0.0011037527593818985;
          result[3] += 0.006512141280353201;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002207505518763797;
        } else {
          result[0] += 0.5339673913043478;
          result[1] += 0;
          result[2] += 0.010529891304347826;
          result[3] += 0.452445652173913;
          result[4] += 0;
          result[5] += 0.0010190217391304348;
          result[6] += 0.0020380434782608695;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9940525587828493;
          result[1] += 0;
          result[2] += 0.0004149377593360996;
          result[3] += 0.0053250345781466115;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002074688796680498;
        } else {
          result[0] += 0.8153939886271324;
          result[1] += 0.0008123476848090983;
          result[2] += 0.0030463038180341185;
          result[3] += 0.18064581640942323;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010154346060113728;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9775784753363229;
          result[1] += 0;
          result[2] += 0.02242152466367713;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994924144154306;
          result[1] += 0;
          result[2] += 0.00045118718628390955;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.6398398285488694e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.023970818134445022;
          result[1] += 0.0070349140177175615;
          result[2] += 0.011985409067222511;
          result[3] += 0.9533611255862429;
          result[4] += 0.0013027618551328818;
          result[5] += 0.002344971339239187;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9845479985399684;
          result[1] += 0.00012166930283489476;
          result[2] += 0.00535344932473537;
          result[3] += 0.008760189804112424;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012166930283489478;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0007677543186180423;
          result[3] += 0.9992322456813819;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9874371859296482;
          result[4] += 0.01256281407035176;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0009041591320072332;
          result[1] += 0.007233273056057866;
          result[2] += 0;
          result[3] += 0.039783001808318265;
          result[4] += 0.9520795660036167;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[0] += 0.9924012158054711;
          result[1] += 0;
          result[2] += 0.004559270516717325;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00303951367781155;
        } else {
          result[0] += 0.9994879672299027;
          result[1] += 0;
          result[2] += 0.0005120327700972862;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.022298911600743297;
          result[1] += 0.009556676400318556;
          result[2] += 0.002389169100079639;
          result[3] += 0.9049641624634988;
          result[4] += 0.05999469073533316;
          result[5] += 0.0007963897000265463;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014233241505968778;
          result[3] += 0.2736455463728191;
          result[4] += 0.7107438016528925;
          result[5] += 0.0013774104683195593;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.817047817047817;
          result[1] += 0;
          result[2] += 0.004158004158004158;
          result[3] += 0.17463617463617465;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004158004158004158;
        } else {
          result[0] += 0.9945317840054683;
          result[1] += 0;
          result[2] += 0.002734107997265892;
          result[3] += 0.0015379357484620643;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011961722488038277;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.34167852062588905;
          result[1] += 0;
          result[2] += 0.0048364153627311526;
          result[3] += 0.6520625889046942;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001422475106685633;
        } else {
          result[0] += 0.6809015421115066;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3190984578884935;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.996059889676911;
          result[1] += 0;
          result[2] += 0.0037431048069345944;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019700551615445234;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0.0019880715705765406;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9980119284294234;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024821489289357363;
          result[1] += 0.004080244814688882;
          result[2] += 0.018021081264875893;
          result[3] += 0.9527371642298538;
          result[4] += 0;
          result[5] += 0.00034002040122407346;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.6061142397425583;
          result[1] += 0;
          result[2] += 0.005309734513274336;
          result[3] += 0.38777152051488334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008045052292839903;
        } else {
          result[0] += 0.9230019493177388;
          result[1] += 0;
          result[2] += 0.00341130604288499;
          result[3] += 0.07285575048732944;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007309941520467836;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
          result[0] += 0.31422018348623854;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6857798165137615;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14780168381665107;
          result[1] += 0.00841908325537886;
          result[2] += 0.009354536950420954;
          result[3] += 0.8344246959775491;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.004694835680751174;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004694835680751174;
          result[4] += 0.9906103286384976;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.10810810810810811;
          result[2] += 0;
          result[3] += 0.6486486486486487;
          result[4] += 0.24324324324324326;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9985808053929395;
          result[1] += 0;
          result[2] += 0.0012417952811779316;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017739932588256165;
        } else {
          result[0] += 0.9698275862068966;
          result[1] += 0;
          result[2] += 0.03017241379310345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9989780275932549;
          result[1] += 0;
          result[2] += 0.001021972406745018;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.018763213530655392;
          result[1] += 0.010306553911205074;
          result[2] += 0.005549682875264271;
          result[3] += 0.9632663847780126;
          result[4] += 0;
          result[5] += 0.0021141649048625794;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.859538784067086;
          result[1] += 0.0020964360587002098;
          result[2] += 0.008385744234800839;
          result[3] += 0.129979035639413;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9865762892078682;
          result[1] += 0;
          result[2] += 0.006379585326953749;
          result[3] += 0.006246677299308879;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007974481658692186;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.00984251968503937;
          result[2] += 0.03740157480314961;
          result[3] += 0.952755905511811;
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
          result[2] += 0.0029498525073746312;
          result[3] += 0;
          result[4] += 0.9941002949852508;
          result[5] += 0.0029498525073746312;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.07478932584269662;
          result[1] += 0.004564606741573034;
          result[2] += 0.0031601123595505617;
          result[3] += 0.9160814606741573;
          result[4] += 0;
          result[5] += 0.0014044943820224719;
          result[6] += 0;
        } else {
          result[0] += 0.521324354657688;
          result[1] += 0.0005611672278338945;
          result[2] += 0;
          result[3] += 0.4781144781144781;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9978933905127337;
          result[1] += 0.000300944212466614;
          result[2] += 0.0015423390888913968;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002633261859082872;
        } else {
          result[0] += 0.9607843137254902;
          result[1] += 0;
          result[2] += 0.03790849673202614;
          result[3] += 0.00130718954248366;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.9166666666666666;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9012345679012346;
          result[1] += 0;
          result[2] += 0.024691358024691357;
          result[3] += 0.07407407407407407;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9951044386422977;
          result[4] += 0.004242819843342037;
          result[5] += 0.0006527415143603133;
          result[6] += 0;
        } else {
          result[0] += 0.6888888888888889;
          result[1] += 0;
          result[2] += 0.3111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.65625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.34375;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
          result[0] += 0.9875565610859729;
          result[1] += 0;
          result[2] += 0.00904977375565611;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003393665158371041;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9722222222222222;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007772020725388601;
          result[1] += 0.0062176165803108805;
          result[2] += 0.008808290155440414;
          result[3] += 0.9772020725388602;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9991416309012876;
          result[1] += 0;
          result[2] += 0.0008583690987124463;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8933333333333333;
          result[1] += 0;
          result[2] += 0.10666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16666666666666669;
          result[1] += 0.6666666666666667;
          result[2] += 0;
          result[3] += 0.16666666666666669;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9961408586589484;
          result[1] += 0;
          result[2] += 0.00241196333815726;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001447178002894356;
        } else {
          result[0] += 0.9998339215279219;
          result[1] += 0;
          result[2] += 0.00016607847207805688;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.7413490671344284;
          result[1] += 0.0025514272045925692;
          result[2] += 0.00398660500717589;
          result[3] += 0.24366129803859038;
          result[4] += 0.007175889012916602;
          result[5] += 0.0007973210014351781;
          result[6] += 0.0004783926008611068;
        } else {
          result[0] += 0.41910779245644264;
          result[1] += 0;
          result[2] += 0.008998659774076202;
          result[3] += 0.569213095921884;
          result[4] += 0.0017231476163124641;
          result[5] += 0.00019146084625694046;
          result[6] += 0.0007658433850277618;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-81) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-4) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9976253937484857;
          result[1] += 0;
          result[2] += 0.00014538405621516843;
          result[3] += 0.002132299491155804;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.692270414344561e-05;
        } else {
          result[0] += 0.04040404040404041;
          result[1] += 0.003367003367003367;
          result[2] += 0.04040404040404041;
          result[3] += 0.8922558922558923;
          result[4] += 0.020202020202020204;
          result[5] += 0.003367003367003367;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.525693950177936;
          result[1] += 0.0014234875444839859;
          result[2] += 0.005551601423487544;
          result[3] += 0.46647686832740215;
          result[4] += 0;
          result[5] += 0.00028469750889679714;
          result[6] += 0.0005693950177935943;
        } else {
          result[0] += 0.9855882985588299;
          result[1] += 0;
          result[2] += 0.002796300279630028;
          result[3] += 0.010755001075500108;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008604000860400087;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.006779661016949152;
          result[1] += 0;
          result[2] += 0.015980629539951573;
          result[3] += 0.8319612590799031;
          result[4] += 0.14430992736077483;
          result[5] += 0.0009685230024213075;
          result[6] += 0;
        } else {
          result[0] += 0.9630484988452656;
          result[1] += 0;
          result[2] += 0.004618937644341801;
          result[3] += 0.03233256351039261;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0.11960784313725491;
          result[1] += 0;
          result[2] += 0.004901960784313725;
          result[3] += 0.8754901960784314;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.24850299401197604;
          result[1] += 0.03293413173652695;
          result[2] += 0;
          result[3] += 0.718562874251497;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.0031645569620253164;
          result[1] += 0.014240506329113924;
          result[2] += 0;
          result[3] += 0.06487341772151899;
          result[4] += 0.9177215189873418;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2899786780383795;
          result[4] += 0.7100213219616205;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
