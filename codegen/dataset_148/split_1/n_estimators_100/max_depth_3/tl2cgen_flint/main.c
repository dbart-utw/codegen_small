
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.00946372239747634;
        result[1] += 0.0473186119873817;
        result[2] += 0;
        result[3] += 0.07570977917981073;
        result[4] += 0.8675078864353313;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3211561621838619;
        result[1] += 0.0036130068245684463;
        result[2] += 0.008430349257326376;
        result[3] += 0.6655961461260538;
        result[4] += 0.0012043356081894822;
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
        result[0] += 0.2975871313672922;
        result[1] += 0;
        result[2] += 0.0160857908847185;
        result[3] += 0.6863270777479893;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993518377306695;
        result[1] += 0;
        result[2] += 0.0005719078847033704;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.625438462711606e-05;
      } else {
        result[0] += 0.5848806366047745;
        result[1] += 0.0009946949602122016;
        result[2] += 0.009532493368700266;
        result[3] += 0.39190981432360744;
        result[4] += 0.011273209549071617;
        result[5] += 0.0004973474801061008;
        result[6] += 0.0009118037135278515;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42e50000))) ) ) {
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9973289301150989;
        result[1] += 0;
        result[2] += 0.00033995434898742176;
        result[3] += 0.002331115535913749;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.012332990750256937;
        result[1] += 0;
        result[2] += 0.01644398766700925;
        result[3] += 0.2867420349434738;
        result[4] += 0.6824254881808839;
        result[5] += 0.0020554984583761563;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 0.3577020034496484;
        result[1] += 0.0014594666312856574;
        result[2] += 0.010481623988324267;
        result[3] += 0.5946663128565742;
        result[4] += 0.033965768873557116;
        result[5] += 0.0009287514926363275;
        result[6] += 0.000796072707973995;
      } else {
        result[0] += 0.9402932344108814;
        result[1] += 0;
        result[2] += 0.0024730612965907085;
        result[3] += 0.057057057057057055;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001766472354707649;
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
        result[0] += 0.13425925925925927;
        result[1] += 0.013227513227513227;
        result[2] += 0.005952380952380952;
        result[3] += 0.8465608465608465;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 0.9764428739693758;
        result[1] += 0;
        result[2] += 0.023557126030624265;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06015733456732994;
        result[1] += 0.008329477093937991;
        result[2] += 0.0013882461823229986;
        result[3] += 0.9301249421564091;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.9359619885114532;
        result[1] += 0.000283667824976952;
        result[2] += 0.0008510034749308561;
        result[3] += 0.013261470817672507;
        result[4] += 0.04957095241472237;
        result[5] += 7.0916956244238e-05;
        result[6] += 0;
      } else {
        result[0] += 0.9844823200203511;
        result[1] += 0;
        result[2] += 0.0017807173747138134;
        result[3] += 0.013228186212159756;
        result[4] += 0.0003815822945815314;
        result[5] += 0;
        result[6] += 0.0001271940981938438;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0.6946353730092204;
        result[1] += 0.0012573344509639564;
        result[2] += 0.002933780385582565;
        result[3] += 0.3005867560771165;
        result[4] += 0;
        result[5] += 0.00033528918692372173;
        result[6] += 0.0002514668901927913;
      } else {
        result[0] += 0.8243756243756244;
        result[1] += 0;
        result[2] += 0.012387612387612388;
        result[3] += 0.13466533466533467;
        result[4] += 0.027372627372627373;
        result[5] += 0.0007992007992007992;
        result[6] += 0.0003996003996003996;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0018909549322407816;
        result[1] += 0.005042546485975417;
        result[2] += 0.0025212732429877086;
        result[3] += 0.9880239520958084;
        result[4] += 0;
        result[5] += 0.0025212732429877086;
        result[6] += 0;
      } else {
        result[0] += 0.9791666666666666;
        result[1] += 0;
        result[2] += 0.020833333333333332;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0.9951923076923077;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.004807692307692308;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3053435114503817;
        result[1] += 0.0019083969465648854;
        result[2] += 0;
        result[3] += 0.6927480916030534;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9956273489447818;
        result[1] += 0.000505926568372362;
        result[2] += 0.0024573576178086153;
        result[3] += 0.0011202659728245157;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002891008962127783;
      } else {
        result[0] += 0.6491665721737159;
        result[1] += 0;
        result[2] += 0.0038553123936954305;
        result[3] += 0.3462977661866425;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006803492459462524;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.4490057729313663;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.11930724823604875;
        result[4] += 0.4304041051956382;
        result[5] += 0.0012828736369467607;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.007423117709437964;
        result[3] += 0.9653587840226229;
        result[4] += 0.026157652880876636;
        result[5] += 0.0010604453870625664;
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
        result[1] += 0.06763285024154589;
        result[2] += 0;
        result[3] += 0.9323671497584541;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 0.523709167544784;
        result[1] += 0.007376185458377239;
        result[2] += 0.015806111696522657;
        result[3] += 0.45310853530031614;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8892669347355399;
        result[1] += 0.0003866377977111043;
        result[2] += 0.0018171976492421902;
        result[3] += 0.10841323847819365;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011599133931333128;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 0.9876578921994023;
        result[1] += 0;
        result[2] += 0.002989104232957285;
        result[3] += 0.009063735416064027;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028926815157651146;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.473111395646607;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1152368758002561;
        result[4] += 0.4097311139564661;
        result[5] += 0.0019206145966709348;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005676126878130217;
        result[3] += 0.9522537562604341;
        result[4] += 0.04073455759599332;
        result[5] += 0.001335559265442404;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7319587628865979;
        result[4] += 0.26804123711340205;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008458035133376708;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9915419648666233;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 0.6212361331220286;
        result[1] += 0.0015847860538827261;
        result[2] += 0.0015847860538827261;
        result[3] += 0.37559429477020606;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9951258841206435;
        result[1] += 0.0004397698537765236;
        result[2] += 0.0024920291714003004;
        result[3] += 0.001575841976032543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00036647487814710304;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4494653328734046;
        result[1] += 0;
        result[2] += 0.003104518799586064;
        result[3] += 0.5474301483270093;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9871281464530893;
        result[1] += 0;
        result[2] += 0.008867276887871854;
        result[3] += 0.0014302059496567507;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0025743707093821514;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 0.01742627345844504;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.982573726541555;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00023369946249123628;
        result[1] += 0;
        result[2] += 0.0021032951624211263;
        result[3] += 0.7431642907221313;
        result[4] += 0.2523954194905352;
        result[5] += 0.0021032951624211263;
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
        result[0] += 0.9816993464052287;
        result[1] += 0;
        result[2] += 0.018300653594771243;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0.9967284623773175;
        result[1] += 0.0006906579425663397;
        result[2] += 0.002181025081788441;
        result[3] += 0.00014540167211922939;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025445292620865145;
      } else {
        result[0] += 0.3561643835616438;
        result[1] += 0.0273972602739726;
        result[2] += 0;
        result[3] += 0.6164383561643836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.18675595238095238;
        result[1] += 0;
        result[2] += 0.003224206349206349;
        result[3] += 0.8100198412698413;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9947089947089948;
        result[1] += 0;
        result[2] += 0.0045071526553008045;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007838526357044877;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0.9971597633136094;
        result[1] += 0;
        result[2] += 0.002366863905325444;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00047337278106508875;
      } else {
        result[0] += 0.9997257518968827;
        result[1] += 0;
        result[2] += 0.0002742481031172868;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6064984769194721;
        result[1] += 0.0008591736311801923;
        result[2] += 0.007576349293134423;
        result[3] += 0.3292978208232446;
        result[4] += 0.054596578926814035;
        result[5] += 0.0003124267749746154;
        result[6] += 0.0008591736311801923;
      } else {
        result[0] += 0.07468051118210862;
        result[1] += 0.003194888178913738;
        result[2] += 0.013977635782747603;
        result[3] += 0.8785942492012779;
        result[4] += 0.028354632587859425;
        result[5] += 0.0011980830670926517;
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
        result[0] += 0.006289308176100629;
        result[1] += 0.03773584905660377;
        result[2] += 0;
        result[3] += 0.9559748427672956;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.991304347826087;
        result[1] += 0;
        result[2] += 0.008695652173913044;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07092492741600996;
        result[1] += 0.007465781833264205;
        result[2] += 0.00414765657403567;
        result[3] += 0.8034010783907093;
        result[4] += 0.11406055578598093;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 0.4864864864864865;
        result[1] += 0;
        result[2] += 0.037422037422037424;
        result[3] += 0.4760914760914761;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.031091370558375634;
        result[4] += 0.9689086294416244;
        result[5] += 0;
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
        result[0] += 0.9993541278826792;
        result[1] += 0;
        result[2] += 0.0006078796398313134;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.799247748945709e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.3713574097135741;
        result[1] += 0.0013698630136986301;
        result[2] += 0.008343711083437112;
        result[3] += 0.5317559153175592;
        result[4] += 0.08642590286425902;
        result[5] += 0.00037359900373599005;
        result[6] += 0.00037359900373599005;
      } else {
        result[0] += 0.962561321972631;
        result[1] += 0;
        result[2] += 0.003356571133488252;
        result[3] += 0.031241931319390653;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0028401755744900596;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9987337192474675;
        result[1] += 0;
        result[2] += 0.0012662807525325615;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 0.16813527030245295;
        result[1] += 0.003334127173136461;
        result[2] += 0.00523934270064301;
        result[3] += 0.4605858537747083;
        result[4] += 0.3627054060490593;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7855393461825152;
        result[1] += 0.0011713342562027474;
        result[2] += 0.007986369928655096;
        result[3] += 0.17719092748376106;
        result[4] += 0.026621233095516984;
        result[5] += 0.0006389095942924076;
        result[6] += 0.0008518794590565435;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.22155688622754494;
        result[4] += 0.7760479041916168;
        result[5] += 0.0023952095808383238;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.010287335934728628;
        result[3] += 0.9868747782901738;
        result[4] += 0.002837885775097552;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11289813938820562;
        result[1] += 0.000630715862503942;
        result[2] += 0.007883948281299276;
        result[3] += 0.8766950488804793;
        result[4] += 0;
        result[5] += 0.001892147587511826;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
        result[0] += 0;
        result[1] += 0.02527075812274368;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9747292418772563;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
        result[0] += 0;
        result[1] += 0.010835913312693499;
        result[2] += 0;
        result[3] += 0.9891640866873065;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9923938155322553;
        result[1] += 0.0006397725253243291;
        result[2] += 0.002736804691665186;
        result[3] += 0.0039452639061666964;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028434334458859073;
      } else {
        result[0] += 0.6468499427262314;
        result[1] += 0;
        result[2] += 0.004581901489117984;
        result[3] += 0.34776632302405497;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008018327605956472;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.000895789787996417;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9393848910122425;
        result[4] += 0.059122126007763516;
        result[5] += 0.0005971931919976114;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00314070351758794;
        result[2] += 0.00628140703517588;
        result[3] += 0;
        result[4] += 0.9880653266331658;
        result[5] += 0.002512562814070352;
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
        result[0] += 0.9804941482444733;
        result[1] += 0;
        result[2] += 0.01950585175552666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9992775312209723;
        result[1] += 5.16049127876974e-05;
        result[2] += 0.0006192589534523687;
        result[3] += 5.16049127876974e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8836140888208269;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.11638591117917305;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9631378873401681;
        result[1] += 0.0018431056329915908;
        result[2] += 0.006450869715470568;
        result[3] += 0.028452943209307684;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011519410206197443;
      } else {
        result[0] += 0.6267622461170849;
        result[1] += 0;
        result[2] += 0.005973715651135006;
        result[3] += 0.36654719235364397;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007168458781362007;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.008946322067594433;
        result[1] += 0.0034791252485089465;
        result[2] += 0.010934393638170975;
        result[3] += 0.9642147117296223;
        result[4] += 0.01242544731610338;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9925062447960034;
        result[1] += 0;
        result[2] += 0.00749375520399667;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4397993311036789;
        result[4] += 0.560200668896321;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007304601899196494;
        result[1] += 0.003652300949598247;
        result[2] += 0;
        result[3] += 0.05113221329437546;
        result[4] += 0.9444850255661067;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.9947984395318595;
        result[1] += 0;
        result[2] += 0.0005297885661994894;
        result[3] += 0.004430958917304821;
        result[4] += 9.632519385445263e-05;
        result[5] += 0;
        result[6] += 0.00014448779078167894;
      } else {
        result[0] += 0.0011441647597254005;
        result[1] += 0.002288329519450801;
        result[2] += 0.010297482837528604;
        result[3] += 0.2574370709382151;
        result[4] += 0.7288329519450801;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.7013337567481741;
        result[1] += 0;
        result[2] += 0.006033661479834869;
        result[3] += 0.28993331216259133;
        result[4] += 0.0015878056525881234;
        result[5] += 0.0003175611305176247;
        result[6] += 0.0007939028262940617;
      } else {
        result[0] += 0.7607125662012518;
        result[1] += 0.0009629272989889263;
        result[2] += 0.004525758305247954;
        result[3] += 0.22965816080885892;
        result[4] += 0.0037554164660568126;
        result[5] += 9.629272989889263e-05;
        result[6] += 0.0002888781896966779;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0003256268316509281;
        result[1] += 0.0006512536633018562;
        result[2] += 0.0019537609899055687;
        result[3] += 0.9710192119830675;
        result[4] += 0.023770758710517752;
        result[5] += 0.002279387821556497;
        result[6] += 0;
      } else {
        result[0] += 0.5331010452961672;
        result[1] += 0;
        result[2] += 0.009059233449477353;
        result[3] += 0;
        result[4] += 0.4578397212543554;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0.01098901098901099;
        result[2] += 0;
        result[3] += 0.14835164835164835;
        result[4] += 0.8406593406593407;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.07377647918188458;
        result[4] += 0.9262235208181154;
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
        result[0] += 0.9991537236160892;
        result[1] += 0;
        result[2] += 0.0008462763839107926;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9452907452907453;
        result[1] += 0.0037674037674037676;
        result[2] += 0.007371007371007371;
        result[3] += 0.04291564291564291;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006552006552006552;
      } else {
        result[0] += 0.40591649503838234;
        result[1] += 0;
        result[2] += 0.008050926792735443;
        result[3] += 0.5849091930350122;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011233851338700617;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.8610063397801141;
        result[1] += 0.0006420030495144853;
        result[2] += 0.0022470106733006984;
        result[3] += 0.13514164192279915;
        result[4] += 0.00016050076237862133;
        result[5] += 0.00016050076237862133;
        result[6] += 0.0006420030495144853;
      } else {
        result[0] += 0.9944199706314244;
        result[1] += 0;
        result[2] += 0.0004698972099853157;
        result[3] += 0.0048164464023494865;
        result[4] += 0.00023494860499265785;
        result[5] += 5.873715124816446e-05;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.3896414342629481;
        result[1] += 0.00039840637450199194;
        result[2] += 0.021115537848605575;
        result[3] += 0.5657370517928286;
        result[4] += 0.023107569721115533;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00048590864917395527;
        result[1] += 0.004373177842565598;
        result[2] += 0;
        result[3] += 0.141399416909621;
        result[4] += 0.8537414965986394;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0.013443935926773455;
        result[1] += 0;
        result[2] += 0.006864988558352402;
        result[3] += 0.7903318077803204;
        result[4] += 0.18935926773455378;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8762595727529222;
        result[1] += 0;
        result[2] += 0.0048367593712212815;
        result[3] += 0.1124546553808948;
        result[4] += 0.0032245062474808546;
        result[5] += 0.0008061265618702137;
        result[6] += 0.0024183796856106408;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.164956590370955;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8345172323072876;
        result[4] += 0;
        result[5] += 0.0005261773217574323;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.9651162790697675;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03488372093023256;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0036003600360036;
        result[2] += 0.013501350135013501;
        result[3] += 0;
        result[4] += 0.9815481548154815;
        result[5] += 0.0013501350135013501;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0.9813084112149533;
        result[1] += 0.018691588785046728;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11479028697571744;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8852097130242825;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9958083832335329;
        result[1] += 0.0001497005988023952;
        result[2] += 0.0004491017964071856;
        result[3] += 0.003493013972055888;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.98003992015968e-05;
      } else {
        result[0] += 0.8070282845598139;
        result[1] += 0.0007346638912697441;
        result[2] += 0.004775315293253337;
        result[3] += 0.1868495163462716;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006122199093914534;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.14737108190091003;
        result[1] += 0.00025278058645096063;
        result[2] += 0;
        result[3] += 0.7904448938321538;
        result[4] += 0.06167846309403439;
        result[5] += 0.00025278058645096063;
        result[6] += 0;
      } else {
        result[0] += 0.06647230320699708;
        result[1] += 0.00641399416909621;
        result[2] += 0.006997084548104956;
        result[3] += 0;
        result[4] += 0.9189504373177843;
        result[5] += 0.0011661807580174927;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 0.6061588330632091;
        result[1] += 0.0032414910858995136;
        result[2] += 0.0032414910858995136;
        result[3] += 0.3873581847649919;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.993104699691526;
        result[1] += 0.0006169479223371439;
        result[2] += 0.0027581201233895843;
        result[3] += 0.0033750680457267286;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014516421702050444;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0.0003219575016097875;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9945267224726336;
        result[4] += 0.004185447520927237;
        result[5] += 0.0009658725048293626;
        result[6] += 0;
      } else {
        result[0] += 0.4824438202247191;
        result[1] += 0;
        result[2] += 0.025280898876404494;
        result[3] += 0;
        result[4] += 0.4922752808988764;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9875370919881306;
        result[1] += 0;
        result[2] += 0.008902077151335312;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0035608308605341245;
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
        result[0] += 0.9959839357429718;
        result[1] += 0;
        result[2] += 0.0035140562248995983;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000502008032128514;
      } else {
        result[0] += 0.999627637567232;
        result[1] += 0;
        result[2] += 0.0003723624327678941;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7088085629057729;
        result[1] += 0.0017546938059308647;
        result[2] += 0.008773469029654323;
        result[3] += 0.2788208457624144;
        result[4] += 0.0006141428320758027;
        result[5] += 0.0005264081417792594;
        result[6] += 0.000701877522372346;
      } else {
        result[0] += 0;
        result[1] += 0.0010658140154543032;
        result[2] += 0.011990407673860911;
        result[3] += 0.804689581667999;
        result[4] += 0.18198774313882227;
        result[5] += 0.0002664535038635758;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.006369426751592357;
        result[1] += 0.01592356687898089;
        result[2] += 0;
        result[3] += 0.5636942675159236;
        result[4] += 0.4140127388535032;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.024405908798972382;
        result[4] += 0.9755940912010276;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0.9993757413071978;
        result[1] += 0;
        result[2] += 0.0005618328235220676;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.242586928022972e-05;
      } else {
        result[0] += 0.9999014875381735;
        result[1] += 0;
        result[2] += 9.851246182642104e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.0023094688221709007;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.22055427251732102;
        result[4] += 0.7736720554272517;
        result[5] += 0.003464203233256351;
        result[6] += 0;
      } else {
        result[0] += 0.5686687741482263;
        result[1] += 0.001966982788900597;
        result[2] += 0.007938180540920266;
        result[3] += 0.42016157358623113;
        result[4] += 0.0007024938531787847;
        result[5] += 0.00021074815595363542;
        result[6] += 0.00035124692658939234;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0.0012642225031605564;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.438685208596713;
        result[4] += 0.5600505689001264;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.004178272980501393;
        result[1] += 0.008356545961002786;
        result[2] += 0;
        result[3] += 0.04874651810584958;
        result[4] += 0.9387186629526463;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9952229299363057;
        result[5] += 0.004777070063694267;
        result[6] += 0;
      } else {
        result[0] += 0.13483870967741934;
        result[1] += 0.003870967741935484;
        result[2] += 0.01096774193548387;
        result[3] += 0.8490322580645161;
        result[4] += 0;
        result[5] += 0.0012903225806451613;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2218984179850125;
        result[1] += 0;
        result[2] += 0.0029142381348875937;
        result[3] += 0.7726894254787677;
        result[4] += 0;
        result[5] += 0.002497918401332223;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.3969957081545064;
        result[1] += 0.01072961373390558;
        result[2] += 0;
        result[3] += 0.592274678111588;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9968026741270937;
        result[1] += 0.0005813319768920539;
        result[2] += 0.0023253279075682158;
        result[3] += 0.0001089997456672601;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018166624277876685;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.5422463522225992;
        result[1] += 0;
        result[2] += 0.00848320325755005;
        result[3] += 0.4482524601289447;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010179843909060061;
      } else {
        result[0] += 0.6936819879811597;
        result[1] += 0;
        result[2] += 0.0027610849439662173;
        result[3] += 0.30339451031346437;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00016241676140977748;
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
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.19744869661674985;
        result[1] += 0.0033277870216306157;
        result[2] += 0.004437049362174155;
        result[3] += 0.7942318358291736;
        result[4] += 0;
        result[5] += 0.0005546311702717693;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9998714652956299;
        result[1] += 0;
        result[2] += 0.00012853470437017994;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7082585278276482;
        result[1] += 0;
        result[2] += 0.007854578096947937;
        result[3] += 0.2827648114901257;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011220825852782767;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.0681265206812652;
        result[1] += 0;
        result[2] += 0.0034063260340632603;
        result[3] += 0.6588807785888078;
        result[4] += 0.2681265206812652;
        result[5] += 0.00145985401459854;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0015015015015015015;
        result[2] += 0;
        result[3] += 0.052552552552552555;
        result[4] += 0.9459459459459459;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 0.559576345984113;
        result[1] += 0.00264783759929391;
        result[2] += 0.00176522506619594;
        result[3] += 0.43601059135039716;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.916896594325248;
        result[1] += 0.0006588971708602725;
        result[2] += 0.0028414940493349254;
        result[3] += 0.07931474694230531;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028826751225136923;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.9823055783231281;
        result[1] += 0.0011089147099946964;
        result[2] += 0.0016874789065136687;
        result[3] += 0.014608745962104045;
        result[4] += 0;
        result[5] += 4.8213683043247675e-05;
        result[6] += 0.00024106841521623836;
      } else {
        result[0] += 0.9998558038932949;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.00014419610670511897;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0.44837284049819204;
        result[1] += 0;
        result[2] += 0.0064282844515869825;
        result[3] += 0.5359582161510646;
        result[4] += 0.009240658899156288;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9652978600347022;
        result[1] += 0;
        result[2] += 0.005494505494505495;
        result[3] += 0.027183342972816656;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020242914979757085;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.291911615649706;
        result[1] += 0.003040745996351104;
        result[2] += 0.009527670788566794;
        result[3] += 0.6951145347658625;
        result[4] += 0;
        result[5] += 0.00040543279951348054;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998468606431853;
        result[5] += 0.0015313935681470138;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15384615384615385;
        result[3] += 0;
        result[4] += 0.8461538461538461;
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
        result[0] += 0.005215742057847321;
        result[1] += 0.011853959222380275;
        result[2] += 0.008060692271218587;
        result[3] += 0.9748696064485538;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9896587383660806;
        result[1] += 0;
        result[2] += 0.010341261633919338;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.10800644814615798;
        result[1] += 0.0005373455131649651;
        result[2] += 0.005910800644814616;
        result[3] += 0.8087049973132724;
        result[4] += 0.07469102632993015;
        result[5] += 0.0021493820526598604;
        result[6] += 0;
      } else {
        result[0] += 0.9931653760860872;
        result[1] += 0.0005453157378121934;
        result[2] += 0.0015632384483949542;
        result[3] += 0.004580652197622425;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014541753008325155;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.14935661764705882;
        result[1] += 0;
        result[2] += 0.0059742647058823525;
        result[3] += 0.6868106617647058;
        result[4] += 0.15739889705882354;
        result[5] += 0.00045955882352941176;
        result[6] += 0;
      } else {
        result[0] += 0.9962264150943396;
        result[1] += 0;
        result[2] += 0.0027805362462760674;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009930486593843098;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 0.9726027397260274;
        result[1] += 0;
        result[2] += 0.0273972602739726;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.062249888839484215;
        result[1] += 0.008448199199644287;
        result[2] += 0.0013339261894175188;
        result[3] += 0.927967985771454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.9762576730402879;
        result[1] += 0.0006702885768715163;
        result[2] += 0.000811401961476046;
        result[3] += 0.021978409652155508;
        result[4] += 0.00014111338460452973;
        result[5] += 3.527834615113243e-05;
        result[6] += 0.0001058350384533973;
      } else {
        result[0] += 0.022613065326633167;
        result[1] += 0;
        result[2] += 0.020938023450586266;
        result[3] += 0.8391959798994975;
        result[4] += 0.11725293132328309;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.14590582231500812;
        result[1] += 0;
        result[2] += 0.007886801206216655;
        result[3] += 0.6884713523544421;
        result[4] += 0.15704012990025515;
        result[5] += 0.0006958942240779402;
        result[6] += 0;
      } else {
        result[0] += 0.9937575513491742;
        result[1] += 0;
        result[2] += 0.003221908981071284;
        result[3] += 0.0004027386226339105;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0026178010471204186;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0006402048655569782;
        result[1] += 0.003201024327784891;
        result[2] += 0.0038412291933418692;
        result[3] += 0.9891165172855314;
        result[4] += 0;
        result[5] += 0.003201024327784891;
        result[6] += 0;
      } else {
        result[0] += 0.9754204398447607;
        result[1] += 0;
        result[2] += 0.02457956015523933;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9965297860034702;
        result[1] += 0.0006506651243493349;
        result[2] += 0.002313475997686524;
        result[3] += 0.00032533256217466745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018074031231925968;
      } else {
        result[0] += 0.010169491525423728;
        result[1] += 0.04067796610169491;
        result[2] += 0;
        result[3] += 0.9491525423728814;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.18349784864591243;
        result[1] += 0;
        result[2] += 0.004049607694254619;
        result[3] += 0.812452543659833;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9934514637904469;
        result[1] += 0;
        result[2] += 0.004622496147919878;
        result[3] += 0.0009630200308166411;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009630200308166411;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0.37366792712272257;
        result[1] += 0.0024063251976624267;
        result[2] += 0.006531454107940873;
        result[3] += 0.6170505328291509;
        result[4] += 0.00034376074252320387;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08144416456759027;
        result[1] += 0;
        result[2] += 0.01343408900083963;
        result[3] += 0.18219983207388749;
        result[4] += 0.7229219143576826;
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
        result[0] += 0.037037037037037035;
        result[1] += 0.08148148148148149;
        result[2] += 0;
        result[3] += 0.8814814814814815;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
        result[0] += 0.9994660768086648;
        result[1] += 0;
        result[2] += 0.0004957858205255329;
        result[3] += 0;
        result[4] += 3.813737080965638e-05;
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
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.36878319652341857;
        result[1] += 0.001690004828585224;
        result[2] += 0.006277160791887975;
        result[3] += 0.5298165137614678;
        result[4] += 0.09138097537421534;
        result[5] += 0.0014485755673587636;
        result[6] += 0.0006035731530661515;
      } else {
        result[0] += 0.9657142857142857;
        result[1] += 0;
        result[2] += 0.0036363636363636364;
        result[3] += 0.028311688311688312;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0023376623376623377;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9839154849148187;
        result[1] += 9.51746454744456e-05;
        result[2] += 0.0008089844865327877;
        result[3] += 0.01508518130769963;
        result[4] += 4.75873227372228e-05;
        result[5] += 4.75873227372228e-05;
        result[6] += 0;
      } else {
        result[0] += 0.7110730349111158;
        result[1] += 0.0005889912186763761;
        result[2] += 0.004122938530734633;
        result[3] += 0.26874062968515744;
        result[4] += 0.01440351252944956;
        result[5] += 0.00016063396872992075;
        result[6] += 0.0009102591561362176;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42a20000))) ) ) {
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
        result[0] += 0.005115089514066497;
        result[1] += 0.010230179028132993;
        result[2] += 0;
        result[3] += 0.0792838874680307;
        result[4] += 0.9053708439897699;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.10031347962382445;
        result[1] += 0.0017913121361397223;
        result[2] += 0.0026869682042095834;
        result[3] += 0.5324675324675324;
        result[4] += 0.3627407075682938;
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
        result[0] += 0.9591836734693877;
        result[1] += 0;
        result[2] += 0.04081632653061224;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0.9992483086945627;
        result[1] += 0;
        result[2] += 0.0007516913054372337;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.16632337796086508;
        result[1] += 0.01132852729145211;
        result[2] += 0;
        result[3] += 0.6956745623069001;
        result[4] += 0.1266735324407827;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6923964795844756;
        result[1] += 0.002019910546818641;
        result[2] += 0.005194055691819363;
        result[3] += 0.297648247006204;
        result[4] += 0.0012985139229548406;
        result[5] += 0.0008656759486365604;
        result[6] += 0.0005771172990910403;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009551800146950772;
        result[3] += 0.5879867744305658;
        result[4] += 0.402277736958119;
        result[5] += 0.0001836884643644379;
        result[6] += 0;
      } else {
        result[0] += 0.9902421395012649;
        result[1] += 0;
        result[2] += 0.008312251535959523;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014456089627755693;
      }
    }
  }
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.007578947368421052;
        result[1] += 0.0016842105263157896;
        result[2] += 0.010105263157894737;
        result[3] += 0.6972631578947368;
        result[4] += 0.2816842105263158;
        result[5] += 0.0016842105263157896;
        result[6] += 0;
      } else {
        result[0] += 0.7357859531772576;
        result[1] += 0;
        result[2] += 0.006450071667462973;
        result[3] += 0.2548972766364071;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0028666985188724324;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09987593052109181;
        result[1] += 0.0024813895781637717;
        result[2] += 0.006823821339950372;
        result[3] += 0.8870967741935484;
        result[4] += 0;
        result[5] += 0.0037220843672456576;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9949648227341702;
        result[1] += 0.00020692509311629191;
        result[2] += 0.0005518002483101117;
        result[3] += 0.004207476893364602;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.897503103876396e-05;
      } else {
        result[0] += 0.7776251945436236;
        result[1] += 0.0019225487503433123;
        result[2] += 0.0058591961915224755;
        result[3] += 0.2134944612286002;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010985992859104642;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9980525803310614;
        result[5] += 0.0019474196689386564;
        result[6] += 0;
      } else {
        result[0] += 0.1369701726844584;
        result[1] += 0.0011773940345368916;
        result[2] += 0.008634222919937205;
        result[3] += 0.8500784929356358;
        result[4] += 0;
        result[5] += 0.0031397174254317113;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993462544223966;
        result[1] += 0;
        result[2] += 0.0006152899553914783;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.845562221196739e-05;
      } else {
        result[0] += 0.7037718491260351;
        result[1] += 0.0012879484820607179;
        result[2] += 0.00846366145354186;
        result[3] += 0.2855565777368906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009199632014719412;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        result[0] += 0.07017543859649122;
        result[1] += 0.05263157894736842;
        result[2] += 0;
        result[3] += 0.8771929824561403;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0068212824010914054;
        result[1] += 0.013642564802182811;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9795361527967258;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.17572463768115942;
        result[1] += 0.005434782608695652;
        result[2] += 0;
        result[3] += 0.8188405797101449;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08902333621434745;
        result[1] += 0;
        result[2] += 0.00950734658599827;
        result[3] += 0.21694036300777875;
        result[4] += 0.6845289541918755;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 0.9993142334654069;
        result[1] += 0;
        result[2] += 0.0006095702529716549;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.619628162145687e-05;
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
        result[0] += 0.6074692093762416;
        result[1] += 0.0014302741358760429;
        result[2] += 0.006197854588796186;
        result[3] += 0.3296781883194279;
        result[4] += 0.054191497814858956;
        result[5] += 0.00055621771950735;
        result[6] += 0.0004767580452920143;
      } else {
        result[0] += 0.001963350785340314;
        result[1] += 0;
        result[2] += 0.016361256544502618;
        result[3] += 0.8030104712041884;
        result[4] += 0.17801047120418848;
        result[5] += 0.0006544502617801048;
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
        result[0] += 0.5608695652173913;
        result[1] += 0;
        result[2] += 0.030434782608695653;
        result[3] += 0.40869565217391307;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.002707581227436823;
        result[1] += 0.009927797833935019;
        result[2] += 0;
        result[3] += 0.9873646209386282;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.19559447983014863;
        result[1] += 0.0002653927813163482;
        result[2] += 0.004777070063694267;
        result[3] += 0.7977707006369427;
        result[4] += 0;
        result[5] += 0.0015923566878980893;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.290448343079922;
        result[4] += 0.7095516569200779;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0036982248520710057;
        result[2] += 0;
        result[3] += 0.0014792899408284023;
        result[4] += 0.9948224852071006;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.9988450433108759;
        result[1] += 0;
        result[2] += 0.0011549566891241579;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9099841879376553;
        result[1] += 0.001920036141856788;
        result[2] += 0.009600180709283939;
        result[3] += 0.07736616218658234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00112943302462164;
      } else {
        result[0] += 0;
        result[1] += 0.000355998576005696;
        result[2] += 0.004271982912068352;
        result[3] += 0.9953720185119259;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0.0010249402118209772;
        result[1] += 0;
        result[2] += 0.0034164673727365906;
        result[3] += 0.9921421250427058;
        result[4] += 0.0017082336863682953;
        result[5] += 0.0017082336863682953;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006445215666831929;
        result[2] += 0;
        result[3] += 0.12097174020823004;
        result[4] += 0.872583044124938;
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
        result[0] += 0.9795081967213115;
        result[1] += 0;
        result[2] += 0.020491803278688523;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.996071288260295;
        result[1] += 0.0005357334190506804;
        result[2] += 0.0025715204114432656;
        result[3] += 0.0006071645415907711;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021429336762027214;
      } else {
        result[0] += 0.3028322440087146;
        result[1] += 0.013071895424836602;
        result[2] += 0;
        result[3] += 0.6840958605664488;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.1606708141736543;
        result[1] += 0;
        result[2] += 0.0037868542061130646;
        result[3] += 0.8355423316202326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9951787866613098;
        result[1] += 0;
        result[2] += 0.0034150261149055844;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014061872237846524;
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
        result[0] += 0;
        result[1] += 0.00029036004645760743;
        result[2] += 0;
        result[3] += 0.931184668989547;
        result[4] += 0.06765389082462253;
        result[5] += 0.0008710801393728223;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995535714285714;
        result[5] += 0.0004464285714285714;
        result[6] += 0;
      } else {
        result[0] += 0.7916666666666666;
        result[1] += 0.058333333333333334;
        result[2] += 0.125;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.025;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 0.5854430379746836;
        result[1] += 0.0189873417721519;
        result[2] += 0;
        result[3] += 0.39556962025316456;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.005494505494505495;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9945054945054945;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993350803770485;
        result[1] += 0;
        result[2] += 0.0005866937849571713;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.822583799428951e-05;
      } else {
        result[0] += 0.7005484460694699;
        result[1] += 0.0011882998171846436;
        result[2] += 0.007861060329067643;
        result[3] += 0.2893967093235832;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010054844606946984;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 0.0038866026520347507;
        result[2] += 0.009602194787379973;
        result[3] += 0.5852766346593508;
        result[4] += 0.4012345679012346;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9886934673366834;
        result[1] += 0;
        result[2] += 0.011306532663316583;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.20913705583756345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7786802030456853;
        result[4] += 0.006091370558375634;
        result[5] += 0.006091370558375634;
        result[6] += 0;
      } else {
        result[0] += 0.9948919300118172;
        result[1] += 0.0004955590287043037;
        result[2] += 0.0013341973849731255;
        result[3] += 0.0031258338733656083;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015247970113978576;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9954663212435233;
        result[4] += 0.0038860103626943004;
        result[5] += 0.0006476683937823834;
        result[6] += 0;
      } else {
        result[0] += 0.4712556732223903;
        result[1] += 0;
        result[2] += 0.02118003025718608;
        result[3] += 0;
        result[4] += 0.5075642965204236;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9937353171495693;
        result[1] += 0;
        result[2] += 0.002153484729835552;
        result[3] += 0.001370399373531715;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00274079874706343;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.005718370264474625;
        result[1] += 0.0007147962830593281;
        result[2] += 0.005360972122944961;
        result[3] += 0.7069335239456754;
        result[4] += 0.2812723373838456;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9956616052060737;
        result[1] += 0;
        result[2] += 0.004338394793926247;
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
        result[0] += 0.008333333333333333;
        result[1] += 0.08333333333333333;
        result[2] += 0;
        result[3] += 0.9083333333333333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.09891304347826087;
        result[1] += 0;
        result[2] += 0.009782608695652175;
        result[3] += 0.8016304347826086;
        result[4] += 0.08804347826086957;
        result[5] += 0.0016304347826086956;
        result[6] += 0;
      } else {
        result[0] += 0.9094440465039396;
        result[1] += 0.0004958950906386026;
        result[2] += 0.002396826271419913;
        result[3] += 0.08730508567965177;
        result[4] += 0;
        result[5] += 0.00011019890903080059;
        result[6] += 0.0002479475453193013;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4500c800))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6;
        result[5] += 0;
        result[6] += 0;
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
        result[1] += 0.0027889680818097306;
        result[2] += 0.008986674930275797;
        result[3] += 0.986674930275798;
        result[4] += 0;
        result[5] += 0.0015494267121165168;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9757281553398058;
        result[1] += 0.024271844660194174;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.9329964850615114;
        result[1] += 0.000351493848857645;
        result[2] += 0.003602811950790861;
        result[3] += 0.06265377855887522;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003954305799648506;
      } else {
        result[0] += 0.8768225238813474;
        result[1] += 0;
        result[2] += 0.0008618832148243913;
        result[3] += 0.1223155929038282;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        result[0] += 0;
        result[1] += 0.004480955937266617;
        result[2] += 0.00784167289021658;
        result[3] += 0.986183719193428;
        result[4] += 0;
        result[5] += 0.0014936519790888724;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993087102508394;
        result[1] += 0;
        result[2] += 0.0006419119099348213;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.9377839225755484e-05;
      } else {
        result[0] += 0.7402135231316725;
        result[1] += 0.0035587188612099642;
        result[2] += 0;
        result[3] += 0.25622775800711745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 0.8602289092700675;
        result[1] += 0.0010611688016372318;
        result[2] += 0.006518608352914425;
        result[3] += 0.13166072917456226;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005305844008186159;
      } else {
        result[0] += 0.5195621797857476;
        result[1] += 0;
        result[2] += 0.004890544946436889;
        result[3] += 0.47554727526781554;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.007806955287437899;
        result[1] += 0.0039034776437189495;
        result[2] += 0.0039034776437189495;
        result[3] += 0.6994322214336409;
        result[4] += 0.2849538679914833;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9876681614349776;
        result[1] += 0;
        result[2] += 0.01233183856502242;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0.011278195488721804;
        result[1] += 0.007518796992481203;
        result[2] += 0;
        result[3] += 0.19924812030075187;
        result[4] += 0.7819548872180451;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005479452054794521;
        result[2] += 0;
        result[3] += 0.06986301369863014;
        result[4] += 0.9246575342465754;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.10812209001551992;
        result[1] += 0.0010346611484738748;
        result[2] += 0.012933264355923435;
        result[3] += 0.7956544231764098;
        result[4] += 0.0817382307294361;
        result[5] += 0.0005173305742369374;
        result[6] += 0;
      } else {
        result[0] += 0.9102294719380702;
        result[1] += 0.0004976499861763893;
        result[2] += 0.002045894387614045;
        result[3] += 0.08672933370196295;
        result[4] += 0;
        result[5] += 8.294166436273154e-05;
        result[6] += 0.0004147083218136577;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9958847736625515;
        result[1] += 0;
        result[2] += 0.003200731595793324;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009144947416552355;
      } else {
        result[0] += 0.9995840612261875;
        result[1] += 0;
        result[2] += 0.0004159387738124948;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.015093073956062384;
        result[1] += 0.006540332047627034;
        result[2] += 0.009894348482307563;
        result[3] += 0.671474090223042;
        result[4] += 0.2954888478953547;
        result[5] += 0.0015093073956062384;
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
        result[0] += 0.9791383779780274;
        result[1] += 0;
        result[2] += 0.006789285273423034;
        result[3] += 0.012097271941735589;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019750648068139736;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0007867820613690008;
        result[3] += 0.999213217938631;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.24023668639053256;
        result[1] += 0.002366863905325444;
        result[2] += 0;
        result[3] += 0.7502958579881657;
        result[4] += 0.002366863905325444;
        result[5] += 0.004733727810650888;
        result[6] += 0;
      } else {
        result[0] += 0.994342039712476;
        result[1] += 0.0004626005266529073;
        result[2] += 0.001031955020994947;
        result[3] += 0.003914312148601523;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002490925912746424;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.13063388768377926;
        result[1] += 0.0004820438659918053;
        result[2] += 0.009640877319836106;
        result[3] += 0.6230416967944084;
        result[4] += 0.2362014943359846;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0048828125;
        result[1] += 0.0107421875;
        result[2] += 0;
        result[3] += 0.095703125;
        result[4] += 0.888671875;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4027252081756245;
        result[1] += 0;
        result[2] += 0.006434519303557911;
        result[3] += 0.5885692657077971;
        result[4] += 0.0011355034065102195;
        result[5] += 0.0003785011355034065;
        result[6] += 0.000757002271006813;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
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
        result[1] += 0.0024052916416115455;
        result[2] += 0.0014030867909400682;
        result[3] += 0.6259771497294047;
        result[4] += 0.3694127079575065;
        result[5] += 0.0008017638805371818;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42740000))) ) ) {
        result[0] += 0.9949603259704053;
        result[1] += 0.000357423690042176;
        result[2] += 0.002644935306312102;
        result[3] += 0.0018586031882193153;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000178711845021088;
      } else {
        result[0] += 0.08253968253968254;
        result[1] += 0.022222222222222223;
        result[2] += 0;
        result[3] += 0.8952380952380953;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.42142857142857143;
        result[1] += 0;
        result[2] += 0.007142857142857143;
        result[3] += 0.023015873015873017;
        result[4] += 0.5484126984126985;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.018738288569643973;
        result[1] += 0;
        result[2] += 0.003435352904434728;
        result[3] += 0.9743910056214866;
        result[4] += 0.0024984384759525295;
        result[5] += 0.0009369144284821987;
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
        result[0] += 0.9878674755016332;
        result[1] += 0;
        result[2] += 0.010732617825478302;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013999066728884741;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.9845360824742269;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015463917525773196;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.027833001988071572;
        result[3] += 0.7713717693836978;
        result[4] += 0.19681908548707752;
        result[5] += 0.003976143141153081;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0.9666798889329631;
        result[1] += 0.0010313367711225704;
        result[2] += 0.0042840142800476;
        result[3] += 0.027370091233637445;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006346687822292741;
      } else {
        result[0] += 0.8924777428927788;
        result[1] += 8.601780568577695e-05;
        result[2] += 0.0010322136682293236;
        result[3] += 0.10640402563330609;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.42436974789915966;
        result[1] += 0;
        result[2] += 0.008403361344537815;
        result[3] += 0.31890756302521006;
        result[4] += 0.2445378151260504;
        result[5] += 0.003781512605042017;
        result[6] += 0;
      } else {
        result[0] += 0.06987359550561797;
        result[1] += 0.001053370786516854;
        result[2] += 0.011938202247191011;
        result[3] += 0.8321629213483146;
        result[4] += 0.08321629213483146;
        result[5] += 0.0017556179775280898;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0.008928571428571428;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.625;
        result[4] += 0.36607142857142855;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0006222775357809583;
        result[1] += 0.009334163036714374;
        result[2] += 0;
        result[3] += 0.05849408836341008;
        result[4] += 0.9315494710640946;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0.9990706319702602;
        result[1] += 0;
        result[2] += 0.0009293680297397769;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.6043386446534843;
        result[1] += 0.0013438279900172777;
        result[2] += 0.004031483970051834;
        result[3] += 0.3052409291610674;
        result[4] += 0.08370128623536187;
        result[5] += 0.0001919754271453254;
        result[6] += 0.0011518525628719525;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.022878228782287822;
        result[3] += 0.8590405904059041;
        result[4] += 0.11808118081180811;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.22277535780958307;
        result[1] += 0.002489110143123833;
        result[2] += 0.008711885500933417;
        result[3] += 0.3833229620410703;
        result[4] += 0.3827006845052894;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9519450800915332;
        result[1] += 0.0009881422924901185;
        result[2] += 0.00249635947576451;
        result[3] += 0.042230081131682966;
        result[4] += 0.0019242770959018098;
        result[5] += 0.00015602246723528187;
        result[6] += 0.0002600374453921365;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4617728531855956;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5382271468144044;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8291116660720657;
        result[1] += 0;
        result[2] += 0.0014270424545130217;
        result[3] += 0.0021405636817695326;
        result[4] += 0.1673207277916518;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43390000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9988348530901723;
        result[1] += 0;
        result[2] += 0.0011144883485309017;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.0658561296859166e-05;
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
        result[0] += 0.025149700598802394;
        result[1] += 0.007425149700598803;
        result[2] += 0.017964071856287425;
        result[3] += 0.9482634730538922;
        result[4] += 0;
        result[5] += 0.0011976047904191617;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9790856031128405;
        result[1] += 0;
        result[2] += 0.006201361867704281;
        result[3] += 0.01349708171206226;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012159533073929963;
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
        result[0] += 0.999656632711457;
        result[1] += 0;
        result[2] += 0.00034336728854297816;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.6694711538461539;
        result[1] += 0.002043269230769231;
        result[2] += 0.00625;
        result[3] += 0.2879807692307692;
        result[4] += 0.03257211538461539;
        result[5] += 0.0009615384615384616;
        result[6] += 0.0007211538461538462;
      } else {
        result[0] += 0.3594915254237288;
        result[1] += 0;
        result[2] += 0.008305084745762711;
        result[3] += 0.5123728813559322;
        result[4] += 0.1183050847457627;
        result[5] += 0.00033898305084745765;
        result[6] += 0.0011864406779661016;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.17176258992805754;
        result[1] += 0.0044964028776978415;
        result[2] += 0;
        result[3] += 0.8237410071942446;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.011661807580174927;
        result[1] += 0.029154518950437316;
        result[2] += 0;
        result[3] += 0.19533527696793002;
        result[4] += 0.7638483965014577;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0.13351877607788595;
        result[1] += 0;
        result[2] += 0.013908205841446454;
        result[3] += 0.2726008344923505;
        result[4] += 0.5799721835883171;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05145413870246085;
        result[4] += 0.9485458612975392;
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
        result[0] += 0.008907641819034223;
        result[1] += 0.007032348804500703;
        result[2] += 0.006563525550867323;
        result[3] += 0.9774964838255977;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9907597535934292;
        result[1] += 0;
        result[2] += 0.009240246406570842;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.874137364442984;
        result[1] += 0.0006572461386789354;
        result[2] += 0.0012323365100230038;
        result[3] += 0.12282287216562604;
        result[4] += 0.0005750903713440684;
        result[5] += 8.215576733486693e-05;
        result[6] += 0.0004929346040092016;
      } else {
        result[0] += 0.9857830905820228;
        result[1] += 0;
        result[2] += 0.001798874252886903;
        result[3] += 0.0037718331108918934;
        result[4] += 0.00858817385249231;
        result[5] += 5.802820170602913e-05;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.44465432565168117;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5553456743483188;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8139877300613497;
        result[1] += 0;
        result[2] += 0.010306748466257669;
        result[3] += 0.000736196319018405;
        result[4] += 0.17300613496932515;
        result[5] += 0.00049079754601227;
        result[6] += 0.00147239263803681;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9981060606060606;
        result[5] += 0.001893939393939394;
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
        result[1] += 0.005528255528255528;
        result[2] += 0.007678132678132678;
        result[3] += 0.98495085995086;
        result[4] += 0;
        result[5] += 0.0018427518427518428;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9928092042186002;
        result[1] += 0;
        result[2] += 0.006711409395973154;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00047938638542665386;
      } else {
        result[0] += 0.9996586593847335;
        result[1] += 0;
        result[2] += 0.000341340615266459;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.949096880131363;
        result[1] += 0.0029556650246305425;
        result[2] += 0.006075533661740559;
        result[3] += 0.04121510673234812;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006568144499178983;
      } else {
        result[0] += 0.39867720007348895;
        result[1] += 0;
        result[2] += 0.009002388388756203;
        result[3] += 0.591034356053647;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001286055484108029;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9988901220865705;
        result[5] += 0.0011098779134295228;
        result[6] += 0;
      } else {
        result[0] += 0.1380392156862745;
        result[1] += 0;
        result[2] += 0.007058823529411765;
        result[3] += 0.8509803921568627;
        result[4] += 0;
        result[5] += 0.00392156862745098;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9996168875948204;
        result[1] += 0;
        result[2] += 0.0003448011646617117;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.831124051796797e-05;
      } else {
        result[0] += 0.7059529303184127;
        result[1] += 0.001845869866174435;
        result[2] += 0.0061836640516843575;
        result[3] += 0.2850023073373328;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010152284263959394;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0.2575558475689882;
        result[1] += 0.010512483574244415;
        result[2] += 0;
        result[3] += 0.6885676741130092;
        result[4] += 0.04336399474375821;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.012857142857142857;
        result[2] += 0;
        result[3] += 0.6928571428571428;
        result[4] += 0.29428571428571426;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0.1445466491458607;
        result[1] += 0;
        result[2] += 0.018396846254927726;
        result[3] += 0.27463863337713534;
        result[4] += 0.5624178712220762;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0011235955056179776;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05393258426966292;
        result[4] += 0.9449438202247191;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 0.006832601268911664;
        result[2] += 0.006832601268911664;
        result[3] += 0.8555392874572962;
        result[4] += 0.13079551000488043;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9987293519695044;
        result[1] += 0.0012706480304955528;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.030687830687830688;
        result[4] += 0.9693121693121693;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13658536585365855;
        result[1] += 0;
        result[2] += 0.014634146341463415;
        result[3] += 0.275609756097561;
        result[4] += 0.573170731707317;
        result[5] += 0;
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
        result[4] += 0.9975093399750934;
        result[5] += 0.0024906600249066002;
        result[6] += 0;
      } else {
        result[0] += 0.13317892298784018;
        result[1] += 0.0011580775911986102;
        result[2] += 0.015055008685581933;
        result[3] += 0.8488708743485813;
        result[4] += 0;
        result[5] += 0.0017371163867979154;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9994663820704376;
        result[1] += 0;
        result[2] += 0.0004955023631651167;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8115566397316666e-05;
      } else {
        result[0] += 0.6846935754465607;
        result[1] += 0.0015789993091878023;
        result[2] += 0.0064146846935754466;
        result[3] += 0.3060298036119609;
        result[4] += 0;
        result[5] += 9.868745682423764e-05;
        result[6] += 0.0011842494818908517;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43250000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9981824790985097;
        result[1] += 0;
        result[2] += 0.0017266448564158489;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.087604507451835e-05;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.01662049861495845;
        result[1] += 0.006094182825484765;
        result[2] += 0.007202216066481994;
        result[3] += 0.6487534626038781;
        result[4] += 0.3204062788550323;
        result[5] += 0.0009233610341643582;
        result[6] += 0;
      } else {
        result[0] += 0.9813953488372094;
        result[1] += 0;
        result[2] += 0.005782526712759271;
        result[3] += 0.011942174732872408;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008799497171590195;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9990026595744681;
        result[4] += 0.0009973404255319148;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.041604754829123326;
        result[3] += 0;
        result[4] += 0.9583952451708767;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9977756593581188;
        result[1] += 0;
        result[2] += 0.0022243406418811567;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        result[0] += 0.9998759612999256;
        result[1] += 0;
        result[2] += 0.00012403870007442322;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989189189189189;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001081081081081081;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.5192686997420726;
        result[1] += 0.00144135942952511;
        result[2] += 0.004172356243362161;
        result[3] += 0.4745106964041875;
        result[4] += 0.00015172204521316947;
        result[5] += 0.00015172204521316947;
        result[6] += 0.00030344409042633893;
      } else {
        result[0] += 0.6209463051568315;
        result[1] += 0;
        result[2] += 0.028708133971291867;
        result[3] += 0.003721424774056353;
        result[4] += 0.3397129186602871;
        result[5] += 0.001063264221158958;
        result[6] += 0.005847953216374269;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.00315955766192733;
        result[1] += 0.020537124802527645;
        result[2] += 0;
        result[3] += 0.5639810426540285;
        result[4] += 0.41232227488151657;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.020586400499064253;
        result[4] += 0.9794135995009358;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9902912621359223;
        result[1] += 0;
        result[2] += 0.009708737864077669;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995002114490024;
        result[1] += 0;
        result[2] += 0.00042289800469032333;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.689054630733152e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.015753424657534248;
        result[1] += 0.007534246575342466;
        result[2] += 0.00976027397260274;
        result[3] += 0.661986301369863;
        result[4] += 0.3035958904109589;
        result[5] += 0.0013698630136986301;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.7222222222222222;
        result[1] += 0;
        result[2] += 0.007095410628019324;
        result[3] += 0.2697765700483092;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009057971014492754;
      } else {
        result[0] += 0.7695829094608342;
        result[1] += 0;
        result[2] += 0.001017293997965412;
        result[3] += 0.2288911495422177;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000508646998982706;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9942775393419171;
        result[1] += 0;
        result[2] += 0.004768717215069147;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009537434430138293;
      } else {
        result[0] += 0.9996294313830444;
        result[1] += 0;
        result[2] += 0.00037056861695557294;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.617637770408969;
        result[1] += 0.0007895152376440866;
        result[2] += 0.006474024948681509;
        result[3] += 0.3254381809568925;
        result[4] += 0.04855518711511132;
        result[5] += 0.0004737091425864519;
        result[6] += 0.0006316121901152693;
      } else {
        result[0] += 0.07729681978798586;
        result[1] += 0.00441696113074205;
        result[2] += 0.016342756183745585;
        result[3] += 0.898851590106007;
        result[4] += 0.0030918727915194345;
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
        result[0] += 0.01182033096926714;
        result[1] += 0.016548463356973995;
        result[2] += 0;
        result[3] += 0.9716312056737588;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0009287925696594427;
        result[1] += 0.00030959752321981426;
        result[2] += 0.0027863777089783283;
        result[3] += 0.9467492260061919;
        result[4] += 0.04613003095975232;
        result[5] += 0.0030959752321981426;
        result[6] += 0;
      } else {
        result[0] += 0.5477178423236515;
        result[1] += 0;
        result[2] += 0.013831258644536652;
        result[3] += 0;
        result[4] += 0.4384508990318119;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6959459459459459;
        result[4] += 0.30405405405405406;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.009925558312655087;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9900744416873449;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42080000))) ) ) {
        result[0] += 0;
        result[1] += 0.020905923344947737;
        result[2] += 0;
        result[3] += 0.9790940766550522;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9944537981578687;
        result[1] += 0.00024759829652371994;
        result[2] += 0.0004951965930474399;
        result[3] += 0.004654847974645934;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014855897791423196;
      } else {
        result[0] += 0.806321698804003;
        result[1] += 0.000427141811081279;
        result[2] += 0.006346106907493288;
        result[3] += 0.18611178911398585;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000793263363436661;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.18423772609819122;
        result[1] += 0.00025839793281653745;
        result[2] += 0.007493540051679587;
        result[3] += 0.8054263565891473;
        result[4] += 0;
        result[5] += 0.002583979328165375;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0.014861995753715499;
        result[2] += 0;
        result[3] += 0.11677282377919321;
        result[4] += 0.8683651804670913;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0008583690987124463;
        result[2] += 0;
        result[3] += 0.019742489270386267;
        result[4] += 0.9793991416309012;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
        result[0] += 0;
        result[1] += 0.011278195488721804;
        result[2] += 0;
        result[3] += 0.9887218045112782;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9949691173540546;
        result[1] += 4.981071926678621e-05;
        result[2] += 0.0005977286312014345;
        result[3] += 0.004333532576210401;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.981071926678621e-05;
      } else {
        result[0] += 0.8046823146080975;
        result[1] += 0.0010861039039401436;
        result[2] += 0.004646111144632837;
        result[3] += 0.188982079285585;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006033910577445242;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9970760233918129;
        result[5] += 0.0029239766081871343;
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
        result[0] += 0.0009196811771919068;
        result[1] += 0.0030656039239730227;
        result[2] += 0.003678724708767627;
        result[3] += 0.989883507050889;
        result[4] += 0;
        result[5] += 0.002452483139178418;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 0.030100334448160536;
        result[2] += 0;
        result[3] += 0.9698996655518395;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.8820211874094963;
        result[1] += 0.0005716027741787975;
        result[2] += 0.0025150522063867088;
        result[3] += 0.11458730279704292;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00030485481289535863;
      } else {
        result[0] += 0.985248447204969;
        result[1] += 0;
        result[2] += 0.003105590062111801;
        result[3] += 0.010869565217391304;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007763975155279503;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16608344549125167;
        result[1] += 0.0005383580080753701;
        result[2] += 0;
        result[3] += 0.8331090174966352;
        result[4] += 0;
        result[5] += 0.00026917900403768504;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.31645569620253167;
        result[1] += 0.12658227848101267;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5569620253164557;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.032736796158882586;
        result[1] += 0;
        result[2] += 0.010475774770842427;
        result[3] += 0;
        result[4] += 0.9554779572239197;
        result[5] += 0.0013094718463553033;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.4413145539906103;
        result[1] += 0.011737089201877934;
        result[2] += 0;
        result[3] += 0.5469483568075117;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9969266370177532;
        result[1] += 0.0004700437502259826;
        result[2] += 0.002205589904906534;
        result[3] += 0.00028925769244675853;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010847163466753444;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.1975120588981975;
        result[1] += 0;
        result[2] += 0.003808073115003808;
        result[3] += 0.7986798679867987;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9953623188405797;
        result[1] += 0;
        result[2] += 0.004251207729468599;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003864734299516908;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.0002911208151382824;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9263464337700146;
        result[4] += 0.07248908296943231;
        result[5] += 0.0008733624454148472;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0051579626047711154;
        result[2] += 0.0070921985815602835;
        result[3] += 0;
        result[4] += 0.9864603481624759;
        result[5] += 0.0012894906511927789;
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
        result[2] += 0.014970059880239521;
        result[3] += 0;
        result[4] += 0.9850299401197605;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9985052316890882;
        result[1] += 0;
        result[2] += 0.000996512207274539;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004982561036372695;
      } else {
        result[0] += 0.9998303503265756;
        result[1] += 0;
        result[2] += 0.00016964967342437867;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0.5157970752843474;
        result[1] += 0.003791298068243365;
        result[2] += 0.004332912077992418;
        result[3] += 0.4753565625564181;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007221520129987362;
      } else {
        result[0] += 0.8561234649850648;
        result[1] += 0.0006637902422834385;
        result[2] += 0.008795220710255559;
        result[3] += 0.13325589113840028;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011616329239960172;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.006778964667214462;
        result[3] += 0.6639276910435498;
        result[4] += 0.3278553820870994;
        result[5] += 0.001437962202136401;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.009259259259259259;
        result[2] += 0;
        result[3] += 0.003472222222222222;
        result[4] += 0.9872685185185185;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0.996841073308885;
        result[1] += 0.0006172615373443231;
        result[2] += 0.0022511891361969433;
        result[3] += 3.630950219672489e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025416651537707425;
      } else {
        result[0] += 0.3073286052009456;
        result[1] += 0.01182033096926714;
        result[2] += 0;
        result[3] += 0.6808510638297872;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4502500431108812;
        result[1] += 0;
        result[2] += 0.0015519917227108122;
        result[3] += 0.548197965166408;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9875682231655549;
        result[1] += 0;
        result[2] += 0.010612492419648272;
        result[3] += 0.0006064281382656155;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001212856276531231;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14381520119225039;
        result[1] += 0;
        result[2] += 0.00894187779433681;
        result[3] += 0.8453800298062594;
        result[4] += 0;
        result[5] += 0.0018628912071535022;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9994175662033082;
        result[1] += 0;
        result[2] += 0.0005436048769123243;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8828919779451735e-05;
      } else {
        result[0] += 0.6996287240786019;
        result[1] += 0.0013583265417006249;
        result[2] += 0.0076971837363035405;
        result[3] += 0.2904102146155936;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009055510278004166;
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
        result[0] += 0.15161725067385445;
        result[1] += 0.010107816711590296;
        result[2] += 0.00876010781671159;
        result[3] += 0.8295148247978437;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0.08378947368421052;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9153684210526316;
        result[4] += 0;
        result[5] += 0.0008421052631578948;
        result[6] += 0;
      } else {
        result[0] += 0.3472906403940887;
        result[1] += 0.006157635467980296;
        result[2] += 0.01416256157635468;
        result[3] += 0.6311576354679803;
        result[4] += 0;
        result[5] += 0.0012315270935960591;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9992737459148208;
        result[1] += 0;
        result[2] += 0.0005187529179851636;
        result[3] += 0.00010375058359703273;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010375058359703273;
      } else {
        result[0] += 0.8653250773993808;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1346749226006192;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5396931287525016;
        result[1] += 0.0022681787858572383;
        result[2] += 0.007605070046697799;
        result[3] += 0.4501667778519013;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000266844563042028;
      } else {
        result[0] += 0.9849859243040351;
        result[1] += 0;
        result[2] += 0.004274840996767803;
        result[3] += 0.009905119382754665;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008341153164424981;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.23515151515151517;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.753939393939394;
        result[4] += 0.0012121212121212123;
        result[5] += 0.009696969696969699;
        result[6] += 0;
      } else {
        result[0] += 0.9943484751546172;
        result[1] += 0.0004976185398450273;
        result[2] += 0.0009596928982725527;
        result[3] += 0.0039809483187602185;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021326508850501172;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.13979007633587787;
        result[1] += 0.0007156488549618321;
        result[2] += 0.01693702290076336;
        result[3] += 0.6242843511450382;
        result[4] += 0.21803435114503816;
        result[5] += 0.00023854961832061068;
        result[6] += 0;
      } else {
        result[0] += 0.00202020202020202;
        result[1] += 0.007070707070707071;
        result[2] += 0;
        result[3] += 0.10101010101010101;
        result[4] += 0.8898989898989899;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.4030633655056651;
        result[1] += 0;
        result[2] += 0.011120436424674779;
        result[3] += 0.5843474611833823;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014687368862778011;
      } else {
        result[0] += 0.12295786758383491;
        result[1] += 0;
        result[2] += 0.0025795356835769563;
        result[3] += 0.2871883061049011;
        result[4] += 0.587274290627687;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995768762892051;
        result[1] += 0;
        result[2] += 0.00037023324694557573;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.2890463849367956e-05;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.010356255178127589;
        result[1] += 0.0008285004142502071;
        result[2] += 0.012427506213753107;
        result[3] += 0.6876553438276719;
        result[4] += 0.2883181441590721;
        result[5] += 0.00041425020712510354;
        result[6] += 0;
      } else {
        result[0] += 0.7470172875578281;
        result[1] += 0;
        result[2] += 0.006574141709276844;
        result[3] += 0.24567811054297542;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007304601899196494;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40b00000))) ) ) {
        result[0] += 0.4302170283806344;
        result[1] += 0.004340567612687813;
        result[2] += 0.009682804674457429;
        result[3] += 0.3609348914858097;
        result[4] += 0.19365609348914858;
        result[5] += 0.0005008347245409015;
        result[6] += 0.000667779632721202;
      } else {
        result[0] += 0.49419901829540386;
        result[1] += 0.0006693440428380187;
        result[2] += 0.0013386880856760374;
        result[3] += 0.3674698795180723;
        result[4] += 0.1358768406961178;
        result[5] += 0.00022311468094600624;
        result[6] += 0.00022311468094600624;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9956937799043062;
        result[1] += 0;
        result[2] += 0.00430622009569378;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996263389520883;
        result[1] += 0;
        result[2] += 0.0003736610479116499;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.015376550760090863;
        result[1] += 0.0033199370959287092;
        result[2] += 0.012406080726891493;
        result[3] += 0.6881006465140661;
        result[4] += 0.27957365018347025;
        result[5] += 0.0012231347195526825;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008138351983723296;
        result[2] += 0;
        result[3] += 0.11698880976602238;
        result[4] += 0.8748728382502543;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0.9809934515253155;
        result[1] += 0;
        result[2] += 0.005270723526593196;
        result[3] += 0.013576106053346111;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015971889474524837;
      } else {
        result[0] += 0.40248104755341146;
        result[1] += 0;
        result[2] += 0.004594532506317482;
        result[3] += 0.5922352400643235;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006891798759476223;
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
        result[0] += 0.979381443298969;
        result[1] += 0;
        result[2] += 0.020618556701030927;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995370727567318;
        result[1] += 0;
        result[2] += 0.0004243499729959108;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.857727027235553e-05;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6099653652392947;
        result[1] += 0.0014168765743073047;
        result[2] += 0.007163098236775818;
        result[3] += 0.32690491183879095;
        result[4] += 0.053683879093198994;
        result[5] += 0.00023614609571788412;
        result[6] += 0.0006297229219143577;
      } else {
        result[0] += 0.07458451560599919;
        result[1] += 0.0012160518848804217;
        result[2] += 0.013376570733684636;
        result[3] += 0.8885285772192947;
        result[4] += 0.021483583299554115;
        result[5] += 0.0008107012565869477;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.38917089678510997;
        result[4] += 0.61082910321489;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007027406886858749;
        result[1] += 0.009838369641602248;
        result[2] += 0;
        result[3] += 0.05200281096275474;
        result[4] += 0.9374560787069571;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0;
        result[1] += 0.00029002320185614853;
        result[2] += 0;
        result[3] += 0.9388051044083527;
        result[4] += 0.05945475638051045;
        result[5] += 0.0014501160092807426;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.3283582089552239;
        result[1] += 0.14925373134328357;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5223880597014925;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.029385574354407838;
        result[1] += 0;
        result[2] += 0.009795191451469279;
        result[3] += 0;
        result[4] += 0.9594835262689225;
        result[5] += 0.0013357079252003562;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9970335212103234;
        result[1] += 0;
        result[2] += 0.000692178384257886;
        result[3] += 0.002175417779096213;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.888262632255515e-05;
      } else {
        result[0] += 0.25;
        result[1] += 0.0625;
        result[2] += 0;
        result[3] += 0.6875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5316316728420475;
        result[1] += 0.002881844380403458;
        result[2] += 0.0067243035542747355;
        result[3] += 0.45821325648414984;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005489227391244682;
      } else {
        result[0] += 0.9853770628786297;
        result[1] += 0;
        result[2] += 0.00323793607687487;
        result[3] += 0.010862753290160855;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005222477543346565;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.22919179734620027;
        result[1] += 0.0012062726176115804;
        result[2] += 0;
        result[3] += 0.7647768395657419;
        result[4] += 0.0012062726176115804;
        result[5] += 0.003618817852834741;
        result[6] += 0;
      } else {
        result[0] += 0.9950563715901413;
        result[1] += 0.0006401820962407085;
        result[2] += 0.0005690507522139632;
        result[3] += 0.00355656720133727;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001778283600668635;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.1826828468350279;
        result[1] += 0.0013119055428009183;
        result[2] += 0.017054772056411937;
        result[3] += 0.7773040341095441;
        result[4] += 0.02164644145621515;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007360157016683023;
        result[2] += 0;
        result[3] += 0.13984298331697742;
        result[4] += 0.8527968596663396;
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
        result[0] += 0.24071428571428571;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7592857142857142;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.9801324503311258;
        result[1] += 0;
        result[2] += 0.015352197471402769;
        result[3] += 0.0006020469596628537;
        result[4] += 0.001806140878988561;
        result[5] += 0.0009030704394942806;
        result[6] += 0.0012040939193257074;
      } else {
        result[0] += 0.0014970059880239522;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985029940119761;
        result[5] += 0;
        result[6] += 0;
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
        result[1] += 0.00251414204902577;
        result[2] += 0.00785669390320553;
        result[3] += 0.9877435575109994;
        result[4] += 0;
        result[5] += 0.0018856065367693275;
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
        result[0] += 0.9985117663473165;
        result[1] += 0;
        result[2] += 0.0014882336526834713;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.5252672497570456;
        result[1] += 0.0024295432458697765;
        result[2] += 0.004373177842565598;
        result[3] += 0.467444120505345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048590864917395527;
      } else {
        result[0] += 0.8611815875317144;
        result[1] += 0.0009061254077564335;
        result[2] += 0.010873504893077202;
        result[3] += 0.12631388184124684;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007249003262051468;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        result[0] += 0.9998181074075758;
        result[1] += 0;
        result[2] += 0.00018189259242417353;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9990210474791973;
        result[1] += 0;
        result[2] += 0.0009789525208027412;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9143305944900918;
        result[1] += 0.0008458192363460609;
        result[2] += 0.003987433542774287;
        result[3] += 0.07938617689705171;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014499758337361043;
      } else {
        result[0] += 0.1077287641268684;
        result[1] += 0.003098796937659497;
        result[2] += 0.01020780167699599;
        result[3] += 0.555413780532264;
        result[4] += 0.3230040102078017;
        result[5] += 0.0005468465184104995;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0;
        result[1] += 0.001003344481605351;
        result[2] += 0.009030100334448161;
        result[3] += 0.9899665551839465;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.001494768310911809;
        result[3] += 0;
        result[4] += 0.9970104633781764;
        result[5] += 0.001494768310911809;
        result[6] += 0;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9978558027338515;
        result[1] += 0;
        result[2] += 0.001965514160636112;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001786831055123738;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.015584891822515585;
        result[1] += 0.005683901723505684;
        result[2] += 0.00825082508250825;
        result[3] += 0.6475980931426476;
        result[4] += 0.32086541987532086;
        result[5] += 0.002016868353502017;
        result[6] += 0;
      } else {
        result[0] += 0.979584306973312;
        result[1] += 0;
        result[2] += 0.006272291231090887;
        result[3] += 0.012913540769893003;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012298610257040954;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 0.0006788866259334691;
        result[2] += 0;
        result[3] += 0.9959266802443992;
        result[4] += 0.003054989816700611;
        result[5] += 0.00033944331296673454;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.033093525179856115;
        result[3] += 0;
        result[4] += 0.9669064748201439;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.701098901098901;
        result[1] += 0;
        result[2] += 0.002197802197802198;
        result[3] += 0.2939060939060939;
        result[4] += 0.0003996003996003996;
        result[5] += 0.0011988011988011988;
        result[6] += 0.0011988011988011988;
      } else {
        result[0] += 0.982909105671254;
        result[1] += 0.0005277473308163846;
        result[2] += 0.00044655543376770997;
        result[3] += 0.015670036130394187;
        result[4] += 0.00024357569114602363;
        result[5] += 8.119189704867455e-05;
        result[6] += 0.00012178784557301182;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.19794721407624633;
        result[1] += 0.0036656891495601175;
        result[2] += 0.007331378299120235;
        result[3] += 0.4655425219941349;
        result[4] += 0.3255131964809384;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17737430167597765;
        result[1] += 0.0034916201117318434;
        result[2] += 0.009427374301675978;
        result[3] += 0.35858938547486036;
        result[4] += 0.4511173184357542;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0.2403051493960585;
        result[1] += 0;
        result[2] += 0.017164653528289893;
        result[3] += 0.635092180546726;
        result[4] += 0.10743801652892562;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.42205422314911367;
        result[1] += 0;
        result[2] += 0.0005213764337851929;
        result[3] += 0.4397810218978102;
        result[4] += 0.13764337851929093;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9084919472913616;
        result[1] += 0;
        result[2] += 0.004148365056124939;
        result[3] += 0.08321132259638848;
        result[4] += 0.0019521717911176184;
        result[5] += 0.0004880429477794046;
        result[6] += 0.001708150317227916;
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
        result[1] += 0;
        result[2] += 0.007391763463569166;
        result[3] += 0.7956705385427666;
        result[4] += 0.19429778247096094;
        result[5] += 0.0026399155227032735;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0050968399592252805;
        result[2] += 0;
        result[3] += 0.08307849133537207;
        result[4] += 0.9118246687054027;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9992757746624593;
        result[1] += 0.00010346076250581966;
        result[2] += 0.0005690341937820082;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.173038125290983e-05;
      } else {
        result[0] += 0.8832807570977917;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1167192429022082;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9566831683168316;
        result[1] += 0.0024752475247524753;
        result[2] += 0.004725472547254726;
        result[3] += 0.03566606660666067;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00045004500450045;
      } else {
        result[0] += 0.6234847557242561;
        result[1] += 0;
        result[2] += 0.006122199093914534;
        result[3] += 0.36990326925431616;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004897759275131628;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993527015192476;
        result[1] += 0;
        result[2] += 0.0006092220995316606;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8076381220728785e-05;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.23943661971830985;
        result[4] += 0.7593896713615024;
        result[5] += 0.0011737089201877935;
        result[6] += 0;
      } else {
        result[0] += 0.5758734442944969;
        result[1] += 0.000599790073474284;
        result[2] += 0.008022192232718548;
        result[3] += 0.39286249812565605;
        result[4] += 0.02129254760833708;
        result[5] += 0.0003748687959214275;
        result[6] += 0.0009746588693957114;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.13861867704280156;
        result[1] += 0.004377431906614786;
        result[2] += 0.0048638132295719845;
        result[3] += 0.5539883268482491;
        result[4] += 0.29815175097276264;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0020325203252032522;
        result[1] += 0.006097560975609756;
        result[2] += 0;
        result[3] += 0.11178861788617886;
        result[4] += 0.8800813008130082;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 0.015151515151515152;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9848484848484849;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009391876027236442;
        result[1] += 0.00023479690068091104;
        result[2] += 0.0023479690068091107;
        result[3] += 0.7421930030523598;
        result[4] += 0.25381544963606484;
        result[5] += 0.0004695938013618221;
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
        result[2] += 0.014144271570014143;
        result[3] += 0;
        result[4] += 0.9858557284299858;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9997483263703629;
        result[1] += 0;
        result[2] += 0.0002013389037096693;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.033472592741732e-05;
      } else {
        result[0] += 0.6910299003322259;
        result[1] += 0.0033222591362126247;
        result[2] += 0;
        result[3] += 0.30564784053156147;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9991195633033985;
        result[1] += 0;
        result[2] += 0.0008804366966015144;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6975418596366227;
        result[1] += 0.0016921980762379764;
        result[2] += 0.006768792304951906;
        result[3] += 0.29283933024581404;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011578197363733523;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.2035154595510377;
        result[1] += 0.0016941973739940702;
        result[2] += 0.0008470986869970351;
        result[3] += 0.743117323168149;
        result[4] += 0.05019059720457433;
        result[5] += 0.0006353240152477764;
        result[6] += 0;
      } else {
        result[0] += 0.06438026474127558;
        result[1] += 0;
        result[2] += 0.005415162454873646;
        result[3] += 0;
        result[4] += 0.9302045728038508;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.9914113148999834;
        result[1] += 0.0007757522025821466;
        result[2] += 0.004377458857427827;
        result[3] += 0.0032692414251676177;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00016623261483903143;
      } else {
        result[0] += 0.9926509186351704;
        result[1] += 0;
        result[2] += 0.0003149606299212598;
        result[3] += 0.006929133858267715;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010498687664041992;
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
        result[2] += 0.006405329233922624;
        result[3] += 0.8147578785549577;
        result[4] += 0.17832436587240585;
        result[5] += 0.0005124263387138099;
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
        result[0] += 0.9849056603773585;
        result[1] += 0;
        result[2] += 0.007075471698113208;
        result[3] += 0.0037735849056603774;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0042452830188679245;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.005252790544977019;
        result[1] += 0.0016414970453053185;
        result[2] += 0.006565988181221274;
        result[3] += 0.6812212738017072;
        result[4] += 0.30531845042678923;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9807692307692307;
        result[1] += 0;
        result[2] += 0.019230769230769232;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.009569377990430622;
        result[2] += 0;
        result[3] += 0.0023923444976076554;
        result[4] += 0.9880382775119617;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985734664764622;
        result[5] += 0.0014265335235378032;
        result[6] += 0;
      } else {
        result[0] += 0.9836643329999525;
        result[1] += 9.525170262418442e-05;
        result[2] += 0.0012858979854264898;
        result[3] += 0.014954517311996953;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.4311490978157644;
        result[1] += 0.0013566680233346898;
        result[2] += 0.007597340930674263;
        result[3] += 0.5495862162528828;
        result[4] += 0.00800434133767467;
        result[5] += 0.0018993352326685657;
        result[6] += 0.0004070004070004069;
      } else {
        result[0] += 0.9859660574412533;
        result[1] += 0;
        result[2] += 0.00293733681462141;
        result[3] += 0.010443864229765013;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006527415143603133;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 0.0199501246882793;
        result[2] += 0;
        result[3] += 0.003740648379052369;
        result[4] += 0.9763092269326683;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0013995801259622112;
        result[1] += 0.00046652670865407047;
        result[2] += 0.0032656869605784933;
        result[3] += 0.7380452530907394;
        result[4] += 0.25519010963377653;
        result[5] += 0.0016328434802892467;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.5819158460161146;
        result[1] += 0;
        result[2] += 0.008952551477170993;
        result[3] += 0;
        result[4] += 0.40913160250671443;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.29152542372881357;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7084745762711865;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.40332640332640335;
        result[1] += 0.016632016632016633;
        result[2] += 0;
        result[3] += 0.58004158004158;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9962813081045608;
        result[1] += 0.0003645776368077582;
        result[2] += 0.0027707900397389625;
        result[3] += 0.0003645776368077582;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021874658208465494;
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
        result[0] += 0.40386384544618215;
        result[1] += 0;
        result[2] += 0.008831646734130635;
        result[3] += 0.5858325666973321;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014719411223551057;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.00694815606627472;
        result[1] += 0.003206841261357563;
        result[2] += 0.009620523784072688;
        result[3] += 0.980224478888295;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9923161361141603;
        result[1] += 0;
        result[2] += 0.007683863885839737;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 0.002638522427440633;
        result[1] += 0.0079155672823219;
        result[2] += 0;
        result[3] += 0.2357080035180299;
        result[4] += 0.7537379067722075;
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
        result[0] += 0.9994303076338777;
        result[1] += 0;
        result[2] += 0.0004937333839726548;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.59589821496392e-05;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41180000))) ) ) {
        result[0] += 0.5585295066107707;
        result[1] += 0.0008061915511125443;
        result[2] += 0.006933247339567882;
        result[3] += 0.36754272815220895;
        result[4] += 0.06514027732989358;
        result[5] += 0.0003224766204450177;
        result[6] += 0.0007255723960012899;
      } else {
        result[0] += 0.9393939393939394;
        result[1] += 0;
        result[2] += 0.015151515151515152;
        result[3] += 0;
        result[4] += 0.015151515151515152;
        result[5] += 0;
        result[6] += 0.030303030303030304;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43260000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9967697277341947;
        result[1] += 0;
        result[2] += 0.003230272265805261;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997513983840896;
        result[1] += 0;
        result[2] += 0.0002486016159105034;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 0.18183962264150944;
        result[1] += 0.0025943396226415093;
        result[2] += 0.004481132075471698;
        result[3] += 0.4403301886792453;
        result[4] += 0.37075471698113205;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7836012861736334;
        result[1] += 0.0015005359056806003;
        result[2] += 0.0082529474812433;
        result[3] += 0.17888531618435155;
        result[4] += 0.025830653804930333;
        result[5] += 0.0005359056806002144;
        result[6] += 0.0013933547695605573;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0010221465076660989;
        result[2] += 0;
        result[3] += 0.9972742759795571;
        result[4] += 0.001362862010221465;
        result[5] += 0.00034071550255536625;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.036127167630057806;
        result[3] += 0;
        result[4] += 0.9638728323699421;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9976689976689976;
        result[5] += 0.002331002331002331;
        result[6] += 0;
      } else {
        result[0] += 0.19471453502867114;
        result[1] += 0.002742458239840439;
        result[2] += 0.002243829468960359;
        result[3] += 0.7985539765644478;
        result[4] += 0;
        result[5] += 0.0017452006980802793;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9957495857647145;
        result[1] += 0.0005403068943159716;
        result[2] += 0.0027375549312009225;
        result[3] += 0.0008284705712844896;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014408183848425908;
      } else {
        result[0] += 0.3076923076923077;
        result[1] += 0.016826923076923076;
        result[2] += 0;
        result[3] += 0.6754807692307693;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0.16074766355140188;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8392523364485981;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05402010050251256;
        result[1] += 0;
        result[2] += 0.032663316582914576;
        result[3] += 0;
        result[4] += 0.9095477386934674;
        result[5] += 0.0037688442211055275;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9958424074440705;
        result[1] += 0;
        result[2] += 0.0027717283706196793;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013858641853098396;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.001214329083181542;
        result[1] += 0.000607164541590771;
        result[2] += 0;
        result[3] += 0.9277474195506981;
        result[4] += 0.06921675774134789;
        result[5] += 0.001214329083181542;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005780346820809248;
        result[2] += 0.007707129094412331;
        result[3] += 0;
        result[4] += 0.9820166987797045;
        result[5] += 0.00449582530507386;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.9805013927576601;
        result[1] += 0;
        result[2] += 0.01532033426183844;
        result[3] += 0;
        result[4] += 0.004178272980501393;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0014970059880239522;
        result[3] += 0;
        result[4] += 0.9985029940119761;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9966610418985388;
        result[1] += 0.0005026388539834129;
        result[2] += 0.0025131942699170647;
        result[3] += 3.5902775284529496e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028722220227623597;
      } else {
        result[0] += 0.006430868167202572;
        result[1] += 0.022508038585209004;
        result[2] += 0;
        result[3] += 0.9710610932475884;
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
        result[0] += 0.41323230456477544;
        result[1] += 0;
        result[2] += 0.005913879135095177;
        result[3] += 0.5795601552393272;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00129366106080207;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13670694864048338;
        result[1] += 0.00037764350453172205;
        result[2] += 0.008685800604229608;
        result[3] += 0.851963746223565;
        result[4] += 0;
        result[5] += 0.0022658610271903325;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.9362146315462179;
        result[1] += 0.000710700484164705;
        result[2] += 0.004175365344467641;
        result[3] += 0.058366277262026395;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005330253631235288;
      } else {
        result[0] += 0.872928952541421;
        result[1] += 0;
        result[2] += 0.0007722549845549003;
        result[3] += 0.12629879247402415;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.008174386920980926;
        result[2] += 0.0009082652134423251;
        result[3] += 0.9909173478655767;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9731543624161074;
        result[1] += 0;
        result[2] += 0.026845637583892617;
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
        result[0] += 0.011627906976744186;
        result[1] += 0.05813953488372093;
        result[2] += 0;
        result[3] += 0.9302325581395349;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.0002906976744186047;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9337209302325582;
        result[4] += 0.06569767441860466;
        result[5] += 0.0002906976744186047;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.38461538461538464;
        result[1] += 0.05128205128205128;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5512820512820513;
        result[5] += 0.01282051282051282;
        result[6] += 0;
      } else {
        result[0] += 0.02581755593803787;
        result[1] += 0;
        result[2] += 0.009466437177280553;
        result[3] += 0;
        result[4] += 0.960843373493976;
        result[5] += 0.0038726333907056804;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9992240442812064;
        result[1] += 5.173038125290983e-05;
        result[2] += 0.0006724949562878278;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.173038125290983e-05;
      } else {
        result[0] += 0.8784370477568741;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12156295224312591;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.810941025797402;
        result[1] += 0.0007318411904616698;
        result[2] += 0.006220650118924194;
        result[3] += 0.1813136549368787;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007928279563334756;
      } else {
        result[0] += 0.24469820554649266;
        result[1] += 0.01468189233278956;
        result[2] += 0;
        result[3] += 0.7406199021207178;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0.9758671558800167;
        result[1] += 0.0006052123917237207;
        result[2] += 0.0007943412641373834;
        result[3] += 0.022090252297915804;
        result[4] += 0.00034043197034459285;
        result[5] += 0.00015130309793093017;
        result[6] += 0.00015130309793093017;
      } else {
        result[0] += 0.5708844688954718;
        result[1] += 0;
        result[2] += 0.010368176047397376;
        result[3] += 0.3692340245450698;
        result[4] += 0.04951333051206094;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.6453051643192488;
        result[1] += 0;
        result[2] += 0.004694835680751174;
        result[3] += 0.34800469483568075;
        result[4] += 0.0012910798122065727;
        result[5] += 0.00035211267605633805;
        result[6] += 0.00035211267605633805;
      } else {
        result[0] += 0.0028694404591104736;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9971305595408895;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
        result[0] += 0.16957210776545167;
        result[1] += 0.005546751188589541;
        result[2] += 0;
        result[3] += 0.8248811410459588;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.007434944237918215;
        result[1] += 0.02973977695167286;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9628252788104089;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0.01644479248238058;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.020360219263899765;
        result[4] += 0.9631949882537196;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.28846153846153844;
        result[1] += 0;
        result[2] += 0.019230769230769232;
        result[3] += 0.6923076923076923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9927184466019418;
        result[1] += 0;
        result[2] += 0.007281553398058253;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995007105273265;
        result[1] += 0;
        result[2] += 0.0004224757076468103;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.681376502669278e-05;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.01697444506621899;
        result[1] += 0.00391717963066592;
        result[2] += 0.005782503264316359;
        result[3] += 0.6569669837716844;
        result[4] += 0.314866629360194;
        result[5] += 0.0014922589069203507;
        result[6] += 0;
      } else {
        result[0] += 0.979197807673144;
        result[1] += 0;
        result[2] += 0.0057299451918286;
        result[3] += 0.013079222720478326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001993024414549078;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9953271028037384;
        result[5] += 0.004672897196261682;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00033145508783559825;
        result[2] += 0.007292011932383162;
        result[3] += 0.9923765329797812;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.009460211463550361;
        result[1] += 0.001669449081803005;
        result[2] += 0.009460211463550361;
        result[3] += 0.9794101279910963;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9914712153518124;
        result[1] += 0;
        result[2] += 0.008528784648187633;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0.005847953216374269;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7426900584795322;
        result[4] += 0.25146198830409355;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0012048192771084338;
        result[1] += 0.007228915662650603;
        result[2] += 0;
        result[3] += 0.07168674698795181;
        result[4] += 0.9198795180722892;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x419c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.012987012987012988;
        result[3] += 0;
        result[4] += 0.9826839826839827;
        result[5] += 0.004329004329004329;
        result[6] += 0;
      } else {
        result[0] += 0.9851414420420993;
        result[1] += 0.00014287074959519954;
        result[2] += 0.0005238594151823983;
        result[3] += 0.014096580626726356;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.524716639679969e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 0.8042622191336576;
        result[1] += 0.0011582117211026176;
        result[2] += 0.005250559802331866;
        result[3] += 0.1748127557717551;
        result[4] += 0.013435255964790364;
        result[5] += 0.000154428229480349;
        result[6] += 0.000926569376882094;
      } else {
        result[0] += 0.5123485554520038;
        result[1] += 0;
        result[2] += 0.003727865796831314;
        result[3] += 0.483923578751165;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0.4831964152352502;
        result[1] += 0;
        result[2] += 0.008215085884988798;
        result[3] += 0.4958924570575056;
        result[4] += 0.012696041822255415;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13932018464120857;
        result[1] += 0.0029374737725556023;
        result[2] += 0.005874947545111205;
        result[3] += 0.5400755350398657;
        result[4] += 0.31179185900125894;
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
        result[1] += 0.1111111111111111;
        result[2] += 0;
        result[3] += 0.8888888888888888;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41180000))) ) ) {
        result[0] += 0.9655172413793104;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.034482758620689655;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993860322333078;
        result[1] += 0;
        result[2] += 0.0005755947812739831;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.837298541826554e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.3681002759889605;
        result[1] += 0.0014949402023919046;
        result[2] += 0.006209751609935603;
        result[3] += 0.5304737810487582;
        result[4] += 0.09222631094756212;
        result[5] += 0.0008049678012879486;
        result[6] += 0.000689972401103956;
      } else {
        result[0] += 0.9717891610987379;
        result[1] += 0;
        result[2] += 0.0066815144766146995;
        result[3] += 0.0200445434298441;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014847809948032665;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41f40000))) ) ) {
        result[0] += 0.5546218487394958;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.44537815126050423;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0234375;
        result[3] += 0.9765625;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0.9687678103271401;
        result[1] += 0.0013678331243588283;
        result[2] += 0.0021657357802348115;
        result[3] += 0.027641627721417986;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.699304684828451e-05;
      } else {
        result[0] += 0.8682581786030061;
        result[1] += 0;
        result[2] += 0.0016025641025641025;
        result[3] += 0.12958664898320071;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005526083112290009;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9957356076759062;
        result[5] += 0.0042643923240938165;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00186046511627907;
        result[3] += 0.9972093023255815;
        result[4] += 0;
        result[5] += 0.000930232558139535;
        result[6] += 0;
      } else {
        result[0] += 0.37962493664470354;
        result[1] += 0.004815002534211861;
        result[2] += 0.011657374556512926;
        result[3] += 0.6036492650785606;
        result[4] += 0;
        result[5] += 0.0002534211860111506;
        result[6] += 0;
      }
    }
  }
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
        result[0] += 0.5996168582375478;
        result[1] += 0.00210727969348659;
        result[2] += 0.0053639846743295016;
        result[3] += 0.29693486590038315;
        result[4] += 0.09406130268199234;
        result[5] += 0.0005747126436781609;
        result[6] += 0.0013409961685823754;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013771996939556235;
        result[3] += 0.8622800306044377;
        result[4] += 0.12394797245600613;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428c0000))) ) ) {
        result[0] += 0.920182534743829;
        result[1] += 0.0006637627048330222;
        result[2] += 0.0014934660858743;
        result[3] += 0.07741132545115122;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002489110143123833;
      } else {
        result[0] += 0.09302325581395349;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9069767441860465;
        result[5] += 0;
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
        result[0] += 0.29745733194009055;
        result[1] += 0.0017415534656913968;
        result[2] += 0.019853709508881923;
        result[3] += 0.679554162312783;
        result[4] += 0;
        result[5] += 0.0013932427725531174;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        result[1] += 0.0033846153846153852;
        result[2] += 0.00830769230769231;
        result[3] += 0.9867692307692308;
        result[4] += 0;
        result[5] += 0.0015384615384615387;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0.996489704339015;
        result[1] += 0.0006513950711106286;
        result[2] += 0.002533203054319111;
        result[3] += 0.00021713169037020953;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010856584518510477;
      } else {
        result[0] += 0.39552238805970147;
        result[1] += 0.022388059701492536;
        result[2] += 0;
        result[3] += 0.582089552238806;
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
        result[0] += 0.4069555717407138;
        result[1] += 0;
        result[2] += 0.009104151493080845;
        result[3] += 0.5826656955571741;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012745812090313182;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.13812500000000003;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8131250000000001;
        result[4] += 0.04875000000000001;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.048465266558966075;
        result[1] += 0.012924071082390954;
        result[2] += 0.024232633279483037;
        result[3] += 0;
        result[4] += 0.9111470113085622;
        result[5] += 0.0032310177705977385;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0;
        result[1] += 0.0012658227848101266;
        result[2] += 0.004746835443037975;
        result[3] += 0.5727848101265823;
        result[4] += 0.42025316455696204;
        result[5] += 0.0009493670886075949;
        result[6] += 0;
      } else {
        result[0] += 0.5055611729019212;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.49443882709807885;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
        result[0] += 0;
        result[1] += 0.008450704225352112;
        result[2] += 0;
        result[3] += 0.9915492957746479;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9959480481892841;
        result[1] += 0.0005426721175066025;
        result[2] += 0.002604826164031692;
        result[3] += 0.000651206541007923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025324698816974785;
      } else {
        result[0] += 0.6520747834017327;
        result[1] += 0;
        result[2] += 0.0067259461924304605;
        result[3] += 0.3402872777017784;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009119927040583675;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.928681217337842;
        result[4] += 0.0700891484783277;
        result[5] += 0.0012296341838303104;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.06218365871294288;
        result[1] += 0.0036153289949385392;
        result[2] += 0.015907447577729574;
        result[3] += 0;
        result[4] += 0.9161243673174259;
        result[5] += 0.0021691973969631237;
        result[6] += 0;
      } else {
        result[0] += 0.022459893048128343;
        result[1] += 0.0021390374331550803;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9754010695187165;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.999492746271685;
        result[1] += 0;
        result[2] += 0.0005072537283149031;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5212121212121212;
        result[1] += 0.003443526170798898;
        result[2] += 0.006611570247933884;
        result[3] += 0.4674931129476584;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012396694214876034;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9416581371545548;
        result[1] += 0;
        result[2] += 0.008700102354145344;
        result[3] += 0.049641760491299904;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9947412453687104;
        result[1] += 0;
        result[2] += 0.002987928767778176;
        result[3] += 0.0013146886578223975;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009561372056890164;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.13823642664613014;
        result[1] += 0.0007701193685021178;
        result[2] += 0;
        result[3] += 0.8582980361956103;
        result[4] += 0.0015402387370042356;
        result[5] += 0.0011551790527531767;
        result[6] += 0;
      } else {
        result[0] += 0.0019569471624266144;
        result[1] += 0;
        result[2] += 0.030332681017612523;
        result[3] += 0;
        result[4] += 0.961839530332681;
        result[5] += 0.005870841487279843;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9907004702804001;
        result[1] += 0.0007071885718326791;
        result[2] += 0.0020154874297231354;
        result[3] += 0.006400056575085745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00017679714295816977;
      } else {
        result[0] += 0.651641755913852;
        result[1] += 0;
        result[2] += 0.0037660350712016006;
        result[3] += 0.3442391432270213;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00035306578792515005;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.16118935837245696;
        result[1] += 0.007042253521126761;
        result[2] += 0.006259780907668232;
        result[3] += 0.8255086071987481;
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
        result[0] += 0;
        result[1] += 0.01805416248746239;
        result[2] += 0;
        result[3] += 0.1675025075225677;
        result[4] += 0.8144433299899699;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9979550102249489;
        result[5] += 0.002044989775051125;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0.09226932668329177;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9060681629260183;
        result[4] += 0;
        result[5] += 0.0016625103906899418;
        result[6] += 0;
      } else {
        result[0] += 0.3393665158371041;
        result[1] += 0.010342598577892695;
        result[2] += 0.01616031027795734;
        result[3] += 0.6296056884292178;
        result[4] += 0;
        result[5] += 0.004524886877828055;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9993853403677714;
        result[1] += 0;
        result[2] += 0.00046099472417149;
        result[3] += 0.0001024432720381089;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.122163601905445e-05;
      } else {
        result[0] += 0.890728476821192;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.10927152317880795;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5485549924667854;
        result[1] += 0.0020545130803999454;
        result[2] += 0.007670182166826462;
        result[3] += 0.4413094096699082;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00041090261607998904;
      } else {
        result[0] += 0.9848532005394751;
        result[1] += 0;
        result[2] += 0.003942317667807864;
        result[3] += 0.010789500985579419;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004149808071376699;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991426265886626;
        result[1] += 0;
        result[2] += 0.000806939681258826;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.043373007867663e-05;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6071793260545126;
        result[1] += 0.0010211295263529965;
        result[2] += 0.007147906684470976;
        result[3] += 0.3267614484329589;
        result[4] += 0.05671196292514335;
        result[5] += 0.00023564527531223;
        result[6] += 0.00094258110124892;
      } else {
        result[0] += 0.07044025157232704;
        result[1] += 0.0020964360587002098;
        result[2] += 0.016352201257861635;
        result[3] += 0.8859538784067086;
        result[4] += 0.025157232704402517;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.385146804835924;
        result[4] += 0.614853195164076;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0027247956403269754;
        result[1] += 0.008855585831062671;
        result[2] += 0;
        result[3] += 0.05858310626702997;
        result[4] += 0.9298365122615804;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993446589706104;
        result[1] += 0;
        result[2] += 0.0006553410293895246;
        result[3] += 0;
        result[4] += 0;
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
        result[4] += 0.9995957962813258;
        result[5] += 0.0004042037186742118;
        result[6] += 0;
      } else {
        result[0] += 0.019644970414201185;
        result[1] += 0.008047337278106508;
        result[2] += 0.014674556213017751;
        result[3] += 0.9557396449704142;
        result[4] += 0;
        result[5] += 0.001893491124260355;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 0.6155861165684349;
        result[1] += 0;
        result[2] += 0.004747871643745907;
        result[3] += 0.3786836935166994;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009823182711198428;
      } else {
        result[0] += 0.9149126735333633;
        result[1] += 0;
        result[2] += 0.0038065382892969106;
        result[3] += 0.08016121809225259;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011195700850873266;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0.9844268204758472;
        result[1] += 0;
        result[2] += 0.00014419610670511897;
        result[3] += 0.01542898341744773;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15876777251184834;
        result[1] += 0;
        result[2] += 0.06398104265402843;
        result[3] += 0.4028436018957346;
        result[4] += 0.3744075829383886;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0.23139974779319042;
        result[1] += 0.005044136191677175;
        result[2] += 0;
        result[3] += 0.467843631778058;
        result[4] += 0.2957124842370744;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6976991150442478;
        result[1] += 0;
        result[2] += 0.0033628318584070795;
        result[3] += 0.2920353982300885;
        result[4] += 0.006017699115044248;
        result[5] += 0;
        result[6] += 0.0008849557522123894;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9767563605905141;
        result[1] += 0.0009423097057899697;
        result[2] += 0.00162286671552717;
        result[3] += 0.0203120092136949;
        result[4] += 0;
        result[5] += 0.00015705161763166162;
        result[6] += 0.00020940215684221548;
      } else {
        result[0] += 0.10199757869249394;
        result[1] += 0.00211864406779661;
        result[2] += 0.010895883777239709;
        result[3] += 0.49515738498789347;
        result[4] += 0.3898305084745763;
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
        result[0] += 0.374701036407122;
        result[1] += 0;
        result[2] += 0.0018602179112410311;
        result[3] += 0.49269200106298167;
        result[4] += 0.13021525378687218;
        result[5] += 0;
        result[6] += 0.0005314908317831517;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.20849176172370087;
        result[1] += 0.0031685678073510772;
        result[2] += 0;
        result[3] += 0.788339670468948;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5109553023663453;
        result[1] += 0;
        result[2] += 0.029798422436459245;
        result[3] += 0.45924627519719546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.44168734491315137;
        result[4] += 0.5583126550868487;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007703081232492998;
        result[2] += 0;
        result[3] += 0.05112044817927171;
        result[4] += 0.9411764705882353;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        result[0] += 0.9993130819722181;
        result[1] += 0;
        result[2] += 0.0006105938024729051;
        result[3] += 0;
        result[4] += 3.8162112654556566e-05;
        result[5] += 0;
        result[6] += 3.8162112654556566e-05;
      } else {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.003579952267303103;
        result[2] += 0;
        result[3] += 0.2171837708830549;
        result[4] += 0.7780429594272077;
        result[5] += 0.0011933174224343676;
        result[6] += 0;
      } else {
        result[0] += 0.6029905913978496;
        result[1] += 0.0005040322580645162;
        result[2] += 0.006384408602150539;
        result[3] += 0.37306787634408606;
        result[4] += 0.014700940860215056;
        result[5] += 0.0008400537634408603;
        result[6] += 0.0015120967741935486;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.9820051413881749;
        result[1] += 0;
        result[2] += 0.017994858611825194;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05154639175257732;
        result[1] += 0.008934707903780068;
        result[2] += 0.0013745704467353953;
        result[3] += 0.6020618556701031;
        result[4] += 0.33608247422680415;
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
        result[0] += 0.3687015503875969;
        result[1] += 0.0048449612403100775;
        result[2] += 0.011143410852713179;
        result[3] += 0.6153100775193798;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.1198776758409786;
        result[1] += 0;
        result[2] += 0.004281345565749235;
        result[3] += 0.8422018348623853;
        result[4] += 0.031804281345565746;
        result[5] += 0.001834862385321101;
        result[6] += 0;
      } else {
        result[0] += 0.9935266795889258;
        result[1] += 0.0002560070219068866;
        result[2] += 0.0012800351095344329;
        result[3] += 0.004754416121127894;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000182862158504919;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.15227703984819735;
        result[1] += 0;
        result[2] += 0.006878557874762809;
        result[3] += 0.6805028462998103;
        result[4] += 0.15986717267552183;
        result[5] += 0.0004743833017077799;
        result[6] += 0;
      } else {
        result[0] += 0.9954401268834259;
        result[1] += 0;
        result[2] += 0.0035685963521015066;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009912767644726407;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  result[6] /= 100;
  
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
