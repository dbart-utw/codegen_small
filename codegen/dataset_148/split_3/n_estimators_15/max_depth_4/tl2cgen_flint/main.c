
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9927184466019418;
          result[1] += 0;
          result[2] += 0.006796116504854369;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004854368932038835;
        } else {
          result[0] += 0.9994189665905789;
          result[1] += 0;
          result[2] += 0.0005810334094210417;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0.008583690987124463;
          result[1] += 0.030042918454935622;
          result[2] += 0;
          result[3] += 0.9613733905579399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001445086705202312;
          result[1] += 0;
          result[2] += 0.001445086705202312;
          result[3] += 0;
          result[4] += 0.9956647398843931;
          result[5] += 0.001445086705202312;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.6926089084679394;
          result[1] += 0.0012236906510034264;
          result[2] += 0.006485560450318161;
          result[3] += 0.2659079784630446;
          result[4] += 0.03279490944689183;
          result[5] += 0.00036710719530102793;
          result[6] += 0.0006118453255017132;
        } else {
          result[0] += 0.3919817594527836;
          result[1] += 0;
          result[2] += 0.008170245107353221;
          result[3] += 0.5958578757362721;
          result[4] += 0.0020900627018810565;
          result[5] += 0.0009500285008550256;
          result[6] += 0.0009500285008550256;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9603960396039604;
          result[1] += 0;
          result[2] += 0.039603960396039604;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.47147147147147145;
          result[1] += 0;
          result[2] += 0.003003003003003003;
          result[3] += 0.5255255255255256;
          result[4] += 0;
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
          result[0] += 0.0010384215991692627;
          result[1] += 0.010384215991692628;
          result[2] += 0;
          result[3] += 0.9885773624091381;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
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
          result[0] += 0.008771929824561403;
          result[1] += 0.08771929824561403;
          result[2] += 0;
          result[3] += 0.9035087719298246;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
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
          result[0] += 0.000296823983377857;
          result[1] += 0.0029682398337785697;
          result[2] += 0.002374591867022856;
          result[3] += 0.9931730483823094;
          result[4] += 0;
          result[5] += 0.001187295933511428;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0.9971959213401311;
          result[1] += 0.0006919155134741443;
          result[2] += 0.0018572469045884923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025491624180626365;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.5700934579439252;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42990654205607476;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9523809523809524;
          result[1] += 0;
          result[2] += 0.04166666666666667;
          result[3] += 0.005952380952380953;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
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
          result[2] += 0.04087193460490463;
          result[3] += 0;
          result[4] += 0.9577656675749319;
          result[5] += 0.0013623978201634877;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.9948646125116714;
          result[1] += 0;
          result[2] += 0.003734827264239029;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014005602240896359;
        } else {
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.09090909090909091;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x44f63000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.0013568521031207597;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9977385798281321;
          result[4] += 0;
          result[5] += 0.0009045680687471732;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009765625;
          result[2] += 0.03125;
          result[3] += 0.955078125;
          result[4] += 0;
          result[5] += 0.00390625;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.9979859013091642;
          result[1] += 0;
          result[2] += 0.0012588116817724068;
          result[3] += 0.0007552870090634441;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.28426395939086296;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7157360406091371;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0.9959901295496607;
          result[1] += 0.000873946123791898;
          result[2] += 0.002827472753444376;
          result[3] += 5.140859551717047e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025704297758585235;
        } else {
          result[0] += 0.35587188612099646;
          result[1] += 0.060498220640569395;
          result[2] += 0;
          result[3] += 0.5836298932384342;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2534714050364792;
          result[1] += 0;
          result[2] += 0.002353494939985879;
          result[3] += 0.7441751000235349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9931892212022505;
          result[1] += 0;
          result[2] += 0.004737933076695291;
          result[3] += 0.0011844832691738228;
          result[4] += 0;
          result[5] += 0.0005922416345869114;
          result[6] += 0.0002961208172934557;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.09610705596107055;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8856447688564477;
          result[4] += 0.01824817518248175;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0016286644951140066;
          result[1] += 0.014657980456026058;
          result[2] += 0;
          result[3] += 0.2752442996742671;
          result[4] += 0.7084690553745928;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 0.7148856742883808;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2841810545963602;
          result[4] += 0.0009332711152589828;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8658387430614357;
          result[1] += 0;
          result[2] += 0.0038573713425533915;
          result[3] += 0.12917489886160505;
          result[4] += 0.00047041113933577947;
          result[5] += 0.00037632891146862355;
          result[6] += 0.0002822466836014677;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
          result[0] += 0.48333333333333334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5166666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9173666731783552;
          result[1] += 0.000586051963274077;
          result[2] += 0.0034674741160382887;
          result[3] += 0.06881226802109787;
          result[4] += 0.009132643094354366;
          result[5] += 0.0002441883180308654;
          result[6] += 0.0003907013088493846;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.16917562724014337;
          result[1] += 0;
          result[2] += 0.0014336917562724014;
          result[3] += 0.6458781362007169;
          result[4] += 0.18315412186379929;
          result[5] += 0.00035842293906810036;
          result[6] += 0;
        } else {
          result[0] += 0.9968643101482326;
          result[1] += 0;
          result[2] += 0.0014253135689851768;
          result[3] += 0.0017103762827822121;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.1;
          result[1] += 0.016049382716049384;
          result[2] += 0.006172839506172839;
          result[3] += 0.8777777777777778;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9921011058451816;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007898894154818325;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.000643707756678468;
          result[1] += 0;
          result[2] += 0.010299324106855488;
          result[3] += 0.8252333440617959;
          result[4] += 0.16253620856131315;
          result[5] += 0.001287415513356936;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23841059602649006;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7615894039735099;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0.0794392523364486;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9205607476635514;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0015455950540958269;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984544049459042;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.999223344058582;
          result[1] += 0;
          result[2] += 0.0007766559414179519;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9941983608067041;
          result[1] += 0;
          result[2] += 0.0005525370660281794;
          result[3] += 0.0049728335942536145;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002762685330140897;
        } else {
          result[0] += 0.26666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0.39791666666666664;
          result[1] += 0.020833333333333332;
          result[2] += 0;
          result[3] += 0.58125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9943250422603236;
          result[1] += 0.0004829751267809708;
          result[2] += 0.004467519922723979;
          result[3] += 0.0002414875633904854;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004829751267809708;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.008442776735459663;
          result[1] += 0;
          result[2] += 0.0034396497811131957;
          result[3] += 0.9878048780487805;
          result[4] += 0;
          result[5] += 0.00031269543464665416;
          result[6] += 0;
        } else {
          result[0] += 0.9931232091690544;
          result[1] += 0;
          result[2] += 0.004393505253104107;
          result[3] += 0.0017191977077363897;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007640878701050621;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
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
          result[1] += 0.00437636761487965;
          result[2] += 0.002188183807439825;
          result[3] += 0.9906220693966865;
          result[4] += 0;
          result[5] += 0.002813379180994061;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9970345725444814;
          result[1] += 0.0005062924924056126;
          result[2] += 0.0021698249674526253;
          result[3] += 0.00018081874728771878;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010849124837263127;
        } else {
          result[0] += 0.7971014492753623;
          result[1] += 0;
          result[2] += 0.057971014492753624;
          result[3] += 0.14492753623188406;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x43140000))) ) ) {
          result[0] += 0.010135135135135136;
          result[1] += 0.05067567567567568;
          result[2] += 0;
          result[3] += 0.9391891891891891;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.33866666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6613333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9452690166975881;
          result[1] += 0;
          result[2] += 0.029684601113172542;
          result[3] += 0.015769944341372914;
          result[4] += 0;
          result[5] += 0.0018552875695732839;
          result[6] += 0.0074211502782931356;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.21099744245524296;
          result[1] += 0;
          result[2] += 0.00042625745950554135;
          result[3] += 0.7885763000852515;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9968926553672317;
          result[1] += 0;
          result[2] += 0.0016949152542372883;
          result[3] += 0.0014124293785310737;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.007194244604316547;
          result[1] += 0.039568345323741004;
          result[2] += 0;
          result[3] += 0.10071942446043165;
          result[4] += 0.8525179856115108;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9832089552238806;
          result[1] += 0;
          result[2] += 0.016791044776119403;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006843455945252352;
          result[3] += 0.7741659538066724;
          result[4] += 0.21899059024807527;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.13768115942028986;
          result[1] += 0.01288244766505636;
          result[2] += 0;
          result[3] += 0.8494363929146538;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.013738959764474975;
          result[1] += 0;
          result[2] += 0.013738959764474975;
          result[3] += 0.2070657507360157;
          result[4] += 0.7654563297350343;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9910529938059188;
          result[1] += 0;
          result[2] += 0.007570543702684102;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013764624913971094;
        } else {
          result[0] += 0.9995583526554047;
          result[1] += 0;
          result[2] += 0.00044164734459534063;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0.009302325581395349;
          result[1] += 0.013953488372093023;
          result[2] += 0;
          result[3] += 0.9767441860465116;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030257186081694403;
          result[3] += 0;
          result[4] += 0.9954614220877458;
          result[5] += 0.0015128593040847202;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.7723177723177724;
          result[1] += 0.0029484029484029488;
          result[2] += 0.0031122031122031127;
          result[3] += 0.2145782145782146;
          result[4] += 0.006388206388206389;
          result[5] += 0.00016380016380016383;
          result[6] += 0.0004914004914004915;
        } else {
          result[0] += 0.4139408099688474;
          result[1] += 0;
          result[2] += 0.009540498442367602;
          result[3] += 0.5724299065420562;
          result[4] += 0.0031152647975077885;
          result[5] += 0.0005841121495327103;
          result[6] += 0.00038940809968847356;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985507246376811;
          result[5] += 0.0014492753623188406;
          result[6] += 0;
        } else {
          result[0] += 0.631768953068592;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.36823104693140796;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0.000501002004008016;
          result[2] += 0.014028056112224449;
          result[3] += 0.9799599198396793;
          result[4] += 0.001002004008016032;
          result[5] += 0.0045090180360721445;
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
          result[0] += 0.9969824433065106;
          result[1] += 0;
          result[2] += 0.0027432333577176297;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027432333577176297;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9618423264414185;
          result[1] += 0.0013447638258530844;
          result[2] += 0.0072281055639603275;
          result[3] += 0.029584804168767853;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3942501005227182;
          result[1] += 0;
          result[2] += 0.006031363088057902;
          result[3] += 0.5985122637716125;
          result[4] += 0;
          result[5] += 0.00040209087253719345;
          result[6] += 0.0008041817450743869;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.9217391304347826;
          result[1] += 0;
          result[2] += 0.0782608695652174;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4755043227665706;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5244956772334294;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0;
          result[1] += 0.009417808219178082;
          result[2] += 0;
          result[3] += 0.990582191780822;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41cc0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003045994517209869;
          result[2] += 0.0024367956137678953;
          result[3] += 0.9939080109655802;
          result[4] += 0;
          result[5] += 0.0006091989034419738;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0.6036585365853658;
          result[1] += 0.03048780487804878;
          result[2] += 0;
          result[3] += 0.36585365853658536;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024844720496894408;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9751552795031055;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9575098814229249;
          result[1] += 0;
          result[2] += 0.039525691699604744;
          result[3] += 0.0029644268774703555;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977441912925782;
          result[1] += 0.0008647266711782839;
          result[2] += 0.0010151139183397246;
          result[3] += 7.519362358072034e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00030077449432288137;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.1911991765311374;
          result[1] += 0;
          result[2] += 0.001029336078229542;
          result[3] += 0.8077714873906331;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977765425236242;
          result[1] += 0;
          result[2] += 0.0022234574763757642;
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
          result[0] += 0.992114043069457;
          result[1] += 0;
          result[2] += 0.004549590536851683;
          result[3] += 0.0021231422505307855;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001213224143160449;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
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
          result[1] += 0.0002965599051008304;
          result[2] += 0;
          result[3] += 0.9297153024911032;
          result[4] += 0.06880189798339265;
          result[5] += 0.0011862396204033216;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0.875;
          result[1] += 0;
          result[2] += 0.10416666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.020833333333333332;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009180327868852459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9908196721311475;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9973992197659298;
          result[1] += 0.0007224389539083947;
          result[2] += 0.0015893656985984685;
          result[3] += 0.00014448779078167894;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014448779078167894;
        } else {
          result[0] += 0.7214285714285714;
          result[1] += 0;
          result[2] += 0.09285714285714286;
          result[3] += 0.18571428571428572;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 0;
          result[1] += 0.010714285714285714;
          result[2] += 0;
          result[3] += 0.9892857142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.375;
          result[1] += 0.625;
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
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0031545741324921135;
          result[3] += 0;
          result[4] += 0.9968454258675079;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009773013871374527;
          result[3] += 0.9845523329129886;
          result[4] += 0.0034678436317780582;
          result[5] += 0.0022068095838587644;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.9931444241316271;
          result[1] += 0;
          result[2] += 0.005027422303473492;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018281535648994515;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.5;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9855670103092784;
          result[1] += 0;
          result[2] += 0.010309278350515464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004123711340206186;
        } else {
          result[0] += 0.9993031358885017;
          result[1] += 0;
          result[2] += 0.0006968641114982578;
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
          result[0] += 0.9988528522265095;
          result[1] += 0;
          result[2] += 0.0011471477734904577;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.0009828009828009828;
          result[1] += 0.008353808353808353;
          result[2] += 0.010319410319410319;
          result[3] += 0.9764127764127765;
          result[4] += 0.002457002457002457;
          result[5] += 0.0014742014742014742;
          result[6] += 0;
        } else {
          result[0] += 0.9968246767974598;
          result[1] += 0;
          result[2] += 0.0018144704014515763;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013608528010886822;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0.039473684210526314;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9605263157894737;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.257459505541347;
          result[1] += 0.011082693947144074;
          result[2] += 0;
          result[3] += 0.731457800511509;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9951028403525954;
          result[1] += 0;
          result[2] += 0.0039177277179236044;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0009794319294809011;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0055272108843537416;
          result[2] += 0.011904761904761904;
          result[3] += 0.26658163265306123;
          result[4] += 0.7159863945578231;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010716152639832723;
          result[3] += 0.8209618400418192;
          result[4] += 0.16779926816518556;
          result[5] += 0.0005227391531625719;
          result[6] += 0;
        } else {
          result[0] += 0.9937862468931234;
          result[1] += 0;
          result[2] += 0.005385252692626346;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008285004142502071;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9825897714907509;
          result[1] += 0;
          result[2] += 0.015233949945593038;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021762785636561485;
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
          result[0] += 0.9993105486063233;
          result[1] += 0;
          result[2] += 0.0006894513936767458;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0.0014084507042253522;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.995774647887324;
          result[5] += 0.0028169014084507044;
          result[6] += 0;
        } else {
          result[0] += 0.02221648152932059;
          result[1] += 0.006974941875484371;
          result[2] += 0.017566520278997674;
          result[3] += 0.9516920692327564;
          result[4] += 0;
          result[5] += 0.0015499870834409714;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.5459272097053727;
          result[1] += 0;
          result[2] += 0.0015597920277296362;
          result[3] += 0.45181975736568464;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006932409012131717;
        } else {
          result[0] += 0.9756;
          result[1] += 0;
          result[2] += 0.0038;
          result[3] += 0.0204;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.005208333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.796875;
          result[4] += 0.19791666666666666;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002849002849002849;
          result[1] += 0.022792022792022793;
          result[2] += 0;
          result[3] += 0.3475783475783476;
          result[4] += 0.6267806267806267;
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9583333333333334;
          result[5] += 0.041666666666666664;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41ec0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006949270326615705;
          result[2] += 0.01250868658790827;
          result[3] += 0.9777623349548298;
          result[4] += 0;
          result[5] += 0.002779708130646282;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9989550679205852;
          result[1] += 0;
          result[2] += 0.0010449320794148381;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7444444444444445;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25555555555555554;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.8902082927778859;
          result[1] += 0;
          result[2] += 0.003114658360911038;
          result[3] += 0.10609305041853222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005839984426708196;
        } else {
          result[0] += 0.44026548672566373;
          result[1] += 0;
          result[2] += 0.008112094395280236;
          result[3] += 0.551622418879056;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41200000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.3922091782283885;
          result[1] += 0.009071504802561367;
          result[2] += 0.015474919957310568;
          result[3] += 0.5763073639274281;
          result[4] += 0.006937033084311634;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.111358574610245;
          result[4] += 0.888641425389755;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.8894623139702352;
          result[1] += 0.0005600896143382942;
          result[2] += 0.0014402304368698992;
          result[3] += 0.10681709073451752;
          result[4] += 0.0013202112337974076;
          result[5] += 0.00024003840614498319;
          result[6] += 0.00016002560409665546;
        } else {
          result[0] += 0.0021321961620469083;
          result[1] += 0;
          result[2] += 0.0021321961620469083;
          result[3] += 0;
          result[4] += 0.9957356076759062;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42e30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0.01033464566929134;
          result[2] += 0.0073818897637795275;
          result[3] += 0.8725393700787402;
          result[4] += 0.10974409448818898;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
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
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8611111111111112;
          result[1] += 0;
          result[2] += 0.1388888888888889;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16260162601626016;
          result[4] += 0.8373983739837398;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0.9981378026070763;
          result[1] += 0;
          result[2] += 0.00186219739292365;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.6299797434166104;
          result[1] += 0;
          result[2] += 0.011028584289894216;
          result[3] += 0.33085752869682644;
          result[4] += 0.026108485257708754;
          result[5] += 0.00022507314877335134;
          result[6] += 0.0018005851901868107;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00631911532385466;
          result[3] += 0.8325434439178515;
          result[4] += 0.1579778830963665;
          result[5] += 0.00315955766192733;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.984830178547456;
          result[1] += 0.0005369848301785474;
          result[2] += 0.0010739696603570949;
          result[3] += 0.013424620754463686;
          result[4] += 0.00013424620754463686;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7582417582417582;
          result[1] += 0.001042061386888973;
          result[2] += 0.0033156498673740055;
          result[3] += 0.22783251231527094;
          result[4] += 0.009189086775293672;
          result[5] += 0.00028419856006062905;
          result[6] += 9.473285335354301e-05;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
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
          result[2] += 0.002105263157894737;
          result[3] += 0;
          result[4] += 0.9978947368421053;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9934533551554828;
          result[1] += 0;
          result[2] += 0.006546644844517185;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[0] += 0.9575471698113207;
          result[1] += 0;
          result[2] += 0.0330188679245283;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.009433962264150943;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9861111111111112;
          result[1] += 0;
          result[2] += 0.013888888888888888;
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
          result[0] += 0.9992926434923202;
          result[1] += 0;
          result[2] += 0.0007073565076798706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0.00784313725490196;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9882352941176471;
          result[5] += 0.00392156862745098;
          result[6] += 0;
        } else {
          result[0] += 0.0223433242506812;
          result[1] += 0.012534059945504087;
          result[2] += 0.007356948228882834;
          result[3] += 0.9561307901907357;
          result[4] += 0;
          result[5] += 0.0016348773841961854;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09747292418772563;
          result[3] += 0.9025270758122743;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008359872611464968;
          result[3] += 0.12221337579617834;
          result[4] += 0.8682324840764332;
          result[5] += 0.0011942675159235668;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.9950560316413974;
          result[1] += 0.00016479894528675015;
          result[2] += 0.0036255767963085037;
          result[3] += 0.00016479894528675015;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000988793671720501;
        } else {
          result[0] += 0.9488579940417081;
          result[1] += 0;
          result[2] += 0.00496524329692155;
          result[3] += 0.04419066534260179;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00198609731876862;
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
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  result[6] /= 15;
  
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
