
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
        result[1] += 0.00028951939779965256;
        result[2] += 0;
        result[3] += 0.9229878401852925;
        result[4] += 0.07614360162130862;
        result[5] += 0.0005790387955993051;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.05194805194805196;
        result[1] += 0.008885850991114152;
        result[2] += 0.020505809979494194;
        result[3] += 0;
        result[4] += 0.9172932330827068;
        result[5] += 0.0013670539986329463;
        result[6] += 0;
      } else {
        result[0] += 0.01434878587196468;
        result[1] += 0.0011037527593818985;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9823399558498896;
        result[5] += 0.002207505518763797;
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
        result[0] += 0.01529051987767584;
        result[1] += 0.03669724770642202;
        result[2] += 0;
        result[3] += 0.9480122324159022;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9941409184235566;
        result[1] += 0.0003004657218688968;
        result[2] += 0.0011517852671641044;
        result[3] += 0.004106364865541589;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003004657218688968;
      } else {
        result[0] += 0.8061631419939577;
        result[1] += 0.00030211480362537764;
        result[2] += 0.004954682779456193;
        result[3] += 0.1879154078549849;
        result[4] += 0;
        result[5] += 0.00024169184290030211;
        result[6] += 0.0004229607250755287;
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
        result[0] += 0.9983052975144364;
        result[1] += 0;
        result[2] += 0.001443635450665328;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002510670348983179;
      } else {
        result[0] += 0.9998052011298334;
        result[1] += 0;
        result[2] += 0.00019479887016655303;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.014540647719762063;
        result[1] += 0.006444150693985459;
        result[2] += 0.013218770654329148;
        result[3] += 0.6713483146067416;
        result[4] += 0.293291473892928;
        result[5] += 0.0011566424322538005;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.003067484662576687;
        result[3] += 0;
        result[4] += 0.9969325153374233;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9826850690087829;
        result[1] += 0.00012547051442910915;
        result[2] += 0.0056461731493099125;
        result[3] += 0.010790464240903387;
        result[4] += 0;
        result[5] += 0.00012547051442910915;
        result[6] += 0.0006273525721455458;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9988951960074669;
        result[1] += 0;
        result[2] += 0.0010286106137376663;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.619337879538268e-05;
      } else {
        result[0] += 0.5673084015637678;
        result[1] += 0.0013277273733126797;
        result[2] += 0.00715497528951833;
        result[3] += 0.4006786162130265;
        result[4] += 0.022497602714464854;
        result[5] += 0.0006638636866563399;
        result[6] += 0.00036881315925352216;
      }
    } else {
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
        result[2] += 0.0030721966205837174;
        result[3] += 0;
        result[4] += 0.9969278033794163;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0.13708019191226867;
        result[1] += 0.015078821110349555;
        result[2] += 0.004797806716929404;
        result[3] += 0.8430431802604523;
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.9570425444031392;
        result[1] += 0;
        result[2] += 0.0031667355087429436;
        result[3] += 0.039790720088117855;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.7249162405219538;
        result[1] += 0;
        result[2] += 0.003703050608358314;
        result[3] += 0.27067536589666724;
        result[4] += 0;
        result[5] += 0.00017633574325515782;
        result[6] += 0.0005290072297654734;
      } else {
        result[0] += 0.06215384615384616;
        result[1] += 0.003076923076923077;
        result[2] += 0;
        result[3] += 0.6110769230769231;
        result[4] += 0.32184615384615384;
        result[5] += 0.0018461538461538461;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2068827531012405;
        result[1] += 0.0020008003201280513;
        result[2] += 0.006802721088435374;
        result[3] += 0.782312925170068;
        result[4] += 0;
        result[5] += 0.0020008003201280513;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.5042735042735043;
        result[1] += 0.037037037037037035;
        result[2] += 0;
        result[3] += 0.4586894586894587;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.921506088973573;
        result[1] += 0.0007455886007787259;
        result[2] += 0.003230883936707812;
        result[3] += 0.07439317372214398;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001242647667964543;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.1827899518973811;
        result[1] += 0.009620523784072688;
        result[2] += 0;
        result[3] += 0.8075895243185462;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.504325259515571;
        result[1] += 0;
        result[2] += 0.029411764705882353;
        result[3] += 0.4662629757785467;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.11723329425556858;
        result[1] += 0.0011723329425556857;
        result[2] += 0;
        result[3] += 0.8757327080890973;
        result[4] += 0.0029308323563892145;
        result[5] += 0.0029308323563892145;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03756476683937824;
        result[3] += 0;
        result[4] += 0.961139896373057;
        result[5] += 0.0012953367875647669;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9936695123715815;
        result[1] += 0.00032556793517580666;
        result[2] += 0.0014469686007813631;
        result[3] += 0.004232383157285487;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032556793517580666;
      } else {
        result[0] += 0.6532692087484255;
        result[1] += 0;
        result[2] += 0.004007786556738807;
        result[3] += 0.3421504637581587;
        result[4] += 0;
        result[5] += 0.00034352456200618345;
        result[6] += 0.00022901637467078896;
      }
    }
  }
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9351398097434419;
        result[4] += 0.06457192274430672;
        result[5] += 0.0002882675122513693;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.002570694087403599;
        result[2] += 0.015852613538988862;
        result[3] += 0;
        result[4] += 0.9790059982862039;
        result[5] += 0.002570694087403599;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.03424657534246575;
        result[2] += 0;
        result[3] += 0.9657534246575342;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9964922537269805;
        result[1] += 0.0006211634025138848;
        result[2] += 0.0023750365390236773;
        result[3] += 0.0002557731657410114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002557731657410114;
      } else {
        result[0] += 0.6367526055951728;
        result[1] += 0;
        result[2] += 0.004168952276467361;
        result[3] += 0.3587493143170598;
        result[4] += 0;
        result[5] += 0.00010970927043335162;
        result[6] += 0.00021941854086670324;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9872013651877133;
        result[1] += 0;
        result[2] += 0.010238907849829351;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002559726962457338;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0.999391419008013;
        result[1] += 0;
        result[2] += 0.0006085809919870169;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0004108463434675431;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991783073130649;
        result[5] += 0.0004108463434675431;
        result[6] += 0;
      } else {
        result[0] += 0.018773764258555134;
        result[1] += 0.007366920152091254;
        result[2] += 0.017347908745247147;
        result[3] += 0.9557984790874525;
        result[4] += 0;
        result[5] += 0.0007129277566539924;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9826065349732886;
        result[1] += 0.0003727171077152441;
        result[2] += 0.004845322400298174;
        result[3] += 0.011305752267362405;
        result[4] += 0;
        result[5] += 0.00024847807181016274;
        result[6] += 0.0006211951795254069;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00038550501156515033;
        result[3] += 0.9996144949884348;
        result[4] += 0;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.19916796671866874;
        result[1] += 0.011440457618304731;
        result[2] += 0;
        result[3] += 0.7893915756630265;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5130890052356021;
        result[1] += 0;
        result[2] += 0.028795811518324606;
        result[3] += 0.4581151832460733;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.7012465666596239;
        result[1] += 0;
        result[2] += 0.007183604479188675;
        result[3] += 0.26410310585252483;
        result[4] += 0.026832875554616522;
        result[5] += 0.0006338474540460595;
        result[6] += 0;
      } else {
        result[0] += 0.983790168207551;
        result[1] += 0.0005294668675925549;
        result[2] += 0.0007331079705127683;
        result[3] += 0.014621431189671323;
        result[4] += 0.00012218466175212804;
        result[5] += 8.145644116808537e-05;
        result[6] += 0.00012218466175212804;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.1411225658648339;
        result[1] += 0;
        result[2] += 0.009851088201603665;
        result[3] += 0.699885452462772;
        result[4] += 0.14776632302405499;
        result[5] += 0.0013745704467353953;
        result[6] += 0;
      } else {
        result[0] += 0.9949238578680203;
        result[1] += 0;
        result[2] += 0.002733307301835221;
        result[3] += 0.0015618898867629833;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007809449433814916;
      }
    }
  }
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
        result[0] += 0.999861782999309;
        result[1] += 0;
        result[2] += 0.00013821700069108501;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9963692946058091;
        result[1] += 0;
        result[2] += 0.0036307053941908715;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.910624770754371;
        result[1] += 0.0013449076904267026;
        result[2] += 0.003667930064800098;
        result[3] += 0.08301748379997555;
        result[4] += 0;
        result[5] += 0.00012226433549333658;
        result[6] += 0.001222643354933366;
      } else {
        result[0] += 0.11534175334323923;
        result[1] += 0.003714710252600297;
        result[2] += 0.008729569093610699;
        result[3] += 0.549034175334324;
        result[4] += 0.32262258543833583;
        result[5] += 0.0005572065378900445;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0026569246097641985;
        result[2] += 0;
        result[3] += 0.9960146130853538;
        result[4] += 0.0009963467286615744;
        result[5] += 0.0003321155762205248;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04328358208955225;
        result[3] += 0;
        result[4] += 0.955223880597015;
        result[5] += 0.001492537313432836;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16666666666666666;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8320251177394035;
        result[4] += 0;
        result[5] += 0.0013082155939298796;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.98;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0022431583669807087;
        result[2] += 0.012113055181695828;
        result[3] += 0;
        result[4] += 0.9825033647375505;
        result[5] += 0.0031404217137729925;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41300000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9668508287292817;
        result[1] += 0.03314917127071823;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.996119673617407;
        result[1] += 0.0004351767905711695;
        result[2] += 0.0024660018132366276;
        result[3] += 0.0007252946509519493;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025385312783318226;
      } else {
        result[0] += 0.6426449554406426;
        result[1] += 0;
        result[2] += 0.004290901089228739;
        result[3] += 0.35251402794586867;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005501155242600948;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  result[6] /= 10;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
