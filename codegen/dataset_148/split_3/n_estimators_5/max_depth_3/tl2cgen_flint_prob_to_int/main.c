
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
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
        result[1] += 0;
        result[2] += 4424380;
        result[3] += 685778965;
        result[4] += 166356703;
        result[5] += 2433409;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 3538593;
        result[2] += 0;
        result[3] += 82272288;
        result[4] += 773182577;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 857632228;
        result[1] += 0;
        result[2] += 1247795;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 113435;
      } else {
        result[0] += 858825883;
        result[1] += 0;
        result[2] += 167575;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 448432298;
        result[1] += 1743023;
        result[2] += 3802959;
        result[3] += 404381351;
        result[4] += 0;
        result[5] += 0;
        result[6] += 633826;
      } else {
        result[0] += 731594396;
        result[1] += 985407;
        result[2] += 9009436;
        result[3] += 116559584;
        result[4] += 0;
        result[5] += 140772;
        result[6] += 703862;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 259395653;
        result[1] += 0;
        result[2] += 1358092;
        result[3] += 135130196;
        result[4] += 462430470;
        result[5] += 679046;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 661527;
        result[2] += 7607566;
        result[3] += 827570902;
        result[4] += 21499643;
        result[5] += 1653818;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 262141107;
        result[4] += 596852351;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 3219615;
        result[2] += 0;
        result[3] += 0;
        result[4] += 855773843;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 835714503;
        result[1] += 4655791;
        result[2] += 2327895;
        result[3] += 16295268;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 363725090;
        result[1] += 0;
        result[2] += 0;
        result[3] += 495268368;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 750382046;
        result[1] += 595856;
        result[2] += 2019291;
        result[3] += 105731438;
        result[4] += 0;
        result[5] += 33103;
        result[6] += 231722;
      } else {
        result[0] += 846926606;
        result[1] += 0;
        result[2] += 2330150;
        result[3] += 9320603;
        result[4] += 0;
        result[5] += 0;
        result[6] += 416098;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 827451471;
        result[1] += 0;
        result[2] += 31541987;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47281245;
        result[1] += 3050402;
        result[2] += 1220161;
        result[3] += 571950545;
        result[4] += 235491104;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 2757603;
        result[1] += 9651611;
        result[2] += 0;
        result[3] += 42742852;
        result[4] += 803841391;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 229945941;
        result[4] += 629047517;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 858993459;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 858171990;
        result[1] += 0;
        result[2] += 690033;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 131435;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 547872960;
        result[1] += 1318307;
        result[2] += 4110016;
        result[3] += 280489242;
        result[4] += 24582551;
        result[5] += 232642;
        result[6] += 387737;
      } else {
        result[0] += 11129479;
        result[1] += 0;
        result[2] += 15682448;
        result[3] += 574685847;
        result[4] += 255472141;
        result[5] += 2023541;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 183386598;
        result[1] += 3189332;
        result[2] += 0;
        result[3] += 671885972;
        result[4] += 531555;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 463234777;
        result[1] += 0;
        result[2] += 26535543;
        result[3] += 369223137;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 4497347;
        result[1] += 0;
        result[2] += 0;
        result[3] += 656612801;
        result[4] += 197883309;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1477626;
        result[1] += 3940336;
        result[2] += 0;
        result[3] += 66000644;
        result[4] += 787574851;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 858336485;
        result[1] += 0;
        result[2] += 558427;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 98546;
      } else {
        result[0] += 509971156;
        result[1] += 1510919;
        result[2] += 6403418;
        result[3] += 330747376;
        result[4] += 9425256;
        result[5] += 503639;
        result[6] += 431691;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 775264;
        result[1] += 0;
        result[2] += 3101059;
        result[3] += 820747059;
        result[4] += 33336388;
        result[5] += 1033686;
        result[6] += 0;
      } else {
        result[0] += 444475618;
        result[1] += 0;
        result[2] += 12839048;
        result[3] += 0;
        result[4] += 401678791;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 233401340;
        result[4] += 625592118;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 6847049;
        result[2] += 0;
        result[3] += 0;
        result[4] += 852146409;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 856382536;
        result[1] += 440396;
        result[2] += 1855956;
        result[3] += 62913;
        result[4] += 0;
        result[5] += 0;
        result[6] += 251655;
      } else {
        result[0] += 275562060;
        result[1] += 17103852;
        result[2] += 0;
        result[3] += 566327545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 388371520;
        result[1] += 0;
        result[2] += 1046823;
        result[3] += 469575115;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 848502698;
        result[1] += 0;
        result[2] += 8242740;
        result[3] += 999120;
        result[4] += 0;
        result[5] += 249780;
        result[6] += 999120;
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
