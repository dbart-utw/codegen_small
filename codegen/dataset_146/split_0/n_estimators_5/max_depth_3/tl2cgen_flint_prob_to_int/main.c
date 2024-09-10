
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 751619276;
        result[5] += 53687091;
      } else {
        result[0] += 4100207;
        result[1] += 850793044;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2050103;
        result[5] += 2050103;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
        result[0] += 31267134;
        result[1] += 1705480;
        result[2] += 17623293;
        result[3] += 117109631;
        result[4] += 169979513;
        result[5] += 521308406;
      } else {
        result[0] += 507477304;
        result[1] += 48285186;
        result[2] += 49733741;
        result[3] += 89810445;
        result[4] += 86430482;
        result[5] += 77256297;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 26635456;
        result[2] += 153153872;
        result[3] += 279672288;
        result[4] += 59929776;
        result[5] += 339602065;
      } else {
        result[0] += 124279904;
        result[1] += 0;
        result[2] += 570225445;
        result[3] += 142556361;
        result[4] += 3655291;
        result[5] += 18276456;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 3491843;
        result[1] += 0;
        result[2] += 708844195;
        result[3] += 132690046;
        result[4] += 0;
        result[5] += 13967373;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 839749206;
        result[3] += 19244252;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6899545;
        result[1] += 10349318;
        result[2] += 34497729;
        result[3] += 0;
        result[4] += 796897546;
        result[5] += 10349318;
      } else {
        result[0] += 30845979;
        result[1] += 5364518;
        result[2] += 1341129;
        result[3] += 126066175;
        result[4] += 50292357;
        result[5] += 645083300;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 759753684;
        result[2] += 0;
        result[3] += 1626881;
        result[4] += 97612893;
        result[5] += 0;
      } else {
        result[0] += 545828986;
        result[1] += 31414617;
        result[2] += 47612780;
        result[3] += 75591424;
        result[4] += 91789586;
        result[5] += 66756063;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 116473689;
        result[3] += 582368446;
        result[4] += 0;
        result[5] += 160151322;
      } else {
        result[0] += 45210182;
        result[1] += 0;
        result[2] += 542522184;
        result[3] += 45210182;
        result[4] += 0;
        result[5] += 226050910;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 5506368;
        result[1] += 0;
        result[2] += 611206884;
        result[3] += 203735628;
        result[4] += 0;
        result[5] += 38544578;
      } else {
        result[0] += 11228672;
        result[1] += 0;
        result[2] += 802850095;
        result[3] += 42668956;
        result[4] += 0;
        result[5] += 2245734;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 109374943;
        result[1] += 2667681;
        result[2] += 0;
        result[3] += 0;
        result[4] += 634908208;
        result[5] += 112042625;
      } else {
        result[0] += 0;
        result[1] += 13155755;
        result[2] += 3095471;
        result[3] += 140843972;
        result[4] += 41015002;
        result[5] += 660883255;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 736959332;
        result[2] += 0;
        result[3] += 0;
        result[4] += 122034126;
        result[5] += 0;
      } else {
        result[0] += 555313725;
        result[1] += 11459612;
        result[2] += 48225869;
        result[3] += 76874901;
        result[4] += 86424578;
        result[5] += 80694771;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 171798691;
        result[3] += 28633115;
        result[4] += 28633115;
        result[5] += 629928536;
      } else {
        result[0] += 0;
        result[1] += 36092162;
        result[2] += 288737297;
        result[3] += 425887513;
        result[4] += 21655297;
        result[5] += 86621189;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 715827882;
        result[1] += 0;
        result[2] += 143165576;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 15407954;
        result[1] += 0;
        result[2] += 789657664;
        result[3] += 48149857;
        result[4] += 0;
        result[5] += 5777982;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 147055945;
        result[1] += 30344877;
        result[2] += 0;
        result[3] += 4668442;
        result[4] += 597560667;
        result[5] += 79363526;
      } else {
        result[0] += 1577582;
        result[1] += 11831865;
        result[2] += 5521537;
        result[3] += 106486792;
        result[4] += 69413612;
        result[5] += 664162068;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 588692428;
        result[1] += 42009976;
        result[2] += 18793936;
        result[3] += 51406944;
        result[4] += 90100343;
        result[5] += 67989829;
      } else {
        result[0] += 3886848;
        result[1] += 855106610;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 7990636;
        result[2] += 75911049;
        result[3] += 515396075;
        result[4] += 19976592;
        result[5] += 239719104;
      } else {
        result[0] += 52060209;
        result[1] += 13015052;
        result[2] += 312361257;
        result[3] += 123642997;
        result[4] += 123642997;
        result[5] += 234270943;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 22025473;
        result[1] += 0;
        result[2] += 699308777;
        result[3] += 115633734;
        result[4] += 0;
        result[5] += 22025473;
      } else {
        result[0] += 4618244;
        result[1] += 0;
        result[2] += 828205162;
        result[3] += 21551807;
        result[4] += 0;
        result[5] += 4618244;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 45052104;
        result[2] += 0;
        result[3] += 21024315;
        result[4] += 723837145;
        result[5] += 69079893;
      } else {
        result[0] += 58895248;
        result[1] += 2506180;
        result[2] += 15663629;
        result[3] += 143478849;
        result[4] += 65787245;
        result[5] += 572662306;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 5013580;
        result[1] += 790474525;
        result[2] += 8355967;
        result[3] += 15040741;
        result[4] += 40108644;
        result[5] += 0;
      } else {
        result[0] += 571952247;
        result[1] += 30355007;
        result[2] += 52189311;
        result[3] += 58047295;
        result[4] += 78816510;
        result[5] += 67633086;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 115387181;
        result[3] += 243595160;
        result[4] += 25641595;
        result[5] += 474369522;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 597560667;
        result[3] += 112042625;
        result[4] += 0;
        result[5] += 149390166;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
        result[0] += 0;
        result[1] += 858993459;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 3639802;
        result[1] += 0;
        result[2] += 771638191;
        result[3] += 76435858;
        result[4] += 909950;
        result[5] += 6369654;
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
