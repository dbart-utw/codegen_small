
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 403809786;
        result[1] += 0;
        result[2] += 0;
        result[3] += 96118882;
        result[4] += 357407567;
        result[5] += 1657222;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 601325;
        result[2] += 7215905;
        result[3] += 830129835;
        result[4] += 19843741;
        result[5] += 1202650;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 169604798;
        result[4] += 689388660;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 11673750;
        result[2] += 0;
        result[3] += 1945625;
        result[4] += 845374083;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 325376310;
        result[1] += 14874345;
        result[2] += 0;
        result[3] += 518742803;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 856185679;
        result[1] += 530358;
        result[2] += 2090236;
        result[3] += 93592;
        result[4] += 0;
        result[5] += 0;
        result[6] += 93592;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 160555436;
        result[1] += 0;
        result[2] += 3718586;
        result[3] += 694719436;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 853445248;
        result[1] += 0;
        result[2] += 3263652;
        result[3] += 979095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1305461;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 847474389;
        result[1] += 0;
        result[2] += 8227906;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3291162;
      } else {
        result[0] += 857851939;
        result[1] += 0;
        result[2] += 1141519;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 856837891;
        result[1] += 0;
        result[2] += 2155567;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 858804528;
        result[1] += 0;
        result[2] += 188930;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 12758907;
        result[1] += 4944076;
        result[2] += 4944076;
        result[3] += 550387379;
        result[4] += 284523641;
        result[5] += 1435377;
        result[6] += 0;
      } else {
        result[0] += 841721901;
        result[1] += 0;
        result[2] += 5010884;
        result[3] += 11194528;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1066145;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4028780;
        result[3] += 854964678;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8374588;
        result[3] += 0;
        result[4] += 845833392;
        result[5] += 4785478;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 387251149;
        result[1] += 0;
        result[2] += 0;
        result[3] += 104530729;
        result[4] += 366669969;
        result[5] += 541609;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6864784;
        result[3] += 832728196;
        result[4] += 17012726;
        result[5] += 2387751;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 142342785;
        result[4] += 716650673;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 8486214;
        result[2] += 0;
        result[3] += 942912;
        result[4] += 849564332;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 857465389;
        result[1] += 0;
        result[2] += 1528069;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 858945149;
        result[1] += 0;
        result[2] += 48309;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 784445311;
        result[1] += 1987950;
        result[2] += 5367466;
        result[3] += 65999960;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1192770;
      } else {
        result[0] += 0;
        result[1] += 308103;
        result[2] += 4929661;
        result[3] += 853755694;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 858993459;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 858993459;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 678152;
        result[2] += 5877323;
        result[3] += 690133429;
        result[4] += 161174299;
        result[5] += 1130254;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 5911548;
        result[2] += 0;
        result[3] += 70029112;
        result[4] += 783052798;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 803454242;
        result[1] += 1079384;
        result[2] += 2747523;
        result[3] += 51614183;
        result[4] += 0;
        result[5] += 0;
        result[6] += 98125;
      } else {
        result[0] += 645369671;
        result[1] += 0;
        result[2] += 1468835;
        result[3] += 211971347;
        result[4] += 0;
        result[5] += 0;
        result[6] += 183604;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 848935902;
        result[1] += 0;
        result[2] += 2929385;
        result[3] += 6932878;
        result[4] += 0;
        result[5] += 0;
        result[6] += 195292;
      } else {
        result[0] += 835165623;
        result[1] += 0;
        result[2] += 2978479;
        result[3] += 20849355;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 1995339;
        result[1] += 9976695;
        result[2] += 0;
        result[3] += 68839197;
        result[4] += 778182227;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 253538263;
        result[1] += 1247932;
        result[2] += 6863628;
        result[3] += 384779152;
        result[4] += 212564483;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 107243397;
        result[1] += 523138;
        result[2] += 5754523;
        result[3] += 722454303;
        result[4] += 21448679;
        result[5] += 1569415;
        result[6] += 0;
      } else {
        result[0] += 854087781;
        result[1] += 468695;
        result[2] += 1031129;
        result[3] += 3187127;
        result[4] += 0;
        result[5] += 0;
        result[6] += 218724;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 366305629;
        result[1] += 0;
        result[2] += 9461769;
        result[3] += 26357785;
        result[4] += 456868275;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13815410;
        result[1] += 0;
        result[2] += 5146917;
        result[3] += 837322226;
        result[4] += 2167123;
        result[5] += 541780;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 856904086;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2089372;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 847505400;
        result[1] += 0;
        result[2] += 8877136;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2610922;
      }
    }
  }
  
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
