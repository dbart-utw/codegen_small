
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9094386934996465;
        result[1] += 0.0006108146338327012;
        result[2] += 0.002282517842216936;
        result[3] += 0.07911656915064619;
        result[4] += 0.008165627210184531;
        result[5] += 0.00028933324760496373;
        result[6] += 9.644441586832124e-05;
      } else {
        result[0] += 0.651294498381877;
        result[1] += 0;
        result[2] += 0.006819232547387887;
        result[3] += 0.3391123439667129;
        result[4] += 0.001502542764678687;
        result[5] += 0.0005779010633379565;
        result[6] += 0.0006934812760055479;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.6164383561643836;
        result[1] += 0;
        result[2] += 0.00684931506849315;
        result[3] += 0.3767123287671233;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006666666666666667;
        result[2] += 0;
        result[3] += 0.9933333333333333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0027100271002710027;
        result[1] += 0.008130081300813009;
        result[2] += 0;
        result[3] += 0.16260162601626016;
        result[4] += 0.8265582655826558;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.99912139964856;
        result[1] += 0;
        result[2] += 0.0005348002139200856;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003438001375200551;
      } else {
        result[0] += 0.577178729689808;
        result[1] += 0.0014032496307237814;
        result[2] += 0.007680945347119645;
        result[3] += 0.39217134416543575;
        result[4] += 0.020384047267355983;
        result[5] += 0.0006646971935007386;
        result[6] += 0.00051698670605613;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42e50000))) ) ) {
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
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0.15689149560117302;
        result[1] += 0.008797653958944282;
        result[2] += 0.0036656891495601175;
        result[3] += 0.8306451612903226;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 0.0031380753138075313;
        result[1] += 0.011506276150627616;
        result[2] += 0;
        result[3] += 0.17782426778242677;
        result[4] += 0.8075313807531381;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 0.2;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991554054054054;
        result[5] += 0.0008445945945945946;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += 0.125;
        result[1] += 0.25;
        result[2] += 0.625;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07103825136612021;
        result[1] += 0.0007285974499089253;
        result[2] += 0.00546448087431694;
        result[3] += 0.9227686703096539;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9933774834437087;
        result[1] += 0;
        result[2] += 0.005676442762535479;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009460737937559131;
      } else {
        result[0] += 0.9995834201208081;
        result[1] += 0;
        result[2] += 0.00041657987919183504;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9360730593607306;
        result[1] += 0.00560398505603985;
        result[2] += 0.005396430053964301;
        result[3] += 0.05209630552096305;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008302200083022001;
      } else {
        result[0] += 0.48095302194104184;
        result[1] += 0;
        result[2] += 0.008345672365055862;
        result[3] += 0.5092206218871989;
        result[4] += 0;
        result[5] += 0.0008076457127473415;
        result[6] += 0.0006730380939561179;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0.00038387715930902113;
        result[1] += 0.003838771593090211;
        result[2] += 0.006142034548944338;
        result[3] += 0.9869481765834933;
        result[4] += 0;
        result[5] += 0.002687140115163148;
        result[6] += 0;
      } else {
        result[0] += 0.9513274336283186;
        result[1] += 0;
        result[2] += 0.048672566371681415;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9939117199391172;
        result[1] += 0;
        result[2] += 0.004058853373921867;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020294266869609334;
      } else {
        result[0] += 0.999749184850765;
        result[1] += 0;
        result[2] += 0.00025081514923501377;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9367321867321867;
        result[1] += 0.004095004095004095;
        result[2] += 0.006961506961506962;
        result[3] += 0.051392301392301394;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000819000819000819;
      } else {
        result[0] += 0.4706598161168199;
        result[1] += 0;
        result[2] += 0.007301243915630071;
        result[3] += 0.5201460248783126;
        result[4] += 0;
        result[5] += 0.0005408328826392645;
        result[6] += 0.0013520822065981612;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0005595970900951316;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994404029099049;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001548467017652524;
        result[1] += 0.0037163208423660575;
        result[2] += 0.004335707649427067;
        result[3] += 0.9885413440693713;
        result[4] += 0;
        result[5] += 0.0018581604211830288;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0.9903448275862069;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009655172413793104;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.014705882352941176;
        result[3] += 0;
        result[4] += 0.9852941176470589;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.981371810057069;
        result[1] += 0;
        result[2] += 0.0009690965866264671;
        result[3] += 0.01765909335630451;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5567149108044429;
        result[1] += 0;
        result[2] += 0.006731740154830024;
        result[3] += 0.434533826994278;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002019522046449007;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9989228414309201;
        result[1] += 0;
        result[2] += 0.0009637734565451556;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011338511253472419;
      } else {
        result[0] += 0.6949317738791423;
        result[1] += 0.004873294346978557;
        result[2] += 0.004594820384294068;
        result[3] += 0.2951824004455583;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004177109440267335;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0014619883040935672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9970760233918129;
        result[5] += 0.0014619883040935672;
        result[6] += 0;
      } else {
        result[0] += 0.9852983430705872;
        result[1] += 0.0003352169332439422;
        result[2] += 0.0015324202662580215;
        result[3] += 0.012786131596590367;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.788813332056317e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.7596834384249131;
        result[1] += 0.000514734268433921;
        result[2] += 0.004889975550122249;
        result[3] += 0.21573800025736714;
        result[4] += 0.017887015828078754;
        result[5] += 0.0006434178355424012;
        result[6] += 0.0006434178355424012;
      } else {
        result[0] += 0.46817058096415326;
        result[1] += 0;
        result[2] += 0.007107540173053152;
        result[3] += 0.5247218788627935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.19946631087391595;
        result[1] += 0.00533689126084056;
        result[2] += 0.004669779853235491;
        result[3] += 0.790527018012008;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.003424657534246575;
        result[1] += 0.03767123287671233;
        result[2] += 0;
        result[3] += 0.2363013698630137;
        result[4] += 0.7226027397260274;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0030441400304414;
        result[2] += 0;
        result[3] += 0.0578386605783866;
        result[4] += 0.939117199391172;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.9976833976833976;
        result[1] += 0.0002438528754318228;
        result[2] += 0.0003251371672424304;
        result[3] += 0.0013818329607803291;
        result[4] += 8.12842918106076e-05;
        result[5] += 0;
        result[6] += 0.0002844950213371266;
      } else {
        result[0] += 0.8576850094876661;
        result[1] += 0.0034788108791903864;
        result[2] += 0.005692599620493359;
        result[3] += 0.13251106894370654;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006325110689437066;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.18893617021276596;
        result[1] += 0;
        result[2] += 0.007659574468085106;
        result[3] += 0.7739007092198582;
        result[4] += 0.02950354609929078;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9948778565799843;
        result[1] += 0;
        result[2] += 0.003940110323089046;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001182033096926714;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.2636567722624096;
        result[1] += 0.001247193813918683;
        result[2] += 0.004240458967323522;
        result[3] += 0.7283611873285109;
        result[4] += 0.001746071339486156;
        result[5] += 0.0007483162883512097;
        result[6] += 0;
      } else {
        result[0] += 0.006097560975609756;
        result[1] += 0.042682926829268296;
        result[2] += 0;
        result[3] += 0.21341463414634146;
        result[4] += 0.7378048780487805;
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
        result[0] += 0.3789954337899543;
        result[1] += 0;
        result[2] += 0.0487062404870624;
        result[3] += 0.5677321156773212;
        result[4] += 0;
        result[5] += 0.0045662100456621;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.007170435741864313;
        result[1] += 0.006067291781577496;
        result[2] += 0.01654715940430226;
        result[3] += 0.9696635410921125;
        result[4] += 0.0005515719801434088;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9964830011723329;
        result[1] += 0;
        result[2] += 0.0035169988276670576;
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
        result[0] += 0.008403361344537815;
        result[1] += 0.025210084033613446;
        result[2] += 0;
        result[3] += 0.9663865546218487;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.9184937567594141;
        result[1] += 0;
        result[2] += 0.0006882312456985548;
        result[3] += 0.0777701307639367;
        result[4] += 0.0028512437321797273;
        result[5] += 9.831874938550783e-05;
        result[6] += 9.831874938550783e-05;
      } else {
        result[0] += 0.9475991541595751;
        result[1] += 0.0007736345350456445;
        result[2] += 0.002166176698127805;
        result[3] += 0.04404559286193203;
        result[4] += 0.004744958481613287;
        result[5] += 0.0001547269070091289;
        result[6] += 0.0005157563566970964;
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
        result[0] += 0.37038297872340425;
        result[1] += 0;
        result[2] += 0.006808510638297872;
        result[3] += 0.5002553191489362;
        result[4] += 0.12034042553191489;
        result[5] += 0.00034042553191489364;
        result[6] += 0.001872340425531915;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.9994267588947912;
        result[1] += 0;
        result[2] += 0.00045859288416708066;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011464822104177016;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.613454602477654;
        result[1] += 0.0009408812921436412;
        result[2] += 0.006429355496314882;
        result[3] += 0.32523129998431866;
        result[4] += 0.05292457268307982;
        result[5] += 7.840677434530344e-05;
        result[6] += 0.0009408812921436412;
      } else {
        result[0] += 0.0054017555705604325;
        result[1] += 0;
        result[2] += 0.014854827819041188;
        result[3] += 0.7886563133018231;
        result[4] += 0.19041188386225524;
        result[5] += 0.0006752194463200541;
        result[6] += 0;
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
        result[0] += 0.1682769726247987;
        result[1] += 0.013687600644122383;
        result[2] += 0;
        result[3] += 0.8180354267310789;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.038;
        result[4] += 0.962;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17457627118644067;
        result[1] += 0;
        result[2] += 0.005084745762711864;
        result[3] += 0.35084745762711866;
        result[4] += 0.4694915254237288;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0.3985200845665962;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6004228329809725;
        result[4] += 0.0010570824524312897;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0016474464579901153;
        result[1] += 0.018121911037891267;
        result[2] += 0;
        result[3] += 0.21911037891268534;
        result[4] += 0.7611202635914333;
        result[5] += 0;
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
        result[0] += 0.31645569620253167;
        result[1] += 0.006329113924050633;
        result[2] += 0.012658227848101266;
        result[3] += 0.6645569620253164;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.8651033581174933;
        result[1] += 0.0008987662390718196;
        result[2] += 0.0017158264564098374;
        result[3] += 0.13130157692621947;
        result[4] += 0.00016341204346760355;
        result[5] += 0.0004085301086690089;
        result[6] += 0.0004085301086690089;
      } else {
        result[0] += 0.9864111498257839;
        result[1] += 0;
        result[2] += 0.0017421602787456446;
        result[3] += 0.003484320557491289;
        result[4] += 0.008188153310104529;
        result[5] += 0.00017421602787456446;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.14895613417780906;
        result[1] += 0;
        result[2] += 0.007741027445460943;
        result[3] += 0.6809758386113066;
        result[4] += 0.16068496364062868;
        result[5] += 0.0016420361247947454;
        result[6] += 0;
      } else {
        result[0] += 0.9912195121951219;
        result[1] += 0;
        result[2] += 0.005853658536585366;
        result[3] += 0.0015609756097560976;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013658536585365853;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0001918281220026856;
        result[1] += 0.002301937464032227;
        result[2] += 0.0019182812200268559;
        result[3] += 0.66142336466526;
        result[4] += 0.3337809322846729;
        result[5] += 0.0003836562440053712;
        result[6] += 0;
      } else {
        result[0] += 0.9991095280498664;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0008904719501335708;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0.9945830000727115;
        result[1] += 0.0009088926052497638;
        result[2] += 0.002290409365229405;
        result[3] += 0.0019268523231294992;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002908456336799244;
      } else {
        result[0] += 0.029411764705882353;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9705882352941176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.45454545454545453;
        result[1] += 0;
        result[2] += 0.011755485893416929;
        result[3] += 0.018025078369905956;
        result[4] += 0.5156739811912225;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.015070643642072215;
        result[1] += 0;
        result[2] += 0.005023547880690739;
        result[3] += 0.9758241758241759;
        result[4] += 0.0034536891679748825;
        result[5] += 0.0006279434850863424;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9896396396396396;
        result[1] += 0;
        result[2] += 0.00990990990990991;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00045045045045045046;
      } else {
        result[0] += 0.9972816853550799;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0027183146449201497;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0.14074914869466515;
        result[1] += 0.00037835792659856227;
        result[2] += 0;
        result[3] += 0.8543321982595535;
        result[4] += 0.00340522133938706;
        result[5] += 0.0011350737797956867;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.025050100200400806;
        result[3] += 0;
        result[4] += 0.9719438877755512;
        result[5] += 0.0030060120240480966;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.881175805539853;
        result[1] += 0.0006783493499152064;
        result[2] += 0.00297719992462785;
        result[3] += 0.11475409836065574;
        result[4] += 0;
        result[5] += 3.768607499528924e-05;
        result[6] += 0.0003768607499528924;
      } else {
        result[0] += 0.9872195121951219;
        result[1] += 0;
        result[2] += 0.0014634146341463415;
        result[3] += 0.010731707317073172;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005853658536585366;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.010978956999085087;
        result[2] += 0.0018298261665141812;
        result[3] += 0.9871912168344007;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9809885931558935;
        result[1] += 0;
        result[2] += 0.019011406844106463;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.06779661016949153;
        result[2] += 0;
        result[3] += 0.9322033898305084;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
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
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9970887918486172;
        result[1] += 0;
        result[2] += 0.002911208151382824;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997514189833037;
        result[1] += 0;
        result[2] += 0.00024858101669635827;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.013220712449504223;
        result[1] += 0.0058758721997796545;
        result[2] += 0.006793977230995226;
        result[3] += 0.6312890194638267;
        result[4] += 0.34171869261843557;
        result[5] += 0.0011017260374586854;
        result[6] += 0;
      } else {
        result[0] += 0.9798117413921229;
        result[1] += 0;
        result[2] += 0.006811989100817439;
        result[3] += 0.011766162992321031;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0016101065147386673;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0.0026755852842809363;
        result[2] += 0.008361204013377926;
        result[3] += 0.8478260869565217;
        result[4] += 0.14046822742474915;
        result[5] += 0.0006688963210702341;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7052096569250318;
        result[4] += 0.2947903430749682;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9371021521673234;
        result[1] += 0.001288269172476508;
        result[2] += 0.002424977265838133;
        result[3] += 0.05880569869657472;
        result[4] += 0;
        result[5] += 7.578053955744165e-05;
        result[6] += 0.0003031221582297666;
      } else {
        result[0] += 0.9999356871824555;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6.431281754453663e-05;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.1391138637446403;
        result[1] += 0.0014292520247737017;
        result[2] += 0.011434016198189614;
        result[3] += 0.6276798475464507;
        result[4] += 0.21986660314435447;
        result[5] += 0.0004764173415912339;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005175983436853002;
        result[2] += 0;
        result[3] += 0.10766045548654245;
        result[4] += 0.8871635610766045;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.1547904990659194;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8452095009340806;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.020958083832335328;
        result[3] += 0;
        result[4] += 0.9730538922155688;
        result[5] += 0.005988023952095809;
        result[6] += 0;
      } else {
        result[0] += 0.9889815366289458;
        result[1] += 0;
        result[2] += 0.00714711137581894;
        result[3] += 0.0011911852293031567;
        result[4] += 0;
        result[5] += 0.0005955926146515784;
        result[6] += 0.002084574151280524;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0020491803278688526;
        result[1] += 0.0002927400468384075;
        result[2] += 0;
        result[3] += 0.9320843091334895;
        result[4] += 0.06411007025761124;
        result[5] += 0.0014637002341920376;
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
        result[4] += 0.9991158267020336;
        result[5] += 0.0008841732979664014;
        result[6] += 0;
      } else {
        result[0] += 0.7222222222222222;
        result[1] += 0.07936507936507936;
        result[2] += 0.16666666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.031746031746031744;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
        result[0] += 0.9964705454280828;
        result[1] += 0.00032747516646654295;
        result[2] += 0.0025106429429101627;
        result[3] += 0.00014554451842957463;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005457919441109049;
      } else {
        result[0] += 0.003355704697986577;
        result[1] += 0.03355704697986577;
        result[2] += 0;
        result[3] += 0.9630872483221476;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0.4614904246461282;
        result[1] += 0;
        result[2] += 0.002497918401332223;
        result[3] += 0.5360116569525396;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8630965718126821;
        result[1] += 0;
        result[2] += 0.00560161326462021;
        result[3] += 0.12950929867801927;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0017925162446784674;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9923664122137404;
        result[5] += 0.007633587786259542;
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
        result[1] += 0.42857142857142855;
        result[2] += 0.39285714285714285;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.17857142857142858;
        result[6] += 0;
      } else {
        result[0] += 0.07238805970149255;
        result[1] += 0.001865671641791045;
        result[2] += 0.005970149253731344;
        result[3] += 0.9194029850746269;
        result[4] += 0;
        result[5] += 0.000373134328358209;
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
        result[0] += 0.9991855940638856;
        result[1] += 0;
        result[2] += 0.0006334268392000724;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001809790969143064;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9368182753653016;
        result[1] += 0.005556698909240585;
        result[2] += 0.006379913562461413;
        result[3] += 0.050833504836386094;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004116073266104137;
      } else {
        result[0] += 0.46352106913950636;
        result[1] += 0;
        result[2] += 0.008727669439519978;
        result[3] += 0.5265239329060412;
        result[4] += 0;
        result[5] += 0.0002727396699849993;
        result[6] += 0.0009545888449474976;
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
        result[0] += 0.9959636730575177;
        result[1] += 0;
        result[2] += 0.004036326942482341;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998355736424549;
        result[1] += 0;
        result[2] += 0.0001644263575451145;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.01874163319946453;
        result[1] += 0.005087014725568943;
        result[2] += 0.013654618473895585;
        result[3] += 0.7092369477911648;
        result[4] += 0.25087014725568946;
        result[5] += 0.002409638554216868;
        result[6] += 0;
      } else {
        result[0] += 0.7400812850783821;
        result[1] += 0;
        result[2] += 0.0034836462163731377;
        result[3] += 0.25517708534933237;
        result[4] += 0;
        result[5] += 9.676795045480938e-05;
        result[6] += 0.0011612154054577127;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.13821892393320964;
        result[1] += 0.006029684601113173;
        result[2] += 0.00463821892393321;
        result[3] += 0.5333951762523191;
        result[4] += 0.3177179962894249;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0010395010395010396;
        result[1] += 0.008316008316008316;
        result[2] += 0;
        result[3] += 0.11746361746361747;
        result[4] += 0.8731808731808732;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.0017467248908296944;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9275109170305676;
        result[4] += 0.07016011644832605;
        result[5] += 0.0005822416302765648;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008755472170106316;
        result[2] += 0.01125703564727955;
        result[3] += 0;
        result[4] += 0.9774859287054409;
        result[5] += 0.0025015634771732333;
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
        result[2] += 0.012693935119887164;
        result[3] += 0;
        result[4] += 0.9873060648801129;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9953271028037384;
        result[1] += 0;
        result[2] += 0.004672897196261682;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999871382636656;
        result[1] += 0;
        result[2] += 0.00012861736334405144;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9098771051433774;
        result[1] += 0.0026172052799271735;
        result[2] += 0.0063723258989531175;
        result[3] += 0.07999544833864361;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001137915339098771;
      } else {
        result[0] += 0;
        result[1] += 0.0007238508867173362;
        result[2] += 0.00579080709373869;
        result[3] += 0.993485342019544;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9952175992348159;
        result[1] += 0;
        result[2] += 0.003825920612147298;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009564801530368245;
      } else {
        result[0] += 0.9996273291925466;
        result[1] += 0;
        result[2] += 0.00037267080745341616;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0.2107119241789729;
        result[1] += 0.005069429138197046;
        result[2] += 0.006832708838439497;
        result[3] += 0.42935860700903683;
        result[4] += 0.34802733083535375;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7909535452322739;
        result[1] += 0.0013336296954878865;
        result[2] += 0.006445876861524784;
        result[3] += 0.1875972438319627;
        result[4] += 0.011335852411647035;
        result[5] += 0.0006668148477439432;
        result[6] += 0.001667037119359858;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0.0027137042062415195;
        result[2] += 0.012211668928086838;
        result[3] += 0.8276797829036635;
        result[4] += 0.15739484396200815;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6752910737386805;
        result[4] += 0.32470892626131953;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.9763928234183191;
        result[1] += 0;
        result[2] += 0.023607176581680833;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08529688972667294;
        result[1] += 0.003298774740810556;
        result[2] += 0.005655042412818096;
        result[3] += 0.8953817153628653;
        result[4] += 0.010367577756833177;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.008726003490401396;
        result[1] += 0.038394415357766144;
        result[2] += 0;
        result[3] += 0.5113438045375218;
        result[4] += 0.44153577661431065;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.011118832522585128;
        result[4] += 0.9888811674774148;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.7050175029171529;
        result[1] += 0;
        result[2] += 0.006767794632438741;
        result[3] += 0.2756126021003501;
        result[4] += 0.011435239206534425;
        result[5] += 0.0009334889148191367;
        result[6] += 0.00023337222870478417;
      } else {
        result[0] += 0.9847318920239405;
        result[1] += 0.0008957290012621637;
        result[2] += 0.00044786450063108186;
        result[3] += 0.01339522006432963;
        result[4] += 0.00024428972761695374;
        result[5] += 0.00012214486380847687;
        result[6] += 0.0001628598184113025;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4592846270928463;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5407153729071538;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.823781212841855;
        result[1] += 0;
        result[2] += 0.01141498216409037;
        result[3] += 0.0007134363852556481;
        result[4] += 0.16123662306777647;
        result[5] += 0.0009512485136741975;
        result[6] += 0.001902497027348395;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.5281690140845071;
        result[1] += 0;
        result[2] += 0.015492957746478875;
        result[3] += 0.3422535211267606;
        result[4] += 0.11408450704225354;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09269662921348316;
        result[1] += 0.005617977528089888;
        result[2] += 0;
        result[3] += 0.5477528089887641;
        result[4] += 0.35393258426966295;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.3876088069636457;
        result[1] += 0.005120327700972862;
        result[2] += 0.011776753712237584;
        result[3] += 0.5898617511520737;
        result[4] += 0.0056323604710701485;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.11346444780635401;
        result[4] += 0.886535552193646;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.99;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.000881057268722467;
        result[2] += 0.01277533039647577;
        result[3] += 0.6638766519823789;
        result[4] += 0.3211453744493392;
        result[5] += 0.0013215859030837004;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0.9582553456979185;
        result[1] += 0.0010776473257330837;
        result[2] += 0.0020985763711644265;
        result[3] += 0.03828483920367534;
        result[4] += 0;
        result[5] += 0.0001134365606034825;
        result[6] += 0.00017015484090522376;
      } else {
        result[0] += 0.8645481303826448;
        result[1] += 0;
        result[2] += 0.0018532650168974166;
        result[3] += 0.13310803444892622;
        result[4] += 0;
        result[5] += 0.0001090155892292598;
        result[6] += 0.0003815545623024093;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.9964011516314779;
        result[1] += 0;
        result[2] += 0.00028790786948176584;
        result[3] += 0.003214971209213052;
        result[4] += 9.596928982725528e-05;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0011198208286674132;
        result[1] += 0.0033594624860022394;
        result[2] += 0.015677491601343786;
        result[3] += 0.2765957446808511;
        result[4] += 0.7032474804031354;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.6566471005611817;
        result[1] += 0.0009675546668386764;
        result[2] += 0.0036122040895310587;
        result[3] += 0.322389214990647;
        result[4] += 0.01619041475843385;
        result[5] += 0;
        result[6] += 0.00019351093336773527;
      } else {
        result[0] += 0.9793564055859137;
        result[1] += 0;
        result[2] += 0.01153612629022465;
        result[3] += 0.0006071645415907711;
        result[4] += 0.005768063145112325;
        result[5] += 0.00030358227079538557;
        result[6] += 0.0024286581663630845;
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
        result[0] += 0.13177762525737818;
        result[1] += 0.017158544955387784;
        result[2] += 0.0068634179821551134;
        result[3] += 0.8442004118050789;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9984939759036144;
        result[5] += 0.0015060240963855422;
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
        result[1] += 0.0030759766225776685;
        result[2] += 0.008920332205475239;
        result[3] += 0.9861581051984005;
        result[4] += 0;
        result[5] += 0.001845585973546601;
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
        result[0] += 0.9980542944501066;
        result[1] += 0;
        result[2] += 0.001760400259427407;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018530529046604282;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
        result[0] += 0.6731234866828087;
        result[1] += 0.0034408054033388557;
        result[2] += 0.011851663055944947;
        result[3] += 0.3108194214349433;
        result[4] += 0;
        result[5] += 0.00012743723716069835;
        result[6] += 0.0006371861858034918;
      } else {
        result[0] += 0.7550531914893617;
        result[1] += 0;
        result[2] += 0.0026595744680851063;
        result[3] += 0.2422872340425532;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0045662100456621;
        result[2] += 0.00076103500761035;
        result[3] += 0.6567732115677322;
        result[4] += 0.3378995433789954;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9853556485355649;
        result[1] += 0;
        result[2] += 0.014644351464435146;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 0.1033013844515442;
        result[1] += 0;
        result[2] += 0.014909478168264111;
        result[3] += 0.6890308839190629;
        result[4] += 0.19169329073482427;
        result[5] += 0.0010649627263045794;
        result[6] += 0;
      } else {
        result[0] += 0.8928873120459538;
        result[1] += 0;
        result[2] += 0.002956580503463423;
        result[3] += 0.10348031762121981;
        result[4] += 0;
        result[5] += 8.447372867038353e-05;
        result[6] += 0.0005913161006926847;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.07894736842105263;
        result[1] += 0.0005060728744939271;
        result[2] += 0.004048582995951417;
        result[3] += 0.5769230769230769;
        result[4] += 0.33704453441295545;
        result[5] += 0.0025303643724696357;
        result[6] += 0;
      } else {
        result[0] += 0.915898340415297;
        result[1] += 0.0011224244367834522;
        result[2] += 0.0022448488735669044;
        result[3] += 0.08045378016515674;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028060610919586305;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.10710259301014656;
        result[1] += 0.014656144306651634;
        result[2] += 0;
        result[3] += 0.6583990980834273;
        result[4] += 0.21984216459977451;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.020499108734402853;
        result[1] += 0;
        result[2] += 0.008912655971479501;
        result[3] += 0.15597147950089127;
        result[4] += 0.8146167557932263;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9989333333333333;
        result[1] += 0;
        result[2] += 0.0008;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002666666666666667;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.510627229488704;
        result[1] += 0.0023781212841854937;
        result[2] += 0.004013079667063021;
        result[3] += 0.47800237812128427;
        result[4] += 0.0041617122473246145;
        result[5] += 0.0004458977407847801;
        result[6] += 0.00037158145065398343;
      } else {
        result[0] += 0.6177730192719486;
        result[1] += 0;
        result[2] += 0.026231263383297645;
        result[3] += 0.0021413276231263384;
        result[4] += 0.3501070663811563;
        result[5] += 0.0016059957173447537;
        result[6] += 0.0021413276231263384;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.00390625;
        result[1] += 0.03125;
        result[2] += 0;
        result[3] += 0.5;
        result[4] += 0.46484375;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.017385257301808066;
        result[4] += 0.9826147426981919;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9817708333333334;
        result[1] += 0;
        result[2] += 0.018229166666666668;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996118163114786;
        result[1] += 0;
        result[2] += 0.00027172858196498586;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001164551065564225;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.8278902023642557;
        result[1] += 0.0024043277900220395;
        result[2] += 0.0034061310358645563;
        result[3] += 0.16569825686235223;
        result[4] += 0;
        result[5] += 0.0002003606491685033;
        result[6] += 0.0004007212983370066;
      } else {
        result[0] += 0.16475095785440613;
        result[1] += 0.0034482758620689655;
        result[2] += 0.007662835249042145;
        result[3] += 0.7839080459770115;
        result[4] += 0.03984674329501916;
        result[5] += 0.0003831417624521073;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.5465690176723452;
        result[1] += 0.0011144722177997136;
        result[2] += 0.010985511861168605;
        result[3] += 0.16207610253144406;
        result[4] += 0.2775035822321287;
        result[5] += 0.0009552619009711831;
        result[6] += 0.0007960515841426525;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008352534562211982;
        result[3] += 0.7975230414746544;
        result[4] += 0.1938364055299539;
        result[5] += 0.0002880184331797235;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.013114754098360656;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9868852459016394;
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
        result[1] += 0.003006388575723412;
        result[2] += 0.006764374295377677;
        result[3] += 0.9875986471251409;
        result[4] += 0;
        result[5] += 0.0026305900037579856;
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
        result[0] += 0.9992691394116573;
        result[1] += 0;
        result[2] += 0.0005481454412570803;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018271514708569344;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.8541468064823642;
        result[1] += 0.003283550471348374;
        result[2] += 0.006778942908590191;
        result[3] += 0.13430780637644318;
        result[4] += 0;
        result[5] += 0.00031776294884016526;
        result[6] += 0.0011651308124139392;
      } else {
        result[0] += 0;
        result[1] += 0.0033112582781456954;
        result[2] += 0.008094186902133923;
        result[3] += 0.9885945548197204;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.019635343618513323;
        result[3] += 0;
        result[4] += 0.9803646563814866;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9837611314824516;
        result[1] += 0.0001428639459021858;
        result[2] += 0.00047621315300728606;
        result[3] += 0.015572170103338254;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.7621315300728604e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.790102914894928;
        result[1] += 0.0007395082270290255;
        result[2] += 0.0035126640783878713;
        result[3] += 0.20496703025821156;
        result[4] += 0;
        result[5] += 0.00018487705675725638;
        result[6] += 0.000493005484686017;
      } else {
        result[0] += 0.14681555004135652;
        result[1] += 0;
        result[2] += 0.016956162117452444;
        result[3] += 0.729528535980149;
        result[4] += 0.10545905707196031;
        result[5] += 0.001240694789081886;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.14421553090332806;
        result[1] += 0.011093502377179081;
        result[2] += 0;
        result[3] += 0.7369255150554676;
        result[4] += 0.10776545166402536;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.126953125;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.193359375;
        result[4] += 0.6796875;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.09358081979891725;
        result[1] += 0.010054137664346482;
        result[2] += 0.0038669760247486465;
        result[3] += 0.5436968290796597;
        result[4] += 0.34880123743232794;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05374823196605375;
        result[4] += 0.9462517680339463;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
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
        result[0] += 0.9951100244498777;
        result[1] += 0;
        result[2] += 0.004889975550122249;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997529033852236;
        result[1] += 0;
        result[2] += 0.00024709661477637757;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.0022271714922048997;
        result[1] += 0.004454342984409799;
        result[2] += 0;
        result[3] += 0.22605790645879734;
        result[4] += 0.767260579064588;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5575506768604896;
        result[1] += 0.0016833836010380868;
        result[2] += 0.009258609805709478;
        result[3] += 0.4265273199130252;
        result[4] += 0.0035070491688293476;
        result[5] += 0.0007014098337658696;
        result[6] += 0.0007715508171424564;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0.003105590062111801;
        result[1] += 0.015527950310559006;
        result[2] += 0;
        result[3] += 0.23136645962732919;
        result[4] += 0.75;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0007293946024799417;
        result[2] += 0;
        result[3] += 0.12326768781911014;
        result[4] += 0.8760029175784099;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.001160092807424594;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9976798143851509;
        result[5] += 0.001160092807424594;
        result[6] += 0;
      } else {
        result[0] += 0.26162162162162167;
        result[1] += 0.0032432432432432435;
        result[2] += 0.0021621621621621626;
        result[3] += 0.7325405405405406;
        result[4] += 0;
        result[5] += 0.0004324324324324325;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0.9968556908339732;
        result[1] += 0.0005484260173302622;
        result[2] += 0.002303389272787101;
        result[3] += 7.312346897736829e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021937040693210486;
      } else {
        result[0] += 0.5628415300546448;
        result[1] += 0.06557377049180328;
        result[2] += 0;
        result[3] += 0.37158469945355194;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0.006940427993059572;
        result[1] += 0;
        result[2] += 0.007518796992481203;
        result[3] += 0.7995951417004049;
        result[4] += 0.18594563331405436;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.854420731707317;
        result[1] += 0;
        result[2] += 0.006097560975609756;
        result[3] += 0.1291920731707317;
        result[4] += 0.005716463414634146;
        result[5] += 0.0019054878048780487;
        result[6] += 0.0026676829268292685;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.32263242375601925;
        result[1] += 0.004414125200642055;
        result[2] += 0.006821829855537721;
        result[3] += 0.6653290529695024;
        result[4] += 0.0008025682182985554;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.01904761904761905;
        result[1] += 0.04126984126984127;
        result[2] += 0;
        result[3] += 0.1523809523809524;
        result[4] += 0.7873015873015873;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0.06609385327164574;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.019167217448777262;
        result[4] += 0.914738929279577;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.029411764705882353;
        result[3] += 0.9705882352941176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.10609480812641084;
        result[1] += 0.000564334085778781;
        result[2] += 0;
        result[3] += 0.8893905191873589;
        result[4] += 0.001128668171557562;
        result[5] += 0.0028216704288939053;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0333716915995397;
        result[3] += 0;
        result[4] += 0.9643268124280783;
        result[5] += 0.0023014959723820483;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993847573636854;
        result[1] += 0;
        result[2] += 0.0005767899715450282;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.845266476966854e-05;
      } else {
        result[0] += 0.6873850324329558;
        result[1] += 0.0017426662794074934;
        result[2] += 0.008616516603737051;
        result[3] += 0.3016748959240972;
        result[4] += 0;
        result[5] += 0.0002904443799012489;
        result[6] += 0.0002904443799012489;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
        result[0] += 0;
        result[1] += 0.06382978723404255;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9361702127659575;
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
        result[0] += 0.07547851209823041;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9216323582520766;
        result[4] += 0.0018057060310581437;
        result[5] += 0.0010834236186348862;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008988764044943821;
        result[3] += 0;
        result[4] += 0.9893258426966293;
        result[5] += 0.0016853932584269663;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.3603960396039604;
        result[1] += 0.0049504950495049506;
        result[2] += 0;
        result[3] += 0.6346534653465347;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9899746690927254;
        result[1] += 0.00039245067608548287;
        result[2] += 0.002033608048806593;
        result[3] += 0.007242498840486639;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00035677334189589355;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.19433299899699097;
        result[1] += 0;
        result[2] += 0.005516549648946841;
        result[3] += 0.8001504513540622;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.99305421570519;
        result[1] += 0;
        result[2] += 0.0036658306000385875;
        result[3] += 0.001736446073702489;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001543507621068879;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9998753738783649;
        result[1] += 0;
        result[2] += 0.0001246261216350947;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5285481239804242;
        result[1] += 0;
        result[2] += 0.009425412361790828;
        result[3] += 0.4060177632771434;
        result[4] += 0.05473989487040058;
        result[5] += 0.000543773790103317;
        result[6] += 0.0007250317201377561;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9163832474978136;
        result[1] += 0.0006802060052473035;
        result[2] += 0.003255271596540667;
        result[3] += 0.07098435526187931;
        result[4] += 0.008308230492663493;
        result[5] += 0.00014575842969585074;
        result[6] += 0.00024293071615975125;
      } else {
        result[0] += 0.6456528713506576;
        result[1] += 0;
        result[2] += 0.0014436958614051972;
        result[3] += 0.26692332370869426;
        result[4] += 0.08565928777670838;
        result[5] += 0.0003208213025344883;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.00779896013864818;
        result[2] += 0.0008665511265164644;
        result[3] += 0.9913344887348353;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9901315789473685;
        result[1] += 0;
        result[2] += 0.009868421052631578;
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
        result[0] += 0.005494505494505495;
        result[1] += 0.03296703296703297;
        result[2] += 0;
        result[3] += 0.9615384615384616;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.004784688995215311;
        result[1] += 0.0023923444976076554;
        result[2] += 0;
        result[3] += 0.992822966507177;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6384364820846905;
        result[1] += 0;
        result[2] += 0.03257328990228013;
        result[3] += 0;
        result[4] += 0.3289902280130293;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9953051643192489;
        result[1] += 0.00024200183921397803;
        result[2] += 0.0005324040462707517;
        result[3] += 0.0038236290595808527;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.68007356855912e-05;
      } else {
        result[0] += 0.8191065017949741;
        result[1] += 0.0009307272969020079;
        result[2] += 0.0029916234543278823;
        result[3] += 0.17637282276293048;
        result[4] += 0;
        result[5] += 0.0001994415636218588;
        result[6] += 0.0003988831272437176;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 0.25251780889216413;
        result[1] += 0.0039302382706951616;
        result[2] += 0.004175878162613609;
        result[3] += 0.738147875214935;
        result[4] += 0.0007369196757553428;
        result[5] += 0.0004912797838368952;
        result[6] += 0;
      } else {
        result[0] += 0.0035971223021582736;
        result[1] += 0.02158273381294964;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9748201438848921;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0.08871454435727218;
        result[1] += 0;
        result[2] += 0.016294508147254073;
        result[3] += 0.01931200965600483;
        result[4] += 0.8756789378394689;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08536585365853659;
        result[1] += 0;
        result[2] += 0.010318949343339587;
        result[3] += 0.33864915572232646;
        result[4] += 0.5637898686679175;
        result[5] += 0.001876172607879925;
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
        result[0] += 0.004901960784313725;
        result[1] += 0.01568627450980392;
        result[2] += 0.011274509803921568;
        result[3] += 0.9681372549019608;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9924812030075187;
        result[1] += 0;
        result[2] += 0.007518796992481203;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9772727272727273;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.022727272727272728;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00041118421052631577;
        result[2] += 0.011101973684210526;
        result[3] += 0.6476151315789473;
        result[4] += 0.33963815789473684;
        result[5] += 0.0012335526315789473;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9949934380012638;
        result[1] += 0.0003888591843678608;
        result[2] += 0.00048607398045982596;
        result[3] += 0.004131628833908521;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8045437238228202;
        result[1] += 0.0006980581292042138;
        result[2] += 0.004124888945297628;
        result[3] += 0.18999873080340146;
        result[4] += 0;
        result[5] += 0.0002538393197106232;
        result[6] += 0.0003807589795659348;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44d7b000))) ) ) {
        result[0] += 0.9991229742612011;
        result[1] += 0;
        result[2] += 0.0007244995233555767;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015252621544327932;
      } else {
        result[0] += 0.8888888888888888;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1111111111111111;
        result[5] += 0;
        result[6] += 0;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.014585556741373178;
        result[1] += 0.004980434009249377;
        result[2] += 0.010672358591248666;
        result[3] += 0.6885450017787265;
        result[4] += 0.2797936677339025;
        result[5] += 0.001422981145499822;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.011702127659574468;
        result[2] += 0;
        result[3] += 0.1127659574468085;
        result[4] += 0.875531914893617;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0.980395256916996;
        result[1] += 0;
        result[2] += 0.004426877470355731;
        result[3] += 0.014545454545454545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006324110671936759;
      } else {
        result[0] += 0.4056215722120658;
        result[1] += 0;
        result[2] += 0.005027422303473492;
        result[3] += 0.5879798903107861;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013711151736745886;
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
        result[0] += 0.9984590282813633;
        result[1] += 0;
        result[2] += 0.001359680928208847;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018129079042784627;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.7440420341527492;
        result[1] += 0.001219741039594671;
        result[2] += 0.006755488834678178;
        result[3] += 0.22142991180334026;
        result[4] += 0.025051604428598242;
        result[5] += 9.38262338149747e-05;
        result[6] += 0.0014073935072246202;
      } else {
        result[0] += 0.09205716184778996;
        result[1] += 0.008640744433366567;
        result[2] += 0.0019940179461615153;
        result[3] += 0.4174144233964772;
        result[4] += 0.47989365237620474;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.006802721088435374;
        result[2] += 0;
        result[3] += 0.19387755102040816;
        result[4] += 0.7981859410430839;
        result[5] += 0.0011337868480725624;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009462656302805003;
        result[3] += 0.9864819195674215;
        result[4] += 0.003717472118959108;
        result[5] += 0.0003379520108144644;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9910935180603662;
        result[1] += 0;
        result[2] += 0.008411677387431964;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004948045522018803;
      } else {
        result[0] += 0.9998762580432272;
        result[1] += 0;
        result[2] += 0.00012374195677280976;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.017594018033868484;
        result[1] += 0.008137233340664175;
        result[2] += 0.010116560369474378;
        result[3] += 0.803606773696943;
        result[4] += 0.1596657136573565;
        result[5] += 0.0008797009016934242;
        result[6] += 0;
      } else {
        result[0] += 0.7411081991763384;
        result[1] += 0;
        result[2] += 0.0049606888805690755;
        result[3] += 0.25355672032946464;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00037439161362785476;
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
        result[0] += 0;
        result[1] += 0.009167303284950344;
        result[2] += 0;
        result[3] += 0.22001527883880825;
        result[4] += 0.7708174178762414;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0002653927813163482;
        result[2] += 0.007165605095541401;
        result[3] += 0.8073248407643312;
        result[4] += 0.18312101910828024;
        result[5] += 0.0021231422505307855;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005726184279021343;
        result[2] += 0;
        result[3] += 0.10463300364393545;
        result[4] += 0.8896408120770432;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9989449886963074;
        result[1] += 0;
        result[2] += 0.000904295403165034;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015071590052750564;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.5379949452401012;
        result[1] += 0.002190395956192081;
        result[2] += 0.004380791912384162;
        result[3] += 0.4545914069081719;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008424599831508004;
      } else {
        result[0] += 0.8735798016230839;
        result[1] += 0.002164111812443643;
        result[2] += 0.009377817853922452;
        result[3] += 0.11361587015329125;
        result[4] += 0;
        result[5] += 0.0005410279531109107;
        result[6] += 0.000721370604147881;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.01384083044982699;
        result[1] += 0.03460207612456748;
        result[2] += 0;
        result[3] += 0.10726643598615918;
        result[4] += 0.8442906574394463;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3161391168425166;
        result[1] += 0.005470887065259867;
        result[2] += 0.005080109417741305;
        result[3] += 0.6721375537319265;
        result[4] += 0.0011723329425556857;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0.07596594629993451;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.024230517354289455;
        result[4] += 0.899803536345776;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03349282296650718;
        result[3] += 0.9665071770334929;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.9766226428420086;
        result[1] += 0.0005650116533653507;
        result[2] += 0.0007062645667066884;
        result[3] += 0.021752948654566;
        result[4] += 0.0001765661416766721;
        result[5] += 0;
        result[6] += 0.0001765661416766721;
      } else {
        result[0] += 0.022336769759450172;
        result[1] += 0;
        result[2] += 0.02577319587628866;
        result[3] += 0.8410652920962199;
        result[4] += 0.10996563573883161;
        result[5] += 0.000859106529209622;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0.4007666840913051;
        result[1] += 0;
        result[2] += 0.0045304059940756225;
        result[3] += 0.48335947029099147;
        result[4] += 0.1113434396236278;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9196211096075778;
        result[1] += 0;
        result[2] += 0.0062246278755074425;
        result[3] += 0.06765899864682003;
        result[4] += 0.0018944519621109607;
        result[5] += 0.0016238159675236806;
        result[6] += 0.002976995940460081;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999274532264223;
        result[1] += 0;
        result[2] += 0.0007254677357770141;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.018716577540106954;
        result[1] += 0.004545454545454546;
        result[2] += 0.017647058823529415;
        result[3] += 0.7136363636363637;
        result[4] += 0.2435828877005348;
        result[5] += 0.0018716577540106953;
        result[6] += 0;
      } else {
        result[0] += 0.7394804945844915;
        result[1] += 0;
        result[2] += 0.004025687721652449;
        result[3] += 0.2554394709096137;
        result[4] += 0;
        result[5] += 9.584970765839164e-05;
        result[6] += 0.0009584970765839164;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 0.16460587326120557;
        result[1] += 0.017001545595054096;
        result[2] += 0;
        result[3] += 0.8183925811437404;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.011152416356877323;
        result[1] += 0.022304832713754646;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.966542750929368;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 0.006939625260235947;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1297709923664122;
        result[4] += 0.8632893823733518;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.59375;
        result[1] += 0;
        result[2] += 0.0546875;
        result[3] += 0.3515625;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9898063200815495;
        result[1] += 0;
        result[2] += 0.009174311926605505;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010193679918450561;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.8376465830974525;
        result[1] += 0.0036393044884755364;
        result[2] += 0.002830570157703195;
        result[3] += 0.15527699150828955;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006065507480792561;
      } else {
        result[0] += 0.17613636363636365;
        result[1] += 0.0030303030303030303;
        result[2] += 0.004924242424242424;
        result[3] += 0.7784090909090909;
        result[4] += 0.03636363636363636;
        result[5] += 0.0011363636363636363;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.5540013012361744;
        result[1] += 0.0013012361743656475;
        result[2] += 0.009759271307742356;
        result[3] += 0.16932335718932987;
        result[4] += 0.2630123617436565;
        result[5] += 0.0006506180871828237;
        result[6] += 0.001951854261548471;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00808080808080808;
        result[3] += 0.7867243867243867;
        result[4] += 0.2051948051948052;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9984714979320267;
        result[1] += 0;
        result[2] += 0.0014385901816220106;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.991188635137566e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.0008116883116883117;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991883116883117;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.020711500974658868;
        result[1] += 0.008528265107212475;
        result[2] += 0.015107212475633527;
        result[3] += 0.9537037037037037;
        result[4] += 0;
        result[5] += 0.001949317738791423;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9769887418037858;
        result[1] += 0;
        result[2] += 0.006062105653841397;
        result[3] += 0.014474823704070272;
        result[4] += 0;
        result[5] += 0.0002474328838302611;
        result[6] += 0.0022268959544723497;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
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
        result[4] += 0.999176276771005;
        result[5] += 0.0008237232289950577;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0.08519611978068325;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9139603542808942;
        result[4] += 0;
        result[5] += 0.0008435259384226065;
        result[6] += 0;
      } else {
        result[0] += 0.36416938110749186;
        result[1] += 0.006514657980456026;
        result[2] += 0.018892508143322474;
        result[3] += 0.609771986970684;
        result[4] += 0;
        result[5] += 0.0006514657980456026;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9938124702522608;
        result[1] += 0;
        result[2] += 0.004283674440742504;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019038553069966682;
      } else {
        result[0] += 0.9998303719095882;
        result[1] += 0;
        result[2] += 0.00016962809041177218;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5284266816774557;
        result[1] += 0.0033774275260343373;
        result[2] += 0.007739938080495356;
        result[3] += 0.4590486912468337;
        result[4] += 0;
        result[5] += 0.00028145229383619476;
        result[6] += 0.001125809175344779;
      } else {
        result[0] += 0.9705277587388623;
        result[1] += 0;
        result[2] += 0.006854009595613435;
        result[3] += 0.021247429746401647;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001370801919122687;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985528219971056;
        result[5] += 0.001447178002894356;
        result[6] += 0;
      } else {
        result[0] += 0.1945464079706345;
        result[1] += 0.004195070791819612;
        result[2] += 0.005243838489774515;
        result[3] += 0.7960146827477713;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.997037811465412;
        result[1] += 0;
        result[2] += 0.00017424638438752395;
        result[3] += 0.0027879421502003832;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.785950023573786;
        result[1] += 0;
        result[2] += 0.005657708628005658;
        result[3] += 0.20744931636020744;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000942951438000943;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.08183632734530938;
        result[1] += 0;
        result[2] += 0.007984031936127744;
        result[3] += 0.3526280771789754;
        result[4] += 0.5555555555555556;
        result[5] += 0.001996007984031936;
        result[6] += 0;
      } else {
        result[0] += 0.9044413430752813;
        result[1] += 0.002216566784336262;
        result[2] += 0.0042689434364994675;
        result[3] += 0.08899105163779658;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.209506608652821e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 0.9062574163436438;
        result[1] += 0;
        result[2] += 0.0003955383276639507;
        result[3] += 0.08440787912348707;
        result[4] += 0.008543627877541336;
        result[5] += 0;
        result[6] += 0.0003955383276639507;
      } else {
        result[0] += 0.16727272727272727;
        result[1] += 0.00040404040404040404;
        result[2] += 0.00040404040404040404;
        result[3] += 0.49373737373737375;
        result[4] += 0.3377777777777778;
        result[5] += 0.00040404040404040404;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.16912972085385877;
        result[1] += 0.004378762999452655;
        result[2] += 0;
        result[3] += 0.7936507936507936;
        result[4] += 0.03229337712096333;
        result[5] += 0.0005473453749315818;
        result[6] += 0;
      } else {
        result[0] += 0.04484304932735426;
        result[1] += 0;
        result[2] += 0.025411061285500747;
        result[3] += 0;
        result[4] += 0.9237668161434978;
        result[5] += 0.005979073243647235;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9961248654467169;
        result[1] += 0;
        result[2] += 0.0006458557588805167;
        result[3] += 0.0032292787944025836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5606214116852415;
        result[1] += 0;
        result[2] += 0.009793988517392773;
        result[3] += 0.42958459979736574;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0.3206459054209919;
        result[1] += 0.0034602076124567475;
        result[2] += 0.01384083044982699;
        result[3] += 0.6614763552479815;
        result[4] += 0.0005767012687427913;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001557632398753894;
        result[2] += 0;
        result[3] += 0.0794392523364486;
        result[4] += 0.9190031152647975;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.8881043988735076;
        result[1] += 0.000713974058942525;
        result[2] += 0.0017056046963626987;
        result[3] += 0.10535083891951925;
        result[4] += 0.003847526873190274;
        result[5] += 0.00011899567649042085;
        result[6] += 0.0001586609019872278;
      } else {
        result[0] += 0.007633587786259542;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9923664122137404;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9983908456999822;
        result[1] += 0;
        result[2] += 0.0012515644555694619;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00035758984444841767;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.013827335578798085;
        result[1] += 0.0033681971281687645;
        result[2] += 0.009750044318383265;
        result[3] += 0.6860485729480589;
        result[4] += 0.2854103882290374;
        result[5] += 0.0015954617975536252;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006153846153846154;
        result[2] += 0;
        result[3] += 0.08512820512820513;
        result[4] += 0.9087179487179488;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5894669028829119;
        result[1] += 0;
        result[2] += 0.002737961024319536;
        result[3] += 0.40715090996939923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006442261233693026;
      } else {
        result[0] += 0.9693321217628351;
        result[1] += 0;
        result[2] += 0.006133575647432985;
        result[3] += 0.02453430258973194;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.04678362573099415;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9532163742690059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.35237388724035607;
        result[1] += 0.00741839762611276;
        result[2] += 0.010385756676557863;
        result[3] += 0.6298219584569733;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
        result[0] += 0.9832080405294981;
        result[1] += 0.0005311325379964045;
        result[2] += 0.000735414283379637;
        result[3] += 0.015157705507435853;
        result[4] += 0.000245138094459879;
        result[5] += 4.0856349076646505e-05;
        result[6] += 8.171269815329301e-05;
      } else {
        result[0] += 0.6975345760673483;
        result[1] += 0;
        result[2] += 0.008418520745640411;
        result[3] += 0.26839045900982167;
        result[4] += 0.02485468029665264;
        result[5] += 0.000400881940268591;
        result[6] += 0.000400881940268591;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.6571395775941231;
        result[1] += 0;
        result[2] += 0.004935720844811755;
        result[3] += 0.3358585858585859;
        result[4] += 0.0006887052341597797;
        result[5] += 0.0005739210284664831;
        result[6] += 0.0008034894398530763;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9967889908256881;
        result[1] += 0;
        result[2] += 0.0022935779816513763;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009174311926605505;
      } else {
        result[0] += 0.9997487963156793;
        result[1] += 0;
        result[2] += 0.0002512036843207034;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.024678663239074552;
        result[1] += 0.011568123393316195;
        result[2] += 0.005912596401028277;
        result[3] += 0.8866323907455013;
        result[4] += 0.07095115681233934;
        result[5] += 0.0002570694087403599;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.017259978425026967;
        result[3] += 0.19813016900395541;
        result[4] += 0.782811938151744;
        result[5] += 0.0017979144192736426;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.545626396288022;
        result[1] += 0;
        result[2] += 0.0020622100017185082;
        result[3] += 0.45231139371025947;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9732955694922112;
        result[1] += 0;
        result[2] += 0.007283026502124216;
        result[3] += 0.017802953671859193;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0016184503338053813;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9937759336099585;
        result[1] += 0;
        result[2] += 0.006224066390041493;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999566590304006;
        result[1] += 0;
        result[2] += 0.0004334096959940561;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 0.9994579945799458;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005420054200542005;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.007515657620041753;
        result[1] += 0.0029227557411273487;
        result[2] += 0.0162839248434238;
        result[3] += 0.6922755741127349;
        result[4] += 0.2797494780793319;
        result[5] += 0.0012526096033402922;
        result[6] += 0;
      } else {
        result[0] += 0.015982824427480915;
        result[1] += 0.008587786259541985;
        result[2] += 0.007633587786259542;
        result[3] += 0.5395992366412213;
        result[4] += 0.42748091603053434;
        result[5] += 0.0007156488549618321;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.597437519772224;
        result[1] += 0;
        result[2] += 0.002689022461246441;
        result[3] += 0.39908256880733944;
        result[4] += 0;
        result[5] += 0.00015817779183802593;
        result[6] += 0.0006327111673521037;
      } else {
        result[0] += 0.96514012303486;
        result[1] += 0;
        result[2] += 0.005468215994531785;
        result[3] += 0.027341079972658923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020505809979494195;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
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
        result[0] += 0.9995047052996533;
        result[1] += 0;
        result[2] += 0.00045719510801234427;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.809959233436202e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7409920672847174;
        result[1] += 0.0002867246487623052;
        result[2] += 0.00831501481410685;
        result[3] += 0.22192487814202422;
        result[4] += 0.02685654210073592;
        result[5] += 0.0002867246487623052;
        result[6] += 0.0013380483608907577;
      } else {
        result[0] += 0;
        result[1] += 0.001075268817204301;
        result[2] += 0.009408602150537635;
        result[3] += 0.8112903225806452;
        result[4] += 0.17768817204301074;
        result[5] += 0.0005376344086021505;
        result[6] += 0;
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
        result[0] += 0.1610738255033557;
        result[1] += 0.022651006711409395;
        result[2] += 0;
        result[3] += 0.8162751677852349;
        result[4] += 0;
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
        result[0] += 0.218562874251497;
        result[1] += 0;
        result[2] += 0.02694610778443114;
        result[3] += 0.7544910179640718;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += 0.04347826086956522;
        result[1] += 0.3478260869565218;
        result[2] += 0.5652173913043479;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.04347826086956522;
        result[6] += 0;
      } else {
        result[0] += 0.06732528357116721;
        result[1] += 0.0014635931211123307;
        result[2] += 0.007317965605561654;
        result[3] += 0.9231613611416026;
        result[4] += 0;
        result[5] += 0.0007317965605561653;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0011560693641618498;
        result[2] += 0.005780346820809248;
        result[3] += 0.9907514450867052;
        result[4] += 0;
        result[5] += 0.0023121387283236996;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.995729134506535;
        result[1] += 0.00046310589688175366;
        result[2] += 0.0003601934753524751;
        result[3] += 0.003447566121230833;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8073048600883652;
        result[1] += 0.0012960235640648013;
        result[2] += 0.005066273932253314;
        result[3] += 0.18544918998527246;
        result[4] += 0;
        result[5] += 5.8910162002945506e-05;
        result[6] += 0.0008247422680412372;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9982811651890718;
        result[1] += 0;
        result[2] += 0.0015379048308304685;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001809299800977022;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.0012091898428053204;
        result[1] += 0.0036275695284159614;
        result[2] += 0;
        result[3] += 0.22611850060459493;
        result[4] += 0.7678355501813785;
        result[5] += 0.0012091898428053204;
        result[6] += 0;
      } else {
        result[0] += 0.5785692906315474;
        result[1] += 0.0010475905417539656;
        result[2] += 0.007632445375636035;
        result[3] += 0.3900029931158335;
        result[4] += 0.02132595031427716;
        result[5] += 0.0008231068542352587;
        result[6] += 0.0005986231667165519;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.20770877944325483;
        result[1] += 0.009279086366880799;
        result[2] += 0.006423982869379015;
        result[3] += 0.7765881513204854;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.002898550724637681;
        result[1] += 0.00463768115942029;
        result[2] += 0;
        result[3] += 0.10434782608695652;
        result[4] += 0.8881159420289855;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0007763975155279503;
        result[1] += 0.0021350931677018635;
        result[2] += 0.003687888198757764;
        result[3] += 0.6616847826086957;
        result[4] += 0.3311335403726708;
        result[5] += 0.0005822981366459627;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 0.06060606060606061;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9393939393939394;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9945857558139536;
        result[1] += 0.0006540697674418606;
        result[2] += 0.0024345930232558145;
        result[3] += 0.00214389534883721;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018168604651162793;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0.0077076791321724234;
        result[1] += 0;
        result[2] += 0.005423922352269483;
        result[3] += 0.7918926634313446;
        result[4] += 0.19497573508421354;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8612181958365459;
        result[1] += 0;
        result[2] += 0.008095605242868157;
        result[3] += 0.12336160370084812;
        result[4] += 0.0050115651503469544;
        result[5] += 0.00038550501156515033;
        result[6] += 0.0019275250578257518;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0009799118079372856;
        result[1] += 0;
        result[2] += 0.005389514943655071;
        result[3] += 0.9612934835864773;
        result[4] += 0.028907398334149927;
        result[5] += 0.0034296913277804997;
        result[6] += 0;
      } else {
        result[0] += 0.2092485549132948;
        result[1] += 0;
        result[2] += 0.017341040462427744;
        result[3] += 0;
        result[4] += 0.7734104046242775;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.104;
        result[4] += 0.896;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0036382536382536385;
        result[2] += 0;
        result[3] += 0.27754677754677753;
        result[4] += 0.7188149688149689;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9991928974979822;
        result[1] += 0;
        result[2] += 0.000655770782889427;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001513317191283293;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.8494065281899108;
        result[1] += 0.0016956337431114875;
        result[2] += 0.008160237388724035;
        result[3] += 0.1393598982619754;
        result[4] += 0;
        result[5] += 0.00031793132683340396;
        result[6] += 0.0010597710894446797;
      } else {
        result[0] += 0;
        result[1] += 0.0007067137809187279;
        result[2] += 0.0049469964664310955;
        result[3] += 0.9943462897526502;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9884836852207294;
        result[1] += 0;
        result[2] += 0.007677543186180422;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.003838771593090211;
      } else {
        result[0] += 0.997513983840895;
        result[1] += 0;
        result[2] += 0.002486016159105034;
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
        result[0] += 0.9996102124342233;
        result[1] += 0;
        result[2] += 0.0003897875657766517;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6160890502881504;
        result[1] += 0.0015789058182679406;
        result[2] += 0.004657772163890425;
        result[3] += 0.324307255072235;
        result[4] += 0.05170916554827505;
        result[5] += 0.0005526170363937792;
        result[6] += 0.0011052340727875584;
      } else {
        result[0] += 0.007761966364812419;
        result[1] += 0;
        result[2] += 0.018758085381630013;
        result[3] += 0.7839586028460543;
        result[4] += 0.1888745148771022;
        result[5] += 0.000646830530401035;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.21097647897362795;
        result[1] += 0.006414825374198147;
        result[2] += 0.0042765502494654314;
        result[3] += 0.7783321454027085;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001212856276531231;
        result[1] += 0.004244996967859308;
        result[2] += 0;
        result[3] += 0.11582777440873257;
        result[4] += 0.8787143723468769;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0008525149190110827;
        result[1] += 0;
        result[2] += 0.005115089514066497;
        result[3] += 0.8678601875532822;
        result[4] += 0.12276214833759591;
        result[5] += 0.0034100596760443308;
        result[6] += 0;
      } else {
        result[0] += 0.20487264673311184;
        result[1] += 0;
        result[2] += 0.016611295681063124;
        result[3] += 0;
        result[4] += 0.778516057585825;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.995230679384855;
        result[1] += 9.733307377846993e-05;
        result[2] += 0.00043799883200311467;
        result[3] += 0.004233988709363441;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8074917590650285;
        result[1] += 0.00041953850764159424;
        result[2] += 0.0052142643092598145;
        result[3] += 0.18633503146538807;
        result[4] += 0;
        result[5] += 0.00017980221756068324;
        result[6] += 0.0003596044351213665;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.10165247871807712;
        result[1] += 0.005508262393590386;
        result[2] += 0.0030045067601402104;
        result[3] += 0.557336004006009;
        result[4] += 0.3324987481221833;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0703125;
        result[2] += 0;
        result[3] += 0.9296875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005657708628005658;
        result[2] += 0.007543611504007544;
        result[3] += 0.6812824139556812;
        result[4] += 0.30504479019330505;
        result[5] += 0.0004714757190004715;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9949200172935582;
        result[1] += 0;
        result[2] += 0.0014051015996541288;
        result[3] += 0.0036748811067877215;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5602450646698434;
        result[1] += 0;
        result[2] += 0.008509189925119127;
        result[3] += 0.43090537780803256;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00034036759700476507;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.2736450584484591;
        result[1] += 0.009032943676939426;
        result[2] += 0.004250797024442083;
        result[3] += 0.599893730074389;
        result[4] += 0.11317747077577045;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.044850498338870434;
        result[1] += 0;
        result[2] += 0.009136212624584718;
        result[3] += 0.11544850498338871;
        result[4] += 0.8305647840531561;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9991111604910838;
        result[1] += 0;
        result[2] += 0.0006110771623798678;
        result[3] += 0;
        result[4] += 0.00011110493861452142;
        result[5] += 0;
        result[6] += 0.00016665740792178211;
      } else {
        result[0] += 0.569648189017266;
        result[1] += 0.0020771128131896665;
        result[2] += 0.006101518888744645;
        result[3] += 0.34700765935349864;
        result[4] += 0.07438660262235493;
        result[5] += 0.0002596391016487083;
        result[6] += 0.0005192782032974166;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
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
        result[0] += 0.9993860793492441;
        result[1] += 0;
        result[2] += 0.0005371805694114036;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.674008134448623e-05;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.5187444543034605;
        result[1] += 0.0015527950310559005;
        result[2] += 0.01142413487133984;
        result[3] += 0.39452085181898844;
        result[4] += 0.07165039929015084;
        result[5] += 0.0008873114463176575;
        result[6] += 0.0012200532386867791;
      } else {
        result[0] += 0.5955311494035221;
        result[1] += 0;
        result[2] += 0.0005680742283658399;
        result[3] += 0.34141261124786976;
        result[4] += 0.06192009089187655;
        result[5] += 0;
        result[6] += 0.0005680742283658399;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.008014247551202136;
        result[2] += 0.0026714158504007124;
        result[3] += 0.9893143365983972;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9832775919732442;
        result[1] += 0;
        result[2] += 0.016722408026755852;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 0;
        result[1] += 0.010070493454179255;
        result[2] += 0;
        result[3] += 0.16817724068479356;
        result[4] += 0.8217522658610272;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.006711409395973154;
        result[1] += 0.03355704697986577;
        result[2] += 0;
        result[3] += 0.1174496644295302;
        result[4] += 0.8422818791946308;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3298429319371728;
        result[1] += 0.0038394415357766143;
        result[2] += 0.002792321116928447;
        result[3] += 0.6631762652705061;
        result[4] += 0.00034904013961605586;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 0.49183673469387756;
        result[1] += 0;
        result[2] += 0.04081632653061224;
        result[3] += 0.4673469387755102;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.020053475935828877;
        result[4] += 0.9799465240641712;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.8502749410840534;
        result[1] += 0;
        result[2] += 0.003063629222309505;
        result[3] += 0.14461901021209742;
        result[4] += 0.0009426551453260016;
        result[5] += 0.0004713275726630008;
        result[6] += 0.0006284367635506677;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9524883875248839;
        result[1] += 0.00053085600530856;
        result[2] += 0.0007962840079628401;
        result[3] += 0.012806901128069011;
        result[4] += 0.03311214333112143;
        result[5] += 0;
        result[6] += 0.00026542800265428;
      } else {
        result[0] += 0.7634615384615385;
        result[1] += 0.0010576923076923079;
        result[2] += 0.0025961538461538466;
        result[3] += 0.23000000000000004;
        result[4] += 0.0025000000000000005;
        result[5] += 0.00019230769230769233;
        result[6] += 0.00019230769230769233;
      }
    }
  }
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
        result[0] += 0.0011176306230790724;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9362950544844929;
        result[4] += 0.06202849958088852;
        result[5] += 0.0005588153115395362;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991177767975298;
        result[5] += 0.000882223202470225;
        result[6] += 0;
      } else {
        result[0] += 0.6938775510204082;
        result[1] += 0.08843537414965986;
        result[2] += 0.1836734693877551;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.034013605442176874;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9939879759519038;
        result[1] += 0;
        result[2] += 0.004008016032064128;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002004008016032064;
      } else {
        result[0] += 0.9996151049908053;
        result[1] += 0;
        result[2] += 0.0003848950091947141;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.5343383584589615;
        result[1] += 0.003015075376884422;
        result[2] += 0.002680067001675042;
        result[3] += 0.45896147403685095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010050251256281408;
      } else {
        result[0] += 0.8529197080291971;
        result[1] += 0.0018248175182481753;
        result[2] += 0.010218978102189783;
        result[3] += 0.13394160583941608;
        result[4] += 0;
        result[5] += 0.00036496350364963507;
        result[6] += 0.0007299270072992701;
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
        result[0] += 0.9946367625548513;
        result[1] += 0;
        result[2] += 0.0029254022428083864;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0024378352023403218;
      } else {
        result[0] += 0.9999585663973483;
        result[1] += 0;
        result[2] += 4.1433602651750566e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7053398910943264;
        result[1] += 0.0019321974354470403;
        result[2] += 0.005620937994027754;
        result[3] += 0.2853504303530652;
        result[4] += 0.0005269629369401019;
        result[5] += 0.0001756543123133673;
        result[6] += 0.0010539258738802037;
      } else {
        result[0] += 0;
        result[1] += 0.0021430484864720066;
        result[2] += 0.007232788641843022;
        result[3] += 0.8087329225823734;
        result[4] += 0.18081971604607555;
        result[5] += 0.0010715242432360033;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.004398826979472141;
        result[1] += 0.005865102639296188;
        result[2] += 0;
        result[3] += 0.2961876832844575;
        result[4] += 0.6935483870967742;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0013236267372600927;
        result[2] += 0;
        result[3] += 0.14228987425545997;
        result[4] += 0.8563864990072799;
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
        result[0] += 0.006448412698412698;
        result[1] += 0.010416666666666666;
        result[2] += 0.008432539682539682;
        result[3] += 0.9747023809523809;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9912087912087912;
        result[1] += 0;
        result[2] += 0.008791208791208791;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.9753489858984833;
        result[1] += 0.0006393634781373211;
        result[2] += 0.0009590452172059816;
        result[3] += 0.0226974034738749;
        result[4] += 0.00017760096614925585;
        result[5] += 0;
        result[6] += 0.00017760096614925585;
      } else {
        result[0] += 0.036758563074352546;
        result[1] += 0;
        result[2] += 0.030910609857978277;
        result[3] += 0.8379281537176274;
        result[4] += 0.09189640768588136;
        result[5] += 0.002506265664160401;
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
        result[0] += 0.3691008445106806;
        result[1] += 0;
        result[2] += 0.009438648782911079;
        result[3] += 0.5052160953800298;
        result[4] += 0.11458850803113098;
        result[5] += 0.000662361318099023;
        result[6] += 0.0009935419771485345;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9973509933774835;
        result[5] += 0.0026490066225165563;
        result[6] += 0;
      } else {
        result[0] += 0.08895985401459855;
        result[1] += 0.00045620437956204383;
        result[2] += 0.010036496350364965;
        result[3] += 0.8964416058394161;
        result[4] += 0;
        result[5] += 0.004105839416058395;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9330289193302892;
        result[4] += 0.0669710806697108;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008807985907222548;
        result[2] += 0;
        result[3] += 0.004697592483852026;
        result[4] += 0.9864944216089254;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9957460732984293;
        result[1] += 0;
        result[2] += 0.0003272251308900524;
        result[3] += 0.003926701570680628;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7447774750227066;
        result[1] += 0;
        result[2] += 0.006357856494096276;
        result[3] += 0.24780502573418106;
        result[4] += 0;
        result[5] += 0.00045413260672116256;
        result[6] += 0.0006055101422948834;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9989479512735326;
        result[1] += 0;
        result[2] += 0.0008859357696566999;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00016611295681063124;
      } else {
        result[0] += 0.6621712744436952;
        result[1] += 0.003910991233985165;
        result[2] += 0.006743088334457181;
        result[3] += 0.32650033715441673;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006743088334457181;
      }
    }
  }
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.12014483212639894;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8791968400263331;
        result[4] += 0;
        result[5] += 0.0006583278472679394;
        result[6] += 0;
      } else {
        result[0] += 0.4035087719298246;
        result[1] += 0.015350877192982457;
        result[2] += 0.028508771929824563;
        result[3] += 0.549342105263158;
        result[4] += 0;
        result[5] += 0.0032894736842105266;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9956563706563707;
        result[1] += 0;
        result[2] += 0.003861003861003861;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048262548262548264;
      } else {
        result[0] += 0.9996590521650187;
        result[1] += 0;
        result[2] += 0.00034094783498124785;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9135262449528937;
        result[1] += 0.0019066846119336026;
        result[2] += 0.006056527590847914;
        result[3] += 0.07794975325257963;
        result[4] += 0;
        result[5] += 0.00011215791834903544;
        result[6] += 0.00044863167339614175;
      } else {
        result[0] += 0;
        result[1] += 0.0014519056261343012;
        result[2] += 0.005807622504537205;
        result[3] += 0.9927404718693285;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 0.9986609860012173;
        result[1] += 0;
        result[2] += 0.0013390139987827145;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996084792214329;
        result[1] += 0;
        result[2] += 0.0003355892387717434;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.593153979529056e-05;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.6047080979284368;
        result[1] += 0.0016949152542372877;
        result[2] += 0.003201506591337099;
        result[3] += 0.29378531073446323;
        result[4] += 0.09435028248587568;
        result[5] += 0.000941619585687382;
        result[6] += 0.001318267419962335;
      } else {
        result[0] += 0.5836030204962244;
        result[1] += 0.0034759678772623755;
        result[2] += 0.0056334651803907464;
        result[3] += 0.24835191178233249;
        result[4] += 0.15833632985736545;
        result[5] += 0.00011986096128490951;
        result[6] += 0.00047944384513963804;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0.001975633849193283;
        result[2] += 0;
        result[3] += 0.9963780046098123;
        result[4] += 0.0006585446163977609;
        result[5] += 0.0009878169245966415;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.038028169014084505;
        result[3] += 0;
        result[4] += 0.9605633802816902;
        result[5] += 0.0014084507042253522;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 0.005285920230658337;
        result[2] += 0.008169149447381067;
        result[3] += 0.8592023065833734;
        result[4] += 0.1273426237385872;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.026865671641791045;
        result[1] += 0;
        result[2] += 0.005970149253731343;
        result[3] += 0.15104477611940298;
        result[4] += 0.8161194029850747;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.12222222222222222;
        result[1] += 0.0005847953216374269;
        result[2] += 0;
        result[3] += 0.8748538011695907;
        result[4] += 0.0005847953216374269;
        result[5] += 0.0017543859649122807;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03225806451612903;
        result[3] += 0;
        result[4] += 0.9631336405529954;
        result[5] += 0.004608294930875576;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9996540590405905;
        result[1] += 0;
        result[2] += 0.0003075030750307503;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.843788437884379e-05;
      } else {
        result[0] += 0.6839074851175954;
        result[1] += 0.002146969844832634;
        result[2] += 0.0064409095344979015;
        result[3] += 0.3062359715038548;
        result[4] += 0;
        result[5] += 0.00019517907680296673;
        result[6] += 0.001073484922416317;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4467a000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9996069182389937;
        result[5] += 0.00039308176100628933;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.002545338848234171;
        result[2] += 0.0066815144766146995;
        result[3] += 0.988227807826917;
        result[4] += 0;
        result[5] += 0.002545338848234171;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9995928753180662;
        result[1] += 0;
        result[2] += 0.0003053435114503817;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010178117048346055;
      } else {
        result[0] += 0.6819787985865724;
        result[1] += 0.014134275618374558;
        result[2] += 0;
        result[3] += 0.303886925795053;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5538544912613467;
        result[1] += 0.002438693943910039;
        result[2] += 0.00880639479745292;
        result[3] += 0.43354559002845144;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013548299688389107;
      } else {
        result[0] += 0.9839983588060314;
        result[1] += 0;
        result[2] += 0.005231305774951277;
        result[3] += 0.010052313057749512;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007180223612678223;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43390000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992767139974875;
        result[1] += 0;
        result[2] += 0.0006090829494841828;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001142030530282843;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x46219c00))) ) ) {
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6127439454502704;
        result[1] += 0.0018810251587114979;
        result[2] += 0.006583588055490242;
        result[3] += 0.3262794889881652;
        result[4] += 0.05133631162316796;
        result[5] += 0.00031350419311858296;
        result[6] += 0.0008621365310761031;
      } else {
        result[0] += 0.002049180327868853;
        result[1] += 0;
        result[2] += 0.019808743169398912;
        result[3] += 0.7759562841530055;
        result[4] += 0.20081967213114757;
        result[5] += 0.0013661202185792352;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.13694117647058823;
        result[1] += 0.00611764705882353;
        result[2] += 0.0051764705882352945;
        result[3] += 0.5524705882352942;
        result[4] += 0.2992941176470588;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0034285714285714284;
        result[1] += 0.009142857142857144;
        result[2] += 0;
        result[3] += 0.09485714285714286;
        result[4] += 0.8925714285714286;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 0.4264859228362878;
        result[1] += 0.004171011470281543;
        result[2] += 0.002711157455683003;
        result[3] += 0.5155370177267987;
        result[4] += 0.051094890510948905;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9449490268767378;
        result[1] += 0.0009267840593141798;
        result[2] += 0.001235712079085573;
        result[3] += 0.05196169292554835;
        result[4] += 6.178560395427866e-05;
        result[5] += 0.00018535681186283596;
        result[6] += 0.0006796416434970651;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.11787280701754387;
        result[1] += 0;
        result[2] += 0.010416666666666666;
        result[3] += 0.046600877192982455;
        result[4] += 0.825109649122807;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9942647190608478;
        result[1] += 0;
        result[2] += 0.002150730352182095;
        result[3] += 0;
        result[4] += 0.003584550586970159;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.15986570247933884;
        result[1] += 0;
        result[2] += 0.005940082644628099;
        result[3] += 0.6766528925619835;
        result[4] += 0.15754132231404958;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9951083158630328;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.004891684136967156;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.9314720812182742;
        result[1] += 0;
        result[2] += 0.005583756345177666;
        result[3] += 0.060152284263959396;
        result[4] += 0;
        result[5] += 0.00025380710659898484;
        result[6] += 0.002538071065989848;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.95578231292517;
        result[4] += 0.034013605442176874;
        result[5] += 0.01020408163265306;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45935c00))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991771353338088;
        result[1] += 0;
        result[2] += 0.0007131493773657359;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010971528882549784;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4613de00))) ) ) {
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
        result[0] += 0.014589104339796861;
        result[1] += 0.00443213296398892;
        result[2] += 0.007017543859649123;
        result[3] += 0.6430286241920591;
        result[4] += 0.33074792243767315;
        result[5] += 0.00018467220683287164;
        result[6] += 0;
      } else {
        result[0] += 0.9823639774859287;
        result[1] += 0;
        result[2] += 0.007129455909943715;
        result[3] += 0.009380863039399626;
        result[4] += 0;
        result[5] += 0.00012507817385866166;
        result[6] += 0.0010006253908692933;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0.001649620587264929;
        result[2] += 0.011877268228307489;
        result[3] += 0.8396568789178489;
        result[4] += 0.14582645991421972;
        result[5] += 0.0009897723523589574;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.693029490616622;
        result[4] += 0.306970509383378;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0.08554817275747509;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8953488372093024;
        result[4] += 0.018272425249169437;
        result[5] += 0.0008305647840531562;
        result[6] += 0;
      } else {
        result[0] += 0.29975579975579975;
        result[1] += 0.0018315018315018315;
        result[2] += 0;
        result[3] += 0.5854700854700855;
        result[4] += 0.11294261294261294;
        result[5] += 0;
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
        result[1] += 0.0017248814144027599;
        result[2] += 0.008624407072013798;
        result[3] += 0;
        result[4] += 0.9896507115135834;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 0.9983527344607951;
        result[1] += 0.000658906215681968;
        result[2] += 0.0005490885130683066;
        result[3] += 0.0004392708104546453;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9929772685270745;
        result[1] += 0;
        result[2] += 0.000646830530401035;
        result[3] += 0.006283496581038625;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.240436148586214e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5349865951742627;
        result[1] += 0.0030831099195710457;
        result[2] += 0.010723860589812333;
        result[3] += 0.45013404825737263;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010723860589812334;
      } else {
        result[0] += 0.9866487269716415;
        result[1] += 0;
        result[2] += 0.002794452494307597;
        result[3] += 0.009625336369281721;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009314841647691989;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0012690355329949238;
        result[1] += 0.013959390862944163;
        result[2] += 0;
        result[3] += 0.06598984771573604;
        result[4] += 0.9187817258883249;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.31105581230003554;
        result[1] += 0.002488446498400284;
        result[2] += 0.008176324209029506;
        result[3] += 0.6782794169925347;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.9829656921383798;
        result[1] += 0.00014354753815972056;
        result[2] += 0.0011483803052777645;
        result[3] += 0.015503134121249821;
        result[4] += 0.0001913967175462941;
        result[5] += 4.784917938657352e-05;
        result[6] += 0;
      } else {
        result[0] += 0.002789400278940028;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.99721059972106;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.7962916718691473;
        result[1] += 0.0008740167311774255;
        result[2] += 0.0028717692595829694;
        result[3] += 0.198901236109377;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010613060307154453;
      } else {
        result[0] += 0.01928783382789318;
        result[1] += 0;
        result[2] += 0.01706231454005935;
        result[3] += 0.8434718100890208;
        result[4] += 0.11424332344213652;
        result[5] += 0.005934718100890209;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.4595744680851064;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12462006079027356;
        result[4] += 0.41519756838905775;
        result[5] += 0.0006079027355623101;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0006711409395973154;
        result[2] += 0.009060402684563758;
        result[3] += 0.9503355704697987;
        result[4] += 0.039261744966442955;
        result[5] += 0.0006711409395973154;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.017964071856287425;
        result[4] += 0.9820359281437125;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.009148486980999296;
        result[2] += 0;
        result[3] += 0.07459535538353272;
        result[4] += 0.916256157635468;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9976652923352044;
        result[1] += 0;
        result[2] += 0.0004470716804927723;
        result[3] += 0.001837961353136953;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.967463116586359e-05;
      } else {
        result[0] += 0.2619047619047619;
        result[1] += 0.11904761904761904;
        result[2] += 0;
        result[3] += 0.6190476190476191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9998218104062723;
        result[1] += 0;
        result[2] += 0.0001781895937277263;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6919276576973973;
        result[1] += 0.001676224084693427;
        result[2] += 0.0073224525805028655;
        result[3] += 0.2978385531539479;
        result[4] += 0;
        result[5] += 8.822232024702249e-05;
        result[6] += 0.0011468901632112922;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.24312896405919662;
        result[1] += 0.0010570824524312897;
        result[2] += 0;
        result[3] += 0.7452431289640592;
        result[4] += 0.006342494714587738;
        result[5] += 0.004228329809725159;
        result[6] += 0;
      } else {
        result[0] += 0.9949611287071697;
        result[1] += 0.0005758710048949036;
        result[2] += 0.0009357903829542184;
        result[3] += 0.0031312985891160383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003959113158652462;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.15687393040501993;
        result[1] += 0.005134055904164289;
        result[2] += 0.005134055904164289;
        result[3] += 0.7512835139760409;
        result[4] += 0.08128921848260125;
        result[5] += 0.00028522532800912714;
        result[6] += 0;
      } else {
        result[0] += 0.022850270595309682;
        result[1] += 0;
        result[2] += 0.02345159350571257;
        result[3] += 0.04990980156343957;
        result[4] += 0.9037883343355382;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.1509279475982533;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8490720524017468;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.9768599882835384;
        result[1] += 0;
        result[2] += 0.013766842413591095;
        result[3] += 0.00029291154071470416;
        result[4] += 0.0046865846514352666;
        result[5] += 0.0017574692442882249;
        result[6] += 0.0026362038664323375;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.8986201609812189;
        result[1] += 0;
        result[2] += 0.001245688003066309;
        result[3] += 0.09285166730548103;
        result[4] += 0.007090839402069758;
        result[5] += 0;
        result[6] += 0.00019164430816404754;
      } else {
        result[0] += 0.5258507853403142;
        result[1] += 0;
        result[2] += 0.016361256544502618;
        result[3] += 0.3946335078534031;
        result[4] += 0.06086387434554974;
        result[5] += 0.0013089005235602095;
        result[6] += 0.000981675392670157;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.8692412436644225;
        result[1] += 0.0006808381874574476;
        result[2] += 0.002799001437325062;
        result[3] += 0.1195249262425297;
        result[4] += 0.0074513957182842875;
        result[5] += 3.7824343747635976e-05;
        result[6] += 0.0002647704062334518;
      } else {
        result[0] += 0.004024144869215292;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9959758551307847;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.170767004341534;
        result[1] += 0.005788712011577424;
        result[2] += 0.00723589001447178;
        result[3] += 0.8162083936324168;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.01744186046511628;
        result[1] += 0.06395348837209303;
        result[2] += 0;
        result[3] += 0.9186046511627907;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.99875400498398;
        result[1] += 0;
        result[2] += 0.000978996084015664;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000266998932004272;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0.19032327124812673;
        result[1] += 0.005352172982230786;
        result[2] += 0.0062085206593877115;
        result[3] += 0.4339541853992721;
        result[4] += 0.36416184971098264;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7908371040723982;
        result[1] += 0.0012443438914027148;
        result[2] += 0.006108597285067873;
        result[3] += 0.18461538461538463;
        result[4] += 0.015384615384615385;
        result[5] += 0.00033936651583710406;
        result[6] += 0.0014705882352941176;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0.0016409583196586807;
        result[2] += 0.005579258286839514;
        result[3] += 0.9927797833935018;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.014534883720930232;
        result[3] += 0;
        result[4] += 0.9811046511627907;
        result[5] += 0.00436046511627907;
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
        result[0] += 0.16452036793692512;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8352168199737189;
        result[4] += 0;
        result[5] += 0.0002628120893561104;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.12121212121212122;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5303030303030303;
        result[5] += 0.015151515151515152;
        result[6] += 0;
      } else {
        result[0] += 0.02678963548528766;
        result[1] += 0;
        result[2] += 0.00966183574879227;
        result[3] += 0;
        result[4] += 0.961352657004831;
        result[5] += 0.0021958717610891525;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9994436014162873;
        result[1] += 0;
        result[2] += 0.000556398583712696;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.704119850187266;
        result[1] += 0.02247191011235955;
        result[2] += 0;
        result[3] += 0.27340823970037453;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5379556042751439;
        result[1] += 0.0020553576322280076;
        result[2] += 0.007947382844614962;
        result[3] += 0.4513565360372705;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006851192107426692;
      } else {
        result[0] += 0.9858134313125128;
        result[1] += 0;
        result[2] += 0.0031639110022453564;
        result[3] += 0.010410287813839559;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000612369871402327;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.16126601356443104;
        result[1] += 0.00025119316754584274;
        result[2] += 0;
        result[3] += 0.7786988193921125;
        result[4] += 0.059281587540818886;
        result[5] += 0.0005023863350916855;
        result[6] += 0;
      } else {
        result[0] += 0.05161290322580645;
        result[1] += 0.005278592375366569;
        result[2] += 0.00469208211143695;
        result[3] += 0;
        result[4] += 0.9378299120234604;
        result[5] += 0.0005865102639296188;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.985727571898698;
        result[1] += 0.0012877378738016883;
        result[2] += 0.0021462297896694808;
        result[3] += 0.010695378451852911;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014308198597796538;
      } else {
        result[0] += 0.7394366197183099;
        result[1] += 0;
        result[2] += 0.03873239436619718;
        result[3] += 0.22183098591549297;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.41746794871794873;
        result[1] += 0;
        result[2] += 0.013621794871794872;
        result[3] += 0.028044871794871796;
        result[4] += 0.5408653846153846;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.01609907120743034;
        result[1] += 0;
        result[2] += 0.0071207430340557275;
        result[3] += 0.9718266253869969;
        result[4] += 0.0037151702786377707;
        result[5] += 0.001238390092879257;
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
        result[0] += 0.986948694869487;
        result[1] += 0;
        result[2] += 0.009450945094509451;
        result[3] += 0.0018001800180018;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018001800180018;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 0.9730820995962315;
        result[1] += 0;
        result[2] += 0.026917900403768506;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07010014306151646;
        result[1] += 0.010968049594659038;
        result[2] += 0.0019074868860276587;
        result[3] += 0.7939914163090129;
        result[4] += 0.123032904148784;
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
        result[0] += 0.3241590214067278;
        result[1] += 0;
        result[2] += 0.024464831804281346;
        result[3] += 0.6513761467889908;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.9583471256758248;
        result[1] += 0.00022067747986317997;
        result[2] += 0.0006620324395895399;
        result[3] += 0.016716319099635883;
        result[4] += 0.02399867593512082;
        result[5] += 5.516936996579499e-05;
        result[6] += 0;
      } else {
        result[0] += 0.929243937232525;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.007417974322396576;
        result[4] += 0.062482168330955774;
        result[5] += 0;
        result[6] += 0.0008559201141226819;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.7993442155534963;
        result[1] += 0.0007840900990804761;
        result[2] += 0.004775821512581082;
        result[3] += 0.1856867916458764;
        result[4] += 0.008268586499394113;
        result[5] += 0.0005702473447858009;
        result[6] += 0.0005702473447858009;
      } else {
        result[0] += 0.45219797110359666;
        result[1] += 0;
        result[2] += 0.0046111281893636644;
        result[3] += 0.5431909007070397;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
