
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004;
          result[4] += 0.948;
          result[5] += 0.048;
        } else {
          result[0] += 0;
          result[1] += 0.34782608695652173;
          result[2] += 0;
          result[3] += 0.30434782608695654;
          result[4] += 0.34782608695652173;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.06874427131072411;
          result[1] += 0.005499541704857928;
          result[2] += 0.0009165902841429881;
          result[3] += 0.05224564619615032;
          result[4] += 0.07791017415215398;
          result[5] += 0.7946837763519706;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02040816326530612;
          result[3] += 0.5850340136054422;
          result[4] += 0;
          result[5] += 0.3945578231292517;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.7301013024602027;
          result[1] += 0.06657018813314039;
          result[2] += 0.007235890014471781;
          result[3] += 0.04196816208393633;
          result[4] += 0.13386396526772795;
          result[5] += 0.020260492040520987;
        } else {
          result[0] += 0.1;
          result[1] += 0.010714285714285714;
          result[2] += 0.32857142857142857;
          result[3] += 0.25357142857142856;
          result[4] += 0.10357142857142858;
          result[5] += 0.20357142857142857;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.08823529411764706;
          result[1] += 0.5882352941176471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2647058823529412;
          result[5] += 0.058823529411764705;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.046875;
          result[1] += 0.0234375;
          result[2] += 0.203125;
          result[3] += 0.375;
          result[4] += 0.0546875;
          result[5] += 0.296875;
        } else {
          result[0] += 0.11111111111111113;
          result[1] += 0;
          result[2] += 0.7160493827160495;
          result[3] += 0.1358024691358025;
          result[4] += 0;
          result[5] += 0.03703703703703704;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0.024691358024691357;
          result[1] += 0;
          result[2] += 0.9259259259259259;
          result[3] += 0.04938271604938271;
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
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7419354838709677;
          result[3] += 0.20967741935483872;
          result[4] += 0;
          result[5] += 0.04838709677419355;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8165137614678899;
          result[3] += 0.1834862385321101;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004731861198738171;
          result[1] += 0;
          result[2] += 0.971608832807571;
          result[3] += 0.023659305993690854;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.003787878787878788;
          result[1] += 0.011363636363636364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9621212121212122;
          result[5] += 0.022727272727272728;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.008450704225352112;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02676056338028169;
          result[4] += 0.07323943661971831;
          result[5] += 0.8915492957746479;
        } else {
          result[0] += 0.04904051172707889;
          result[1] += 0.0255863539445629;
          result[2] += 0.008528784648187633;
          result[3] += 0.36673773987206826;
          result[4] += 0.05970149253731343;
          result[5] += 0.4904051172707889;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.009708737864077669;
          result[1] += 0.1553398058252427;
          result[2] += 0;
          result[3] += 0.05825242718446602;
          result[4] += 0.7766990291262136;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9833729216152018;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0166270783847981;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8383045525902669;
          result[1] += 0.029042386185243328;
          result[2] += 0.005494505494505495;
          result[3] += 0.02040816326530612;
          result[4] += 0.07849293563579278;
          result[5] += 0.0282574568288854;
        } else {
          result[0] += 0.2087378640776699;
          result[1] += 0.04854368932038835;
          result[2] += 0.16990291262135923;
          result[3] += 0.2645631067961165;
          result[4] += 0.04854368932038835;
          result[5] += 0.25970873786407767;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0.026086956521739132;
          result[2] += 0.13913043478260873;
          result[3] += 0.582608695652174;
          result[4] += 0.008695652173913045;
          result[5] += 0.24347826086956526;
        } else {
          result[0] += 0;
          result[1] += 0.023809523809523808;
          result[2] += 0.5476190476190477;
          result[3] += 0.23809523809523808;
          result[4] += 0.047619047619047616;
          result[5] += 0.14285714285714285;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0.15;
          result[3] += 0.15;
          result[4] += 0;
          result[5] += 0.6;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0.8055555555555556;
          result[3] += 0.14166666666666666;
          result[4] += 0;
          result[5] += 0.019444444444444445;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9544626593806922;
          result[3] += 0.03642987249544627;
          result[4] += 0;
          result[5] += 0.009107468123861567;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.003816793893129771;
          result[1] += 0;
          result[2] += 0.026717557251908396;
          result[3] += 0.003816793893129771;
          result[4] += 0.9083969465648855;
          result[5] += 0.05725190839694656;
        } else {
          result[0] += 0;
          result[1] += 0.7857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.016008537886873;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04055496264674493;
          result[4] += 0.0768409818569904;
          result[5] += 0.8665955176093917;
        } else {
          result[0] += 0.044444444444444446;
          result[1] += 0.018518518518518517;
          result[2] += 0.05555555555555555;
          result[3] += 0.4703703703703704;
          result[4] += 0.02962962962962963;
          result[5] += 0.3814814814814815;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0.47368421052631576;
          result[2] += 0;
          result[3] += 0.021052631578947368;
          result[4] += 0.5052631578947369;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7976833976833977;
          result[1] += 0.019305019305019305;
          result[2] += 0.0023166023166023165;
          result[3] += 0.01776061776061776;
          result[4] += 0.12432432432432433;
          result[5] += 0.03861003861003861;
        } else {
          result[0] += 0.20833333333333334;
          result[1] += 0.0026041666666666665;
          result[2] += 0.2526041666666667;
          result[3] += 0.2630208333333333;
          result[4] += 0.057291666666666664;
          result[5] += 0.21614583333333334;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06521739130434782;
          result[4] += 0.10869565217391304;
          result[5] += 0.8260869565217391;
        } else {
          result[0] += 0.012903225806451613;
          result[1] += 0;
          result[2] += 0.33548387096774196;
          result[3] += 0.3741935483870968;
          result[4] += 0.03225806451612903;
          result[5] += 0.24516129032258063;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.9375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.01020408163265306;
          result[1] += 0;
          result[2] += 0.7993197278911565;
          result[3] += 0.17006802721088435;
          result[4] += 0;
          result[5] += 0.02040816326530612;
        } else {
          result[0] += 0.017915309446254073;
          result[1] += 0;
          result[2] += 0.9462540716612378;
          result[3] += 0.035830618892508145;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0043859649122807015;
          result[3] += 0;
          result[4] += 0.9868421052631579;
          result[5] += 0.008771929824561403;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0;
          result[4] += 0.5357142857142857;
          result[5] += 0.39285714285714285;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.8979591836734694;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08163265306122448;
          result[5] += 0.02040816326530612;
        } else {
          result[0] += 0.002575107296137339;
          result[1] += 0.015450643776824034;
          result[2] += 0.01630901287553648;
          result[3] += 0.12703862660944207;
          result[4] += 0.04291845493562232;
          result[5] += 0.7957081545064377;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 0.9975550122249389;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024449877750611247;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5454545454545454;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.45454545454545453;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.07975460122699388;
          result[1] += 0.15950920245398775;
          result[2] += 0.006134969325153375;
          result[3] += 0.09202453987730062;
          result[4] += 0.638036809815951;
          result[5] += 0.0245398773006135;
        } else {
          result[0] += 0.7313228238519534;
          result[1] += 0.013708019191226868;
          result[2] += 0.05414667580534613;
          result[3] += 0.05620287868403016;
          result[4] += 0.07539410555174778;
          result[5] += 0.06922549691569568;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15;
          result[5] += 0.85;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.078125;
          result[3] += 0.5546875;
          result[4] += 0;
          result[5] += 0.3671875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5833333333333334;
          result[3] += 0.19444444444444445;
          result[4] += 0;
          result[5] += 0.2222222222222222;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.030303030303030304;
          result[1] += 0.015151515151515152;
          result[2] += 0.4393939393939394;
          result[3] += 0.06060606060606061;
          result[4] += 0.19696969696969696;
          result[5] += 0.25757575757575757;
        } else {
          result[0] += 0.8947368421052632;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0;
          result[4] += 0.05263157894736842;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.006493506493506494;
          result[1] += 0.00974025974025974;
          result[2] += 0.7305194805194806;
          result[3] += 0.2012987012987013;
          result[4] += 0.012987012987012988;
          result[5] += 0.03896103896103896;
        } else {
          result[0] += 0.0028530670470756064;
          result[1] += 0;
          result[2] += 0.9500713266761769;
          result[3] += 0.047075606276747506;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42240000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42720000))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0.0035460992907801418;
          result[2] += 0;
          result[3] += 0.0070921985815602835;
          result[4] += 0.9539007092198581;
          result[5] += 0.03546099290780142;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0.6551724137931034;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2413793103448276;
          result[5] += 0.10344827586206896;
        } else {
          result[0] += 0.001081081081081081;
          result[1] += 0.002162162162162162;
          result[2] += 0.001081081081081081;
          result[3] += 0.061621621621621624;
          result[4] += 0.0627027027027027;
          result[5] += 0.8713513513513513;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.10047846889952153;
          result[1] += 0.028708133971291867;
          result[2] += 0.07177033492822966;
          result[3] += 0.22966507177033493;
          result[4] += 0.06698564593301436;
          result[5] += 0.5023923444976076;
        } else {
          result[0] += 0.05913978494623656;
          result[1] += 0.05913978494623656;
          result[2] += 0.03225806451612903;
          result[3] += 0.6989247311827957;
          result[4] += 0.010752688172043012;
          result[5] += 0.13978494623655913;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bf0000))) ) ) {
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0.208;
          result[1] += 0.208;
          result[2] += 0;
          result[3] += 0.016;
          result[4] += 0.432;
          result[5] += 0.136;
        } else {
          result[0] += 0.7875197472353871;
          result[1] += 0.009478672985781991;
          result[2] += 0.020537124802527645;
          result[3] += 0.06872037914691943;
          result[4] += 0.05687203791469194;
          result[5] += 0.05687203791469194;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3842364532019704;
          result[3] += 0.4482758620689655;
          result[4] += 0;
          result[5] += 0.16748768472906403;
        } else {
          result[0] += 0.03278688524590164;
          result[1] += 0;
          result[2] += 0.8852459016393442;
          result[3] += 0.06659836065573771;
          result[4] += 0.004098360655737705;
          result[5] += 0.011270491803278689;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9631578947368421;
          result[5] += 0.03684210526315789;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022757697456492636;
          result[4] += 0.038821954484605084;
          result[5] += 0.9384203480589023;
        } else {
          result[0] += 0.019230769230769232;
          result[1] += 0.04230769230769231;
          result[2] += 0.03461538461538462;
          result[3] += 0.35384615384615387;
          result[4] += 0.08076923076923077;
          result[5] += 0.46923076923076923;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.06451612903225806;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9354838709677419;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9978165938864629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002183406113537118;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7029177718832891;
          result[1] += 0.033156498673740056;
          result[2] += 0.005968169761273209;
          result[3] += 0.04907161803713528;
          result[4] += 0.14787798408488065;
          result[5] += 0.0610079575596817;
        } else {
          result[0] += 0.12338858195211787;
          result[1] += 0.001841620626151013;
          result[2] += 0.17679558011049723;
          result[3] += 0.31675874769797424;
          result[4] += 0.09944751381215469;
          result[5] += 0.281767955801105;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0.21428571428571427;
          result[2] += 0.21428571428571427;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0.058823529411764705;
          result[4] += 0.029411764705882353;
          result[5] += 0.8823529411764706;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.5875;
          result[4] += 0.025;
          result[5] += 0.0875;
        } else {
          result[0] += 0.07352941176470588;
          result[1] += 0.04411764705882353;
          result[2] += 0.5441176470588235;
          result[3] += 0.14705882352941177;
          result[4] += 0;
          result[5] += 0.19117647058823528;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8301886792452831;
          result[3] += 0.16037735849056603;
          result[4] += 0;
          result[5] += 0.009433962264150943;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.6923076923076923;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011472275334608031;
          result[1] += 0;
          result[2] += 0.9617590822179732;
          result[3] += 0.021032504780114723;
          result[4] += 0;
          result[5] += 0.0057361376673040155;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
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
          result[3] += 0;
          result[4] += 0.9913793103448276;
          result[5] += 0.008620689655172414;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.05555555555555555;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0.29411764705882354;
          result[5] += 0.5882352941176471;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6538461538461539;
          result[5] += 0.34615384615384615;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01447178002894356;
          result[4] += 0.017366136034732273;
          result[5] += 0.9681620839363242;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.5274725274725275;
          result[1] += 0.02197802197802198;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.37362637362637363;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0.00631578947368421;
          result[2] += 0.016842105263157894;
          result[3] += 0.40421052631578946;
          result[4] += 0.04;
          result[5] += 0.5326315789473685;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09523809523809523;
          result[4] += 0.9047619047619048;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21428571428571427;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.06451612903225806;
          result[1] += 0.3225806451612903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6129032258064516;
          result[5] += 0;
        } else {
          result[0] += 0.8136599851521898;
          result[1] += 0.014847809948032661;
          result[2] += 0.011878247958426128;
          result[3] += 0.06607275426874534;
          result[4] += 0.052709725315515946;
          result[5] += 0.04083147735708982;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0.018292682926829267;
          result[1] += 0;
          result[2] += 0.4176829268292683;
          result[3] += 0.38109756097560976;
          result[4] += 0.006097560975609756;
          result[5] += 0.17682926829268292;
        } else {
          result[0] += 0.027168234064785787;
          result[1] += 0;
          result[2] += 0.8881922675026124;
          result[3] += 0.05956112852664577;
          result[4] += 0.0020898641588296763;
          result[5] += 0.022988505747126436;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0034602076124567475;
          result[1] += 0.0034602076124567475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9896193771626297;
          result[5] += 0.0034602076124567475;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9464285714285714;
          result[5] += 0.05357142857142857;
        } else {
          result[0] += 0.0967741935483871;
          result[1] += 0.06451612903225806;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2903225806451613;
          result[5] += 0.5483870967741935;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9726027397260274;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0273972602739726;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.6;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0.2;
          result[1] += 0.04;
          result[2] += 0.04;
          result[3] += 0.2;
          result[4] += 0.48;
          result[5] += 0.04;
        } else {
          result[0] += 0.0040609137055837565;
          result[1] += 0.003045685279187817;
          result[2] += 0.0040609137055837565;
          result[3] += 0.07106598984771574;
          result[4] += 0.04365482233502538;
          result[5] += 0.8741116751269036;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9954337899543378;
          result[2] += 0;
          result[3] += 0.0045662100456621;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.12171052631578948;
          result[1] += 0.019736842105263157;
          result[2] += 0.049342105263157895;
          result[3] += 0.4769736842105263;
          result[4] += 0.03618421052631579;
          result[5] += 0.29605263157894735;
        } else {
          result[0] += 0.7602739726027395;
          result[1] += 0.037290715372907145;
          result[2] += 0.031202435312024344;
          result[3] += 0.035007610350076095;
          result[4] += 0.11567732115677318;
          result[5] += 0.020547945205479447;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.008264462809917356;
          result[1] += 0.008264462809917356;
          result[2] += 0.10743801652892562;
          result[3] += 0.24793388429752067;
          result[4] += 0.024793388429752067;
          result[5] += 0.6033057851239669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3103448275862069;
          result[3] += 0.5344827586206896;
          result[4] += 0;
          result[5] += 0.15517241379310345;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.010101010101010104;
          result[1] += 0.020202020202020207;
          result[2] += 0.4646464646464647;
          result[3] += 0.4242424242424243;
          result[4] += 0;
          result[5] += 0.08080808080808083;
        } else {
          result[0] += 0.022050716648291068;
          result[1] += 0.012127894156560088;
          result[2] += 0.86438809261301;
          result[3] += 0.0782800441014333;
          result[4] += 0.013230429988974642;
          result[5] += 0.009922822491730982;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.0037174721189591076;
          result[1] += 0.03345724907063197;
          result[2] += 0;
          result[3] += 0.007434944237918215;
          result[4] += 0.8921933085501859;
          result[5] += 0.06319702602230483;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9791666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.020833333333333332;
          result[5] += 0;
        } else {
          result[0] += 0.007359705611775529;
          result[1] += 0.005519779208831647;
          result[2] += 0.005519779208831647;
          result[3] += 0.09935602575896964;
          result[4] += 0.08923643054277829;
          result[5] += 0.7930082796688133;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.08085106382978724;
          result[1] += 0;
          result[2] += 0.00851063829787234;
          result[3] += 0.39574468085106385;
          result[4] += 0.08085106382978724;
          result[5] += 0.4340425531914894;
        } else {
          result[0] += 0.7396963123644252;
          result[1] += 0.06941431670281997;
          result[2] += 0.015184381778741866;
          result[3] += 0.03326102675343457;
          result[4] += 0.10339840925524224;
          result[5] += 0.03904555314533623;
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0196078431372549;
          result[3] += 0.7549019607843137;
          result[4] += 0;
          result[5] += 0.22549019607843138;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1724137931034483;
          result[3] += 0.2413793103448276;
          result[4] += 0;
          result[5] += 0.5862068965517241;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12;
          result[3] += 0.52;
          result[4] += 0;
          result[5] += 0.36;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.24509803921568626;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 0.18750000000000003;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.04166666666666667;
          result[4] += 0.04166666666666667;
          result[5] += 0.06250000000000001;
        } else {
          result[0] += 0.875;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.041666666666666664;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0.4444444444444444;
          result[3] += 0.2222222222222222;
          result[4] += 0.08888888888888889;
          result[5] += 0.13333333333333333;
        } else {
          result[0] += 0.0021367521367521374;
          result[1] += 0;
          result[2] += 0.9155982905982907;
          result[3] += 0.07158119658119659;
          result[4] += 0;
          result[5] += 0.010683760683760686;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0.003816793893129771;
          result[2] += 0;
          result[3] += 0.026717557251908396;
          result[4] += 0.9312977099236641;
          result[5] += 0.03816793893129771;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.07115384615384615;
          result[1] += 0.006730769230769231;
          result[2] += 0.0009615384615384616;
          result[3] += 0.05480769230769231;
          result[4] += 0.07019230769230769;
          result[5] += 0.7961538461538461;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013114754098360656;
          result[3] += 0.6163934426229508;
          result[4] += 0.009836065573770493;
          result[5] += 0.36065573770491804;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0.9932584269662922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006741573033707865;
          result[5] += 0;
        } else {
          result[0] += 0.031746031746031744;
          result[1] += 0.21428571428571427;
          result[2] += 0.03968253968253968;
          result[3] += 0.007936507936507936;
          result[4] += 0.6904761904761905;
          result[5] += 0.015873015873015872;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8516295025728988;
          result[1] += 0.02830188679245283;
          result[2] += 0.005145797598627788;
          result[3] += 0.012006861063464836;
          result[4] += 0.09433962264150944;
          result[5] += 0.008576329331046312;
        } else {
          result[0] += 0.20707070707070707;
          result[1] += 0.007575757575757576;
          result[2] += 0.24494949494949494;
          result[3] += 0.2222222222222222;
          result[4] += 0.0707070707070707;
          result[5] += 0.2474747474747475;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10714285714285714;
          result[3] += 0.7678571428571429;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.2222222222222222;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8347826086956521;
          result[3] += 0.09565217391304348;
          result[4] += 0;
          result[5] += 0.06956521739130435;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0;
        } else {
          result[0] += 0.029940119760479042;
          result[1] += 0;
          result[2] += 0.8143712574850299;
          result[3] += 0.15269461077844312;
          result[4] += 0;
          result[5] += 0.0029940119760479044;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9792452830188679;
          result[3] += 0.020754716981132074;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        } else {
          result[0] += 0.0030120481927710845;
          result[1] += 0.015060240963855422;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9367469879518072;
          result[5] += 0.045180722891566265;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0061068702290076335;
          result[4] += 0.024427480916030534;
          result[5] += 0.9694656488549618;
        } else {
          result[0] += 0.20680628272251309;
          result[1] += 0.009162303664921465;
          result[2] += 0.006544502617801047;
          result[3] += 0.2892670157068063;
          result[4] += 0.11649214659685864;
          result[5] += 0.3717277486910995;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.7045454545454546;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.20454545454545456;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.34557595993322204;
          result[1] += 0.04340567612687813;
          result[2] += 0.11185308848080133;
          result[3] += 0.24540901502504173;
          result[4] += 0.06343906510851419;
          result[5] += 0.19031719532554256;
        } else {
          result[0] += 0.8415841584158416;
          result[1] += 0.013201320132013201;
          result[2] += 0.034103410341034104;
          result[3] += 0.0088008800880088;
          result[4] += 0.09020902090209021;
          result[5] += 0.0121012101210121;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.07894736842105263;
          result[1] += 0.07894736842105263;
          result[2] += 0.13157894736842105;
          result[3] += 0.15789473684210525;
          result[4] += 0.10526315789473684;
          result[5] += 0.4473684210526316;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2112676056338028;
          result[3] += 0.7183098591549296;
          result[4] += 0;
          result[5] += 0.07042253521126761;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8979591836734694;
          result[3] += 0.061224489795918366;
          result[4] += 0;
          result[5] += 0.04081632653061224;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.03571428571428572;
          result[1] += 0.01785714285714286;
          result[2] += 0.3035714285714286;
          result[3] += 0.3571428571428572;
          result[4] += 0.07142857142857144;
          result[5] += 0.2142857142857143;
        } else {
          result[0] += 0.03763440860215054;
          result[1] += 0;
          result[2] += 0.8225806451612904;
          result[3] += 0.12365591397849462;
          result[4] += 0;
          result[5] += 0.016129032258064516;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.007614213197969543;
          result[1] += 0;
          result[2] += 0.9060913705583756;
          result[3] += 0.08629441624365482;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.014234875444839859;
          result[1] += 0;
          result[2] += 0.9822064056939502;
          result[3] += 0.0035587188612099647;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.026905829596412557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9641255605381166;
          result[5] += 0.008968609865470852;
        } else {
          result[0] += 0.36423841059602646;
          result[1] += 0.026490066225165563;
          result[2] += 0;
          result[3] += 0.06622516556291391;
          result[4] += 0.2781456953642384;
          result[5] += 0.26490066225165565;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.001092896174863388;
          result[1] += 0.007650273224043716;
          result[2] += 0;
          result[3] += 0.0546448087431694;
          result[4] += 0.060109289617486336;
          result[5] += 0.8765027322404372;
        } else {
          result[0] += 0.0043859649122807015;
          result[1] += 0;
          result[2] += 0.0043859649122807015;
          result[3] += 0.6491228070175439;
          result[4] += 0;
          result[5] += 0.34210526315789475;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 0.9948849104859335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005115089514066497;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5128205128205128;
          result[2] += 0;
          result[3] += 0.1282051282051282;
          result[4] += 0.358974358974359;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7680608365019012;
          result[1] += 0.037262357414448666;
          result[2] += 0;
          result[3] += 0.02585551330798479;
          result[4] += 0.1520912547528517;
          result[5] += 0.016730038022813688;
        } else {
          result[0] += 0.1898238747553816;
          result[1] += 0.019569471624266144;
          result[2] += 0.29549902152641877;
          result[3] += 0.25244618395303325;
          result[4] += 0.04892367906066536;
          result[5] += 0.19373776908023482;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01818181818181818;
          result[3] += 0.18181818181818182;
          result[4] += 0.05454545454545454;
          result[5] += 0.7454545454545455;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0.13333333333333333;
          result[2] += 0.38333333333333336;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.046875;
          result[4] += 0;
          result[5] += 0.015625;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34782608695652173;
          result[3] += 0.6086956521739131;
          result[4] += 0;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7631578947368421;
          result[3] += 0.23684210526315788;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0.01020408163265306;
          result[1] += 0;
          result[2] += 0.9209183673469388;
          result[3] += 0.06887755102040816;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.003787878787878788;
          result[3] += 0;
          result[4] += 0.8674242424242424;
          result[5] += 0.10606060606060606;
        } else {
          result[0] += 0.41284403669724773;
          result[1] += 0.14678899082568808;
          result[2] += 0;
          result[3] += 0.027522935779816515;
          result[4] += 0.3211009174311927;
          result[5] += 0.09174311926605505;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0.006928406466512702;
          result[2] += 0.010392609699769052;
          result[3] += 0.057736720554272515;
          result[4] += 0.06004618937644342;
          result[5] += 0.8648960739030023;
        } else {
          result[0] += 0.012779552715654952;
          result[1] += 0.003194888178913738;
          result[2] += 0.022364217252396165;
          result[3] += 0.4984025559105431;
          result[4] += 0.022364217252396165;
          result[5] += 0.44089456869009586;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0.3698630136986301;
          result[2] += 0;
          result[3] += 0.0136986301369863;
          result[4] += 0.6164383561643836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9976905311778291;
          result[2] += 0;
          result[3] += 0.0023094688221709007;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0.041666666666666664;
          result[2] += 0.017857142857142856;
          result[3] += 0.11904761904761904;
          result[4] += 0.5595238095238095;
          result[5] += 0.09523809523809523;
        } else {
          result[0] += 0.7884476534296029;
          result[1] += 0.01588447653429603;
          result[2] += 0.02454873646209386;
          result[3] += 0.05703971119133574;
          result[4] += 0.06353790613718412;
          result[5] += 0.05054151624548736;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0.47058823529411764;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0.35294117647058826;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.056074766355140186;
          result[3] += 0.3925233644859813;
          result[4] += 0.018691588785046728;
          result[5] += 0.5327102803738317;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06122448979591837;
          result[3] += 0.8775510204081634;
          result[4] += 0;
          result[5] += 0.06122448979591837;
        } else {
          result[0] += 0.015384615384615382;
          result[1] += 0;
          result[2] += 0.6461538461538461;
          result[3] += 0.23076923076923073;
          result[4] += 0.030769230769230764;
          result[5] += 0.07692307692307691;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5454545454545454;
          result[4] += 0;
          result[5] += 0.36363636363636365;
        } else {
          result[0] += 0.2553191489361702;
          result[1] += 0;
          result[2] += 0.6170212765957447;
          result[3] += 0.10638297872340426;
          result[4] += 0.02127659574468085;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7524752475247525;
          result[3] += 0.21782178217821782;
          result[4] += 0;
          result[5] += 0.0297029702970297;
        } else {
          result[0] += 0.014164305949008499;
          result[1] += 0;
          result[2] += 0.9447592067988668;
          result[3] += 0.03824362606232295;
          result[4] += 0;
          result[5] += 0.0028328611898017;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.6875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3125;
          result[5] += 0;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.22764227642276424;
          result[1] += 0.005420054200542006;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6937669376693768;
          result[5] += 0.07317073170731708;
        } else {
          result[0] += 0.0015873015873015873;
          result[1] += 0.011111111111111112;
          result[2] += 0.003968253968253968;
          result[3] += 0.19444444444444445;
          result[4] += 0.046031746031746035;
          result[5] += 0.7428571428571429;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.8015202702702703;
          result[1] += 0.026182432432432432;
          result[2] += 0.010135135135135136;
          result[3] += 0.02787162162162162;
          result[4] += 0.11486486486486487;
          result[5] += 0.019425675675675675;
        } else {
          result[0] += 0.17557251908396945;
          result[1] += 0.015267175572519083;
          result[2] += 0.29770992366412213;
          result[3] += 0.23155216284987276;
          result[4] += 0.058524173027989825;
          result[5] += 0.22137404580152673;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.06451612903225806;
          result[3] += 0.2903225806451613;
          result[4] += 0.016129032258064516;
          result[5] += 0.6129032258064516;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6944444444444444;
          result[3] += 0.2222222222222222;
          result[4] += 0.027777777777777776;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.33962264150943394;
          result[3] += 0.6415094339622641;
          result[4] += 0;
          result[5] += 0.018867924528301886;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.022813688212927757;
          result[1] += 0.0076045627376425855;
          result[2] += 0.8174904942965779;
          result[3] += 0.14068441064638784;
          result[4] += 0;
          result[5] += 0.011406844106463879;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9720496894409938;
          result[3] += 0.027950310559006212;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.012295081967213115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9877049180327869;
          result[5] += 0;
        } else {
          result[0] += 0.01492537313432836;
          result[1] += 0.08955223880597016;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5970149253731344;
          result[5] += 0.2985074626865672;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.004149377593360996;
          result[1] += 0.0013831258644536654;
          result[2] += 0;
          result[3] += 0.02627939142461964;
          result[4] += 0.04149377593360996;
          result[5] += 0.9266943291839558;
        } else {
          result[0] += 0.10843373493975904;
          result[1] += 0.013769363166953529;
          result[2] += 0.0017211703958691911;
          result[3] += 0.39070567986230637;
          result[4] += 0.027538726333907058;
          result[5] += 0.4578313253012048;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0.06;
          result[1] += 0.36;
          result[2] += 0.04;
          result[3] += 0.04;
          result[4] += 0.5;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0.4608460846084608;
          result[1] += 0.04770477047704771;
          result[2] += 0.1278127812781278;
          result[3] += 0.12961296129612962;
          result[4] += 0.1494149414941494;
          result[5] += 0.0846084608460846;
        } else {
          result[0] += 0.9382303839732888;
          result[1] += 0.01669449081803005;
          result[2] += 0.021702838063439065;
          result[3] += 0;
          result[4] += 0.02337228714524207;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10666666666666667;
          result[3] += 0.2;
          result[4] += 0.02666666666666667;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5217391304347826;
          result[3] += 0.30434782608695654;
          result[4] += 0;
          result[5] += 0.17391304347826086;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8095238095238095;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7679558011049724;
          result[3] += 0.1878453038674033;
          result[4] += 0;
          result[5] += 0.04419889502762431;
        } else {
          result[0] += 0.010086455331412104;
          result[1] += 0;
          result[2] += 0.952449567723343;
          result[3] += 0.03602305475504323;
          result[4] += 0;
          result[5] += 0.001440922190201729;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.004329004329004329;
          result[1] += 0.004329004329004329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9567099567099567;
          result[5] += 0.03463203463203463;
        } else {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23809523809523808;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04768041237113402;
          result[4] += 0.027061855670103094;
          result[5] += 0.9252577319587629;
        } else {
          result[0] += 0.11302211302211303;
          result[1] += 0.022113022113022112;
          result[2] += 0.03931203931203931;
          result[3] += 0.28992628992628994;
          result[4] += 0.10073710073710074;
          result[5] += 0.4348894348894349;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0.34782608695652173;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6521739130434783;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.990632318501171;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00936768149882904;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7690566037735849;
          result[1] += 0.0369811320754717;
          result[2] += 0.004528301886792453;
          result[3] += 0.021132075471698115;
          result[4] += 0.12528301886792453;
          result[5] += 0.0430188679245283;
        } else {
          result[0] += 0.14;
          result[1] += 0.005;
          result[2] += 0.1475;
          result[3] += 0.31;
          result[4] += 0.0875;
          result[5] += 0.31;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0.10526315789473684;
          result[2] += 0.2631578947368421;
          result[3] += 0;
          result[4] += 0.05263157894736842;
          result[5] += 0.5789473684210527;
        } else {
          result[0] += 0.008771929824561405;
          result[1] += 0.01754385964912281;
          result[2] += 0.06140350877192983;
          result[3] += 0.605263157894737;
          result[4] += 0.026315789473684213;
          result[5] += 0.28070175438596495;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0.019230769230769232;
          result[1] += 0.038461538461538464;
          result[2] += 0.5384615384615384;
          result[3] += 0.19230769230769232;
          result[4] += 0.019230769230769232;
          result[5] += 0.19230769230769232;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.7368421052631579;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0311284046692607;
          result[1] += 0;
          result[2] += 0.7431906614785992;
          result[3] += 0.19844357976653695;
          result[4] += 0;
          result[5] += 0.027237354085603113;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.38461538461538464;
          result[1] += 0;
          result[2] += 0.5384615384615384;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.006765899864682003;
          result[1] += 0;
          result[2] += 0.9336941813261164;
          result[3] += 0.05953991880920163;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0.3;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9923954372623575;
          result[5] += 0.0076045627376425855;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.17647058823529413;
          result[1] += 0.11764705882352941;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0.4117647058823529;
          result[5] += 0.17647058823529413;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0;
          result[4] += 0.9473684210526315;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00425531914893617;
          result[3] += 0.015602836879432624;
          result[4] += 0.018439716312056736;
          result[5] += 0.9617021276595744;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.4189189189189189;
          result[1] += 0.013513513513513514;
          result[2] += 0;
          result[3] += 0.0945945945945946;
          result[4] += 0.40540540540540543;
          result[5] += 0.06756756756756757;
        } else {
          result[0] += 0;
          result[1] += 0.005940594059405941;
          result[2] += 0.015841584158415842;
          result[3] += 0.3306930693069307;
          result[4] += 0.055445544554455446;
          result[5] += 0.592079207920792;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.08;
          result[1] += 0.76;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.041916167664670656;
          result[1] += 0.39520958083832336;
          result[2] += 0;
          result[3] += 0.017964071856287425;
          result[4] += 0.5209580838323353;
          result[5] += 0.023952095808383235;
        } else {
          result[0] += 0.7728911319394377;
          result[1] += 0.010093727469358328;
          result[2] += 0.0281182408074982;
          result[3] += 0.052631578947368425;
          result[4] += 0.07714491708723865;
          result[5] += 0.05912040374909878;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.023364485981308414;
          result[1] += 0.05140186915887851;
          result[2] += 0.18224299065420563;
          result[3] += 0.47196261682242996;
          result[4] += 0.07009345794392524;
          result[5] += 0.20093457943925236;
        } else {
          result[0] += 0.028798411122144985;
          result[1] += 0.007944389275074478;
          result[2] += 0.858987090367428;
          result[3] += 0.07845084409136048;
          result[4] += 0.0019860973187686196;
          result[5] += 0.023833167825223437;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.00546448087431694;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.994535519125683;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0.16666666666666666;
          result[3] += 0.03333333333333333;
          result[4] += 0.4;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.0499001996007984;
          result[1] += 0.0029940119760479044;
          result[2] += 0;
          result[3] += 0.04590818363273453;
          result[4] += 0.08183632734530938;
          result[5] += 0.8193612774451098;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011278195488721804;
          result[3] += 0.5488721804511278;
          result[4] += 0;
          result[5] += 0.4398496240601504;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0.13559322033898305;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8305084745762712;
          result[5] += 0.03389830508474576;
        } else {
          result[0] += 0;
          result[1] += 0.9841269841269842;
          result[2] += 0;
          result[3] += 0.007936507936507938;
          result[4] += 0.007936507936507938;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8294392523364487;
          result[1] += 0.02414330218068536;
          result[2] += 0.008566978193146418;
          result[3] += 0.028816199376947044;
          result[4] += 0.09501557632398755;
          result[5] += 0.014018691588785048;
        } else {
          result[0] += 0.11961722488038279;
          result[1] += 0.004784688995215312;
          result[2] += 0.27272727272727276;
          result[3] += 0.27033492822966515;
          result[4] += 0.12679425837320576;
          result[5] += 0.2057416267942584;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.043478260869565216;
          result[3] += 0.06521739130434782;
          result[4] += 0.17391304347826086;
          result[5] += 0.717391304347826;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.6388888888888888;
          result[4] += 0.027777777777777776;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.07547169811320756;
          result[1] += 0.04716981132075473;
          result[2] += 0.47169811320754723;
          result[3] += 0.26415094339622647;
          result[4] += 0;
          result[5] += 0.14150943396226418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9565217391304348;
          result[3] += 0.043478260869565216;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.005813953488372093;
          result[1] += 0;
          result[2] += 0.7441860465116279;
          result[3] += 0.22674418604651161;
          result[4] += 0;
          result[5] += 0.023255813953488372;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9384615384615385;
          result[3] += 0.06153846153846154;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.009881422924901186;
          result[1] += 0;
          result[2] += 0.9683794466403162;
          result[3] += 0.021739130434782608;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.21052631578947367;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0.23529411764705882;
          result[5] += 0.6470588235294118;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6842105263157895;
          result[4] += 0.2631578947368421;
          result[5] += 0.05263157894736842;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01951951951951952;
          result[4] += 0.03303303303303303;
          result[5] += 0.9474474474474475;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0.5416666666666666;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.6404494382022472;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3595505617977528;
          result[5] += 0;
        } else {
          result[0] += 0.004032258064516129;
          result[1] += 0.006048387096774193;
          result[2] += 0;
          result[3] += 0.38911290322580644;
          result[4] += 0.028225806451612902;
          result[5] += 0.5725806451612904;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.06584362139917696;
          result[1] += 0.3333333333333333;
          result[2] += 0.0205761316872428;
          result[3] += 0.0205761316872428;
          result[4] += 0.5267489711934157;
          result[5] += 0.03292181069958848;
        } else {
          result[0] += 0.8271604938271606;
          result[1] += 0.005401234567901235;
          result[2] += 0.01388888888888889;
          result[3] += 0.05324074074074075;
          result[4] += 0.05709876543209877;
          result[5] += 0.04320987654320988;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0.002314814814814815;
          result[1] += 0.9953703703703705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002314814814814815;
          result[5] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.010752688172043012;
          result[2] += 0.2903225806451613;
          result[3] += 0.10752688172043011;
          result[4] += 0.07526881720430108;
          result[5] += 0.5161290322580645;
        } else {
          result[0] += 0.02586206896551724;
          result[1] += 0;
          result[2] += 0.3706896551724138;
          result[3] += 0.46120689655172414;
          result[4] += 0.02586206896551724;
          result[5] += 0.11637931034482758;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.4736842105263158;
          result[1] += 0.14035087719298248;
          result[2] += 0.1754385964912281;
          result[3] += 0.03508771929824562;
          result[4] += 0.03508771929824562;
          result[5] += 0.14035087719298248;
        } else {
          result[0] += 0.02688172043010753;
          result[1] += 0.0010752688172043013;
          result[2] += 0.8806451612903227;
          result[3] += 0.07634408602150539;
          result[4] += 0;
          result[5] += 0.015053763440860218;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0.023255813953488372;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9441860465116279;
          result[5] += 0.03255813953488372;
        } else {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0.4666666666666667;
          result[4] += 0.13333333333333333;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.04162537165510406;
          result[1] += 0.0009910802775024777;
          result[2] += 0.0019821605550049554;
          result[3] += 0.053518334985133795;
          result[4] += 0.061446977205153616;
          result[5] += 0.8404360753221011;
        } else {
          result[0] += 0;
          result[1] += 0.013452914798206279;
          result[2] += 0.013452914798206279;
          result[3] += 0.5650224215246636;
          result[4] += 0.013452914798206279;
          result[5] += 0.39461883408071746;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.01639344262295082;
          result[1] += 0.36065573770491804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6229508196721312;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9650655021834061;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03056768558951965;
          result[5] += 0.004366812227074236;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8051044083526683;
          result[1] += 0.01701469450889405;
          result[2] += 0.01469450889404486;
          result[3] += 0.03712296983758701;
          result[4] += 0.08507347254447024;
          result[5] += 0.04098994586233566;
        } else {
          result[0] += 0.20118343195266272;
          result[1] += 0.026627218934911243;
          result[2] += 0.22781065088757396;
          result[3] += 0.25443786982248523;
          result[4] += 0.08284023668639054;
          result[5] += 0.20710059171597633;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0.031578947368421054;
          result[2] += 0.07368421052631578;
          result[3] += 0.23157894736842105;
          result[4] += 0.031578947368421054;
          result[5] += 0.631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7368421052631579;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0.2222222222222222;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0.5555555555555556;
        } else {
          result[0] += 0.15;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.55;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7651715039577837;
          result[3] += 0.1820580474934037;
          result[4] += 0;
          result[5] += 0.052770448548812667;
        } else {
          result[0] += 0.009819967266775777;
          result[1] += 0;
          result[2] += 0.939443535188216;
          result[3] += 0.05073649754500818;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9808612440191388;
          result[5] += 0.019138755980861243;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2777777777777778;
          result[5] += 0.5555555555555556;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.027160493827160494;
          result[1] += 0;
          result[2] += 0.0049382716049382715;
          result[3] += 0.028395061728395062;
          result[4] += 0.06172839506172839;
          result[5] += 0.8777777777777778;
        } else {
          result[0] += 0.07028112449799197;
          result[1] += 0.05823293172690763;
          result[2] += 0.030120481927710843;
          result[3] += 0.3755020080321285;
          result[4] += 0.02610441767068273;
          result[5] += 0.4397590361445783;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7340043134435659;
          result[1] += 0.04888569374550684;
          result[2] += 0.0007189072609633359;
          result[3] += 0.017972681524083396;
          result[4] += 0.16319194823867725;
          result[5] += 0.03522645578720346;
        } else {
          result[0] += 0.19114688128772636;
          result[1] += 0.008048289738430584;
          result[2] += 0.24346076458752516;
          result[3] += 0.30784708249496984;
          result[4] += 0.052313883299798795;
          result[5] += 0.19718309859154928;
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16417910447761194;
          result[3] += 0.5522388059701493;
          result[4] += 0;
          result[5] += 0.2835820895522388;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0.13636363636363635;
          result[3] += 0.2727272727272727;
          result[4] += 0.045454545454545456;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0.012500000000000002;
          result[1] += 0.025000000000000005;
          result[2] += 0.7500000000000001;
          result[3] += 0.10000000000000002;
          result[4] += 0.012500000000000002;
          result[5] += 0.10000000000000002;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8189300411522634;
          result[3] += 0.1646090534979424;
          result[4] += 0;
          result[5] += 0.01646090534979424;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0.006734006734006734;
          result[1] += 0;
          result[2] += 0.9545454545454546;
          result[3] += 0.03872053872053872;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013157894736842105;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9824561403508771;
          result[5] += 0.0043859649122807015;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
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
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.004103967168262654;
          result[1] += 0.0027359781121751026;
          result[2] += 0.01094391244870041;
          result[3] += 0.012311901504787962;
          result[4] += 0.023255813953488372;
          result[5] += 0.9466484268125855;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0.05357142857142857;
          result[2] += 0.005952380952380952;
          result[3] += 0.13690476190476192;
          result[4] += 0.16666666666666666;
          result[5] += 0.5535714285714286;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008379888268156424;
          result[3] += 0.4134078212290503;
          result[4] += 0.07262569832402235;
          result[5] += 0.505586592178771;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9721669980119284;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.027833001988071572;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.11304347826086956;
          result[1] += 0.22608695652173913;
          result[2] += 0.02608695652173913;
          result[3] += 0.043478260869565216;
          result[4] += 0.5391304347826087;
          result[5] += 0.05217391304347826;
        } else {
          result[0] += 0.8043972706595907;
          result[1] += 0.0037907505686125857;
          result[2] += 0.028051554207733136;
          result[3] += 0.062168309325246404;
          result[4] += 0.05458680818802124;
          result[5] += 0.047005307050796065;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0.08527131782945736;
          result[2] += 0.13178294573643412;
          result[3] += 0.5891472868217055;
          result[4] += 0;
          result[5] += 0.1937984496124031;
        } else {
          result[0] += 0.06622516556291393;
          result[1] += 0.03311258278145696;
          result[2] += 0.576158940397351;
          result[3] += 0.14569536423841062;
          result[4] += 0.019867549668874177;
          result[5] += 0.1589403973509934;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.6222222222222222;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.01406926406926407;
          result[1] += 0;
          result[2] += 0.9004329004329005;
          result[3] += 0.08008658008658008;
          result[4] += 0;
          result[5] += 0.005411255411255411;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.0047169811320754715;
          result[1] += 0.0047169811320754715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9716981132075472;
          result[5] += 0.018867924528301886;
        } else {
          result[0] += 0.34959349593495936;
          result[1] += 0.16260162601626016;
          result[2] += 0;
          result[3] += 0.008130081300813009;
          result[4] += 0.22764227642276422;
          result[5] += 0.25203252032520324;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02418207681365576;
          result[4] += 0.03698435277382646;
          result[5] += 0.9388335704125178;
        } else {
          result[0] += 0.002544529262086514;
          result[1] += 0.005089058524173028;
          result[2] += 0.002544529262086514;
          result[3] += 0.37404580152671757;
          result[4] += 0.07888040712468193;
          result[5] += 0.5368956743002544;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0.9926829268292683;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007317073170731708;
          result[5] += 0;
        } else {
          result[0] += 0.06;
          result[1] += 0.38;
          result[2] += 0.14;
          result[3] += 0.02;
          result[4] += 0.36;
          result[5] += 0.04;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.11673151750972763;
          result[1] += 0.1828793774319066;
          result[2] += 0.011673151750972763;
          result[3] += 0.023346303501945526;
          result[4] += 0.6108949416342413;
          result[5] += 0.054474708171206226;
        } else {
          result[0] += 0.735294117647059;
          result[1] += 0.0046791443850267385;
          result[2] += 0.04077540106951873;
          result[3] += 0.05949197860962568;
          result[4] += 0.058155080213903754;
          result[5] += 0.10160427807486633;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.0784313725490196;
          result[1] += 0.058823529411764705;
          result[2] += 0.09803921568627451;
          result[3] += 0.2549019607843137;
          result[4] += 0.0392156862745098;
          result[5] += 0.47058823529411764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11428571428571428;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0.18571428571428572;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5526315789473684;
          result[3] += 0.38157894736842096;
          result[4] += 0;
          result[5] += 0.06578947368421051;
        } else {
          result[0] += 0.02272727272727273;
          result[1] += 0;
          result[2] += 0.9318181818181819;
          result[3] += 0.04545454545454546;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.075;
          result[1] += 0.175;
          result[2] += 0.375;
          result[3] += 0.15;
          result[4] += 0;
          result[5] += 0.225;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6702127659574468;
          result[3] += 0.23404255319148937;
          result[4] += 0;
          result[5] += 0.09574468085106383;
        } else {
          result[0] += 0.01256281407035176;
          result[1] += 0;
          result[2] += 0.9409547738693468;
          result[3] += 0.04522613065326633;
          result[4] += 0;
          result[5] += 0.001256281407035176;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.008928571428571428;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013392857142857142;
          result[4] += 0.9330357142857143;
          result[5] += 0.044642857142857144;
        } else {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.0013908205841446453;
          result[1] += 0;
          result[2] += 0.0027816411682892906;
          result[3] += 0.016689847009735744;
          result[4] += 0.030598052851182198;
          result[5] += 0.9485396383866481;
        } else {
          result[0] += 0.09556313993174062;
          result[1] += 0.023890784982935155;
          result[2] += 0.023890784982935155;
          result[3] += 0.32081911262798635;
          result[4] += 0.04948805460750853;
          result[5] += 0.4863481228668942;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.10160427807486633;
          result[1] += 0.24064171122994654;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.625668449197861;
          result[5] += 0.032085561497326213;
        } else {
          result[0] += 0.7010766307789741;
          result[1] += 0.0031665611146295125;
          result[2] += 0.0759974667511083;
          result[3] += 0.08866371120962635;
          result[4] += 0.056998100063331225;
          result[5] += 0.0740975300823306;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.022727272727272728;
          result[4] += 0.13636363636363635;
          result[5] += 0.6590909090909091;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2112676056338028;
          result[3] += 0.6197183098591549;
          result[4] += 0.028169014084507043;
          result[5] += 0.14084507042253522;
        } else {
          result[0] += 0.16981132075471697;
          result[1] += 0.09433962264150944;
          result[2] += 0.5094339622641509;
          result[3] += 0.11320754716981132;
          result[4] += 0;
          result[5] += 0.11320754716981132;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0.13043478260869565;
          result[1] += 0;
          result[2] += 0.17391304347826086;
          result[3] += 0.43478260869565216;
          result[4] += 0;
          result[5] += 0.2608695652173913;
        } else {
          result[0] += 0.024630541871921183;
          result[1] += 0;
          result[2] += 0.7881773399014779;
          result[3] += 0.18226600985221675;
          result[4] += 0;
          result[5] += 0.0049261083743842365;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0.6944444444444444;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0032102728731942215;
          result[1] += 0;
          result[2] += 0.9662921348314607;
          result[3] += 0.030497592295345103;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.10843373493975904;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8835341365461847;
          result[5] += 0.008032128514056224;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013888888888888888;
          result[4] += 0.4444444444444444;
          result[5] += 0.5416666666666666;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.17391304347826086;
          result[2] += 0;
          result[3] += 0.05434782608695652;
          result[4] += 0.7391304347826086;
          result[5] += 0.010869565217391304;
        } else {
          result[0] += 0.8727272727272727;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10909090909090909;
          result[5] += 0.01818181818181818;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.9444444444444444;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038978494623655914;
          result[4] += 0.030913978494623656;
          result[5] += 0.9301075268817204;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.010344827586206896;
          result[1] += 0;
          result[2] += 0.034482758620689655;
          result[3] += 0.14482758620689656;
          result[4] += 0.21379310344827587;
          result[5] += 0.596551724137931;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0.05194805194805195;
          result[2] += 0.02813852813852814;
          result[3] += 0.5108225108225108;
          result[4] += 0.04329004329004329;
          result[5] += 0.2943722943722944;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.2558139534883721;
          result[1] += 0.09302325581395349;
          result[2] += 0.046511627906976744;
          result[3] += 0.046511627906976744;
          result[4] += 0.46511627906976744;
          result[5] += 0.09302325581395349;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0.025;
          result[1] += 0.525;
          result[2] += 0.15;
          result[3] += 0.025;
          result[4] += 0.2;
          result[5] += 0.075;
        } else {
          result[0] += 0.893467336683417;
          result[1] += 0.0010050251256281408;
          result[2] += 0.027135678391959798;
          result[3] += 0.02512562814070352;
          result[4] += 0.04522613065326633;
          result[5] += 0.008040201005025126;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.11827956989247312;
          result[1] += 0.03225806451612903;
          result[2] += 0.3010752688172043;
          result[3] += 0.0967741935483871;
          result[4] += 0.11827956989247312;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.011571841851494697;
          result[1] += 0.0028929604628736743;
          result[2] += 0.8659594985535197;
          result[3] += 0.09546769527483125;
          result[4] += 0;
          result[5] += 0.024108003857280617;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42860000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41ec0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011450381679389315;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9770992366412214;
          result[5] += 0.011450381679389315;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014858841010401188;
          result[3] += 0.020802377414561663;
          result[4] += 0.019316493313521546;
          result[5] += 0.9583952451708767;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.08638743455497382;
          result[1] += 0.010471204188481676;
          result[2] += 0.002617801047120419;
          result[3] += 0.11518324607329843;
          result[4] += 0.1387434554973822;
          result[5] += 0.6465968586387435;
        } else {
          result[0] += 0.004149377593360996;
          result[1] += 0.004149377593360996;
          result[2] += 0.012448132780082987;
          result[3] += 0.6721991701244814;
          result[4] += 0.02074688796680498;
          result[5] += 0.2863070539419087;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.010869565217391304;
          result[1] += 0.1956521739130435;
          result[2] += 0.010869565217391304;
          result[3] += 0.05434782608695652;
          result[4] += 0.6521739130434783;
          result[5] += 0.07608695652173914;
        } else {
          result[0] += 0;
          result[1] += 0.9903147699757869;
          result[2] += 0;
          result[3] += 0.002421307506053269;
          result[4] += 0.007263922518159807;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.818541996830428;
          result[1] += 0.048335974643423145;
          result[2] += 0;
          result[3] += 0.013470681458003172;
          result[4] += 0.11014263074484947;
          result[5] += 0.009508716323296357;
        } else {
          result[0] += 0.21115537848605578;
          result[1] += 0.0398406374501992;
          result[2] += 0.06374501992031872;
          result[3] += 0.3107569721115538;
          result[4] += 0.12749003984063745;
          result[5] += 0.24701195219123506;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05660377358490566;
          result[3] += 0.39622641509433965;
          result[4] += 0;
          result[5] += 0.5471698113207547;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.41025641025641024;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0.1282051282051282;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.3;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.05;
          result[4] += 0.4;
          result[5] += 0.05;
        } else {
          result[0] += 0.01975051975051975;
          result[1] += 0;
          result[2] += 0.8898128898128899;
          result[3] += 0.07276507276507277;
          result[4] += 0.002079002079002079;
          result[5] += 0.015592515592515593;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0.00975609756097561;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9804878048780488;
          result[5] += 0.00975609756097561;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0.006150061500615006;
          result[1] += 0.006150061500615006;
          result[2] += 0;
          result[3] += 0.020910209102091022;
          result[4] += 0.04920049200492005;
          result[5] += 0.9175891758917589;
        } else {
          result[0] += 0.24590163934426232;
          result[1] += 0.0655737704918033;
          result[2] += 0;
          result[3] += 0.0819672131147541;
          result[4] += 0.3278688524590164;
          result[5] += 0.27868852459016397;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02040816326530612;
          result[3] += 0.5795918367346938;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.33962264150943394;
          result[3] += 0.07547169811320754;
          result[4] += 0.018867924528301886;
          result[5] += 0.5660377358490566;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.13043478260869565;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8695652173913043;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7788829380260139;
          result[1] += 0.01912777352716144;
          result[2] += 0.002295332823259373;
          result[3] += 0.035195103289977055;
          result[4] += 0.1446059678653405;
          result[5] += 0.0198928844682479;
        } else {
          result[0] += 0.2;
          result[1] += 0.025;
          result[2] += 0.044444444444444446;
          result[3] += 0.2111111111111111;
          result[4] += 0.15;
          result[5] += 0.36944444444444446;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0.016129032258064516;
          result[2] += 0.10752688172043011;
          result[3] += 0.6021505376344086;
          result[4] += 0.043010752688172046;
          result[5] += 0.23118279569892472;
        } else {
          result[0] += 0.016666666666666666;
          result[1] += 0;
          result[2] += 0.6083333333333333;
          result[3] += 0.24166666666666667;
          result[4] += 0.008333333333333333;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.43037974683544306;
          result[1] += 0.05063291139240506;
          result[2] += 0.379746835443038;
          result[3] += 0.02531645569620253;
          result[4] += 0.02531645569620253;
          result[5] += 0.08860759493670886;
        } else {
          result[0] += 0.01822079314040729;
          result[1] += 0;
          result[2] += 0.894962486602358;
          result[3] += 0.07288317256162916;
          result[4] += 0;
          result[5] += 0.013933547695605574;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x423c0000))) ) ) {
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
          result[3] += 0;
          result[4] += 1;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.10416666666666667;
          result[1] += 0.005952380952380952;
          result[2] += 0.011904761904761904;
          result[3] += 0;
          result[4] += 0.7589285714285714;
          result[5] += 0.11904761904761904;
        } else {
          result[0] += 0;
          result[1] += 0.006896551724137931;
          result[2] += 0.011206896551724138;
          result[3] += 0.16810344827586207;
          result[4] += 0.05862068965517241;
          result[5] += 0.7551724137931034;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7552301255230124;
          result[1] += 0.04393305439330543;
          result[2] += 0.009065550906555088;
          result[3] += 0.027196652719665267;
          result[4] += 0.12622036262203623;
          result[5] += 0.03835425383542538;
        } else {
          result[0] += 0.17468354430379746;
          result[1] += 0.017721518987341773;
          result[2] += 0.15949367088607594;
          result[3] += 0.28860759493670884;
          result[4] += 0.11139240506329114;
          result[5] += 0.2481012658227848;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.043478260869565216;
          result[3] += 0.8478260869565217;
          result[4] += 0;
          result[5] += 0.10869565217391304;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4642857142857143;
          result[3] += 0.4107142857142857;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5428571428571428;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.3142857142857143;
        } else {
          result[0] += 0.04081632653061224;
          result[1] += 0;
          result[2] += 0.8775510204081632;
          result[3] += 0.061224489795918366;
          result[4] += 0.02040816326530612;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8295081967213115;
          result[3] += 0.15081967213114755;
          result[4] += 0;
          result[5] += 0.019672131147540985;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005474452554744526;
          result[1] += 0;
          result[2] += 0.9726277372262774;
          result[3] += 0.021897810218978103;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.011406844106463879;
          result[1] += 0.011406844106463879;
          result[2] += 0.030418250950570342;
          result[3] += 0.0038022813688212928;
          result[4] += 0.8973384030418251;
          result[5] += 0.045627376425855515;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.5789473684210527;
          result[1] += 0.02631578947368421;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.39473684210526316;
          result[5] += 0;
        } else {
          result[0] += 0.0008278145695364238;
          result[1] += 0.0016556291390728477;
          result[2] += 0.009933774834437087;
          result[3] += 0.1490066225165563;
          result[4] += 0.050496688741721855;
          result[5] += 0.7880794701986755;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.3548387096774194;
          result[2] += 0.06451612903225806;
          result[3] += 0.06451612903225806;
          result[4] += 0.5161290322580645;
          result[5] += 0;
        } else {
          result[0] += 0.004132231404958679;
          result[1] += 0.9793388429752067;
          result[2] += 0;
          result[3] += 0.004132231404958679;
          result[4] += 0.012396694214876035;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7919937205651492;
          result[1] += 0.04866562009419152;
          result[2] += 0.01726844583987441;
          result[3] += 0.018838304552590265;
          result[4] += 0.1043956043956044;
          result[5] += 0.018838304552590265;
        } else {
          result[0] += 0.19393939393939397;
          result[1] += 0.0030303030303030307;
          result[2] += 0.14242424242424245;
          result[3] += 0.3030303030303031;
          result[4] += 0.13939393939393943;
          result[5] += 0.2181818181818182;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0.01694915254237288;
          result[2] += 0.0847457627118644;
          result[3] += 0.3050847457627119;
          result[4] += 0;
          result[5] += 0.5932203389830508;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0.6470588235294118;
          result[4] += 0;
          result[5] += 0.29411764705882354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5950413223140496;
          result[3] += 0.33884297520661155;
          result[4] += 0;
          result[5] += 0.06611570247933884;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.03333333333333334;
          result[1] += 0;
          result[2] += 0.7266666666666668;
          result[3] += 0.18000000000000002;
          result[4] += 0.013333333333333336;
          result[5] += 0.046666666666666676;
        } else {
          result[0] += 0.8235294117647058;
          result[1] += 0.11764705882352941;
          result[2] += 0.058823529411764705;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.013215859030837005;
          result[1] += 0;
          result[2] += 0.8590308370044053;
          result[3] += 0.12334801762114538;
          result[4] += 0;
          result[5] += 0.004405286343612335;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9695238095238096;
          result[3] += 0.030476190476190476;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.00784313725490196;
          result[1] += 0.011764705882352941;
          result[2] += 0.011764705882352941;
          result[3] += 0.00392156862745098;
          result[4] += 0.9333333333333333;
          result[5] += 0.03137254901960784;
        } else {
          result[0] += 0.03125;
          result[1] += 0.8125;
          result[2] += 0.0625;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0.03125;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.061946902654867256;
          result[1] += 0.003933136676499509;
          result[2] += 0;
          result[3] += 0.05211406096361849;
          result[4] += 0.08357915437561456;
          result[5] += 0.7984267453294002;
        } else {
          result[0] += 0.028469750889679714;
          result[1] += 0;
          result[2] += 0.09608540925266904;
          result[3] += 0.5195729537366548;
          result[4] += 0;
          result[5] += 0.35587188612099646;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.053892215568862284;
          result[1] += 0.4131736526946108;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5209580838323354;
          result[5] += 0.01197604790419162;
        } else {
          result[0] += 0.717687074829932;
          result[1] += 0.006122448979591836;
          result[2] += 0.058503401360544216;
          result[3] += 0.0891156462585034;
          result[4] += 0.05986394557823129;
          result[5] += 0.06870748299319727;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0025188916876574307;
          result[1] += 0.9974811083123426;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09615384615384616;
          result[3] += 0.17307692307692307;
          result[4] += 0.038461538461538464;
          result[5] += 0.6923076923076923;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.6111111111111112;
          result[4] += 0;
          result[5] += 0.2222222222222222;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.06666666666666667;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.1391304347826087;
          result[1] += 0.017391304347826087;
          result[2] += 0.5391304347826087;
          result[3] += 0.23478260869565218;
          result[4] += 0.034782608695652174;
          result[5] += 0.034782608695652174;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6167664670658682;
          result[3] += 0.31137724550898205;
          result[4] += 0;
          result[5] += 0.0718562874251497;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9482758620689655;
          result[3] += 0.05172413793103448;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.004424778761061947;
          result[1] += 0;
          result[2] += 0.9469026548672567;
          result[3] += 0.045722713864306784;
          result[4] += 0;
          result[5] += 0.0029498525073746312;
        } else {
          result[0] += 0.1875;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8888888888888888;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0.5714285714285714;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.42857142857142855;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9976580796252927;
          result[2] += 0;
          result[3] += 0.00234192037470726;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.17391304347826086;
          result[1] += 0.043478260869565216;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7282608695652174;
          result[5] += 0.05434782608695652;
        } else {
          result[0] += 0.001718213058419244;
          result[1] += 0.012027491408934709;
          result[2] += 0.001718213058419244;
          result[3] += 0.17439862542955326;
          result[4] += 0.06357388316151202;
          result[5] += 0.7465635738831615;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0.4109720885466795;
          result[1] += 0.06641000962463908;
          result[2] += 0.05101058710298364;
          result[3] += 0.09624639076034648;
          result[4] += 0.24061597690086622;
          result[5] += 0.1347449470644851;
        } else {
          result[0] += 0.9393019726858878;
          result[1] += 0;
          result[2] += 0.04400606980273142;
          result[3] += 0.0075872534142640375;
          result[4] += 0.00606980273141123;
          result[5] += 0.003034901365705615;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0.02459016393442623;
          result[1] += 0.03278688524590164;
          result[2] += 0.09836065573770492;
          result[3] += 0.5819672131147541;
          result[4] += 0.03278688524590164;
          result[5] += 0.22950819672131148;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7058823529411765;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.29411764705882354;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.17647058823529413;
          result[1] += 0.058823529411764705;
          result[2] += 0.23529411764705882;
          result[3] += 0.08823529411764706;
          result[4] += 0.029411764705882353;
          result[5] += 0.4117647058823529;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9130434782608695;
          result[3] += 0.08695652173913043;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0.05217391304347826;
          result[1] += 0;
          result[2] += 0.6347826086956522;
          result[3] += 0.2956521739130435;
          result[4] += 0;
          result[5] += 0.017391304347826087;
        } else {
          result[0] += 0.8823529411764706;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0.3;
          result[1] += 0;
          result[2] += 0.55;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0.002277904328018223;
          result[1] += 0;
          result[2] += 0.9248291571753986;
          result[3] += 0.0683371298405467;
          result[4] += 0;
          result[5] += 0.004555808656036446;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017094017094017096;
          result[3] += 0;
          result[4] += 0.9658119658119658;
          result[5] += 0.017094017094017096;
        } else {
          result[0] += 0;
          result[1] += 0.21739130434782608;
          result[2] += 0;
          result[3] += 0.21739130434782608;
          result[4] += 0.2608695652173913;
          result[5] += 0.30434782608695654;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.010112359550561797;
          result[1] += 0;
          result[2] += 0.0033707865168539327;
          result[3] += 0.033707865168539325;
          result[4] += 0.07191011235955057;
          result[5] += 0.8808988764044944;
        } else {
          result[0] += 0.025236593059936908;
          result[1] += 0.04416403785488959;
          result[2] += 0.050473186119873815;
          result[3] += 0.47003154574132494;
          result[4] += 0.01892744479495268;
          result[5] += 0.3911671924290221;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0.981042654028436;
          result[2] += 0;
          result[3] += 0.002369668246445498;
          result[4] += 0.016587677725118485;
          result[5] += 0;
        } else {
          result[0] += 0.17647058823529413;
          result[1] += 0.11764705882352941;
          result[2] += 0.17647058823529413;
          result[3] += 0.5294117647058824;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7563920454545455;
          result[1] += 0.038352272727272735;
          result[2] += 0.012073863636363638;
          result[3] += 0.026278409090909095;
          result[4] += 0.1413352272727273;
          result[5] += 0.025568181818181823;
        } else {
          result[0] += 0.16233766233766234;
          result[1] += 0.03896103896103896;
          result[2] += 0.22077922077922077;
          result[3] += 0.2619047619047619;
          result[4] += 0.05194805194805195;
          result[5] += 0.26406926406926406;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0.038461538461538464;
          result[5] += 0.8076923076923077;
        } else {
          result[0] += 0;
          result[1] += 0.5555555555555556;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22413793103448276;
          result[3] += 0.7241379310344828;
          result[4] += 0;
          result[5] += 0.05172413793103448;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6491228070175439;
          result[3] += 0.24561403508771928;
          result[4] += 0;
          result[5] += 0.10526315789473684;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0.38461538461538464;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8727272727272728;
          result[3] += 0.10000000000000002;
          result[4] += 0;
          result[5] += 0.027272727272727275;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.35294117647058826;
          result[1] += 0;
          result[2] += 0.47058823529411764;
          result[3] += 0.11764705882352941;
          result[4] += 0.058823529411764705;
          result[5] += 0;
        } else {
          result[0] += 0.0013333333333333333;
          result[1] += 0;
          result[2] += 0.9573333333333334;
          result[3] += 0.037333333333333336;
          result[4] += 0;
          result[5] += 0.004;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.005291005291005291;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9947089947089947;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.025;
          result[4] += 0.525;
          result[5] += 0.45;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.04266389177939646;
          result[1] += 0.018730489073881373;
          result[2] += 0.003121748178980229;
          result[3] += 0.046826222684703434;
          result[4] += 0.054110301768990635;
          result[5] += 0.8345473465140478;
        } else {
          result[0] += 0.02272727272727273;
          result[1] += 0.007575757575757577;
          result[2] += 0.0037878787878787884;
          result[3] += 0.6856060606060607;
          result[4] += 0.018939393939393943;
          result[5] += 0.2613636363636364;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.6551724137931034;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3448275862068966;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.7694483734087695;
          result[1] += 0.04314002828854314;
          result[2] += 0.0007072135785007072;
          result[3] += 0.03253182461103253;
          result[4] += 0.13366336633663367;
          result[5] += 0.02050919377652051;
        } else {
          result[0] += 0.1079136690647482;
          result[1] += 0.004796163069544364;
          result[2] += 0.33573141486810554;
          result[3] += 0.23261390887290168;
          result[4] += 0.09352517985611511;
          result[5] += 0.22541966426858512;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.8666666666666667;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23529411764705882;
          result[3] += 0.5735294117647058;
          result[4] += 0.04411764705882353;
          result[5] += 0.14705882352941177;
        } else {
          result[0] += 0.0784313725490196;
          result[1] += 0.058823529411764705;
          result[2] += 0.7058823529411765;
          result[3] += 0.1568627450980392;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9444444444444444;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7575757575757576;
          result[1] += 0;
          result[2] += 0.24242424242424243;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7927927927927928;
          result[3] += 0.1891891891891892;
          result[4] += 0;
          result[5] += 0.018018018018018018;
        } else {
          result[0] += 0.008097165991902836;
          result[1] += 0;
          result[2] += 0.9365721997300945;
          result[3] += 0.05533063427800271;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9854368932038835;
          result[5] += 0.014563106796116505;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0.1111111111111111;
          result[4] += 0.5333333333333333;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0.23529411764705882;
          result[2] += 0;
          result[3] += 0.23529411764705882;
          result[4] += 0.35294117647058826;
          result[5] += 0.17647058823529413;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6923076923076923;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0.0014727540500736377;
          result[1] += 0;
          result[2] += 0.0014727540500736377;
          result[3] += 0.020618556701030927;
          result[4] += 0.011782032400589101;
          result[5] += 0.9646539027982327;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.15441176470588236;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10294117647058823;
          result[4] += 0.22058823529411764;
          result[5] += 0.5220588235294118;
        } else {
          result[0] += 0.014598540145985401;
          result[1] += 0;
          result[2] += 0.06569343065693431;
          result[3] += 0.5766423357664233;
          result[4] += 0.040145985401459854;
          result[5] += 0.3029197080291971;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.23;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.77;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9867549668874173;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013245033112582781;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8520953163516845;
          result[1] += 0.025472473294987676;
          result[2] += 0.004108463434675432;
          result[3] += 0.030402629416598194;
          result[4] += 0.07230895645028759;
          result[5] += 0.015612161051766639;
        } else {
          result[0] += 0.24528301886792453;
          result[1] += 0.03773584905660377;
          result[2] += 0.02830188679245283;
          result[3] += 0.21226415094339623;
          result[4] += 0.10849056603773585;
          result[5] += 0.36792452830188677;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14018691588785046;
          result[3] += 0.6074766355140186;
          result[4] += 0.009345794392523364;
          result[5] += 0.24299065420560748;
        } else {
          result[0] += 0.01382488479262673;
          result[1] += 0.004608294930875577;
          result[2] += 0.5207373271889402;
          result[3] += 0.2672811059907835;
          result[4] += 0.004608294930875577;
          result[5] += 0.18894009216589863;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.3384615384615385;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.13846153846153847;
          result[4] += 0.046153846153846156;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.005417118093174431;
          result[1] += 0;
          result[2] += 0.9089924160346695;
          result[3] += 0.06175514626218852;
          result[4] += 0;
          result[5] += 0.023835319609967497;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.005050505050505051;
          result[1] += 0.010101010101010102;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9797979797979798;
          result[5] += 0.005050505050505051;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023255813953488372;
          result[3] += 0.046511627906976744;
          result[4] += 0.6976744186046512;
          result[5] += 0.23255813953488372;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.006076388888888889;
          result[1] += 0.016493055555555556;
          result[2] += 0.009548611111111112;
          result[3] += 0.1371527777777778;
          result[4] += 0.043402777777777776;
          result[5] += 0.7873263888888888;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0.04081632653061224;
          result[1] += 0.37142857142857144;
          result[2] += 0.02857142857142857;
          result[3] += 0.044897959183673466;
          result[4] += 0.46122448979591835;
          result[5] += 0.053061224489795916;
        } else {
          result[0] += 0.7298772169167803;
          result[1] += 0.013642564802182811;
          result[2] += 0.0572987721691678;
          result[3] += 0.06343792633015007;
          result[4] += 0.0791268758526603;
          result[5] += 0.056616643929058665;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.9924050632911392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007594936708860759;
          result[5] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9444444444444444;
        } else {
          result[0] += 0;
          result[1] += 0.017857142857142856;
          result[2] += 0.03571428571428571;
          result[3] += 0.41964285714285715;
          result[4] += 0.125;
          result[5] += 0.4017857142857143;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20454545454545456;
          result[3] += 0.7045454545454546;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.686046511627907;
          result[3] += 0.1511627906976744;
          result[4] += 0.011627906976744186;
          result[5] += 0.1511627906976744;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7017543859649124;
          result[3] += 0.26315789473684215;
          result[4] += 0;
          result[5] += 0.03508771929824562;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.5384615384615384;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0;
        } else {
          result[0] += 0.007865168539325843;
          result[1] += 0;
          result[2] += 0.9280898876404494;
          result[3] += 0.05056179775280899;
          result[4] += 0.0011235955056179776;
          result[5] += 0.012359550561797753;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9868421052631579;
          result[5] += 0.013157894736842105;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0.6818181818181818;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25757575757575757;
          result[5] += 0.06060606060606061;
        } else {
          result[0] += 0.0010893246187363835;
          result[1] += 0.011982570806100218;
          result[2] += 0.002178649237472767;
          result[3] += 0.0392156862745098;
          result[4] += 0.03376906318082789;
          result[5] += 0.9117647058823529;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12857142857142856;
          result[3] += 0.3357142857142857;
          result[4] += 0.05;
          result[5] += 0.4857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009009009009009009;
          result[3] += 0.7657657657657657;
          result[4] += 0;
          result[5] += 0.22522522522522523;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.21374045801526717;
          result[1] += 0.03307888040712468;
          result[2] += 0.058524173027989825;
          result[3] += 0.1806615776081425;
          result[4] += 0.24427480916030533;
          result[5] += 0.2697201017811705;
        } else {
          result[0] += 0.80103550295858;
          result[1] += 0.03698224852071007;
          result[2] += 0.01701183431952663;
          result[3] += 0.03624260355029586;
          result[4] += 0.08875739644970415;
          result[5] += 0.019970414201183437;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c80000))) ) ) {
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
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.027777777777777776;
          result[4] += 0.16666666666666666;
          result[5] += 0.6944444444444444;
        } else {
          result[0] += 0.0106951871657754;
          result[1] += 0.026737967914438502;
          result[2] += 0.3155080213903743;
          result[3] += 0.4919786096256685;
          result[4] += 0.016042780748663103;
          result[5] += 0.13903743315508021;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.029055690072639227;
          result[1] += 0;
          result[2] += 0.7869249394673123;
          result[3] += 0.162227602905569;
          result[4] += 0.002421307506053269;
          result[5] += 0.01937046004842615;
        } else {
          result[0] += 0.009578544061302681;
          result[1] += 0;
          result[2] += 0.9636015325670498;
          result[3] += 0.02681992337164751;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0.008733624454148471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9781659388646288;
          result[5] += 0.013100436681222707;
        } else {
          result[0] += 0.6166666666666667;
          result[1] += 0.05;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.13333333333333333;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0035671819262782403;
          result[2] += 0;
          result[3] += 0.04280618311533888;
          result[4] += 0.07491082045184304;
          result[5] += 0.8787158145065398;
        } else {
          result[0] += 0;
          result[1] += 0.022388059701492536;
          result[2] += 0.0037313432835820895;
          result[3] += 0.503731343283582;
          result[4] += 0.07835820895522388;
          result[5] += 0.3917910447761194;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8125;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9951573849878934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004842615012106538;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7734724292101341;
          result[1] += 0.03204172876304024;
          result[2] += 0.0022354694485842027;
          result[3] += 0.021609538002980627;
          result[4] += 0.13859910581222057;
          result[5] += 0.03204172876304024;
        } else {
          result[0] += 0.2168141592920354;
          result[1] += 0.017699115044247787;
          result[2] += 0.21902654867256638;
          result[3] += 0.26991150442477874;
          result[4] += 0.05088495575221239;
          result[5] += 0.22566371681415928;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0125;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.1625;
          result[4] += 0.25;
          result[5] += 0.475;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20689655172413793;
          result[3] += 0.6206896551724138;
          result[4] += 0;
          result[5] += 0.1724137931034483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7619047619047619;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.015873015873015872;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714288;
          result[2] += 0.2142857142857143;
          result[3] += 0.07142857142857144;
          result[4] += 0;
          result[5] += 0.5714285714285715;
        } else {
          result[0] += 0.032786885245901634;
          result[1] += 0;
          result[2] += 0.6393442622950819;
          result[3] += 0.2622950819672131;
          result[4] += 0.016393442622950817;
          result[5] += 0.049180327868852444;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.5625;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0.009174311926605507;
          result[1] += 0;
          result[2] += 0.9197247706422019;
          result[3] += 0.06766055045871561;
          result[4] += 0;
          result[5] += 0.003440366972477065;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9929245283018868;
          result[2] += 0;
          result[3] += 0.0023584905660377358;
          result[4] += 0.0047169811320754715;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.003968253968253968;
          result[1] += 0.003968253968253968;
          result[2] += 0;
          result[3] += 0.015873015873015872;
          result[4] += 0.9087301587301587;
          result[5] += 0.06746031746031746;
        } else {
          result[0] += 0.030627871362940276;
          result[1] += 0.0038284839203675345;
          result[2] += 0.007656967840735069;
          result[3] += 0.1638591117917305;
          result[4] += 0.05742725880551302;
          result[5] += 0.7366003062787136;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7417116422513493;
          result[1] += 0.050115651503469555;
          result[2] += 0.0023130300693909025;
          result[3] += 0.02852737085582113;
          result[4] += 0.15882806476484196;
          result[5] += 0.01850424055512722;
        } else {
          result[0] += 0.19399538106235567;
          result[1] += 0.03233256351039261;
          result[2] += 0.2586605080831409;
          result[3] += 0.2632794457274827;
          result[4] += 0.08083140877598152;
          result[5] += 0.17090069284064666;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10256410256410256;
          result[4] += 0.15384615384615385;
          result[5] += 0.7435897435897436;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.5476190476190477;
          result[4] += 0;
          result[5] += 0.23809523809523808;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0.032;
          result[1] += 0.04;
          result[2] += 0.616;
          result[3] += 0.28;
          result[4] += 0;
          result[5] += 0.032;
        } else {
          result[0] += 0.71875;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.09375;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
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
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0.10344827586206896;
          result[2] += 0.3793103448275862;
          result[3] += 0.3448275862068966;
          result[4] += 0;
          result[5] += 0.1724137931034483;
        } else {
          result[0] += 0.0024096385542168677;
          result[1] += 0;
          result[2] += 0.9397590361445783;
          result[3] += 0.051807228915662654;
          result[4] += 0;
          result[5] += 0.006024096385542169;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5576923076923077;
          result[5] += 0.4423076923076923;
        } else {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0.9;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.3953488372093023;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5116279069767442;
          result[5] += 0.09302325581395349;
        } else {
          result[0] += 0.0036363636363636364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03636363636363636;
          result[4] += 0.03878787878787879;
          result[5] += 0.9212121212121213;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.2052980132450331;
          result[1] += 0.03642384105960265;
          result[2] += 0.006622516556291391;
          result[3] += 0.1291390728476821;
          result[4] += 0.0695364238410596;
          result[5] += 0.5529801324503312;
        } else {
          result[0] += 0.011857707509881422;
          result[1] += 0.007905138339920948;
          result[2] += 0.023715415019762844;
          result[3] += 0.7075098814229249;
          result[4] += 0.003952569169960474;
          result[5] += 0.2450592885375494;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.013513513513513514;
          result[1] += 0.24324324324324326;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7432432432432432;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9681818181818181;
          result[2] += 0;
          result[3] += 0.0022727272727272726;
          result[4] += 0.022727272727272728;
          result[5] += 0.006818181818181818;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8838652482269503;
          result[1] += 0.023936170212765957;
          result[2] += 0.0017730496453900709;
          result[3] += 0.020390070921985817;
          result[4] += 0.06294326241134751;
          result[5] += 0.0070921985815602835;
        } else {
          result[0] += 0.4349442379182156;
          result[1] += 0.05204460966542751;
          result[2] += 0.14869888475836432;
          result[3] += 0.1412639405204461;
          result[4] += 0.06319702602230483;
          result[5] += 0.15985130111524162;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0.03184713375796178;
          result[1] += 0.044585987261146494;
          result[2] += 0.12738853503184713;
          result[3] += 0.35668789808917195;
          result[4] += 0.12101910828025478;
          result[5] += 0.3184713375796178;
        } else {
          result[0] += 0.03076923076923077;
          result[1] += 0;
          result[2] += 0.7230769230769231;
          result[3] += 0.09230769230769231;
          result[4] += 0.03076923076923077;
          result[5] += 0.12307692307692308;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.050505050505050504;
          result[1] += 0;
          result[2] += 0.7904040404040404;
          result[3] += 0.13636363636363635;
          result[4] += 0;
          result[5] += 0.022727272727272728;
        } else {
          result[0] += 0.011784511784511786;
          result[1] += 0;
          result[2] += 0.9511784511784512;
          result[3] += 0.033670033670033676;
          result[4] += 0;
          result[5] += 0.0033670033670033673;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0.007220216606498195;
          result[1] += 0.0036101083032490976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9819494584837545;
          result[5] += 0.007220216606498195;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.16666666666666669;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03203342618384401;
          result[4] += 0.0403899721448468;
          result[5] += 0.9275766016713092;
        } else {
          result[0] += 0.07956989247311828;
          result[1] += 0.008602150537634409;
          result[2] += 0.004301075268817204;
          result[3] += 0.36774193548387096;
          result[4] += 0.06666666666666667;
          result[5] += 0.4731182795698925;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975786924939467;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002421307506053269;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7880184331797235;
          result[1] += 0.043010752688172046;
          result[2] += 0.0015360983102918587;
          result[3] += 0.023809523809523808;
          result[4] += 0.130568356374808;
          result[5] += 0.013056835637480798;
        } else {
          result[0] += 0.15706806282722513;
          result[1] += 0.007853403141361256;
          result[2] += 0.21727748691099477;
          result[3] += 0.2670157068062827;
          result[4] += 0.0968586387434555;
          result[5] += 0.25392670157068065;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1282051282051282;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8717948717948718;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0.015151515151515152;
          result[2] += 0.07575757575757576;
          result[3] += 0.5303030303030303;
          result[4] += 0.015151515151515152;
          result[5] += 0.36363636363636365;
        } else {
          result[0] += 0;
          result[1] += 0.0072992700729927005;
          result[2] += 0.45255474452554745;
          result[3] += 0.48905109489051096;
          result[4] += 0;
          result[5] += 0.051094890510948905;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42910000))) ) ) {
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
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.1152542372881356;
          result[1] += 0;
          result[2] += 0.7016949152542373;
          result[3] += 0.15254237288135594;
          result[4] += 0.013559322033898305;
          result[5] += 0.01694915254237288;
        } else {
          result[0] += 0.01601164483260553;
          result[1] += 0;
          result[2] += 0.9359534206695779;
          result[3] += 0.04512372634643377;
          result[4] += 0;
          result[5] += 0.002911208151382824;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.016736401673640166;
          result[2] += 0;
          result[3] += 0.016736401673640166;
          result[4] += 0.9163179916317992;
          result[5] += 0.0502092050209205;
        } else {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0.20833333333333334;
          result[4] += 0.041666666666666664;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0.0014577259475218659;
          result[2] += 0;
          result[3] += 0.04081632653061224;
          result[4] += 0.03935860058309038;
          result[5] += 0.9183673469387755;
        } else {
          result[0] += 0.07677902621722846;
          result[1] += 0.003745318352059925;
          result[2] += 0.026217228464419477;
          result[3] += 0.2696629213483146;
          result[4] += 0.14606741573033707;
          result[5] += 0.47752808988764045;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0.009153318077803204;
          result[1] += 0.9679633867276888;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02288329519450801;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2815533980582524;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6893203883495146;
          result[5] += 0.02912621359223301;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8477564102564102;
          result[1] += 0.020032051282051284;
          result[2] += 0.009615384615384616;
          result[3] += 0.029647435897435896;
          result[4] += 0.07131410256410256;
          result[5] += 0.021634615384615384;
        } else {
          result[0] += 0.221875;
          result[1] += 0.009375;
          result[2] += 0.1;
          result[3] += 0.21875;
          result[4] += 0.090625;
          result[5] += 0.359375;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012658227848101266;
          result[3] += 0.4050632911392405;
          result[4] += 0.0379746835443038;
          result[5] += 0.5443037974683544;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0.9444444444444444;
          result[4] += 0;
          result[5] += 0.027777777777777776;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0.1590909090909091;
          result[2] += 0.06818181818181818;
          result[3] += 0.4318181818181818;
          result[4] += 0.09090909090909091;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6024096385542169;
          result[3] += 0.20481927710843373;
          result[4] += 0.07228915662650602;
          result[5] += 0.12048192771084337;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.41379310344827586;
          result[3] += 0.46551724137931033;
          result[4] += 0;
          result[5] += 0.1206896551724138;
        } else {
          result[0] += 0.07317073170731707;
          result[1] += 0;
          result[2] += 0.8536585365853658;
          result[3] += 0;
          result[4] += 0.04878048780487805;
          result[5] += 0.024390243902439025;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0.013793103448275862;
          result[1] += 0;
          result[2] += 0.906896551724138;
          result[3] += 0.07586206896551724;
          result[4] += 0;
          result[5] += 0.0034482758620689655;
        } else {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9629629629629629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.037037037037037035;
          result[5] += 0;
        } else {
          result[0] += 0.01060070671378092;
          result[1] += 0.014134275618374558;
          result[2] += 0.007067137809187279;
          result[3] += 0;
          result[4] += 0.9469964664310954;
          result[5] += 0.02120141342756184;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.034482758620689655;
          result[1] += 0;
          result[2] += 0.0011494252873563218;
          result[3] += 0.05172413793103448;
          result[4] += 0.06666666666666667;
          result[5] += 0.8459770114942529;
        } else {
          result[0] += 0.0732484076433121;
          result[1] += 0;
          result[2] += 0.01592356687898089;
          result[3] += 0.4554140127388535;
          result[4] += 0.10191082802547771;
          result[5] += 0.3535031847133758;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9899497487437187;
          result[2] += 0;
          result[3] += 0.0025125628140703522;
          result[4] += 0.007537688442211056;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.3161953727506427;
          result[1] += 0.06555269922879177;
          result[2] += 0.06555269922879177;
          result[3] += 0.2133676092544987;
          result[4] += 0.13881748071979436;
          result[5] += 0.20051413881748073;
        } else {
          result[0] += 0.8147086914995224;
          result[1] += 0.029608404966571154;
          result[2] += 0.039159503342884434;
          result[3] += 0.021012416427889206;
          result[4] += 0.08882521489971347;
          result[5] += 0.0066857688634192934;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32258064516129037;
          result[3] += 0.5161290322580646;
          result[4] += 0;
          result[5] += 0.16129032258064518;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4375;
          result[3] += 0.53125;
          result[4] += 0;
          result[5] += 0.03125;
        } else {
          result[0] += 0.10619469026548672;
          result[1] += 0;
          result[2] += 0.7699115044247787;
          result[3] += 0.08849557522123894;
          result[4] += 0;
          result[5] += 0.035398230088495575;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.806896551724138;
          result[3] += 0.15862068965517245;
          result[4] += 0;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 0.007204610951008645;
          result[1] += 0;
          result[2] += 0.952449567723343;
          result[3] += 0.03890489913544669;
          result[4] += 0;
          result[5] += 0.001440922190201729;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.006369426751592357;
          result[1] += 0.009554140127388535;
          result[2] += 0.009554140127388535;
          result[3] += 0;
          result[4] += 0.9331210191082803;
          result[5] += 0.041401273885350316;
        } else {
          result[0] += 0.6507936507936508;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0.20634920634920634;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0.0028328611898017;
          result[2] += 0;
          result[3] += 0.025495750708215296;
          result[4] += 0.0339943342776204;
          result[5] += 0.9376770538243626;
        } else {
          result[0] += 0.005970149253731343;
          result[1] += 0.014925373134328358;
          result[2] += 0.0029850746268656717;
          result[3] += 0.21194029850746268;
          result[4] += 0.16417910447761194;
          result[5] += 0.6;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9977973568281938;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022026431718061676;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.49295774647887325;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5070422535211268;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8171428571428572;
          result[1] += 0.024489795918367346;
          result[2] += 0.0163265306122449;
          result[3] += 0.052244897959183675;
          result[4] += 0.05795918367346939;
          result[5] += 0.03183673469387755;
        } else {
          result[0] += 0.2132564841498559;
          result[1] += 0;
          result[2] += 0.09798270893371758;
          result[3] += 0.3746397694524496;
          result[4] += 0.04899135446685879;
          result[5] += 0.26512968299711814;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0.027777777777777776;
          result[4] += 0.05555555555555555;
          result[5] += 0.8611111111111112;
        } else {
          result[0] += 0;
          result[1] += 0.05882352941176471;
          result[2] += 0.07058823529411766;
          result[3] += 0.3882352941176471;
          result[4] += 0.10588235294117648;
          result[5] += 0.37647058823529417;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.37142857142857144;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.12857142857142856;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.71875;
          result[3] += 0.2734375;
          result[4] += 0;
          result[5] += 0.0078125;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.09090909090909091;
          result[2] += 0.15151515151515152;
          result[3] += 0.24242424242424243;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0.07407407407407407;
          result[1] += 0;
          result[2] += 0.6111111111111112;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0.25925925925925924;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.04242424242424243;
          result[1] += 0;
          result[2] += 0.8303030303030303;
          result[3] += 0.12727272727272726;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0016474464579901153;
          result[1] += 0;
          result[2] += 0.9654036243822076;
          result[3] += 0.032948929159802305;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.011406844106463879;
          result[1] += 0.022813688212927757;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9467680608365019;
          result[5] += 0.019011406844106463;
        } else {
          result[0] += 0.5103448275862069;
          result[1] += 0.006896551724137931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.22758620689655173;
          result[5] += 0.25517241379310346;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0678191489361702;
          result[4] += 0.03590425531914894;
          result[5] += 0.8962765957446809;
        } else {
          result[0] += 0.004987531172069825;
          result[1] += 0.02493765586034913;
          result[2] += 0.014962593516209476;
          result[3] += 0.3491271820448878;
          result[4] += 0.09725685785536159;
          result[5] += 0.5087281795511222;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.5142857142857142;
          result[2] += 0;
          result[3] += 0.02857142857142857;
          result[4] += 0.4;
          result[5] += 0.05714285714285714;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.7865519937451134;
          result[1] += 0.03205629397967162;
          result[2] += 0.0007818608287724785;
          result[3] += 0.02501954652071931;
          result[4] += 0.1415168100078186;
          result[5] += 0.014073494917904612;
        } else {
          result[0] += 0.20198675496688742;
          result[1] += 0.009933774834437087;
          result[2] += 0.2913907284768212;
          result[3] += 0.2251655629139073;
          result[4] += 0.06622516556291391;
          result[5] += 0.2052980132450331;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0.55;
          result[5] += 0.15;
        } else {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0.029411764705882353;
          result[3] += 0.17647058823529413;
          result[4] += 0.08823529411764706;
          result[5] += 0.6470588235294118;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20491803278688525;
          result[3] += 0.5573770491803278;
          result[4] += 0;
          result[5] += 0.23770491803278687;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7066666666666667;
          result[3] += 0.24;
          result[4] += 0;
          result[5] += 0.05333333333333334;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.25;
        } else {
          result[0] += 0.01168969181721573;
          result[1] += 0;
          result[2] += 0.9139213602550479;
          result[3] += 0.06269925611052074;
          result[4] += 0;
          result[5] += 0.01168969181721573;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0.013333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9644444444444444;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.03117782909930716;
          result[1] += 0.0011547344110854503;
          result[2] += 0;
          result[3] += 0.042725173210161664;
          result[4] += 0.05889145496535797;
          result[5] += 0.8660508083140878;
        } else {
          result[0] += 0.039634146341463415;
          result[1] += 0.054878048780487805;
          result[2] += 0.018292682926829267;
          result[3] += 0.4146341463414634;
          result[4] += 0.06402439024390244;
          result[5] += 0.40853658536585363;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9856459330143541;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014354066985645933;
          result[5] += 0;
        } else {
          result[0] += 0.03076923076923077;
          result[1] += 0.13846153846153847;
          result[2] += 0.007692307692307693;
          result[3] += 0.03076923076923077;
          result[4] += 0.7538461538461538;
          result[5] += 0.038461538461538464;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8274509803921568;
          result[1] += 0.023529411764705882;
          result[2] += 0.000784313725490196;
          result[3] += 0.02980392156862745;
          result[4] += 0.08941176470588236;
          result[5] += 0.029019607843137254;
        } else {
          result[0] += 0.1588235294117647;
          result[1] += 0.021568627450980392;
          result[2] += 0.23921568627450981;
          result[3] += 0.28627450980392155;
          result[4] += 0.060784313725490195;
          result[5] += 0.23333333333333334;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24285714285714285;
          result[3] += 0.4714285714285714;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9615384615384616;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42de0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45588235294117646;
          result[3] += 0.4264705882352941;
          result[4] += 0.029411764705882353;
          result[5] += 0.08823529411764706;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010285714285714285;
          result[1] += 0;
          result[2] += 0.9257142857142857;
          result[3] += 0.060571428571428575;
          result[4] += 0;
          result[5] += 0.0034285714285714284;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0.006993006993006993;
          result[1] += 0.006993006993006993;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9300699300699301;
          result[5] += 0.055944055944055944;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017857142857142856;
          result[4] += 0.06318681318681318;
          result[5] += 0.9189560439560439;
        } else {
          result[0] += 0.11607142857142858;
          result[1] += 0.01607142857142857;
          result[2] += 0.0035714285714285713;
          result[3] += 0.3410714285714286;
          result[4] += 0.1125;
          result[5] += 0.4107142857142857;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.21428571428571427;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 0.9910913140311804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008908685968819599;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8044554455445545;
          result[1] += 0.03217821782178218;
          result[2] += 0;
          result[3] += 0.01485148514851485;
          result[4] += 0.11551155115511551;
          result[5] += 0.033003300330033;
        } else {
          result[0] += 0.2483221476510067;
          result[1] += 0.010067114093959731;
          result[2] += 0.18791946308724833;
          result[3] += 0.28859060402684567;
          result[4] += 0.0436241610738255;
          result[5] += 0.2214765100671141;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.13636363636363635;
          result[4] += 0.06818181818181818;
          result[5] += 0.7045454545454546;
        } else {
          result[0] += 0.0582010582010582;
          result[1] += 0.042328042328042326;
          result[2] += 0.15343915343915343;
          result[3] += 0.49206349206349204;
          result[4] += 0.042328042328042326;
          result[5] += 0.21164021164021163;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0.06593406593406594;
          result[1] += 0;
          result[2] += 0.7362637362637363;
          result[3] += 0.16483516483516483;
          result[4] += 0.01098901098901099;
          result[5] += 0.02197802197802198;
        } else {
          result[0] += 0.7741935483870968;
          result[1] += 0;
          result[2] += 0.12903225806451613;
          result[3] += 0.0967741935483871;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45714285714285713;
          result[3] += 0.4095238095238095;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.88;
          result[3] += 0.12;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009485094850948509;
          result[1] += 0;
          result[2] += 0.924119241192412;
          result[3] += 0.06504065040650407;
          result[4] += 0;
          result[5] += 0.0013550135501355014;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.00816326530612245;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9591836734693877;
          result[5] += 0.0326530612244898;
        } else {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.012387387387387387;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03490990990990991;
          result[4] += 0.05630630630630631;
          result[5] += 0.8963963963963963;
        } else {
          result[0] += 0.06051873198847262;
          result[1] += 0.005763688760806916;
          result[2] += 0.02881844380403458;
          result[3] += 0.4755043227665706;
          result[4] += 0.08357348703170028;
          result[5] += 0.345821325648415;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9909297052154195;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009070294784580499;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7675090252707581;
          result[1] += 0.023104693140794223;
          result[2] += 0.001444043321299639;
          result[3] += 0.018050541516245487;
          result[4] += 0.14873646209386282;
          result[5] += 0.04115523465703971;
        } else {
          result[0] += 0.209366391184573;
          result[1] += 0.024793388429752067;
          result[2] += 0.15426997245179064;
          result[3] += 0.29476584022038566;
          result[4] += 0.05234159779614325;
          result[5] += 0.2644628099173554;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.6018518518518519;
          result[4] += 0.037037037037037035;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.11363636363636363;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
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
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16;
          result[3] += 0.52;
          result[4] += 0;
          result[5] += 0.32;
        } else {
          result[0] += 0.01507537688442211;
          result[1] += 0;
          result[2] += 0.8040201005025126;
          result[3] += 0.1658291457286432;
          result[4] += 0;
          result[5] += 0.01507537688442211;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.0014265335235378032;
          result[1] += 0;
          result[2] += 0.9557774607703281;
          result[3] += 0.042796005706134094;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.3;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0033222591362126247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9368770764119602;
          result[5] += 0.059800664451827246;
        } else {
          result[0] += 0;
          result[1] += 0.11764705882352941;
          result[2] += 0;
          result[3] += 0.7058823529411765;
          result[4] += 0.17647058823529413;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.01791359325605901;
          result[1] += 0.004214963119072708;
          result[2] += 0.003161222339304531;
          result[3] += 0.06322444678609063;
          result[4] += 0.05795574288724974;
          result[5] += 0.8535300316122234;
        } else {
          result[0] += 0.09283819628647215;
          result[1] += 0;
          result[2] += 0.010610079575596816;
          result[3] += 0.44297082228116713;
          result[4] += 0.0610079575596817;
          result[5] += 0.3925729442970822;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0.23333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9880382775119617;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011961722488038277;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8241577649958916;
          result[1] += 0.03286770747740345;
          result[2] += 0.0008216926869350862;
          result[3] += 0.018077239112571898;
          result[4] += 0.11750205423171733;
          result[5] += 0.00657354149548069;
        } else {
          result[0] += 0.20308483290488433;
          result[1] += 0.033419023136246784;
          result[2] += 0.23393316195372751;
          result[3] += 0.2622107969151671;
          result[4] += 0.043701799485861184;
          result[5] += 0.2236503856041131;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.09523809523809523;
          result[2] += 0;
          result[3] += 0.047619047619047616;
          result[4] += 0.023809523809523808;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0.09523809523809523;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0.023255813953488372;
          result[2] += 0.13953488372093023;
          result[3] += 0.7093023255813954;
          result[4] += 0.011627906976744186;
          result[5] += 0.11627906976744186;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.65625;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.28125;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.0625;
          result[1] += 0.041666666666666664;
          result[2] += 0.2708333333333333;
          result[3] += 0.3125;
          result[4] += 0.020833333333333332;
          result[5] += 0.2916666666666667;
        } else {
          result[0] += 0.05454545454545454;
          result[1] += 0;
          result[2] += 0.6545454545454545;
          result[3] += 0.21818181818181817;
          result[4] += 0.03636363636363636;
          result[5] += 0.03636363636363636;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.5666666666666667;
          result[3] += 0.23333333333333334;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013513513513513514;
          result[1] += 0;
          result[2] += 0.9152334152334153;
          result[3] += 0.06756756756756757;
          result[4] += 0;
          result[5] += 0.0036855036855036856;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0.13636363636363635;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7727272727272727;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9759036144578314;
          result[5] += 0.024096385542168676;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0.002325581395348837;
          result[1] += 0.002325581395348837;
          result[2] += 0.002325581395348837;
          result[3] += 0.0686046511627907;
          result[4] += 0.037209302325581395;
          result[5] += 0.8872093023255814;
        } else {
          result[0] += 0.14653465346534653;
          result[1] += 0.007920792079207921;
          result[2] += 0.015841584158415842;
          result[3] += 0.3346534653465347;
          result[4] += 0.09702970297029703;
          result[5] += 0.39801980198019804;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0.3;
          result[2] += 0;
          result[3] += 0.016666666666666666;
          result[4] += 0.6833333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.989247311827957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010752688172043012;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8290062667860341;
          result[1] += 0.04207699194270367;
          result[2] += 0.0008952551477170994;
          result[3] += 0.010743061772605193;
          result[4] += 0.10474485228290063;
          result[5] += 0.012533572068039392;
        } else {
          result[0] += 0.22012578616352202;
          result[1] += 0.008385744234800839;
          result[2] += 0.26834381551362685;
          result[3] += 0.2557651991614256;
          result[4] += 0.03773584905660377;
          result[5] += 0.20964360587002095;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0.025;
          result[2] += 0;
          result[3] += 0.725;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0.0196078431372549;
          result[2] += 0.29411764705882354;
          result[3] += 0.23529411764705882;
          result[4] += 0.09803921568627451;
          result[5] += 0.35294117647058826;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8809523809523809;
          result[3] += 0.09523809523809523;
          result[4] += 0;
          result[5] += 0.023809523809523808;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.008771929824561403;
          result[1] += 0;
          result[2] += 0.6929824561403509;
          result[3] += 0.2543859649122807;
          result[4] += 0;
          result[5] += 0.043859649122807015;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.007075471698113208;
          result[1] += 0;
          result[2] += 0.8938679245283019;
          result[3] += 0.08726415094339622;
          result[4] += 0;
          result[5] += 0.01179245283018868;
        } else {
          result[0] += 0.007653061224489796;
          result[1] += 0;
          result[2] += 0.9846938775510204;
          result[3] += 0.007653061224489796;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.022900763358778626;
          result[1] += 0.16030534351145037;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7862595419847328;
          result[5] += 0.030534351145038167;
        } else {
          result[0] += 0.8043478260869567;
          result[1] += 0.026086956521739132;
          result[2] += 0;
          result[3] += 0.008695652173913045;
          result[4] += 0.08478260869565218;
          result[5] += 0.07608695652173915;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0.00425531914893617;
          result[2] += 0.018085106382978722;
          result[3] += 0.0925531914893617;
          result[4] += 0.06914893617021277;
          result[5] += 0.8159574468085107;
        } else {
          result[0] += 0.1835518474374255;
          result[1] += 0.009535160905840286;
          result[2] += 0.06436233611442194;
          result[3] += 0.27413587604290823;
          result[4] += 0.19785458879618595;
          result[5] += 0.27056019070321813;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0.85;
          result[2] += 0;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.1;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.9841772151898734;
          result[1] += 0;
          result[2] += 0.00949367088607595;
          result[3] += 0.0015822784810126582;
          result[4] += 0.004746835443037975;
          result[5] += 0;
        } else {
          result[0] += 0.7424242424242424;
          result[1] += 0;
          result[2] += 0.19696969696969696;
          result[3] += 0;
          result[4] += 0.06060606060606061;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4880952380952381;
          result[3] += 0.44047619047619047;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.022245762711864406;
          result[1] += 0;
          result[2] += 0.902542372881356;
          result[3] += 0.06567796610169492;
          result[4] += 0;
          result[5] += 0.009533898305084746;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
