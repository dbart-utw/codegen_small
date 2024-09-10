
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9927334785461425781) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2956943213939666748) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.0982687881517062;
        result[1] += 0.9017312118482939;
      } else {
        result[0] += 0.9522369543304644;
        result[1] += 0.04776304566953555;
      }
    }
  }
  if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9927334785461425781) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        result[0] += 0.7063848360144657;
        result[1] += 0.29361516398553433;
      } else {
        result[0] += 0.1778875849289685;
        result[1] += 0.8221124150710315;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9995610082946328;
        result[1] += 0.0004389917053672512;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 4.018808021540811e-05;
        result[1] += 0.9999598119197846;
      } else {
        result[0] += 0.8810073806975041;
        result[1] += 0.11899261930249591;
      }
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6774668097496032715) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9562430475064372;
        result[1] += 0.043756952493562866;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
        result[0] += 0.01833827056002257;
        result[1] += 0.9816617294399774;
      } else {
        result[0] += 0.9791897187059051;
        result[1] += 0.020810281294094957;
      }
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001774667529389262199) ) ) {
        result[0] += 0.35990220048899757;
        result[1] += 0.6400977995110024;
      } else {
        result[0] += 0.8313953488372093;
        result[1] += 0.1686046511627907;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.299465477466583252) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3234125673770904541) ) ) {
        result[0] += 0.9656292480503684;
        result[1] += 0.03437075194963154;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6840395033359527588) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9743048044557208;
        result[1] += 0.02569519554427923;
      }
    } else {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.770910799503326416) ) ) {
        result[0] += 0.3627674221563228;
        result[1] += 0.6372325778436772;
      } else {
        result[0] += 0.8090759599573032;
        result[1] += 0.19092404004269684;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
        result[0] += 0.9074735420931144;
        result[1] += 0.09252645790688559;
      } else {
        result[0] += 0.40410303871664355;
        result[1] += 0.5958969612833565;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9510242359346897;
        result[1] += 0.04897576406531035;
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
        result[0] += 0.869215291750503;
        result[1] += 0.13078470824949698;
      } else {
        result[0] += 0.15616469517743403;
        result[1] += 0.843835304822566;
      }
    }
  }
  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8832333683967590332) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
        result[0] += 0.9993877928198494;
        result[1] += 0.0006122071801506261;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3241925090551376343) ) ) {
        result[0] += 0.5471828735754607;
        result[1] += 0.45281712642453936;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3210727423429489136) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += 0.9753393788503826;
        result[1] += 0.02466062114961746;
      } else {
        result[0] += 0.5216431637032496;
        result[1] += 0.47835683629675047;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3622884899377822876) ) ) {
        result[0] += 0.4228163992869875;
        result[1] += 0.5771836007130124;
      } else {
        result[0] += 0.015473887814313346;
        result[1] += 0.9845261121856866;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_4/test_data.csv", "r");
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
