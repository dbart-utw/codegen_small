
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004784688995215311;
          result[4] += 0.9952153110047847;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0003184713375796178;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9971337579617834;
          result[4] += 0.0012738853503184713;
          result[5] += 0.0012738853503184713;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0.8918918918918919;
          result[1] += 0.10810810810810811;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0.9988500459981601;
          result[1] += 0;
          result[2] += 0.0009199632014719411;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022999080036798528;
        } else {
          result[0] += 0.9971139971139971;
          result[1] += 0;
          result[2] += 0.002886002886002886;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9598840019333011;
          result[1] += 0.0008458192363460609;
          result[2] += 0.008941517641372644;
          result[3] += 0.029603673272112132;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007249879168680521;
        } else {
          result[0] += 0;
          result[1] += 0.0014684287812041115;
          result[2] += 0.003303964757709251;
          result[3] += 0.9952276064610867;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.403921568627451;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.596078431372549;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006493506493506494;
          result[1] += 0.01948051948051948;
          result[2] += 0;
          result[3] += 0.974025974025974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0.00031416902293433867;
          result[1] += 0.00031416902293433867;
          result[2] += 0;
          result[3] += 0.9971724787935909;
          result[4] += 0.0012566760917373547;
          result[5] += 0.000942507068803016;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0.8205128205128206;
          result[1] += 0.07692307692307694;
          result[2] += 0.0683760683760684;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0341880341880342;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.992467043314501;
          result[1] += 0;
          result[2] += 0.003766478342749529;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003766478342749529;
        } else {
          result[0] += 0.9993279569892473;
          result[1] += 0;
          result[2] += 0.0006720430107526882;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0.9992222942320156;
          result[1] += 0;
          result[2] += 0.0007777057679844458;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999367728882145;
          result[1] += 0;
          result[2] += 6.322711178553364e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0.988427143608627;
          result[1] += 0.003156233561283535;
          result[2] += 0.007364544976328248;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010520778537611783;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009720176730486009;
          result[3] += 0.990279823269514;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.8348017621145375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16519823788546256;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9872329338196978;
          result[1] += 0;
          result[2] += 0.007556018759770714;
          result[3] += 0.004429390307451798;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000781657113079729;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0.99863257213182;
          result[1] += 0;
          result[2] += 0.0013674278681799535;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8648648648648649;
          result[1] += 0;
          result[2] += 0.13513513513513514;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9877300613496932;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.012269938650306749;
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
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9983739837398374;
          result[5] += 0.0016260162601626016;
          result[6] += 0;
        } else {
          result[0] += 0.014722536806342015;
          result[1] += 0.005096262740656852;
          result[2] += 0.019818799546998868;
          result[3] += 0.9597961494903737;
          result[4] += 0;
          result[5] += 0.0005662514156285391;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9684473601999375;
          result[1] += 0;
          result[2] += 0.005935645110902843;
          result[3] += 0.023117775695095284;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002499218994064355;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0009940357852882703;
          result[3] += 0.9990059642147118;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.027097253155159613;
          result[1] += 0.010393466963622866;
          result[2] += 0.014105419450631032;
          result[3] += 0.7694877505567929;
          result[4] += 0.17743132887899035;
          result[5] += 0.0014847809948032665;
          result[6] += 0;
        } else {
          result[0] += 0.7454113924050633;
          result[1] += 0;
          result[2] += 0.004430379746835443;
          result[3] += 0.24936708860759493;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007911392405063291;
        }
      } else {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9916926272066459;
          result[1] += 0;
          result[2] += 0.006230529595015576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020768431983385254;
        } else {
          result[0] += 0.9995023390066686;
          result[1] += 0;
          result[2] += 0.0004976609933313427;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.8908212560386474;
          result[1] += 0.0027375201288244765;
          result[2] += 0.0017713365539452496;
          result[3] += 0.10386473429951691;
          result[4] += 0;
          result[5] += 0.0004830917874396135;
          result[6] += 0.00032206119162640903;
        } else {
          result[0] += 0.10882297373890043;
          result[1] += 0.0030228603816361234;
          result[2] += 0.007557150954090308;
          result[3] += 0.5543170224825241;
          result[4] += 0.32609106366899676;
          result[5] += 0.0001889287738522577;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8636363636363636;
          result[4] += 0.09090909090909091;
          result[5] += 0.045454545454545456;
          result[6] += 0;
        } else {
          result[0] += 0.9829295154185023;
          result[1] += 0;
          result[2] += 0.01156387665198238;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00550660792951542;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0.0009770395701025891;
          result[2] += 0;
          result[3] += 0.9975574010747436;
          result[4] += 0;
          result[5] += 0.0014655593551538837;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
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
          result[2] += 0.8387096774193549;
          result[3] += 0;
          result[4] += 0.16129032258064516;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.9836935912021236;
          result[1] += 0;
          result[2] += 0.0006320313487548982;
          result[3] += 0.015547971179370497;
          result[4] += 0;
          result[5] += 0.00012640626975097966;
          result[6] += 0;
        } else {
          result[0] += 0.9888730215399264;
          result[1] += 0.0008925383791503037;
          result[2] += 0.0008925383791503037;
          result[3] += 0.009222896584553138;
          result[4] += 5.950255861002025e-05;
          result[5] += 5.950255861002025e-05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.9970267591674926;
          result[1] += 0;
          result[2] += 0.0013214403700033035;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016518004625041295;
        } else {
          result[0] += 0.6571180555555556;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3428819444444444;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.001195219123505976;
          result[2] += 0.011553784860557768;
          result[3] += 0.9605577689243028;
          result[4] += 0.026294820717131476;
          result[5] += 0.00039840637450199205;
          result[6] += 0;
        } else {
          result[0] += 0.9662162162162162;
          result[1] += 0;
          result[2] += 0.033783783783783786;
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
          result[0] += 0.009036144578313253;
          result[1] += 0.02710843373493976;
          result[2] += 0;
          result[3] += 0.963855421686747;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9858757062146893;
          result[4] += 0.008474576271186442;
          result[5] += 0.005649717514124295;
          result[6] += 0;
        } else {
          result[0] += 0.9870310328855952;
          result[1] += 0;
          result[2] += 0.009263547938860585;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003705419175544234;
        }
      } else {
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
          result[2] += 0.0392156862745098;
          result[3] += 0;
          result[4] += 0.9607843137254902;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 0.0026367831245880024;
          result[2] += 0;
          result[3] += 0.994726433750824;
          result[4] += 0;
          result[5] += 0.0026367831245880024;
          result[6] += 0;
        } else {
          result[0] += 0.9525065963060686;
          result[1] += 0;
          result[2] += 0.047493403693931395;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9998243765367053;
          result[1] += 0;
          result[2] += 0.00017562346329469617;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8373983739837398;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16260162601626016;
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
          result[0] += 0.6999769744416302;
          result[1] += 0;
          result[2] += 0.01036150126640571;
          result[3] += 0.2882799907897767;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001381533502187428;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.005747126436781609;
          result[1] += 0.008210180623973728;
          result[2] += 0.013957307060755337;
          result[3] += 0.9720853858784894;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9958071278825996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0041928721174004195;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9837348577650742;
          result[1] += 0.0002041649652919559;
          result[2] += 0.0005444399074452157;
          result[3] += 0.015108207431604737;
          result[4] += 0.0003402749421532598;
          result[5] += 0;
          result[6] += 6.805498843065197e-05;
        } else {
          result[0] += 0.7526841910403554;
          result[1] += 0.001295816364309515;
          result[2] += 0.004165124028137727;
          result[3] += 0.22528693076638281;
          result[4] += 0.015734912995186968;
          result[5] += 0.0002776749352091818;
          result[6] += 0.0005553498704183636;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4627fe00))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0.9822784810126582;
          result[1] += 0;
          result[2] += 0.017721518987341773;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9967469095640858;
          result[1] += 0;
          result[2] += 0.0032530904359141183;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9994680379466264;
          result[1] += 0;
          result[2] += 0.0005319620533735261;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.024583866837387964;
          result[1] += 0.005121638924455826;
          result[2] += 0.013060179257362355;
          result[3] += 0.9387964148527529;
          result[4] += 0.016901408450704224;
          result[5] += 0.0015364916773367477;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.9945252352437982;
          result[1] += 0;
          result[2] += 0.00444824636441403;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010265183917878532;
        } else {
          result[0] += 0.41506240744658346;
          result[1] += 0;
          result[2] += 0.0052887666596149775;
          result[3] += 0.5792257245610324;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004231013327691982;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9960159362549801;
          result[4] += 0.00398406374501992;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011673151750972763;
          result[1] += 0.0311284046692607;
          result[2] += 0;
          result[3] += 0.011673151750972763;
          result[4] += 0.9455252918287937;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.3155737704918033;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12704918032786885;
          result[4] += 0.5573770491803278;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011566771819137747;
          result[3] += 0.8843322818086223;
          result[4] += 0.0998948475289169;
          result[5] += 0.004206098843322817;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.17967781908302355;
          result[1] += 0.0006195786864931846;
          result[2] += 0;
          result[3] += 0.8166047087980174;
          result[4] += 0.0024783147459727386;
          result[5] += 0.0006195786864931846;
          result[6] += 0;
        } else {
          result[0] += 0.002967359050445104;
          result[1] += 0;
          result[2] += 0.005934718100890208;
          result[3] += 0;
          result[4] += 0.9910979228486647;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9883221707023871;
          result[1] += 0.000686931135153701;
          result[2] += 0.00244719216898506;
          result[3] += 0.008329040013738624;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021466597973553153;
        } else {
          result[0] += 0.17712398679075353;
          result[1] += 0;
          result[2] += 0.004202942059441609;
          result[3] += 0.8186730711498048;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9991780371527207;
          result[1] += 0;
          result[2] += 0.000821962847279303;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9688243693479296;
          result[1] += 0;
          result[2] += 0.006187529747739172;
          result[3] += 0.023322227510709188;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016658733936220848;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0.002012072434607646;
          result[2] += 0;
          result[3] += 0.9979879275653923;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.970873786407767;
          result[1] += 0.02912621359223301;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43448000))) ) ) {
          result[0] += 0;
          result[1] += 0.016722408026755852;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9832775919732442;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0.3333333333333333;
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
          result[0] += 0.9024390243902439;
          result[1] += 0;
          result[2] += 0.0975609756097561;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012711864406779662;
          result[3] += 0.9872881355932204;
          result[4] += 0;
          result[5] += 0;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9935414424111948;
          result[1] += 0;
          result[2] += 0.006458557588805167;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995090819833088;
          result[1] += 0;
          result[2] += 0.0004909180166912126;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.862652972027972;
          result[1] += 0.0013111888111888112;
          result[2] += 0.006446678321678322;
          result[3] += 0.1281687062937063;
          result[4] += 0;
          result[5] += 0.00021853146853146853;
          result[6] += 0.001201923076923077;
        } else {
          result[0] += 0;
          result[1] += 0.0008068854222700376;
          result[2] += 0.006186121570736955;
          result[3] += 0.8138784292630447;
          result[4] += 0.17859064012910167;
          result[5] += 0.0005379236148466917;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0014164305949008501;
          result[2] += 0.010859301227573184;
          result[3] += 0.9844192634560908;
          result[4] += 0.0018885741265344668;
          result[5] += 0.0014164305949008501;
          result[6] += 0;
        } else {
          result[0] += 0.994413407821229;
          result[1] += 0;
          result[2] += 0.00558659217877095;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0.015444015444015444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9845559845559846;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004914004914004914;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.995085995085995;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2072072072072072;
          result[4] += 0.7927927927927928;
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9971515768056969;
          result[1] += 0;
          result[2] += 0.0028484231943031535;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.009290953545232275;
          result[1] += 0.0029339853300733502;
          result[2] += 0.009290953545232275;
          result[3] += 0.7261613691931541;
          result[4] += 0.25085574572127145;
          result[5] += 0.0014669926650366751;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5202702702702703;
          result[4] += 0.4797297297297297;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.0310586176727909;
          result[1] += 0.010061242344706912;
          result[2] += 0.005686789151356081;
          result[3] += 0.8617672790901137;
          result[4] += 0.09011373578302712;
          result[5] += 0.0013123359580052493;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011825192802056555;
          result[3] += 0.1588688946015424;
          result[4] += 0.8293059125964011;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.983635671698592;
          result[1] += 0;
          result[2] += 0.004693644551566663;
          result[3] += 0.01040213116833693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012685525815045037;
        } else {
          result[0] += 0.8471337579617835;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15286624203821655;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0025210084033613447;
          result[2] += 0;
          result[3] += 0.9966386554621849;
          result[4] += 0.0008403361344537816;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9868891537544696;
          result[1] += 0;
          result[2] += 0.013110846245530394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04105571847507332;
          result[3] += 0.9310850439882699;
          result[4] += 0.027859237536656895;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5765027322404371;
          result[4] += 0.42349726775956287;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014613778705636743;
          result[2] += 0;
          result[3] += 0.10647181628392484;
          result[4] += 0.8789144050104384;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9958391123439667;
          result[1] += 0;
          result[2] += 0.003236245954692557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009246417013407304;
        } else {
          result[0] += 0.9997101209209872;
          result[1] += 0;
          result[2] += 0.00028987907901275467;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0.6775021385799829;
          result[1] += 0;
          result[2] += 0.008982035928143712;
          result[3] += 0.2946963216424294;
          result[4] += 0.018819503849443968;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8599631922369082;
          result[1] += 0.0016730801405387319;
          result[2] += 0.005186548435670069;
          result[3] += 0.1298310189058056;
          result[4] += 0.0006692320562154927;
          result[5] += 0.001003848084323239;
          result[6] += 0.0016730801405387319;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006680026720106881;
          result[2] += 0;
          result[3] += 0.9966599866399466;
          result[4] += 0.002004008016032064;
          result[5] += 0.0006680026720106881;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05150214592274678;
          result[3] += 0;
          result[4] += 0.9484978540772532;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.001243008079552517;
          result[1] += 0.00031075201988812925;
          result[2] += 0;
          result[3] += 0.9978247358607831;
          result[4] += 0;
          result[5] += 0.0006215040397762585;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.21428571428571427;
          result[2] += 0.42857142857142855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.35714285714285715;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9857723577235773;
          result[1] += 0;
          result[2] += 0.010162601626016262;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004065040650406505;
        } else {
          result[0] += 0.9986178299930891;
          result[1] += 0;
          result[2] += 0.00138217000691085;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.9993046702978329;
          result[1] += 0;
          result[2] += 0.0006953297021671109;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0.41371158392434987;
          result[1] += 0.0070921985815602835;
          result[2] += 0;
          result[3] += 0.5791962174940898;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9896373056994818;
          result[1] += 0.0026800071466857246;
          result[2] += 0.0066106842951581205;
          result[3] += 0.0005360014293371449;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005360014293371449;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.251090199678678;
          result[1] += 0;
          result[2] += 0.001606610052788616;
          result[3] += 0.7473031902685334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9624252775405637;
          result[1] += 0;
          result[2] += 0.027327070879590097;
          result[3] += 0.004269854824935953;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0059777967549103335;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 0.9944598337950139;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00554016620498615;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9844846980334355;
          result[1] += 0.000620612078662581;
          result[2] += 0.0013575889220743959;
          result[3] += 0.01330437143632908;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00023272952949846787;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9929810074318745;
          result[1] += 0;
          result[2] += 0.005780346820809248;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012386457473162675;
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
          result[2] += 0.009587020648967551;
          result[3] += 0.9745575221238938;
          result[4] += 0.015855457227138645;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0.38713025428126624;
          result[1] += 0.0041515308770108976;
          result[2] += 0.013233004670472236;
          result[3] += 0.5954852101712507;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0026761819803746653;
          result[3] += 0.9901873327386262;
          result[4] += 0;
          result[5] += 0.007136485280999108;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0.9894736842105263;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010526315789473684;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0013623978201634877;
          result[2] += 0;
          result[3] += 0.9945504087193461;
          result[4] += 0;
          result[5] += 0.004087193460490463;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.6491228070175439;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3508771929824561;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9968544363294526;
          result[1] += 0.0006146503724058139;
          result[2] += 0.0012654566490707933;
          result[3] += 0.0010485212235158002;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021693542555499312;
        }
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.4477296726504752;
          result[1] += 0;
          result[2] += 0.028511087645195353;
          result[3] += 0.5216473072861668;
          result[4] += 0;
          result[5] += 0.0021119324181626186;
          result[6] += 0;
        } else {
          result[0] += 0.0830367734282325;
          result[1] += 0.007512850929221036;
          result[2] += 0.014234875444839857;
          result[3] += 0.8952155001977066;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.006238532110091743;
          result[1] += 0;
          result[2] += 0.006238532110091743;
          result[3] += 0.9875229357798165;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004373177842565598;
          result[3] += 0;
          result[4] += 0.9956268221574344;
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
          result[0] += 0.9104991394148019;
          result[1] += 0;
          result[2] += 0.00559380378657487;
          result[3] += 0.07874354561101547;
          result[4] += 0.0030120481927710836;
          result[5] += 0.0008605851979345953;
          result[6] += 0.0012908777969018932;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9967459833231646;
          result[1] += 0;
          result[2] += 0.003050640634533252;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002033760423022168;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.004672897196261682;
          result[1] += 0.009345794392523364;
          result[2] += 0;
          result[3] += 0.9766355140186916;
          result[4] += 0.009345794392523364;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8421746293245469;
          result[1] += 0.0042833607907743;
          result[2] += 0.0042833607907743;
          result[3] += 0.1456342668863262;
          result[4] += 0.0009884678747940692;
          result[5] += 0.0016474464579901153;
          result[6] += 0.0009884678747940692;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.25952380952380955;
          result[1] += 0.006349206349206349;
          result[2] += 0;
          result[3] += 0.665079365079365;
          result[4] += 0.06904761904761905;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5704675412041709;
          result[1] += 0;
          result[2] += 0.005718129835183316;
          result[3] += 0.4238143289606458;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5855303494788473;
          result[1] += 0.0061312078479460455;
          result[2] += 0.01900674432863274;
          result[3] += 0.3887185775597793;
          result[4] += 0;
          result[5] += 0.0006131207847946045;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.2774644710128581;
          result[1] += 0;
          result[2] += 0.0022558087074216106;
          result[3] += 0.7202797202797203;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5868766404199475;
          result[1] += 0;
          result[2] += 0.02204724409448819;
          result[3] += 0.0031496062992125984;
          result[4] += 0.3826771653543307;
          result[5] += 0.0010498687664041995;
          result[6] += 0.004199475065616798;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9994295493439818;
          result[5] += 0.0005704506560182544;
          result[6] += 0;
        } else {
          result[0] += 0.000628140703517588;
          result[1] += 0.004082914572864322;
          result[2] += 0.004082914572864322;
          result[3] += 0.9880653266331658;
          result[4] += 0;
          result[5] += 0.00314070351758794;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9432432432432433;
          result[1] += 0;
          result[2] += 0.03873873873873874;
          result[3] += 0.018018018018018018;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.998211557807668;
          result[1] += 0.0003353329110622602;
          result[2] += 0.0013040724319087896;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014903684936100453;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9578313253012049;
          result[1] += 0.04216867469879518;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.999681224099458;
          result[4] += 0;
          result[5] += 0.000318775900541919;
          result[6] += 0;
        } else {
          result[0] += 0.9573820395738204;
          result[1] += 0;
          result[2] += 0.0426179604261796;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9831223628691983;
          result[1] += 0;
          result[2] += 0.010247136829415311;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.006630500301386378;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0011111111111111113;
          result[2] += 0.007777777777777778;
          result[3] += 0.9905555555555556;
          result[4] += 0.0005555555555555557;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05019305019305019;
          result[2] += 0;
          result[3] += 0.007722007722007722;
          result[4] += 0.9420849420849421;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0.967391304347826;
          result[1] += 0.03260869565217391;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x419c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.345679012345679;
          result[1] += 0;
          result[2] += 0.033950617283950615;
          result[3] += 0.6203703703703703;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.9998980943646184;
          result[1] += 0;
          result[2] += 0.00010190563538163661;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990869803396433;
          result[1] += 0;
          result[2] += 0.0008521516829995739;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.086797735711242e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7936117936117936;
          result[1] += 0.0012285012285012285;
          result[2] += 0.00569577842305115;
          result[3] += 0.17980790708063435;
          result[4] += 0.017980790708063434;
          result[5] += 0.0005584096493187402;
          result[6] += 0.0011168192986374804;
        } else {
          result[0] += 0;
          result[1] += 0.000975609756097561;
          result[2] += 0.006829268292682927;
          result[3] += 0.9882926829268293;
          result[4] += 0.0022764227642276423;
          result[5] += 0.0016260162601626016;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43070000))) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.2;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9993608181527645;
          result[4] += 0;
          result[5] += 0.0006391818472355385;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
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
          result[0] += 0.9691629955947136;
          result[1] += 0.030837004405286344;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9970215393556354;
          result[1] += 0.000726453815698667;
          result[2] += 0.0018161345392466673;
          result[3] += 0.00014529076313973339;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00029058152627946677;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.18695203713254255;
          result[1] += 0;
          result[2] += 0.0020629190304280558;
          result[3] += 0.8109850438370294;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9967914438502674;
          result[1] += 0;
          result[2] += 0.0032085561497326204;
          result[3] += 0;
          result[4] += 0;
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
          result[0] += 0.9832549941245593;
          result[1] += 0;
          result[2] += 0.012925969447708578;
          result[3] += 0.0008813160987074031;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002937720329024677;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14444444444444443;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8555555555555555;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9722222222222222;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08322744599745871;
          result[1] += 0.005082592121982211;
          result[2] += 0.0012706480304955528;
          result[3] += 0.9104193138500636;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0.10256410256410256;
          result[2] += 0;
          result[3] += 0.8717948717948718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.10261080752884032;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8931390406800243;
          result[4] += 0.0024286581663630845;
          result[5] += 0.0018214936247723133;
          result[6] += 0;
        } else {
          result[0] += 0.2272727272727273;
          result[1] += 0.004545454545454546;
          result[2] += 0.040909090909090916;
          result[3] += 0.009090909090909092;
          result[4] += 0.7000000000000001;
          result[5] += 0.018181818181818184;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.6037037037037037;
          result[1] += 0;
          result[2] += 0.007407407407407408;
          result[3] += 0.3888888888888889;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966711782565751;
          result[1] += 0.0004755459633463803;
          result[2] += 0.00157295972491495;
          result[3] += 0.0010242528441306651;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002560632110326663;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.5435445611657065;
          result[1] += 0;
          result[2] += 0.01592680447305998;
          result[3] += 0.43849542527956625;
          result[4] += 0.0010166045408336157;
          result[5] += 0.00033886818027787193;
          result[6] += 0.0006777363605557439;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.697085357390701;
          result[1] += 0;
          result[2] += 0.0006939625260235948;
          result[3] += 0.30187369882026377;
          result[4] += 0.0001734906315058987;
          result[5] += 0;
          result[6] += 0.0001734906315058987;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0.000927070457354759;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9981458590852905;
          result[4] += 0.0006180469715698393;
          result[5] += 0.00030902348578491963;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013513513513513514;
          result[4] += 0.9864864864864865;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0.00440251572327044;
          result[2] += 0.006918238993710692;
          result[3] += 0;
          result[4] += 0.9861635220125786;
          result[5] += 0.0025157232704402514;
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
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
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
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0.2857142857142857;
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
          result[0] += 0.9440559440559441;
          result[1] += 0;
          result[2] += 0.055944055944055944;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9988224519167866;
          result[1] += 0;
          result[2] += 0.0009812900693444981;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019625801386889964;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9717075613420131;
          result[1] += 0.0010015022533800702;
          result[2] += 0.006760140210315474;
          result[3] += 0.019404106159238863;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011266900350525792;
        } else {
          result[0] += 0.27319587628865977;
          result[1] += 0.006443298969072165;
          result[2] += 0.030927835051546393;
          result[3] += 0.6894329896907216;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0007476635514018691;
          result[2] += 0;
          result[3] += 0.9992523364485981;
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
          result[0] += 0.9683544303797469;
          result[1] += 0;
          result[2] += 0.03164556962025317;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.9994680285136717;
          result[1] += 0;
          result[2] += 0.0005319714863283328;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999397372544293;
          result[1] += 0;
          result[2] += 6.02627455706882e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9938587512794268;
          result[5] += 0.006141248720573183;
          result[6] += 0;
        } else {
          result[0] += 0.029179539993134225;
          result[1] += 0.005835907998626845;
          result[2] += 0.018537590113285273;
          result[3] += 0.9433573635427395;
          result[4] += 0;
          result[5] += 0.003089598352214212;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9834625322997416;
          result[1] += 0;
          result[2] += 0.00516795865633075;
          result[3] += 0.009560723514211887;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018087855297157622;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.37606837606837606;
          result[1] += 0;
          result[2] += 0.037037037037037035;
          result[3] += 0.5868945868945868;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.15223880597014924;
          result[1] += 0.004975124378109453;
          result[2] += 0;
          result[3] += 0.8427860696517413;
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
          result[0] += 0.005555555555555556;
          result[1] += 0.027777777777777776;
          result[2] += 0;
          result[3] += 0.9666666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006602336211274758;
          result[1] += 0.004062976130015236;
          result[2] += 0.006094464195022855;
          result[3] += 0.9832402234636871;
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
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42640000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9929577464788732;
          result[5] += 0.007042253521126761;
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
          result[1] += 0.0006480881399870382;
          result[2] += 0.009073233959818535;
          result[3] += 0.9883344134802333;
          result[4] += 0;
          result[5] += 0.0019442644199611147;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.996302606300069;
          result[1] += 0.0006524812411643166;
          result[2] += 0.0014499583136984814;
          result[3] += 0.0013412114401710952;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002537427048972343;
        } else {
          result[0] += 0.15827338129496402;
          result[1] += 0;
          result[2] += 0.10071942446043165;
          result[3] += 0.7410071942446043;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.44164312106063897;
          result[1] += 0;
          result[2] += 0.0041295370571614864;
          result[3] += 0.5542273418821996;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8966871165644171;
          result[1] += 0;
          result[2] += 0.0034355828220858898;
          result[3] += 0.09914110429447853;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000736196319018405;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009254218835057159;
          result[1] += 0.001633097441480675;
          result[2] += 0.008165487207403375;
          result[3] += 0.9809471965160588;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9518072289156626;
          result[1] += 0;
          result[2] += 0.04819277108433735;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41840000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0064516129032258064;
          result[1] += 0.00967741935483871;
          result[2] += 0;
          result[3] += 0.9838709677419355;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.543010752688172;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4543010752688172;
          result[4] += 0;
          result[5] += 0.002688172043010753;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0.0007974481658692186;
          result[2] += 0.006379585326953749;
          result[3] += 0.9864433811802233;
          result[4] += 0.002392344497607656;
          result[5] += 0.003987240829346093;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1794871794871795;
          result[3] += 0;
          result[4] += 0.8205128205128205;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0.9971141682479444;
          result[1] += 0.0007511068943706516;
          result[2] += 0.0012650221378874133;
          result[3] += 0.0007511068943706516;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011859582542694499;
        } else {
          result[0] += 0.9451612903225807;
          result[1] += 0;
          result[2] += 0.005990783410138249;
          result[3] += 0.047465437788018434;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013824884792626728;
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
          result[0] += 0.4061887974931453;
          result[1] += 0;
          result[2] += 0.005679592636114375;
          result[3] += 0.5865648256952605;
          result[4] += 0;
          result[5] += 0.00019584802193497845;
          result[6] += 0.0013709361535448493;
        }
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.06556762832521544;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9325590108654926;
          result[4] += 0;
          result[5] += 0.0018733608092918695;
          result[6] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.1625;
          result[2] += 0.325;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0125;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.992633517495396;
          result[1] += 0;
          result[2] += 0.007366482504604052;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
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
          result[0] += 0.985945945945946;
          result[1] += 0;
          result[2] += 0.012972972972972972;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001081081081081081;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.989247311827957;
          result[1] += 0;
          result[2] += 0.010752688172043012;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999137782376272;
          result[1] += 0;
          result[2] += 8.62217623728229e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.893128390596745;
          result[1] += 0.0034358047016274863;
          result[2] += 0.013381555153707052;
          result[3] += 0.0887884267631103;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012658227848101266;
        } else {
          result[0] += 0.9419588875453446;
          result[1] += 0;
          result[2] += 0.002116082224909311;
          result[3] += 0.05562273276904474;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003022974607013301;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0.6363636363636364;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0021969974368363236;
          result[3] += 0.9978030025631637;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
          result[0] += 0.9621212121212122;
          result[1] += 0;
          result[2] += 0.03787878787878788;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9960000000000001;
          result[1] += 0;
          result[2] += 0.0035000000000000005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005000000000000001;
        } else {
          result[0] += 0.999915743354257;
          result[1] += 0;
          result[2] += 8.425664574293298e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.020687727145652784;
          result[1] += 0.004473022085546548;
          result[2] += 0.005311713726586526;
          result[3] += 0.9667318982387476;
          result[4] += 0.002236511042773274;
          result[5] += 0.0005591277606933185;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024177949709864602;
          result[3] += 0.24661508704061896;
          result[4] += 0.7282398452611218;
          result[5] += 0.0009671179883945841;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0.05017921146953405;
          result[2] += 0;
          result[3] += 0.2222222222222222;
          result[4] += 0.7275985663082437;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004594180704441042;
          result[2] += 0;
          result[3] += 0.045941807044410414;
          result[4] += 0.9494640122511485;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9946338930240609;
          result[1] += 0;
          result[2] += 0.003462004500605851;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019041024753332178;
        } else {
          result[0] += 0.9414225941422594;
          result[1] += 0;
          result[2] += 0.058577405857740586;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.0065535851966075555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9934464148033925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9459586466165414;
          result[1] += 0;
          result[2] += 0.007048872180451127;
          result[3] += 0.044172932330827065;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002819548872180451;
        }
      }
    }
  }
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
          result[0] += 0.9517241379310345;
          result[1] += 0;
          result[2] += 0.04827586206896552;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9953917050691244;
          result[1] += 0;
          result[2] += 0.0035842293906810036;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010240655401945725;
        } else {
          result[0] += 0.9998329365576578;
          result[1] += 0;
          result[2] += 0.00016706344234222945;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
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
          result[0] += 0.023413258110014105;
          result[1] += 0.007616361071932299;
          result[2] += 0.009026798307475317;
          result[3] += 0.9574047954866008;
          result[4] += 0;
          result[5] += 0.002538787023977433;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.8397435897435898;
          result[1] += 0;
          result[2] += 0.008547008547008548;
          result[3] += 0.14957264957264957;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002136752136752137;
        } else {
          result[0] += 0.9865842430619493;
          result[1] += 0;
          result[2] += 0.0059187162961988685;
          result[3] += 0.0060502433250032885;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014467973168486123;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985443959243085;
          result[5] += 0.001455604075691412;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9166666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08333333333333333;
          result[6] += 0;
        }
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
          result[1] += 0.000946073793755913;
          result[2] += 0.005991800693787449;
          result[3] += 0.9905392620624409;
          result[4] += 0;
          result[5] += 0.002522863450015768;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0;
          result[1] += 0.06827309236947791;
          result[2] += 0;
          result[3] += 0.21285140562248997;
          result[4] += 0.7188755020080321;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0;
          result[1] += 0.0032733224222585926;
          result[2] += 0;
          result[3] += 0.03436988543371522;
          result[4] += 0.9623567921440261;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9965119398980413;
          result[1] += 0;
          result[2] += 0.00348806010195868;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9712894769691673;
          result[1] += 0.0021220821370615405;
          result[2] += 0.005117962801148421;
          result[3] += 0.019722881038571963;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017475970540506804;
        } else {
          result[0] += 0.2557200538358008;
          result[1] += 0.004037685060565276;
          result[2] += 0.02288021534320323;
          result[3] += 0.7173620457604307;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0010589481115425344;
          result[2] += 0;
          result[3] += 0.9989410518884575;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0.9851116625310173;
          result[1] += 0;
          result[2] += 0.01488833746898263;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9988331388564761;
          result[1] += 0;
          result[2] += 0.0011668611435239206;
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
          result[0] += 0.9990688049663735;
          result[1] += 0;
          result[2] += 0.0009311950336264873;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984894259818731;
          result[5] += 0.0015105740181268882;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01;
          result[2] += 0;
          result[3] += 0.99;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.6624416277518346;
          result[1] += 0.0008338892595063375;
          result[2] += 0.007421614409606404;
          result[3] += 0.32780186791194127;
          result[4] += 0;
          result[5] += 0.0002501667778519013;
          result[6] += 0.0012508338892595063;
        } else {
          result[0] += 0.07912524850894632;
          result[1] += 0.002783300198807157;
          result[2] += 0.019880715705765408;
          result[3] += 0.8723658051689861;
          result[4] += 0.025447316103379723;
          result[5] += 0.00039761431411530816;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9918032786885246;
          result[4] += 0.00819672131147541;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0076045627376425855;
          result[1] += 0.034220532319391636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9581749049429658;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05583756345177665;
          result[4] += 0.9441624365482234;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01499531396438613;
          result[4] += 0.9850046860356139;
          result[5] += 0;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9849624060150376;
          result[1] += 0;
          result[2] += 0.013157894736842105;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018796992481203006;
        } else {
          result[0] += 0.9975414874001229;
          result[1] += 0;
          result[2] += 0.002458512599877074;
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
          result[0] += 0.9989174293868713;
          result[1] += 0;
          result[2] += 0.0010825706131286292;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.5028248587570622;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3785310734463277;
          result[4] += 0.11299435028248588;
          result[5] += 0.005649717514124294;
          result[6] += 0;
        } else {
          result[0] += 0.002425876010781671;
          result[1] += 0.00862533692722372;
          result[2] += 0.004851752021563342;
          result[3] += 0.9210242587601079;
          result[4] += 0.06172506738544475;
          result[5] += 0.0013477088948787063;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
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
          result[2] += 0.021348859776807373;
          result[3] += 0.26734594856865596;
          result[4] += 0.7108199902959728;
          result[5] += 0.00048520135856380386;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9834574028122415;
          result[1] += 0;
          result[2] += 0.016542597187758478;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.996420299010318;
          result[1] += 0;
          result[2] += 0.002947989050326385;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006317119393556539;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.24666279744631456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7533372025536854;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9721980886185926;
          result[1] += 0;
          result[2] += 0.019113814074717638;
          result[3] += 0.005212858384013901;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0034752389226759338;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45461800))) ) ) {
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
          result[0] += 0.9983694175197029;
          result[1] += 0;
          result[2] += 0.001449406649153003;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018117583114412537;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.970398773006135;
          result[1] += 0.002607361963190184;
          result[2] += 0.004294478527607362;
          result[3] += 0.02116564417177914;
          result[4] += 0;
          result[5] += 0.00030674846625766873;
          result[6] += 0.001226993865030675;
        } else {
          result[0] += 0.708029197080292;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.291970802919708;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006884681583476765;
          result[2] += 0;
          result[3] += 0.9993115318416523;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.192;
          result[3] += 0;
          result[4] += 0.808;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
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
          result[3] += 0;
          result[4] += 0.9746835443037974;
          result[5] += 0.02531645569620253;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9846153846153847;
          result[1] += 0;
          result[2] += 0.015384615384615385;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06718346253229975;
          result[1] += 0.008613264427217916;
          result[2] += 0.00516795865633075;
          result[3] += 0.9190353143841516;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9980276134122288;
          result[4] += 0;
          result[5] += 0.0019723865877712033;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14074074074074075;
          result[3] += 0.8444444444444444;
          result[4] += 0;
          result[5] += 0.014814814814814815;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
          result[5] += 0.1;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0.5555555555555556;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1111111111111111;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006377551020408163;
          result[2] += 0.004145408163265306;
          result[3] += 0.9939413265306123;
          result[4] += 0;
          result[5] += 0.0012755102040816326;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9949579831932773;
          result[1] += 0;
          result[2] += 0.005042016806722689;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991779921087243;
          result[1] += 0.00010960105217010084;
          result[2] += 0.0004932047347654538;
          result[3] += 0.00021920210434020167;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 0.9986486486486487;
          result[1] += 0;
          result[2] += 0.0013513513513513514;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5242608572641109;
          result[1] += 0.0024048663177252795;
          result[2] += 0.006931673504031687;
          result[3] += 0.4654123638421276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009902390720045269;
        } else {
          result[0] += 0.9677938808373591;
          result[1] += 0;
          result[2] += 0.006211180124223602;
          result[3] += 0.025304807913503567;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006901311249137336;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9994695216049383;
          result[1] += 0;
          result[2] += 0.00033757716049382714;
          result[3] += 0;
          result[4] += 0.00014467592592592592;
          result[5] += 0;
          result[6] += 4.8225308641975306e-05;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.01818181818181818;
          result[1] += 0.002797202797202797;
          result[2] += 0.006993006993006993;
          result[3] += 0.34265734265734266;
          result[4] += 0.627972027972028;
          result[5] += 0.0013986013986013986;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08097165991902834;
          result[4] += 0.9190283400809717;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.7201136446419465;
          result[1] += 0.0013112843301522547;
          result[2] += 0.0017483791068696728;
          result[3] += 0.27624389888540835;
          result[4] += 0;
          result[5] += 0.00029139651781161214;
          result[6] += 0.00029139651781161214;
        } else {
          result[0] += 0.003908794788273616;
          result[1] += 0;
          result[2] += 0.018892508143322474;
          result[3] += 0.8306188925081434;
          result[4] += 0.1465798045602606;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9869236063317276;
          result[1] += 0;
          result[2] += 0.007570543702684103;
          result[3] += 0.0010323468685478324;
          result[4] += 0.001720578114246387;
          result[5] += 0.0006882312456985548;
          result[6] += 0.0020646937370956647;
        } else {
          result[0] += 0.9294871794871795;
          result[1] += 0;
          result[2] += 0.07051282051282051;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.15691263782866838;
          result[1] += 0.003392705682782019;
          result[2] += 0;
          result[3] += 0.8388464800678542;
          result[4] += 0.0008481764206955048;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008027522935779817;
          result[3] += 0.24541284403669725;
          result[4] += 0.7465596330275229;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.004878048780487805;
          result[1] += 0.01707317073170732;
          result[2] += 0;
          result[3] += 0.05121951219512195;
          result[4] += 0.926829268292683;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5098039215686274;
          result[4] += 0.49019607843137253;
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
          result[0] += 0.999863350642252;
          result[1] += 0;
          result[2] += 0.00013664935774801857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9960359408033826;
          result[1] += 0;
          result[2] += 0.003964059196617336;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.025398700531600708;
          result[1] += 0.005611340815121087;
          result[2] += 0.008860011813349085;
          result[3] += 0.9367985823981099;
          result[4] += 0.021854695806261076;
          result[5] += 0.0014766686355581807;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004044489383215369;
          result[2] += 0;
          result[3] += 0.15621840242669363;
          result[4] += 0.839737108190091;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9714907939021977;
          result[1] += 0;
          result[2] += 0.006731340328647794;
          result[3] += 0.019996040388041977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001781825381112651;
        } else {
          result[0] += 0.9957996768982229;
          result[1] += 0;
          result[2] += 0.0009693053311793214;
          result[3] += 0.002584814216478191;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006462035541195477;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05681818181818182;
          result[3] += 0;
          result[4] += 0.9090909090909092;
          result[5] += 0.034090909090909095;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9981981981981982;
          result[5] += 0.0018018018018018018;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.0003333333333333333;
          result[2] += 0.0033333333333333335;
          result[3] += 0.9963333333333333;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9967293540474244;
          result[1] += 0;
          result[2] += 0.003066230580539657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002044153720359771;
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
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0.002207505518763797;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2891832229580574;
          result[4] += 0.7086092715231788;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0022026431718061676;
          result[2] += 0;
          result[3] += 0.12555066079295155;
          result[4] += 0.8722466960352423;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.6991950800397937;
          result[1] += 0.0009044044496698922;
          result[2] += 0.007687437822194084;
          result[3] += 0.29022338789906843;
          result[4] += 0.0004522022248349461;
          result[5] += 0.0006330831147689245;
          result[6] += 0.0009044044496698922;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009430667132378626;
          result[3] += 0.9888229130282921;
          result[4] += 0.0013971358714635;
          result[5] += 0.000349283967865875;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.002932551319648094;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9765395894428153;
          result[4] += 0.020527859237536656;
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
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0.10975609756097561;
          result[2] += 0;
          result[3] += 0.8658536585365854;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017543859649122806;
          result[3] += 0.801477377654663;
          result[4] += 0.1809787626962142;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997029702970297;
          result[1] += 0;
          result[2] += 0.0029702970297029703;
          result[3] += 0;
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
          result[0] += 0.1584022038567493;
          result[1] += 0.003443526170798898;
          result[2] += 0.0048209366391184574;
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43398000))) ) ) {
          result[0] += 0;
          result[1] += 0.008978675645342313;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9910213243546577;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0.2;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9955401387512389;
          result[1] += 0;
          result[2] += 0.003964321110009912;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000495540138751239;
        } else {
          result[0] += 0.9996700486678215;
          result[1] += 0;
          result[2] += 0.00032995133217850366;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8075083692013391;
          result[1] += 0.0023912003825920613;
          result[2] += 0.005619320899091344;
          result[3] += 0.17814442850310855;
          result[4] += 0.004662840746054519;
          result[5] += 0.0007173601147776184;
          result[6] += 0.0009564801530368245;
        } else {
          result[0] += 0;
          result[1] += 0.0010003334444814939;
          result[2] += 0.0056685561853951315;
          result[3] += 0.9896632210736912;
          result[4] += 0.003334444814938313;
          result[5] += 0.00033344448149383126;
          result[6] += 0;
        }
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4604b400))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9986497220015885;
          result[1] += 0;
          result[2] += 0.0011914217633042098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015885623510722796;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
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
          result[4] += 0.9985207100591716;
          result[5] += 0.0014792899408284023;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.5869549012299664;
          result[1] += 0.0009690644800596348;
          result[2] += 0.008647036898993665;
          result[3] += 0.40178904211703315;
          result[4] += 0.0006708907938874395;
          result[5] += 0.0003727171077152441;
          result[6] += 0.0005963473723443906;
        } else {
          result[0] += 0.1891891891891892;
          result[1] += 0.007371007371007371;
          result[2] += 0;
          result[3] += 0.8034398034398035;
          result[4] += 0;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.007898894154818325;
          result[1] += 0.009478672985781991;
          result[2] += 0;
          result[3] += 0.5703001579778831;
          result[4] += 0.41232227488151657;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05389908256880734;
          result[4] += 0.9461009174311926;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ec0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9971264367816092;
          result[4] += 0.0028735632183908046;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.49141630901287553;
          result[1] += 0.006437768240343348;
          result[2] += 0.012160228898426323;
          result[3] += 0.4899856938483548;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23666343355965083;
          result[1] += 0;
          result[2] += 0.009699321047526674;
          result[3] += 0.7536372453928225;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.15789473684210525;
          result[1] += 0.7894736842105263;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0.375;
          result[6] += 0;
        } else {
          result[0] += 0.12826747720364742;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8717325227963526;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9285714285714286;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014796547472256475;
          result[3] += 0;
          result[4] += 0.9839704069050556;
          result[5] += 0.0012330456226880397;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9969362447113748;
          result[1] += 0;
          result[2] += 0.0006322034722559938;
          result[3] += 0.0023829207800418225;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.863103632738414e-05;
        } else {
          result[0] += 0.20689655172413793;
          result[1] += 0.05172413793103448;
          result[2] += 0;
          result[3] += 0.7413793103448276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9748253591669962;
          result[1] += 0.00276789244760775;
          result[2] += 0.0039541320680110716;
          result[3] += 0.018057203110583894;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00039541320680110717;
        } else {
          result[0] += 0.638530532006389;
          result[1] += 0;
          result[2] += 0.00491460867428431;
          result[3] += 0.3555719375844698;
          result[4] += 0;
          result[5] += 0.00012286521685710776;
          result[6] += 0.0008600565179997543;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40b00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.19158553546592488;
          result[1] += 0.0003477051460361613;
          result[2] += 0;
          result[3] += 0.8070236439499304;
          result[4] += 0;
          result[5] += 0.001043115438108484;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
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
          result[3] += 0.934668071654373;
          result[4] += 0.06533192834562697;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7272727272727273;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0034602076124567475;
          result[3] += 0;
          result[4] += 0.9965397923875432;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.1588785046728972;
          result[1] += 0;
          result[2] += 0.016822429906542057;
          result[3] += 0;
          result[4] += 0.8186915887850468;
          result[5] += 0.005607476635514018;
          result[6] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9375;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
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
          result[0] += 0.9990025648332859;
          result[1] += 0;
          result[2] += 0.0009261897976631519;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.124536905101169e-05;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.4561933534743202;
          result[1] += 0.0028197381671701913;
          result[2] += 0.005035246727089627;
          result[3] += 0.5345417925478348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014098690835850957;
        } else {
          result[0] += 0.6709033136631866;
          result[1] += 0.0013617793917385383;
          result[2] += 0.013617793917385384;
          result[3] += 0.3141171130276895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.9980605698940773;
          result[1] += 0;
          result[2] += 0.001491869312248247;
          result[3] += 0.00044756079367447413;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7428571428571429;
          result[1] += 0;
          result[2] += 0.2571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.34782608695652173;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6521739130434783;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.99310551558753;
          result[1] += 0;
          result[2] += 0.004796163069544364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020983213429256594;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0;
          result[1] += 0.0057692307692307696;
          result[2] += 0.000641025641025641;
          result[3] += 0.6935897435897436;
          result[4] += 0.3;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9967141292442497;
          result[1] += 0;
          result[2] += 0.0032858707557502738;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.001349527665317139;
          result[2] += 0.015182186234817813;
          result[3] += 0.5455465587044535;
          result[4] += 0.43792172739541163;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9929725931131412;
          result[1] += 0;
          result[2] += 0.007027406886858749;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9833189884831346;
          result[1] += 0.0007377351530800443;
          result[2] += 0.0006967498667978196;
          result[3] += 0.015000614779294234;
          result[4] += 0.00012295585884667404;
          result[5] += 8.197057256444936e-05;
          result[6] += 4.098528628222468e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.7459694989106753;
          result[1] += 0;
          result[2] += 0.0021786492374727667;
          result[3] += 0.24967320261437903;
          result[4] += 0;
          result[5] += 0.0008714596949891065;
          result[6] += 0.0013071895424836598;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.9229534510433387;
          result[1] += 0;
          result[2] += 0.012841091492776886;
          result[3] += 0.06420545746388442;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0029850746268656717;
          result[3] += 0;
          result[4] += 0.9970149253731343;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.996174689193497;
          result[4] += 0.0019126554032515143;
          result[5] += 0.0019126554032515143;
          result[6] += 0;
        } else {
          result[0] += 0.8055555555555556;
          result[1] += 0;
          result[2] += 0.19444444444444445;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9933407325194229;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006659267480577136;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0.8680555555555556;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.020833333333333332;
        } else {
          result[0] += 0.9935525467440361;
          result[1] += 0;
          result[2] += 0.005802707930367505;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006447453255963894;
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
          result[4] += 0.9705882352941176;
          result[5] += 0.029411764705882353;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005948653725735754;
          result[3] += 0.9931120851596744;
          result[4] += 0;
          result[5] += 0.000939261114589856;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9989544720083642;
          result[1] += 0;
          result[2] += 0.001045527991635776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998924962373683;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010750376263169211;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0.9642857142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7084870848708487;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2915129151291513;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9888280394304491;
          result[1] += 0.0030668127053669223;
          result[2] += 0.007009857612267251;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001095290251916758;
        } else {
          result[0] += 0.926829268292683;
          result[1] += 0;
          result[2] += 0.003695491500369549;
          result[3] += 0.06947524020694752;
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
          result[0] += 0.42301278488048916;
          result[1] += 0;
          result[2] += 0.007226236798221234;
          result[3] += 0.5684639614600704;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012970168612191958;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.5666666666666667;
          result[1] += 0;
          result[2] += 0.43333333333333335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0032912781130005485;
          result[2] += 0.0032912781130005485;
          result[3] += 0.9928688974218322;
          result[4] += 0.0005485463521667581;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0.9952324195470799;
          result[1] += 0;
          result[2] += 0.004767580452920143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9193548387096774;
          result[1] += 0;
          result[2] += 0.08064516129032258;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006920415224913495;
          result[1] += 0.0657439446366782;
          result[2] += 0;
          result[3] += 0.9273356401384083;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9920424403183024;
          result[1] += 0;
          result[2] += 0.007957559681697613;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996520932390119;
          result[1] += 0;
          result[2] += 0.00030925045421160464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.865630677645058e-05;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.6667932769917387;
          result[1] += 0.0009495774380400724;
          result[2] += 0.006836957553888521;
          result[3] += 0.3243756528344887;
          result[4] += 0;
          result[5] += 9.495774380400724e-05;
          result[6] += 0.0009495774380400724;
        } else {
          result[0] += 0.020958083832335328;
          result[1] += 0;
          result[2] += 0.0187125748502994;
          result[3] += 0.8285928143712575;
          result[4] += 0.12649700598802396;
          result[5] += 0.005239520958083832;
          result[6] += 0;
        }
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992947813822285;
          result[1] += 0;
          result[2] += 0.0007052186177715092;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43700000))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9134258112459749;
          result[1] += 0.001362397820163488;
          result[2] += 0.004830319544216003;
          result[3] += 0.07926678226405748;
          result[4] += 0;
          result[5] += 0.0002477086945751796;
          result[6] += 0.0008669804310131287;
        } else {
          result[0] += 0.1594284113196974;
          result[1] += 0.001961333706920706;
          result[2] += 0.015410479125805548;
          result[3] += 0.8223592042588961;
          result[4] += 0;
          result[5] += 0.0008405715886803026;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0003284072249589491;
          result[2] += 0;
          result[3] += 0.9993431855500821;
          result[4] += 0;
          result[5] += 0.0003284072249589491;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9825653798256538;
          result[1] += 0;
          result[2] += 0.017434620174346202;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
          result[0] += 0.14913294797687862;
          result[1] += 0.017341040462427744;
          result[2] += 0;
          result[3] += 0.8335260115606936;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015220700152207;
          result[3] += 0.9984779299847792;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9864253393665159;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013574660633484163;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0023880597014925373;
          result[1] += 0.0005970149253731343;
          result[2] += 0.004776119402985075;
          result[3] += 0.8883582089552239;
          result[4] += 0.10029850746268656;
          result[5] += 0.003582089552238806;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 0.9918598382749327;
          result[1] += 0.0007547169811320755;
          result[2] += 0.0026415094339622648;
          result[3] += 0.004528301886792454;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000215633423180593;
        } else {
          result[0] += 0.9957166392092257;
          result[1] += 0;
          result[2] += 0.00021965952773201537;
          result[3] += 0.003953871499176277;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010982976386600769;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.16614330573793892;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8338566942620611;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06719367588932806;
          result[1] += 0;
          result[2] += 0.034255599472990776;
          result[3] += 0;
          result[4] += 0.8959156785243741;
          result[5] += 0.002635046113306983;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9441786283891547;
          result[1] += 0;
          result[2] += 0.0430622009569378;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.012759170653907496;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9879518072289156;
          result[5] += 0.012048192771084338;
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
          result[1] += 0;
          result[2] += 0.011737089201877934;
          result[3] += 0.9859154929577465;
          result[4] += 0;
          result[5] += 0.002347417840375587;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9953936348408711;
          result[1] += 0;
          result[2] += 0.0011515912897822446;
          result[3] += 0.003454773869346734;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5526032315978456;
          result[1] += 0;
          result[2] += 0.0118491921005386;
          result[3] += 0.4341113105924596;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001436265709156194;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9986582434170068;
          result[1] += 0;
          result[2] += 0.0011740370101190809;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001677195728741544;
        } else {
          result[0] += 0.7172424061941632;
          result[1] += 0.003275759380583681;
          result[2] += 0.004615842763549732;
          result[3] += 0.2742703990470518;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005955926146515784;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007054673721340388;
          result[1] += 0.010582010582010581;
          result[2] += 0;
          result[3] += 0.8518518518518519;
          result[4] += 0.13051146384479717;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.7894736842105263;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08771929824561403;
          result[4] += 0.12280701754385964;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00516795865633075;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21963824289405684;
          result[4] += 0.7751937984496124;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.26485148514851486;
          result[1] += 0.009900990099009901;
          result[2] += 0;
          result[3] += 0.6881188118811881;
          result[4] += 0.03712871287128713;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006423982869379015;
          result[2] += 0;
          result[3] += 0.6295503211991434;
          result[4] += 0.3640256959314775;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.006543075245365322;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021810250817884406;
          result[4] += 0.9716466739367503;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.054878048780487805;
          result[1] += 0;
          result[2] += 0.07317073170731707;
          result[3] += 0.8719512195121951;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0.9877056202878685;
          result[1] += 0;
          result[2] += 0.0005997258396161755;
          result[3] += 0.011394790952707333;
          result[4] += 0.00017135023989033586;
          result[5] += 8.567511994516793e-05;
          result[6] += 4.2837559972583965e-05;
        } else {
          result[0] += 0.9073891625615764;
          result[1] += 0.00788177339901478;
          result[2] += 0;
          result[3] += 0.08472906403940889;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.5819983136593592;
          result[1] += 0;
          result[2] += 0.00463743676222597;
          result[3] += 0.4114671163575042;
          result[4] += 0.0008431703204047217;
          result[5] += 0.0006323777403035413;
          result[6] += 0.00042158516020236085;
        } else {
          result[0] += 0.7263636363636363;
          result[1] += 0;
          result[2] += 0.02090909090909091;
          result[3] += 0;
          result[4] += 0.25272727272727274;
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
          result[0] += 0.00366920688681908;
          result[1] += 0;
          result[2] += 0.008185153824442563;
          result[3] += 0.7922664408693197;
          result[4] += 0.19587919841941856;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.901978021978022;
          result[1] += 0;
          result[2] += 0.014065934065934066;
          result[3] += 0.07692307692307693;
          result[4] += 0.004395604395604396;
          result[5] += 0.00043956043956043956;
          result[6] += 0.002197802197802198;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007211538461538462;
          result[2] += 0.0008012820512820513;
          result[3] += 0.9919871794871795;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.8970588235294118;
          result[1] += 0;
          result[2] += 0.10294117647058823;
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9806949806949807;
          result[1] += 0;
          result[2] += 0.019305019305019305;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992103185048697;
          result[1] += 0;
          result[2] += 0.0007896814951302974;
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.023104880581516097;
          result[1] += 0.005970924195223261;
          result[2] += 0.015835929387331256;
          result[3] += 0.936656282450675;
          result[4] += 0.015835929387331256;
          result[5] += 0.002596053997923157;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005566801619433198;
          result[2] += 0;
          result[3] += 0.152834008097166;
          result[4] += 0.8415991902834008;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.9942664418212479;
          result[1] += 0;
          result[2] += 0.00505902192242833;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006745362563237774;
        } else {
          result[0] += 0.9332393041842971;
          result[1] += 0;
          result[2] += 0.013164080865068171;
          result[3] += 0.051716031969910675;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018805829807240243;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
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
          result[3] += 0;
          result[4] += 0.974025974025974;
          result[5] += 0.025974025974025976;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08091286307053942;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9174273858921161;
          result[4] += 0;
          result[5] += 0.0016597510373443983;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.3137254901960784;
          result[1] += 0.000676132521974307;
          result[2] += 0;
          result[3] += 0.6855983772819473;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6953125;
          result[1] += 0.0703125;
          result[2] += 0.2265625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0078125;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9977220956719818;
          result[1] += 0;
          result[2] += 0.002277904328018223;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9786585365853658;
          result[1] += 0;
          result[2] += 0.018292682926829267;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003048780487804878;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9992391304347826;
          result[1] += 0;
          result[2] += 0.0007608695652173913;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997893406361913;
          result[1] += 0;
          result[2] += 0.0002106593638087213;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41680000))) ) ) {
          result[0] += 0.5229158435401027;
          result[1] += 0.002963255630185697;
          result[2] += 0.00375345713156855;
          result[3] += 0.4701698933227973;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019755037534571315;
        } else {
          result[0] += 0.60250569476082;
          result[1] += 0;
          result[2] += 0.004555808656036446;
          result[3] += 0.3917995444191344;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011389521640091116;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.01524390243902439;
          result[1] += 0.007621951219512195;
          result[2] += 0.0350609756097561;
          result[3] += 0.9420731707317073;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9838511856091576;
          result[1] += 0;
          result[2] += 0.009403107113654946;
          result[3] += 0.005723630417007358;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010220768601798852;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
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
          result[0] += 0.9915966386554622;
          result[1] += 0;
          result[2] += 0.0063025210084033615;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021008403361344537;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9988846754405531;
          result[1] += 0;
          result[2] += 0.001115324559446799;
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
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0.3150684931506849;
          result[1] += 0.003424657534246575;
          result[2] += 0.007990867579908675;
          result[3] += 0.672945205479452;
          result[4] += 0.0005707762557077625;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9545454545454546;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.726302685399253;
          result[1] += 0.001244887070958563;
          result[2] += 0.002134092121643251;
          result[3] += 0.2688956073270496;
          result[4] += 0.00017784101013693757;
          result[5] += 0.0005335230304108127;
          result[6] += 0.0007113640405477503;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9871244635193133;
          result[4] += 0.012875536480686695;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0053448714685670655;
          result[1] += 0.003308729956731993;
          result[2] += 0.012725884448969204;
          result[3] += 0.9781114787477729;
          result[4] += 0;
          result[5] += 0.0005090353779587681;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42280000))) ) ) {
          result[0] += 0.98859081097749;
          result[1] += 0;
          result[2] += 0.009867406722170829;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001541782300339192;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0.36363636363636365;
          result[2] += 0.45454545454545453;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.18181818181818182;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0059649122807017545;
          result[3] += 0.9936842105263158;
          result[4] += 0;
          result[5] += 0.0003508771929824561;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9903121636167922;
          result[1] += 0;
          result[2] += 0.008611410118406888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001076426264800861;
        } else {
          result[0] += 0.999197834152211;
          result[1] += 0;
          result[2] += 0.0008021658477890304;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0.13043478260869565;
          result[2] += 0.18478260869565216;
          result[3] += 0.6847826086956522;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9947769314472253;
          result[1] += 0.00021762785636561484;
          result[2] += 0.003699673558215452;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001305767138193689;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.003899142188718482;
          result[1] += 0;
          result[2] += 0.010917598128411749;
          result[3] += 0.9851832596828698;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.984149855907781;
          result[1] += 0;
          result[2] += 0.009798270893371758;
          result[3] += 0.004322766570605188;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001729106628242075;
        }
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0.3195554011809656;
          result[1] += 0.005210142410559222;
          result[2] += 0.011809656130600903;
          result[3] += 0.6634248002778743;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9955947136563876;
          result[5] += 0.004405286343612335;
          result[6] += 0;
        } else {
          result[0] += 0.5376344086021505;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.46236559139784944;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0007530120481927711;
          result[2] += 0.009036144578313253;
          result[3] += 0.9864457831325302;
          result[4] += 0.0015060240963855422;
          result[5] += 0.002259036144578313;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.028368794326241134;
          result[3] += 0;
          result[4] += 0.9716312056737588;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.9970965049177949;
          result[1] += 0.000544405327913476;
          result[2] += 0.0009073422131891265;
          result[3] += 0.0011976917214096472;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025405581969295543;
        } else {
          result[0] += 0.174496644295302;
          result[1] += 0;
          result[2] += 0.09395973154362416;
          result[3] += 0.7315436241610739;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.4302951950010774;
          result[1] += 0;
          result[2] += 0.0030165912518853697;
          result[3] += 0.5666882137470373;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9087085601187532;
          result[1] += 0;
          result[2] += 0.005442850074220683;
          result[3] += 0.08485898070262247;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009896091044037608;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0.9848866498740554;
          result[1] += 0;
          result[2] += 0.015113350125944584;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997148288973384;
          result[1] += 0;
          result[2] += 0.0028517110266159697;
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
          result[0] += 0.9878542510121457;
          result[1] += 0;
          result[2] += 0.012145748987854251;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997071987284059;
          result[1] += 0;
          result[2] += 0.00029280127159409376;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 0.006430868167202572;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11254019292604502;
          result[4] += 0.8810289389067524;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007751937984496124;
          result[2] += 0;
          result[3] += 0.29651162790697677;
          result[4] += 0.6937984496124031;
          result[5] += 0.001937984496124031;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7421606118546845;
          result[1] += 0.001051625239005736;
          result[2] += 0.007839388145315488;
          result[3] += 0.22036328871892927;
          result[4] += 0.026959847036328873;
          result[5] += 0.0003824091778202677;
          result[6] += 0.00124282982791587;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008589835361488905;
          result[3] += 0.9874731567644953;
          result[4] += 0.0035790980672870437;
          result[5] += 0.00035790980672870435;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.003457216940363008;
          result[2] += 0.000864304235090752;
          result[3] += 0.9956784788245462;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9773462783171522;
          result[1] += 0;
          result[2] += 0.022653721682847898;
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
          result[3] += 0.4327731092436975;
          result[4] += 0.5672268907563025;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00759144237405107;
          result[2] += 0;
          result[3] += 0.055900621118012424;
          result[4] += 0.9365079365079365;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9946576007770762;
          result[1] += 0;
          result[2] += 0.005342399222923749;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995045650789157;
          result[1] += 0;
          result[2] += 0.0004954349210842947;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9938080495356038;
          result[1] += 0;
          result[2] += 0.006191950464396285;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.04310344827586207;
          result[1] += 0.005172413793103448;
          result[2] += 0.0125;
          result[3] += 0.6599137931034482;
          result[4] += 0.27543103448275863;
          result[5] += 0.003879310344827586;
          result[6] += 0;
        } else {
          result[0] += 0.7422710480264437;
          result[1] += 0;
          result[2] += 0.004569317518957807;
          result[3] += 0.25199300019443904;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00116663426015944;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.004329004329004329;
          result[1] += 0;
          result[2] += 0.009523809523809525;
          result[3] += 0.9783549783549783;
          result[4] += 0.007792207792207792;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05325443786982249;
          result[3] += 0.1242603550295858;
          result[4] += 0.8224852071005917;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.15263157894736842;
          result[1] += 0.0030075187969924814;
          result[2] += 0.012030075187969926;
          result[3] += 0.8323308270676691;
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
          result[0] += 0.0019860973187686196;
          result[1] += 0.005958291956305859;
          result[2] += 0;
          result[3] += 0.1717974180734856;
          result[4] += 0.82025819265144;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9989742420788694;
          result[1] += 0;
          result[2] += 0.0010257579211306132;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.46420382165605095;
          result[1] += 0.0017834394904458599;
          result[2] += 0.010445859872611466;
          result[3] += 0.5197452229299363;
          result[4] += 0.0035668789808917197;
          result[5] += 0;
          result[6] += 0.00025477707006369424;
        } else {
          result[0] += 0.9528535980148883;
          result[1] += 0;
          result[2] += 0.009511993382961124;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005376344086021506;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9666424945612763;
          result[1] += 0;
          result[2] += 0.0018129079042784628;
          result[3] += 0.03118201595358956;
          result[4] += 0;
          result[5] += 0.00036258158085569254;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0009132420091324201;
          result[3] += 0.9278538812785389;
          result[4] += 0.07123287671232877;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.3762409000661813;
          result[1] += 0.0013236267372600927;
          result[2] += 0.00727994705493051;
          result[3] += 0.614493712772998;
          result[4] += 0.0006618133686300463;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9941804073714839;
          result[4] += 0.002909796314258002;
          result[5] += 0.002909796314258002;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0.10047846889952153;
          result[1] += 0;
          result[2] += 0.03827751196172249;
          result[3] += 0.3167464114832536;
          result[4] += 0.539712918660287;
          result[5] += 0.004784688995215311;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
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
          result[0] += 0.17647058823529413;
          result[1] += 0.7647058823529411;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0.9641255605381166;
          result[1] += 0;
          result[2] += 0.026905829596412557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008968609865470852;
        } else {
          result[0] += 0.9976958525345622;
          result[1] += 0;
          result[2] += 0.002304147465437788;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9989225589225589;
          result[1] += 0;
          result[2] += 0.0010774410774410774;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.998019801980198;
          result[5] += 0.0019801980198019802;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.4900662251655629;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5033112582781457;
          result[4] += 0;
          result[5] += 0.006622516556291391;
          result[6] += 0;
        } else {
          result[0] += 0.003229011425732737;
          result[1] += 0.00819672131147541;
          result[2] += 0.01167411823149528;
          result[3] += 0.9751614505712867;
          result[4] += 0;
          result[5] += 0.0017386984600099354;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9701226751088247;
          result[1] += 0;
          result[2] += 0.008310249307479225;
          result[3] += 0.019984170953700038;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015829046299960427;
        } else {
          result[0] += 0.9942766295707473;
          result[1] += 0;
          result[2] += 0.0003179650238473768;
          result[3] += 0.004451510333863275;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009538950715421304;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.32964863797868144;
          result[1] += 0.0011843663639952628;
          result[2] += 0.005132254243979472;
          result[3] += 0.6632451638373471;
          result[4] += 0.0007895775759968418;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.926829268292683;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.056910569105691054;
          result[4] += 0.016260162601626018;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.004807692307692308;
          result[1] += 0;
          result[2] += 0.0673076923076923;
          result[3] += 0.9278846153846154;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0.05;
          result[1] += 0.45;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.010309278350515464;
          result[2] += 0;
          result[3] += 0.9896907216494846;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9891891891891892;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010810810810810811;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0018738288569643974;
          result[1] += 0.0006246096189881324;
          result[2] += 0.005621486570893191;
          result[3] += 0.8988132417239225;
          result[4] += 0.08806995627732667;
          result[5] += 0.004996876951905059;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.608540925266904;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3914590747330961;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9958921041151665;
          result[1] += 0.0007634142794823324;
          result[2] += 0.0020357714119528863;
          result[3] += 0.0011269448887596335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001817653046386506;
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
          result[0] += 0.4159411878506481;
          result[1] += 0;
          result[2] += 0.008512284774617915;
          result[3] += 0.5722576900754498;
          result[4] += 0.001934610176049526;
          result[5] += 0.0005803830528148578;
          result[6] += 0.0007738440704198104;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45ff7400))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006844626967830253;
          result[2] += 0.006160164271047228;
          result[3] += 0.5249828884325805;
          result[4] += 0.46406570841889117;
          result[5] += 0.004106776180698152;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004564315352697096;
          result[3] += 0.9294605809128631;
          result[4] += 0.06473029045643154;
          result[5] += 0.0012448132780082987;
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
          result[0] += 0;
          result[1] += 0.02066590126291619;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9793340987370838;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9993204983012458;
          result[1] += 0;
          result[2] += 0.0005285013212533032;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015100037750094376;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.5;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9902601259056896;
          result[1] += 0.0011877895236964012;
          result[2] += 0.0058201686661123655;
          result[3] += 0.0019004632379142417;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008314526665874808;
        } else {
          result[0] += 0.63809291549811;
          result[1] += 0;
          result[2] += 0.004999390318253871;
          result[3] += 0.3559322033898305;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009754907938056335;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
          result[0] += 0.3933933933933934;
          result[1] += 0.024024024024024024;
          result[2] += 0;
          result[3] += 0.5825825825825826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007575757575757576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9924242424242424;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
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
          result[0] += 0.9945219123505976;
          result[1] += 0;
          result[2] += 0.00398406374501992;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00149402390438247;
        } else {
          result[0] += 0.9996682012359503;
          result[1] += 0;
          result[2] += 0.0003317987640496039;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.8790931989924434;
          result[1] += 0.002518891687657431;
          result[2] += 0.002878733357322778;
          result[3] += 0.1140698092839151;
          result[4] += 0;
          result[5] += 0.0003598416696653473;
          result[6] += 0.001079525008996042;
        } else {
          result[0] += 0.9931287219422813;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006871278057718736;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0.40959934919666463;
          result[1] += 0;
          result[2] += 0.011185682326621925;
          result[3] += 0.5672157819808826;
          result[4] += 0.010372178157413058;
          result[5] += 0;
          result[6] += 0.0016270083384177345;
        } else {
          result[0] += 0.9117647058823529;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.058823529411764705;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0.45454545454545453;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.0016877637130801688;
          result[1] += 0.0014064697609001407;
          result[2] += 0.010689170182841068;
          result[3] += 0.9842475386779185;
          result[4] += 0;
          result[5] += 0.001969057665260197;
          result[6] += 0;
        } else {
          result[0] += 0.9789768745620182;
          result[1] += 0;
          result[2] += 0.01401541695865452;
          result[3] += 0.00700770847932726;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0.011111111111111112;
          result[1] += 0.011111111111111112;
          result[2] += 0;
          result[3] += 0.9777777777777777;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.36;
          result[2] += 0;
          result[3] += 0.64;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0.00030807147258163895;
          result[2] += 0.008009858287122612;
          result[3] += 0.9898336414048059;
          result[4] += 0;
          result[5] += 0.0018484288354898336;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8461538461538461;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
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
          result[0] += 0.9779411764705882;
          result[1] += 0;
          result[2] += 0.022058823529411766;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9954128440366973;
          result[1] += 0;
          result[2] += 0.004077471967380225;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005096839959225281;
        } else {
          result[0] += 0.9996562983330469;
          result[1] += 0;
          result[2] += 0.00034370166695308474;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8376766784452296;
          result[1] += 0.0035335689045936395;
          result[2] += 0.010821554770318022;
          result[3] += 0.14752650176678445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00044169611307420494;
        } else {
          result[0] += 0;
          result[1] += 0.0007407407407407407;
          result[2] += 0.007037037037037037;
          result[3] += 0.9922222222222222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.8141025641025641;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1858974358974359;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9856459330143541;
          result[1] += 0;
          result[2] += 0.007442849548112706;
          result[3] += 0.00531632110579479;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001594896331738437;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9891304347826086;
          result[5] += 0.010869565217391304;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
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
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9981174698795181;
          result[4] += 0;
          result[5] += 0.0018825301204819277;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42040000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.10204081632653061;
          result[2] += 0.1292517006802721;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.05442176870748299;
          result[6] += 0;
        }
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0.001564945226917058;
          result[2] += 0.004694835680751174;
          result[3] += 0.9937402190923318;
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
          result[0] += 0.9990618256872127;
          result[1] += 0;
          result[2] += 0.0008443568815085843;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.381743127873159e-05;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.6143842055781887;
          result[1] += 0.0009401441554371671;
          result[2] += 0.005484174240050142;
          result[3] += 0.3787214039486055;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00047007207771858356;
        } else {
          result[0] += 0.8328542094455852;
          result[1] += 0.0026694045174537988;
          result[2] += 0.008418891170431212;
          result[3] += 0.15564681724845997;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004106776180698152;
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
          result[0] += 0.7389959552700452;
          result[1] += 0;
          result[2] += 0.005472281703545087;
          result[3] += 0.23602188912681418;
          result[4] += 0.01736854627646919;
          result[5] += 0.0011896264572924102;
          result[6] += 0.0009517011658339282;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012781954887218045;
          result[3] += 0.8533834586466166;
          result[4] += 0.1330827067669173;
          result[5] += 0.0007518796992481203;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006706908115358819;
          result[2] += 0.007377598926894702;
          result[3] += 0.8611670020120724;
          result[4] += 0.12877263581488935;
          result[5] += 0.002012072434607646;
          result[6] += 0;
        } else {
          result[0] += 0.3476510067114094;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6523489932885906;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9991040430059357;
          result[1] += 0;
          result[2] += 0.0008959569940642849;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7044474193068571;
          result[1] += 0.002826119291982746;
          result[2] += 0.0071396697902722;
          result[3] += 0.285140562248996;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004462293618920125;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5046948356807511;
          result[1] += 0;
          result[2] += 0.023474178403755867;
          result[3] += 0.47183098591549294;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01757631822386679;
          result[2] += 0;
          result[3] += 0.9824236817761333;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.08506616257088846;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9139886578449905;
          result[4] += 0.000945179584120983;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05017921146953405;
          result[3] += 0;
          result[4] += 0.921146953405018;
          result[5] += 0.02867383512544803;
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
          result[0] += 0.168806161745828;
          result[1] += 0;
          result[2] += 0.005776636713735558;
          result[3] += 0.8209242618741976;
          result[4] += 0;
          result[5] += 0.004492939666238768;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9851773094002128;
          result[1] += 0.0009381449746700858;
          result[2] += 0.002439176934142223;
          result[3] += 0.011070110701107012;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003752579898680343;
        } else {
          result[0] += 0.9989503431570448;
          result[1] += 0;
          result[2] += 0.0010496568429551878;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.17417677642980936;
          result[1] += 0;
          result[2] += 0.00462160600808781;
          result[3] += 0.8212016175621029;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9944422389837237;
          result[1] += 0;
          result[2] += 0.003969829297340214;
          result[3] += 0.0009924573243350536;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005954743946010321;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41ec0000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13156053184044786;
          result[1] += 0.008397480755773267;
          result[2] += 0.006298110566829951;
          result[3] += 0.853743876836949;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.028169014084507043;
          result[3] += 0.970550576184379;
          result[4] += 0.0012804097311139564;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.3339587242026266;
          result[1] += 0.0075046904315197;
          result[2] += 0;
          result[3] += 0.6585365853658537;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03607503607503607;
          result[1] += 0;
          result[2] += 0.017316017316017316;
          result[3] += 0.9466089466089466;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.36363636363636365;
          result[2] += 0;
          result[3] += 0.5454545454545454;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009009009009009009;
          result[2] += 0;
          result[3] += 0.990990990990991;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
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
          result[0] += 0.9988297776577549;
          result[1] += 0;
          result[2] += 0.0011702223422450266;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0.004291845493562232;
          result[1] += 0.012875536480686695;
          result[2] += 0;
          result[3] += 0.9699570815450643;
          result[4] += 0.012875536480686695;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7546850998463902;
          result[1] += 0.001075268817204301;
          result[2] += 0.005529953917050691;
          result[3] += 0.2164362519201229;
          result[4] += 0.02119815668202765;
          result[5] += 0.0004608294930875576;
          result[6] += 0.0006144393241167435;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8867617107942973;
          result[1] += 0;
          result[2] += 0.010997963340122199;
          result[3] += 0.09857433808553971;
          result[4] += 0.000814663951120163;
          result[5] += 0.0012219959266802445;
          result[6] += 0.001629327902240326;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009158557527189467;
          result[3] += 0.7976531196336577;
          result[4] += 0.19318832283915283;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41980000))) ) ) {
          result[0] += 0.9824411976675622;
          result[1] += 0.0004586254340562144;
          result[2] += 0.0022276092511301845;
          result[3] += 0.014348424294044423;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005241433532071023;
        } else {
          result[0] += 0;
          result[1] += 0.01348747591522158;
          result[2] += 0;
          result[3] += 0.9730250481695568;
          result[4] += 0.007707129094412331;
          result[5] += 0.005780346820809248;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.953779227841218;
          result[1] += 0;
          result[2] += 0.0032626427406199023;
          result[3] += 0.042958129418162044;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.15645483043602165;
          result[1] += 0.002279851809632374;
          result[2] += 0.003989740666856654;
          result[3] += 0.7577657452265603;
          result[4] += 0.07950983186092904;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9980226733456368;
          result[1] += 0;
          result[2] += 0.001581861323490641;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0003954653308726602;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023702031602708805;
          result[3] += 0.034988713318284424;
          result[4] += 0.9413092550790068;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9892183288409704;
          result[1] += 0;
          result[2] += 0.001078167115902965;
          result[3] += 0.009703504043126684;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
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
          result[0] += 0.0007304601899196494;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9992695398100804;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023529411764705882;
          result[3] += 0;
          result[4] += 0.9764705882352941;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9962264150943396;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0037735849056603774;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9923664122137404;
          result[4] += 0;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9792099792099792;
          result[1] += 0;
          result[2] += 0.01386001386001386;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00693000693000693;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9933110367892977;
          result[5] += 0.006688963210702341;
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
          result[0] += 0;
          result[1] += 0.00031575623618566466;
          result[2] += 0;
          result[3] += 0.999052731291443;
          result[4] += 0;
          result[5] += 0.0006315124723713293;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.23076923076923073;
          result[2] += 0.673076923076923;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09615384615384613;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.984;
          result[1] += 0;
          result[2] += 0.016;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9973770491803279;
          result[1] += 0;
          result[2] += 0.002622950819672131;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9985676088617265;
          result[1] += 0;
          result[2] += 0.0014323911382734913;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.10738255033557047;
          result[1] += 0.022818791946308724;
          result[2] += 0.025503355704697986;
          result[3] += 0.8442953020134228;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.979241765071473;
          result[1] += 0;
          result[2] += 0.007209446861404599;
          result[3] += 0.012430080795525171;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011187072715972653;
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9979381443298969;
          result[5] += 0.002061855670103093;
          result[6] += 0;
        } else {
          result[0] += 0.20835686053077357;
          result[1] += 0.00564652738565782;
          result[2] += 0;
          result[3] += 0.7859966120835686;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0.9989292215440625;
          result[1] += 0;
          result[2] += 0.0010707784559374665;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5846153846153846;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4153846153846154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.3460207612456747;
          result[1] += 0;
          result[2] += 0.020761245674740483;
          result[3] += 0.03806228373702422;
          result[4] += 0.5951557093425606;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.013291634089132134;
          result[1] += 0;
          result[2] += 0.007818608287724784;
          result[3] += 0.9726348709929633;
          result[4] += 0.003909304143862392;
          result[5] += 0.0023455824863174357;
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
          result[0] += 0.9714285714285714;
          result[1] += 0;
          result[2] += 0.026984126984126985;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015873015873015873;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.004629629629629629;
          result[2] += 0;
          result[3] += 0.046296296296296294;
          result[4] += 0.9490740740740741;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3073770491803279;
          result[1] += 0.002927400468384075;
          result[2] += 0.011124121779859485;
          result[3] += 0.6785714285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0.29385964912280704;
          result[1] += 0;
          result[2] += 0.05701754385964912;
          result[3] += 0.6491228070175439;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021297192642787996;
          result[4] += 0.978702807357212;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 0.6847079037800688;
          result[1] += 0;
          result[2] += 0.009020618556701032;
          result[3] += 0.2585910652920963;
          result[4] += 0.04553264604810997;
          result[5] += 0.0008591065292096221;
          result[6] += 0.0012886597938144332;
        } else {
          result[0] += 0.983305804624823;
          result[1] += 0.0010618216139688533;
          result[2] += 0.001002831524303917;
          result[3] += 0.014275601698914583;
          result[4] += 0.00035394053798961777;
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
          result[0] += 0.39146005509641874;
          result[1] += 0;
          result[2] += 0.0005509641873278236;
          result[3] += 0.4738292011019284;
          result[4] += 0.13360881542699724;
          result[5] += 0;
          result[6] += 0.0005509641873278236;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.28865979381443296;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.711340206185567;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987690241718891;
          result[1] += 0;
          result[2] += 0.0006714413607878247;
          result[3] += 0.00044762757385854974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011190689346463743;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.09983766233766234;
          result[1] += 0;
          result[2] += 0.030032467532467532;
          result[3] += 0.8676948051948052;
          result[4] += 0.002435064935064935;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9833555259653796;
          result[1] += 0;
          result[2] += 0.013981358189081227;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0026631158455392816;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
          result[0] += 0.9991244390937944;
          result[1] += 0;
          result[2] += 0.0008208383495676918;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.472255663784612e-05;
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
          result[0] += 0.9737159392331807;
          result[1] += 0.0026525198938992045;
          result[2] += 0.0036170725825898243;
          result[3] += 0.0192910537738124;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007234145165179649;
        } else {
          result[0] += 0;
          result[1] += 0.0011098779134295228;
          result[2] += 0;
          result[3] += 0.9761376248612652;
          result[4] += 0.022752497225305215;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00558659217877095;
          result[1] += 0.0012414649286157666;
          result[2] += 0.009000620732464307;
          result[3] += 0.9823091247672253;
          result[4] += 0;
          result[5] += 0.00186219739292365;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8869565217391304;
          result[1] += 0;
          result[2] += 0.08260869565217391;
          result[3] += 0.030434782608695653;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0.0024906600249066002;
          result[1] += 0.012453300124533;
          result[2] += 0;
          result[3] += 0.0896637608966376;
          result[4] += 0.8953922789539228;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5734597156398105;
          result[4] += 0.4265402843601896;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9957446808510639;
          result[1] += 0;
          result[2] += 0.003546099290780142;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007092198581560285;
        } else {
          result[0] += 0.9998225691980128;
          result[1] += 0;
          result[2] += 0.000177430801987225;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9961240310077519;
          result[5] += 0.003875968992248062;
          result[6] += 0;
        } else {
          result[0] += 0.024218529991551677;
          result[1] += 0.007040270346381301;
          result[2] += 0.006758659532526049;
          result[3] += 0.9617009293156857;
          result[4] += 0;
          result[5] += 0.000281610813855252;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12355212355212356;
          result[3] += 0.8764478764478765;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010004168403501459;
          result[3] += 0.1267194664443518;
          result[4] += 0.862025844101709;
          result[5] += 0.0012505210504376823;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9813374805598756;
          result[1] += 0;
          result[2] += 0.01866251944012442;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9972774869109948;
          result[1] += 0;
          result[2] += 0.002303664921465969;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00041884816753926706;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.0019364833462432224;
          result[1] += 0;
          result[2] += 0.0003872966692486445;
          result[3] += 0.9976762199845082;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9501165501165502;
          result[1] += 0;
          result[2] += 0.010722610722610723;
          result[3] += 0.03776223776223776;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013986013986013986;
        }
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9752925877763329;
          result[1] += 0;
          result[2] += 0.0247074122236671;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.06617306802406293;
          result[1] += 0.0037019898195279964;
          result[2] += 0.0009254974548819991;
          result[3] += 0.929199444701527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.11764705882352941;
          result[1] += 0.8235294117647058;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985549132947977;
          result[5] += 0.001445086705202312;
          result[6] += 0;
        } else {
          result[0] += 0.543424317617866;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.456575682382134;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10382513661202186;
          result[3] += 0;
          result[4] += 0.8743169398907104;
          result[5] += 0.02185792349726776;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005135730007336757;
          result[3] += 0.9948642699926632;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.996084189916789;
          result[1] += 0;
          result[2] += 0.003915810083210965;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997909961125276;
          result[1] += 0;
          result[2] += 0.000209003887472307;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9426414094582064;
          result[1] += 0.0018545502715591469;
          result[2] += 0.0068883295800768315;
          result[3] += 0.046496224665518615;
          result[4] += 0;
          result[5] += 0.0007948072592396343;
          result[6] += 0.0013246787653993907;
        } else {
          result[0] += 0;
          result[1] += 0.0003551136363636364;
          result[2] += 0.007457386363636364;
          result[3] += 0.9921875;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9983987189751802;
          result[1] += 0;
          result[2] += 0.0016012810248198558;
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
          result[0] += 0.9968253968253968;
          result[1] += 0;
          result[2] += 0.0031746031746031746;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9777777777777777;
          result[5] += 0.022222222222222223;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.02232696601339618;
          result[1] += 0.0064500124038700075;
          result[2] += 0.009178863805507318;
          result[3] += 0.9610518481766311;
          result[4] += 0;
          result[5] += 0.0009923096005953857;
          result[6] += 0;
        } else {
          result[0] += 0.7113292084489012;
          result[1] += 0;
          result[2] += 0.003733731598037124;
          result[3] += 0.28451034777042883;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004267121826328142;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9726261762189906;
          result[1] += 0;
          result[2] += 0.022241231822070145;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0051325919589392645;
        }
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0.4761904761904762;
          result[2] += 0.4285714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09523809523809525;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009222256378727329;
          result[2] += 0.003996311097448509;
          result[3] += 0.9935444205348909;
          result[4] += 0;
          result[5] += 0.001537042729787888;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9948491537895512;
          result[1] += 0;
          result[2] += 0.0051508462104488595;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9992797983435362;
          result[1] += 0;
          result[2] += 0.0007202016564638099;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9697466280095802;
          result[1] += 0.0017647800327744863;
          result[2] += 0.006302785831337451;
          result[3] += 0.02079919324341359;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013866128828942392;
        } else {
          result[0] += 0.2737789203084833;
          result[1] += 0.011568123393316195;
          result[2] += 0.032133676092544985;
          result[3] += 0.6825192802056556;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00904977375565611;
          result[3] += 0.9909502262443439;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006082725060827251;
          result[2] += 0;
          result[3] += 0.9993917274939172;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9988308301106215;
          result[1] += 0;
          result[2] += 0.0010792337440417303;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8.993614533681087e-05;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.42718328677274386;
          result[1] += 0.0019433985181586302;
          result[2] += 0.005708733147090976;
          result[3] += 0.4856067047248877;
          result[4] += 0.07870763998542453;
          result[5] += 0.000607312036924572;
          result[6] += 0.00024292481476982877;
        } else {
          result[0] += 0.9638383360907588;
          result[1] += 0;
          result[2] += 0.00543606712361144;
          result[3] += 0.027889387851571735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0028362089340581427;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024242424242424242;
          result[3] += 0.9551515151515152;
          result[4] += 0.01575757575757576;
          result[5] += 0.0048484848484848485;
          result[6] += 0;
        } else {
          result[0] += 0.005128205128205128;
          result[1] += 0;
          result[2] += 0.017948717948717947;
          result[3] += 0.617948717948718;
          result[4] += 0.358974358974359;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0.002008032128514056;
          result[2] += 0;
          result[3] += 0.9979919678714859;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9739583333333334;
          result[1] += 0.026041666666666668;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43380000))) ) ) {
          result[0] += 0;
          result[1] += 0.016129032258064516;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9838709677419355;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0.2;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.6598639455782312;
          result[1] += 0;
          result[2] += 0.12244897959183673;
          result[3] += 0.21768707482993196;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1358695652173913;
          result[4] += 0.8641304347826086;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41ec0000))) ) ) {
          result[0] += 0.986046511627907;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013953488372093023;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976539589442815;
          result[1] += 0;
          result[2] += 0.00039100684261974585;
          result[3] += 0.001906158357771261;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.887585532746823e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0.07744107744107745;
          result[1] += 0.006734006734006735;
          result[2] += 0;
          result[3] += 0.9057239057239058;
          result[4] += 0.006734006734006735;
          result[5] += 0.0033670033670033673;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01772525849335303;
          result[3] += 0;
          result[4] += 0.982274741506647;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0.5722905027932961;
          result[1] += 0;
          result[2] += 0.012513966480446927;
          result[3] += 0.3546368715083799;
          result[4] += 0.06055865921787709;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8269438444924404;
          result[1] += 0.0011699064074874009;
          result[2] += 0.0038696904247660178;
          result[3] += 0.16432685385169182;
          result[4] += 0.0014398848092152625;
          result[5] += 0.000989920806335493;
          result[6] += 0.0012598992080633546;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.36899563318777295;
          result[1] += 0;
          result[2] += 0.017467248908296942;
          result[3] += 0.6135371179039302;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5019455252918288;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4980544747081712;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.28139904610492844;
          result[1] += 0.006359300476947536;
          result[2] += 0;
          result[3] += 0.712241653418124;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.033773861967694566;
          result[1] += 0;
          result[2] += 0.024963289280469897;
          result[3] += 0.9412628487518355;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0.0024937655860349127;
          result[1] += 0.003740648379052369;
          result[2] += 0;
          result[3] += 0.09351620947630923;
          result[4] += 0.9002493765586035;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.632258064516129;
          result[4] += 0.36774193548387096;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0.9974193548387097;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0025806451612903226;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.205158264947245;
          result[4] += 0.7936694021101993;
          result[5] += 0.0011723329425556857;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20833333333333334;
          result[3] += 0.7777777777777778;
          result[4] += 0;
          result[5] += 0.013888888888888888;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003672420124862284;
          result[3] += 0.9698861549761293;
          result[4] += 0.02313624678663239;
          result[5] += 0.0033051781123760557;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42100000))) ) ) {
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9987884906612822;
          result[1] += 0;
          result[2] += 0.0012115093387178194;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9978471474703983;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002152852529601722;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.07700312174817898;
          result[1] += 0.019771071800208116;
          result[2] += 0.04058272632674298;
          result[3] += 0.8626430801248699;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6089093214965123;
          result[1] += 0;
          result[2] += 0.0030120481927710845;
          result[3] += 0.387285986049461;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007926442612555486;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0.808641975308642;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19135802469135801;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9830020920502092;
          result[1] += 0;
          result[2] += 0.009152719665271966;
          result[3] += 0.006014644351464435;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018305439330543933;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.18055555555555555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8194444444444444;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0.00625;
          result[2] += 0;
          result[3] += 0.225;
          result[4] += 0.01875;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.9988173402389788;
          result[1] += 0.0001223441132090861;
          result[2] += 0.0009379715346029934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001223441132090861;
        } else {
          result[0] += 0.9857242339832869;
          result[1] += 0.004526462395543176;
          result[2] += 0.00383008356545961;
          result[3] += 0.005919220055710306;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9489082969432314;
          result[1] += 0;
          result[2] += 0.007423580786026201;
          result[3] += 0.03973799126637555;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003930131004366812;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009378256339006602;
          result[3] += 0.9510246613407434;
          result[4] += 0.039597082320250096;
          result[5] += 0;
          result[6] += 0;
        }
      }
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41200000))) ) ) {
          result[0] += 0.9745098039215686;
          result[1] += 0;
          result[2] += 0.025490196078431372;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9965116279069768;
          result[4] += 0;
          result[5] += 0.0034883720930232558;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.14531043593130782;
          result[1] += 0;
          result[2] += 0.013870541611624836;
          result[3] += 0.8401585204755615;
          result[4] += 0;
          result[5] += 0.0006605019815059446;
          result[6] += 0;
        } else {
          result[0] += 0.0016722408026755853;
          result[1] += 0.017558528428093644;
          result[2] += 0.010033444816053512;
          result[3] += 0.9707357859531772;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6153846153846154;
          result[1] += 0;
          result[2] += 0.38461538461538464;
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
          result[0] += 0.08252947481243302;
          result[1] += 0.010718113612004287;
          result[2] += 0.0010718113612004287;
          result[3] += 0.9056806002143623;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.10204081632653061;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8979591836734694;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3885622661678247;
          result[1] += 0.005344735435595938;
          result[2] += 0.01870657402458578;
          result[3] += 0.5873864243719936;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.483695652173913;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5163043478260869;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.002314814814814815;
          result[2] += 0.00925925925925926;
          result[3] += 0.9822530864197532;
          result[4] += 0.003858024691358025;
          result[5] += 0.002314814814814815;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11428571428571428;
          result[3] += 0;
          result[4] += 0.8857142857142857;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0.008620689655172415;
          result[2] += 0;
          result[3] += 0.9827586206896552;
          result[4] += 0;
          result[5] += 0.008620689655172415;
          result[6] += 0;
        } else {
          result[0] += 0.9401649981460882;
          result[1] += 0.0005098257322951427;
          result[2] += 0.002549128661475714;
          result[3] += 0.05635891731553578;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004171301446051168;
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
          result[2] += 0.009933774834437087;
          result[3] += 0.9900662251655629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0026455026455026454;
          result[2] += 0.007054673721340388;
          result[3] += 0.935626102292769;
          result[4] += 0.054673721340388004;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008426966292134831;
          result[2] += 0.003745318352059925;
          result[3] += 0.7734082397003745;
          result[4] += 0.2144194756554307;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021929824561403508;
          result[3] += 0.9780701754385965;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9038461538461539;
          result[1] += 0;
          result[2] += 0.09615384615384616;
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
          result[3] += 0.17786561264822134;
          result[4] += 0.8221343873517787;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9975609756097561;
          result[1] += 0;
          result[2] += 0.0024390243902439024;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9891891891891892;
          result[1] += 0;
          result[2] += 0.008108108108108109;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002702702702702703;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0.9863013698630136;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0136986301369863;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997097001617384;
          result[1] += 0;
          result[2] += 0.0002902998382615187;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.7161768005384788;
          result[1] += 0.0024680278214045323;
          result[2] += 0.0035898586493156833;
          result[3] += 0.27574601750056094;
          result[4] += 0.0002243661655822302;
          result[5] += 0.0013461969934933811;
          result[6] += 0.0004487323311644604;
        } else {
          result[0] += 0.9069045771916214;
          result[1] += 0.000517196793379881;
          result[2] += 0.011378329454357383;
          result[3] += 0.06697698474269459;
          result[4] += 0.011895526247737265;
          result[5] += 0.000517196793379881;
          result[6] += 0.0018101887768295836;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0013136288998357964;
          result[2] += 0;
          result[3] += 0.9967159277504105;
          result[4] += 0.0016420361247947454;
          result[5] += 0.0003284072249589491;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04095112285336856;
          result[3] += 0;
          result[4] += 0.9590488771466315;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.10952945828390669;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8849347568208779;
          result[4] += 0.0031633056544088573;
          result[5] += 0.002372479240806643;
          result[6] += 0;
        } else {
          result[0] += 0.9868421052631579;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.013157894736842105;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.896551724137931;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10344827586206896;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9968644218777837;
          result[1] += 0.00042757883484767506;
          result[2] += 0.001460894352396223;
          result[3] += 0.0011758417958311063;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.126313914127917e-05;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0784313725490196;
          result[3] += 0.9215686274509803;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.18816762530813474;
          result[1] += 0;
          result[2] += 0.005204053683922213;
          result[3] += 0.806628321007943;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9942915392456677;
          result[1] += 0;
          result[2] += 0.004077471967380225;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016309887869520897;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5588785046728972;
          result[1] += 0;
          result[2] += 0.018691588785046728;
          result[3] += 0.4224299065420561;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0034482758620689655;
          result[2] += 0;
          result[3] += 0.996551724137931;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.04504504504504504;
          result[1] += 0.07207207207207207;
          result[2] += 0;
          result[3] += 0.8828828828828829;
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
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.3212121212121212;
          result[1] += 0.0015151515151515152;
          result[2] += 0;
          result[3] += 0.6681818181818182;
          result[4] += 0.004545454545454545;
          result[5] += 0.004545454545454545;
          result[6] += 0;
        } else {
          result[0] += 0.9976115294308153;
          result[1] += 0.0005667557282811108;
          result[2] += 0.0009715812484819043;
          result[3] += 0.0008096510404015869;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.048255202007934e-05;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01165396683101748;
          result[3] += 0.8776333482743165;
          result[4] += 0.10981622590766472;
          result[5] += 0.0008964589870013447;
          result[6] += 0;
        } else {
          result[0] += 0.9953193832599119;
          result[1] += 0;
          result[2] += 0.004405286343612335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027533039647577095;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.32457879088206143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6754212091179386;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8728270814272644;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12717291857273558;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.004511278195488722;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9954887218045113;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9747023809523809;
          result[1] += 0;
          result[2] += 0.017857142857142856;
          result[3] += 0.002380952380952381;
          result[4] += 0.002380952380952381;
          result[5] += 0;
          result[6] += 0.0026785714285714286;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0016764459346186086;
          result[2] += 0.0008382229673093043;
          result[3] += 0.9974853310980721;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9630872483221476;
          result[1] += 0;
          result[2] += 0.03691275167785235;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x4627ee00))) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.9166666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9992657856093979;
          result[4] += 0.0007342143906020558;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0005803830528148579;
          result[2] += 0.0040626813697040055;
          result[3] += 0.9564712710388857;
          result[4] += 0.03598374927452119;
          result[5] += 0.0029019152640742895;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.9986244841815681;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.001375515818431912;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015957446808510637;
          result[3] += 0;
          result[4] += 0.9840425531914894;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
          result[1] += 0.011560693641618497;
          result[2] += 0;
          result[3] += 0.23121387283236994;
          result[4] += 0.7572254335260116;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.002617801047120419;
          result[2] += 0;
          result[3] += 0.12958115183246074;
          result[4] += 0.8678010471204188;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9988320788995588;
          result[1] += 0;
          result[2] += 0.0010381520892810796;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00012976901116013495;
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
          result[0] += 0.8314806580702535;
          result[1] += 0.004001778568252558;
          result[2] += 0.008448199199644289;
          result[3] += 0.15540240106714098;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006669630947087595;
        } else {
          result[0] += 0;
          result[1] += 0.0007501875468867217;
          result[2] += 0.002625656414103526;
          result[3] += 0.9966241560390098;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9993390614672836;
          result[1] += 0;
          result[2] += 0.0006609385327164573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9718240237271379;
          result[1] += 0;
          result[2] += 0.007414730598121601;
          result[3] += 0.019772614928324272;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009886307464162135;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9537037037037037;
          result[1] += 0;
          result[2] += 0.046296296296296294;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
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
          result[0] += 0.9971764705882353;
          result[1] += 0;
          result[2] += 0.002823529411764706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997111019397441;
          result[1] += 0;
          result[2] += 0.0002888980602558811;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.002702702702702703;
          result[1] += 0.04054054054054054;
          result[2] += 0;
          result[3] += 0.9513513513513514;
          result[4] += 0;
          result[5] += 0.005405405405405406;
          result[6] += 0;
        } else {
          result[0] += 0.9971340388007055;
          result[1] += 0;
          result[2] += 0.001984126984126984;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008818342151675485;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.02335308469850122;
          result[1] += 0;
          result[2] += 0.009062391077030324;
          result[3] += 0.9487626350644824;
          result[4] += 0.018821889159986057;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9865354738477473;
          result[1] += 0;
          result[2] += 0.011393060590367685;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020714655618850335;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9625;
          result[5] += 0.0375;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41200000))) ) ) {
          result[0] += 0.9881046788263284;
          result[1] += 0;
          result[2] += 0.011895321173671689;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0048543689320388345;
          result[3] += 0.9922330097087378;
          result[4] += 0;
          result[5] += 0.002912621359223301;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.004834810636583401;
          result[2] += 0.011281224818694601;
          result[3] += 0.9826752618855762;
          result[4] += 0;
          result[5] += 0.0012087026591458502;
          result[6] += 0;
        } else {
          result[0] += 0.9896907216494846;
          result[1] += 0;
          result[2] += 0.010309278350515464;
          result[3] += 0;
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
