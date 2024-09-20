
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
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += (float)0.9988400353513036;
        result[1] += (float)0;
        result[2] += (float)0.0011599646486964207;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9998760228118027;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001239771881973717;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += (float)0.9141938674579624;
        result[1] += (float)0.001483679525222552;
        result[2] += (float)0.0034619188921859545;
        result[3] += (float)0.07987141444114738;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009891196834817012;
      } else {
        result[0] += (float)0.11442516268980478;
        result[1] += (float)0.004699927693420102;
        result[2] += (float)0.011749819233550255;
        result[3] += (float)0.5386840202458425;
        result[4] += (float)0.3295372378886479;
        result[5] += (float)0.0009038322487346349;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0023148148148148147;
        result[2] += (float)0.004629629629629629;
        result[3] += (float)0.9930555555555556;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.027737226277372264;
        result[3] += (float)0;
        result[4] += (float)0.9708029197080292;
        result[5] += (float)0.00145985401459854;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9923076923076923;
        result[5] += (float)0.007692307692307693;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.004780400358530027;
        result[2] += (float)0.0089632506722438;
        result[3] += (float)0.9844636988347775;
        result[4] += (float)0;
        result[5] += (float)0.00179265013444876;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += (float)0.9804533166978582;
        result[1] += (float)0;
        result[2] += (float)0.001455604075691412;
        result[3] += (float)0.018091079226450407;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5556715379262351;
        result[1] += (float)0;
        result[2] += (float)0.004871259568545581;
        result[3] += (float)0.4387613082811412;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006958942240779401;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9932331362632666;
        result[1] += (float)0.00035615072298596765;
        result[2] += (float)0.0009972220243607095;
        result[3] += (float)0.005342260844789515;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.123014459719353e-05;
      } else {
        result[0] += (float)0.8133320563164448;
        result[1] += (float)0.0016281965328991475;
        result[2] += (float)0.004214155732209558;
        result[3] += (float)0.1808255914184465;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += (float)0.4825938566552901;
        result[1] += (float)0;
        result[2] += (float)0.015017064846416382;
        result[3] += (float)0.5023890784982935;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.13764624913971094;
        result[1] += (float)0.014452856159669649;
        result[2] += (float)0.006882312456985547;
        result[3] += (float)0.8410185822436339;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.1087202718006795;
        result[1] += (float)0.0005662514156285391;
        result[2] += (float)0;
        result[3] += (float)0.8873159682899208;
        result[4] += (float)0.0011325028312570782;
        result[5] += (float)0.0022650056625141564;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.03555045871559633;
        result[3] += (float)0;
        result[4] += (float)0.9644495412844036;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += (float)0.9930168608437658;
        result[1] += (float)0.00050654895433823;
        result[2] += (float)0.001772921340183805;
        result[3] += (float)0.0043418481800419715;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003618206816701643;
      } else {
        result[0] += (float)0.6504440087648483;
        result[1] += (float)0;
        result[2] += (float)0.0041517702687117975;
        result[3] += (float)0.34448160535117056;
        result[4] += (float)0;
        result[5] += (float)0.0005766347595433052;
        result[6] += (float)0.00034598085572598315;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9861995753715499;
        result[1] += (float)0;
        result[2] += (float)0.012738853503184714;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0010615711252653928;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += (float)0.9997088065227339;
        result[1] += (float)0;
        result[2] += (float)0.00029119347726610926;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3333333333333333;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.6666666666666666;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += (float)0.6093737692004726;
        result[1] += (float)0.0019692792437967705;
        result[2] += (float)0.005120126033871603;
        result[3] += (float)0.33028751476959434;
        result[4] += (float)0.052619141394249704;
        result[5] += (float)0.00039385584875935406;
        result[6] += (float)0.00023631350925561244;
      } else {
        result[0] += (float)0.005047318611987382;
        result[1] += (float)0;
        result[2] += (float)0.024605678233438486;
        result[3] += (float)0.7936908517350157;
        result[4] += (float)0.17350157728706625;
        result[5] += (float)0.0031545741324921135;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += (float)0.18809005083514888;
        result[1] += (float)0.007988380537400145;
        result[2] += (float)0.007988380537400145;
        result[3] += (float)0.7959331880900509;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.001736111111111111;
        result[1] += (float)0.003472222222222222;
        result[2] += (float)0;
        result[3] += (float)0.10185185185185185;
        result[4] += (float)0.8929398148148148;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += (float)0.9907048799380326;
        result[1] += (float)0;
        result[2] += (float)0.0077459333849728895;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001549186676994578;
      } else {
        result[0] += (float)0.9986785932100021;
        result[1] += (float)0;
        result[2] += (float)0.001321406789997967;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0.0022002200220022;
        result[1] += (float)0.007700770077007701;
        result[2] += (float)0;
        result[3] += (float)0.21122112211221122;
        result[4] += (float)0.7766776677667767;
        result[5] += (float)0.0022002200220022;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5829228243021346;
        result[1] += (float)0.0012688460964323032;
        result[2] += (float)0.0073145245559038665;
        result[3] += (float)0.3869980594118525;
        result[4] += (float)0.0200029855202269;
        result[5] += (float)0.0004478280340349306;
        result[6] += (float)0.0010449320794148381;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.17407878017789072;
        result[1] += (float)0.011435832274459974;
        result[2] += (float)0.00698856416772554;
        result[3] += (float)0.8074968233799238;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += (float)0.0004016064257028113;
        result[1] += (float)0.0004016064257028113;
        result[2] += (float)0.002409638554216868;
        result[3] += (float)0.9734939759036145;
        result[4] += (float)0.021285140562249;
        result[5] += (float)0.0020080321285140565;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.21630804077010193;
        result[1] += (float)0;
        result[2] += (float)0.020385050962627407;
        result[3] += (float)0;
        result[4] += (float)0.7633069082672707;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.3155963302752294;
        result[4] += (float)0.6844036697247706;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.007530120481927711;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9924698795180723;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += (float)0.9989846427211575;
        result[1] += (float)0;
        result[2] += (float)0.0008884376189871811;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00012691965985531158;
      } else {
        result[0] += (float)0.9999035493827161;
        result[1] += (float)0;
        result[2] += (float)9.645061728395061e-05;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += (float)0.7149820656672492;
        result[1] += (float)0.0022073024924123977;
        result[2] += (float)0.006254023728501794;
        result[3] += (float)0.2755449278028143;
        result[4] += (float)0;
        result[5] += (float)0.00018394187436769982;
        result[6] += (float)0.0008277384346546491;
      } else {
        result[0] += (float)0.14342629482071714;
        result[1] += (float)0.006374501992031873;
        result[2] += (float)0.019123505976095617;
        result[3] += (float)0.8286852589641435;
        result[4] += (float)0;
        result[5] += (float)0.002390438247011952;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += (float)0.992929292929293;
        result[1] += (float)0;
        result[2] += (float)0.005555555555555557;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0015151515151515154;
      } else {
        result[0] += (float)0.9995832465096895;
        result[1] += (float)0;
        result[2] += (float)0.00041675349031048136;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += (float)0.013799051315222079;
        result[1] += (float)0.007330746011211729;
        result[2] += (float)0.017464424320827943;
        result[3] += (float)0.796895213454075;
        result[4] += (float)0.16278568348426045;
        result[5] += (float)0.0017248814144027599;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7473800330943188;
        result[1] += (float)9.192866335723479e-05;
        result[2] += (float)0.0023901452472881043;
        result[3] += (float)0.24940246368817798;
        result[4] += (float)0;
        result[5] += (float)9.192866335723479e-05;
        result[6] += (float)0.0006435006435006435;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += (float)0.004878048780487805;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8;
        result[4] += (float)0.1951219512195122;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0005549389567147614;
        result[1] += (float)0.0022197558268590455;
        result[2] += (float)0;
        result[3] += (float)0.07547169811320754;
        result[4] += (float)0.9217536071032186;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += (float)0.010380622837370242;
        result[1] += (float)0.02422145328719723;
        result[2] += (float)0;
        result[3] += (float)0.09342560553633218;
        result[4] += (float)0.8719723183391004;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3049564888384412;
        result[1] += (float)0.00340522133938706;
        result[2] += (float)0.009458948164964056;
        result[3] += (float)0.6821793416572077;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.05555555555555555;
        result[4] += (float)0.9444444444444444;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.17857142857142858;
        result[1] += (float)0;
        result[2] += (float)0.01488095238095238;
        result[3] += (float)0.21726190476190477;
        result[4] += (float)0.5892857142857143;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0.18710263396911897;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.15349682107175294;
        result[4] += (float)0.6575840145322435;
        result[5] += (float)0.0018165304268846503;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0014134275618374558;
        result[2] += (float)0.0176678445229682;
        result[3] += (float)0.893286219081272;
        result[4] += (float)0.08692579505300353;
        result[5] += (float)0.0007067137809187279;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9939264370050047;
        result[1] += (float)0.00029153102375977847;
        result[2] += (float)0.0009717700791992616;
        result[3] += (float)0.0046644963801564555;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00014576551187988924;
      } else {
        result[0] += (float)0.7969729592806029;
        result[1] += (float)0.00037996327021721236;
        result[2] += (float)0.00493952251282376;
        result[3] += (float)0.19726426445443607;
        result[4] += (float)0;
        result[5] += (float)6.332721170286872e-05;
        result[6] += (float)0.00037996327021721236;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.99838027535319;
        result[1] += (float)0;
        result[2] += (float)0.0014397552416089265;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001799694052011158;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += (float)0.0008048289738430583;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.999195171026157;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.01768839350617882;
        result[1] += (float)0.005573055488248122;
        result[2] += (float)0.02011146110976496;
        result[3] += (float)0.9549309425732978;
        result[4] += (float)0;
        result[5] += (float)0.001696147322510298;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += (float)0.551217826913111;
        result[1] += (float)0;
        result[2] += (float)0.0027638624978407324;
        result[3] += (float)0.44532734496458803;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006909656244601831;
      } else {
        result[0] += (float)0.9733306597152598;
        result[1] += (float)0.0008020854220974535;
        result[2] += (float)0.0066172047323039915;
        result[3] += (float)0.017645879286143976;
        result[4] += (float)0;
        result[5] += (float)0.0006015640665730901;
        result[6] += (float)0.0010026067776218168;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6097560975609756;
        result[4] += (float)0.3902439024390244;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += (float)0.33855615756333285;
        result[1] += (float)0.002196514863083907;
        result[2] += (float)0.007028847561868502;
        result[3] += (float)0.3931761604920193;
        result[4] += (float)0.2590423195196954;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9637004078605859;
        result[1] += (float)0.0004449388209121246;
        result[2] += (float)0.0011123470522803114;
        result[3] += (float)0.034223210975157584;
        result[4] += (float)0.00011123470522803115;
        result[5] += (float)0.00011123470522803115;
        result[6] += (float)0.00029662588060808305;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
        result[0] += (float)0.151993577736152;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.848006422263848;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.06818181818181818;
        result[1] += (float)0;
        result[2] += (float)0.04946524064171123;
        result[3] += (float)0;
        result[4] += (float)0.8770053475935828;
        result[5] += (float)0.0053475935828877;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
        result[0] += (float)0.9980756895445798;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.001924310455420141;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9918074756784434;
        result[1] += (float)0;
        result[2] += (float)0.006656426011264721;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0015360983102918587;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9998673036093418;
        result[1] += (float)0;
        result[2] += (float)0.0001326963906581741;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.4747378455672069;
        result[1] += (float)0.0015888147442008262;
        result[2] += (float)0.00667302192564347;
        result[3] += (float)0.42548458849698123;
        result[4] += (float)0.09040355894502701;
        result[5] += (float)0.0006355258976803305;
        result[6] += (float)0.00047664442326024784;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += (float)0.8983050847457628;
        result[1] += (float)0;
        result[2] += (float)0.0015408320493066256;
        result[3] += (float)0.09861325115562404;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0015408320493066256;
      } else {
        result[0] += (float)0.08275862068965517;
        result[1] += (float)0;
        result[2] += (float)0.041379310344827586;
        result[3] += (float)0.3310344827586207;
        result[4] += (float)0.5448275862068965;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9818828194434949;
        result[1] += (float)0.0004785670335680591;
        result[2] += (float)0.0008887673480549668;
        result[3] += (float)0.013536610378067956;
        result[4] += (float)0.003213235796814111;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8128465320640236;
        result[1] += (float)0.0013599748927712106;
        result[2] += (float)0.002615336332252328;
        result[3] += (float)0.18307354325766295;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010461345329009312;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += (float)0.25078728886344115;
        result[1] += (float)0.002576581734898368;
        result[2] += (float)0.013169195533924993;
        result[3] += (float)0.5493844832522187;
        result[4] += (float)0.1837961637560836;
        result[5] += (float)0.000286286859433152;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.000835421888053467;
        result[2] += (float)0;
        result[3] += (float)0.04928989139515455;
        result[4] += (float)0.949874686716792;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += (float)0.0006383657835939994;
        result[1] += (float)0.0003191828917969997;
        result[2] += (float)0.0031918289179699967;
        result[3] += (float)0.969677625279285;
        result[4] += (float)0.023938716884774978;
        result[5] += (float)0.0022342802425789976;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5446868402533427;
        result[1] += (float)0;
        result[2] += (float)0.01618578465869106;
        result[3] += (float)0;
        result[4] += (float)0.43912737508796623;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.1694756554307116;
        result[4] += (float)0.8305243445692884;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.005861664712778429;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9941383352872216;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += (float)0.45180722891566266;
        result[1] += (float)0.018072289156626505;
        result[2] += (float)0;
        result[3] += (float)0.5301204819277109;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8768621175753419;
        result[1] += (float)0.00045719510801234427;
        result[2] += (float)0.0030860669790833237;
        result[3] += (float)0.11909932563721568;
        result[4] += (float)0;
        result[5] += (float)3.809959233436202e-05;
        result[6] += (float)0.00045719510801234427;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += (float)0.9986577181208054;
        result[1] += (float)0;
        result[2] += (float)0.0013422818791946308;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9662657670871224;
        result[1] += (float)0;
        result[2] += (float)0.0029334115576415375;
        result[3] += (float)0.029920797887943683;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0008800234672924612;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += (float)0.49583600256245997;
        result[1] += (float)0;
        result[2] += (float)0.015374759769378604;
        result[3] += (float)0.48878923766816146;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.11921458625525946;
        result[1] += (float)0.011220196353436185;
        result[2] += (float)0.0021037868162692847;
        result[3] += (float)0.8674614305750351;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.998567335243553;
        result[5] += (float)0.0014326647564469914;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9829436565733998;
        result[1] += (float)0.00019164430816404754;
        result[2] += (float)0.001581065542353392;
        result[3] += (float)0.015235722499041779;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)4.7911077041011885e-05;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += (float)0.7979393245563824;
        result[1] += (float)0.000500858614768174;
        result[2] += (float)0.003291356611333715;
        result[3] += (float)0.18674871207784774;
        result[4] += (float)0.010160274756725816;
        result[5] += (float)0.0005724098454493417;
        result[6] += (float)0.0007870635374928449;
      } else {
        result[0] += (float)0.4743781839976026;
        result[1] += (float)0;
        result[2] += (float)0.005094396164219359;
        result[3] += (float)0.520527419838178;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0.008305647840531562;
        result[1] += (float)0.007198228128460687;
        result[2] += (float)0.01107419712070875;
        result[3] += (float)0.9712070874861573;
        result[4] += (float)0.0022148394241417496;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9931573802541545;
        result[1] += (float)0;
        result[2] += (float)0.006842619745845552;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.003676470588235294;
        result[1] += (float)0.025735294117647058;
        result[2] += (float)0;
        result[3] += (float)0.9705882352941176;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += (float)0.723376862240206;
        result[1] += (float)0;
        result[2] += (float)0.0062534485929740665;
        result[3] += (float)0.24645944454662497;
        result[4] += (float)0.022438844951259886;
        result[5] += (float)0.000551774875850653;
        result[6] += (float)0.0009196247930844216;
      } else {
        result[0] += (float)0.8957573901056823;
        result[1] += (float)0.00030632562413845916;
        result[2] += (float)0.002266809618624598;
        result[3] += (float)0.10087302802879461;
        result[4] += (float)0.00027569306172461325;
        result[5] += (float)0.0003369581865523051;
        result[6] += (float)0.00018379537448307551;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9870572207084468;
        result[1] += (float)0;
        result[2] += (float)0.010217983651226158;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0027247956403269754;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += (float)0.9993278817071805;
        result[1] += (float)0;
        result[2] += (float)0.0006721182928195363;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += (float)0.5855415487522511;
        result[1] += (float)0.002572678157962439;
        result[2] += (float)0.0002572678157962439;
        result[3] += (float)0.37664008232570106;
        result[4] += (float)0.034473887316696684;
        result[5] += (float)0;
        result[6] += (float)0.0005145356315924878;
      } else {
        result[0] += (float)0.31611495089123315;
        result[1] += (float)0;
        result[2] += (float)0.018915969443433975;
        result[3] += (float)0.4783557657329938;
        result[4] += (float)0.18443070207348128;
        result[5] += (float)0.0010913059294288831;
        result[6] += (float)0.0010913059294288831;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += (float)0.0011695906432748538;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9988304093567252;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5454545454545455;
        result[1] += (float)0.002264236386278728;
        result[2] += (float)0.007698403713347675;
        result[3] += (float)0.4440167553492585;
        result[4] += (float)0;
        result[5] += (float)0.0002264236386278728;
        result[6] += (float)0.00033963545794180917;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += (float)0.13212435233160622;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8218911917098446;
        result[4] += (float)0.04598445595854922;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.03259259259259259;
        result[1] += (float)0.014814814814814815;
        result[2] += (float)0.03111111111111111;
        result[3] += (float)0;
        result[4] += (float)0.9214814814814815;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += (float)0.0005446623093681918;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9994553376906318;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.20108243130724396;
        result[1] += (float)0.00041631973355537054;
        result[2] += (float)0.004163197335553705;
        result[3] += (float)0.7926727726894255;
        result[4] += (float)0;
        result[5] += (float)0.0016652789342214821;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += (float)0.8416565164433618;
        result[1] += (float)0;
        result[2] += (float)0.0017716753404938548;
        result[3] += (float)0.15623961908980183;
        result[4] += (float)0;
        result[5] += (float)0.00022145941756173185;
        result[6] += (float)0.00011072970878086592;
      } else {
        result[0] += (float)0.8852755194218609;
        result[1] += (float)0.001129177958446251;
        result[2] += (float)0.003331074977416441;
        result[3] += (float)0.10986901535682024;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003952122854561879;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += (float)0.9986674563221795;
        result[1] += (float)0;
        result[2] += (float)0.0013325436778205508;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9661590524534687;
        result[1] += (float)0;
        result[2] += (float)0.005076142131979695;
        result[3] += (float)0.027354765933446136;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0014100394811054709;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9992097984986171;
        result[5] += (float)0.0007902015013828526;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.003979185797367615;
        result[2] += (float)0.003367003367003367;
        result[3] += (float)0.9908172635445363;
        result[4] += (float)0;
        result[5] += (float)0.0018365472910927456;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9841897233201581;
        result[1] += (float)0;
        result[2] += (float)0.015810276679841896;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += (float)0.9359912427262777;
        result[1] += (float)0.0017284092873192374;
        result[2] += (float)0.00368727314628104;
        result[3] += (float)0.05813216569683702;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00046090914328513;
      } else {
        result[0] += (float)0.7465834499085333;
        result[1] += (float)0;
        result[2] += (float)0.0009684708920692994;
        result[3] += (float)0.25169482406112126;
        result[4] += (float)0;
        result[5] += (float)0.00010760787689658883;
        result[6] += (float)0.000645647261379533;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += (float)0.9937194696441033;
        result[1] += (float)0;
        result[2] += (float)0.003023959060246569;
        result[3] += (float)0.0027913468248429866;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00046522447080716444;
      } else {
        result[0] += (float)0.9462809917355371;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.05371900826446281;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.01059322033898305;
        result[2] += (float)0;
        result[3] += (float)0.6398305084745762;
        result[4] += (float)0.3495762711864407;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9903846153846154;
        result[1] += (float)0;
        result[2] += (float)0.009615384615384616;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += (float)0.07944915254237288;
        result[1] += (float)0;
        result[2] += (float)0.014830508474576272;
        result[3] += (float)0.722457627118644;
        result[4] += (float)0.18220338983050846;
        result[5] += (float)0.001059322033898305;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8891800507185122;
        result[1] += (float)0;
        result[2] += (float)0.0022823330515638206;
        result[3] += (float)0.10786136939983094;
        result[4] += (float)0;
        result[5] += (float)0.00025359256128486897;
        result[6] += (float)0.00042265426880811494;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9988558975755925;
        result[1] += (float)0;
        result[2] += (float)0.001089621356578589;
        result[3] += (float)0;
        result[4] += (float)5.4481067828929447e-05;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5474308300395256;
        result[1] += (float)0.001860032550569635;
        result[2] += (float)0.007091374099046734;
        result[3] += (float)0.36584515229016507;
        result[4] += (float)0.07695884677981865;
        result[5] += (float)0.0005812601720530109;
        result[6] += (float)0.00023250406882120437;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.12043795620437957;
        result[1] += (float)0.010948905109489052;
        result[2] += (float)0;
        result[3] += (float)0.648418491484185;
        result[4] += (float)0.22019464720194648;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.006923837784371909;
        result[1] += (float)0;
        result[2] += (float)0.008902077151335312;
        result[3] += (float)0.12462908011869436;
        result[4] += (float)0.8595450049455984;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9997456441561745;
        result[1] += (float)0;
        result[2] += (float)0.0002543558438255119;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5428776462145678;
        result[1] += (float)0;
        result[2] += (float)0.011302475780409044;
        result[3] += (float)0.39971295299605314;
        result[4] += (float)0.04503049874416937;
        result[5] += (float)0.0007176175098672409;
        result[6] += (float)0.00035880875493362046;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += (float)0.0809361287176987;
        result[1] += (float)0;
        result[2] += (float)0.008288639687957096;
        result[3] += (float)0.5782545099951244;
        result[4] += (float)0.3300828863968796;
        result[5] += (float)0.002437835202340322;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9200385743560896;
        result[1] += (float)0.0005223610720456464;
        result[2] += (float)0.0020894442881825856;
        result[3] += (float)0.07702816731626955;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00032145296741270546;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.020833333333333332;
        result[2] += (float)0;
        result[3] += (float)0.9791666666666666;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9788732394366197;
        result[1] += (float)0;
        result[2] += (float)0.02112676056338028;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.19401330376940132;
        result[1] += (float)0.006097560975609756;
        result[2] += (float)0.011086474501108648;
        result[3] += (float)0.7876940133037694;
        result[4] += (float)0;
        result[5] += (float)0.0011086474501108647;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9977520318173958;
        result[1] += (float)0;
        result[2] += (float)0.0003458412588621823;
        result[3] += (float)0.0019021269237420025;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7835531419705198;
        result[1] += (float)0;
        result[2] += (float)0.005275407292474788;
        result[3] += (float)0.2096198603568658;
        result[4] += (float)0;
        result[5] += (float)0.00015515903801396433;
        result[6] += (float)0.001396431342125679;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += (float)0.8637927080944735;
        result[1] += (float)0.0016815715050064965;
        result[2] += (float)0.00504471451501949;
        result[3] += (float)0.10181151112130242;
        result[4] += (float)0.027134449285332103;
        result[5] += (float)0.00038217534204693104;
        result[6] += (float)0.00015287013681877242;
      } else {
        result[0] += (float)0.838421930524331;
        result[1] += (float)0;
        result[2] += (float)0.00014504315033722533;
        result[3] += (float)0.13554282399013706;
        result[4] += (float)0.02567263760968888;
        result[5] += (float)0;
        result[6] += (float)0.00021756472550583798;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += (float)0.14596670934699105;
        result[1] += (float)0.010243277848911651;
        result[2] += (float)0.010243277848911651;
        result[3] += (float)0.8335467349551856;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.000851063829787234;
        result[2] += (float)0;
        result[3] += (float)0.04425531914893617;
        result[4] += (float)0.9548936170212766;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += (float)0.8;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.2;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9993056627063724;
        result[1] += (float)0;
        result[2] += (float)0.0005786144113562722;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00011572288227125444;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41580000))) ) ) {
        result[0] += (float)0.5345289296437555;
        result[1] += (float)0.0012172360626470826;
        result[2] += (float)0.009413292217804107;
        result[3] += (float)0.38067029132516433;
        result[4] += (float)0.07327761097135438;
        result[5] += (float)0.00032459628337255537;
        result[6] += (float)0.0005680434959019719;
      } else {
        result[0] += (float)0.6187258687258688;
        result[1] += (float)0;
        result[2] += (float)0.002413127413127413;
        result[3] += (float)0.32384169884169883;
        result[4] += (float)0.05405405405405406;
        result[5] += (float)0;
        result[6] += (float)0.0009652509652509653;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += (float)0.1572769953051643;
        result[1] += (float)0.01643192488262911;
        result[2] += (float)0;
        result[3] += (float)0.8262910798122066;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.007518796992481203;
        result[1] += (float)0.022556390977443608;
        result[2] += (float)0;
        result[3] += (float)0.007518796992481203;
        result[4] += (float)0.9624060150375939;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += (float)0.012408759124087591;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.03795620437956204;
        result[4] += (float)0.9496350364963504;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.26717557251908397;
        result[1] += (float)0;
        result[2] += (float)0.026717557251908396;
        result[3] += (float)0.7061068702290076;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0008685581933989577;
        result[2] += (float)0;
        result[3] += (float)0.9322524609148813;
        result[4] += (float)0.06572090330052113;
        result[5] += (float)0.0011580775911986102;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9990888382687927;
        result[5] += (float)0.0009111617312072893;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6518518518518519;
        result[1] += (float)0.08888888888888889;
        result[2] += (float)0.21481481481481482;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0.044444444444444446;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9996190959878111;
        result[1] += (float)0;
        result[2] += (float)0.0003809040121889284;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6734957946948458;
        result[1] += (float)0;
        result[2] += (float)0.006901013586370498;
        result[3] += (float)0.31874056502048737;
        result[4] += (float)0;
        result[5] += (float)0.00021565667457407807;
        result[6] += (float)0.0006469700237222342;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += (float)0.9880106331036728;
        result[1] += (float)0.0015190148103944013;
        result[2] += (float)0.0028752780339608313;
        result[3] += (float)0.007215320349373406;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003797537025986003;
      } else {
        result[0] += (float)0.6917073170731707;
        result[1] += (float)0;
        result[2] += (float)0.0024390243902439024;
        result[3] += (float)0.30585365853658536;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += (float)0.0031282586027111575;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9958289885297185;
        result[5] += (float)0.0010427528675703858;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.13429438543247343;
        result[1] += (float)0.0007587253414264037;
        result[2] += (float)0.010622154779969651;
        result[3] += (float)0.8516691957511381;
        result[4] += (float)0;
        result[5] += (float)0.002655538694992413;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9945125568518884;
        result[1] += (float)0.00019774569903104609;
        result[2] += (float)0.0010876013446707534;
        result[3] += (float)0.004103223254894206;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)9.887284951552304e-05;
      } else {
        result[0] += (float)0.8080284491591827;
        result[1] += (float)0.0007835573503706829;
        result[2] += (float)0.005364354167922368;
        result[3] += (float)0.1853414501838346;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.000482189138689651;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += (float)0.00980392156862745;
        result[1] += (float)0.0392156862745098;
        result[2] += (float)0;
        result[3] += (float)0.08823529411764706;
        result[4] += (float)0.8627450980392157;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1651676206050695;
        result[1] += (float)0.004905968928863451;
        result[2] += (float)0;
        result[3] += (float)0.8299264104660671;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += (float)0.013333333333333334;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.12421052631578948;
        result[4] += (float)0.8624561403508771;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6742424242424242;
        result[1] += (float)0;
        result[2] += (float)0.08333333333333333;
        result[3] += (float)0.24242424242424243;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0.32547169811320753;
        result[1] += (float)0;
        result[2] += (float)0.0007861635220125787;
        result[3] += (float)0.15487421383647798;
        result[4] += (float)0.5188679245283019;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.00042444821731748726;
        result[2] += (float)0.011035653650254669;
        result[3] += (float)0.8612054329371817;
        result[4] += (float)0.12393887945670629;
        result[5] += (float)0.003395585738539898;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9991848458970577;
        result[1] += (float)0;
        result[2] += (float)0.0006987035168077013;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00011645058613461687;
      } else {
        result[0] += (float)0.7004835325244048;
        result[1] += (float)0.00145972082839157;
        result[2] += (float)0.006751208831311012;
        result[3] += (float)0.29039321229814796;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009123255177447313;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.06666666666666667;
        result[1] += (float)0.03333333333333333;
        result[2] += (float)0;
        result[3] += (float)0.9;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += (float)0.18373071528751753;
        result[1] += (float)0.0091164095371669;
        result[2] += (float)0.002805049088359046;
        result[3] += (float)0.8043478260869565;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.11572052401746726;
        result[4] += (float)0.8842794759825328;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += (float)0.00040064102564102563;
        result[1] += (float)0.0008012820512820513;
        result[2] += (float)0.004006410256410256;
        result[3] += (float)0.8790064102564102;
        result[4] += (float)0.11137820512820513;
        result[5] += (float)0.004407051282051282;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.35;
        result[1] += (float)0;
        result[2] += (float)0.020588235294117647;
        result[3] += (float)0;
        result[4] += (float)0.6294117647058823;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9989477376359173;
        result[1] += (float)0;
        result[2] += (float)0.00097431700378035;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.7945360302428e-05;
      } else {
        result[0] += (float)0.7032235147855431;
        result[1] += (float)0.0007992185418701715;
        result[2] += (float)0.0062161442145457785;
        result[3] += (float)0.2888731018559631;
        result[4] += (float)0;
        result[5] += (float)0.00017760412041559366;
        result[6] += (float)0.0007104164816623747;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += (float)0.5995316159250585;
        result[1] += (float)0;
        result[2] += (float)0.02576112412177986;
        result[3] += (float)0.3747072599531616;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0010741138560687433;
        result[1] += (float)0.017185821697099892;
        result[2] += (float)0;
        result[3] += (float)0.9817400644468314;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.047619047619047616;
        result[2] += (float)0;
        result[3] += (float)0.9523809523809523;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += (float)0.9986199109215231;
        result[1] += (float)0;
        result[2] += (float)0.0011918951132300357;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00018819396524684775;
      } else {
        result[0] += (float)0.9999019703950593;
        result[1] += (float)0;
        result[2] += (float)9.802960494069208e-05;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445ae000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += (float)0.016010111649462817;
        result[1] += (float)0.007583737097113966;
        result[2] += (float)0.01622077101327154;
        result[3] += (float)0.7874447019170002;
        result[4] += (float)0.1710554034126817;
        result[5] += (float)0.0016852749104697704;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.005173305742369374;
        result[2] += (float)0;
        result[3] += (float)0.1314019658561821;
        result[4] += (float)0.8634247284014486;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += (float)0.5454069158225637;
        result[1] += (float)0;
        result[2] += (float)0.0008732099196646874;
        result[3] += (float)0.45319594830597276;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0005239259517988125;
      } else {
        result[0] += (float)0.9707011517478279;
        result[1] += (float)0.0006061830672863204;
        result[2] += (float)0.006668013740149525;
        result[3] += (float)0.021216407355021217;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0008082440897150939;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += (float)0.49641226353555123;
        result[1] += (float)0;
        result[2] += (float)0.014350945857795174;
        result[3] += (float)0.48923679060665365;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.14123159303882196;
        result[1] += (float)0.008701472556894244;
        result[2] += (float)0.0006693440428380187;
        result[3] += (float)0.8493975903614458;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += (float)0.10663641520136131;
        result[1] += (float)0.0011344299489506524;
        result[2] += (float)0.00737379466817924;
        result[3] += (float)0.8201928530913216;
        result[4] += (float)0.06352807714123652;
        result[5] += (float)0.0011344299489506524;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9928026330066188;
        result[1] += (float)0.0006510181200043402;
        result[2] += (float)0.0019168866866794462;
        result[3] += (float)0.004448623820029658;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00018083836666787229;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += (float)0.3907791765906771;
        result[1] += (float)0;
        result[2] += (float)0.004423273222184417;
        result[3] += (float)0.4826471588975842;
        result[4] += (float)0.12215039128955427;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9304635761589404;
        result[1] += (float)0;
        result[2] += (float)0.00358719646799117;
        result[3] += (float)0.061258278145695365;
        result[4] += (float)0.0030353200883002206;
        result[5] += (float)0.0013796909492273732;
        result[6] += (float)0.0002759381898454746;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += (float)0.012987012987012988;
        result[1] += (float)0.025974025974025976;
        result[2] += (float)0;
        result[3] += (float)0.961038961038961;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.001379310344827586;
        result[1] += (float)0.011034482758620689;
        result[2] += (float)0;
        result[3] += (float)0.001379310344827586;
        result[4] += (float)0.9862068965517241;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += (float)0.9612983770287141;
        result[1] += (float)0;
        result[2] += (float)0.03745318352059925;
        result[3] += (float)0.0012484394506866417;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.04920739762219287;
        result[1] += (float)0.0019815059445178335;
        result[2] += (float)0.0009907529722589167;
        result[3] += (float)0.6363936591809776;
        result[4] += (float)0.3114266842800528;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += (float)0.9913836796756209;
        result[1] += (float)0;
        result[2] += (float)0.008109477952356817;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0005068423720223011;
      } else {
        result[0] += (float)0.9995890185763604;
        result[1] += (float)0;
        result[2] += (float)0.0004109814236396515;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += (float)0.3767377201112141;
        result[1] += (float)0.0028962001853568117;
        result[2] += (float)0.005560704355885079;
        result[3] += (float)0.5245597775718258;
        result[4] += (float)0.0883920296570899;
        result[5] += (float)0.0008109360518999073;
        result[6] += (float)0.0010426320667284523;
      } else {
        result[0] += (float)0.9623601220752798;
        result[1] += (float)0;
        result[2] += (float)0.006103763987792472;
        result[3] += (float)0.03128179043743642;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.000254323499491353;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += (float)0.9809951294050234;
        result[1] += (float)0.00023875465571578645;
        result[2] += (float)0.0007640148982905167;
        result[3] += (float)0.01742908986725241;
        result[4] += (float)0.000334256518002101;
        result[5] += (float)9.550186228631458e-05;
        result[6] += (float)0.00014325279342947188;
      } else {
        result[0] += (float)0.0425531914893617;
        result[1] += (float)0;
        result[2] += (float)0.024113475177304965;
        result[3] += (float)0;
        result[4] += (float)0.9333333333333333;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += (float)0.6512833642706267;
        result[1] += (float)0.0008321065096332332;
        result[2] += (float)0.0040325161620687455;
        result[3] += (float)0.32765794021634775;
        result[4] += (float)0.015361966331690458;
        result[5] += (float)0.0003200409652435512;
        result[6] += (float)0.000512065544389682;
      } else {
        result[0] += (float)0.9818579918673757;
        result[1] += (float)0;
        result[2] += (float)0.011260556771973726;
        result[3] += (float)0.0006255864873318737;
        result[4] += (float)0.003753518923991242;
        result[5] += (float)0.0015639662183296842;
        result[6] += (float)0.0009383797309978105;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += (float)0.1311813186813187;
        result[1] += (float)0.017857142857142856;
        result[2] += (float)0.006868131868131868;
        result[3] += (float)0.8440934065934066;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9991997154543838;
        result[1] += (float)0;
        result[2] += (float)0.0007113640405477503;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)8.892050506846879e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += (float)0.20616528202885875;
        result[1] += (float)0.004372540445999125;
        result[2] += (float)0.006558810668998688;
        result[3] += (float)0.4304766069086139;
        result[4] += (float)0.35242675994752953;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7902295601040372;
        result[1] += (float)0.001130837950921633;
        result[2] += (float)0.0067850277055297985;
        result[3] += (float)0.18353499943458104;
        result[4] += (float)0.01707565305891666;
        result[5] += (float)0.00033925138527648996;
        result[6] += (float)0.0009046703607373065;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.002592352559948153;
        result[2] += (float)0;
        result[3] += (float)0.9954633830200907;
        result[4] += (float)0.0019442644199611147;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.043795620437956206;
        result[3] += (float)0;
        result[4] += (float)0.9547445255474453;
        result[5] += (float)0.00145985401459854;
        result[6] += (float)0;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  result[6] /= 30;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  result[2] += (float)0;
  result[3] += (float)0;
  result[4] += (float)0;
  result[5] += (float)0;
  result[6] += (float)0;
  
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_3/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
