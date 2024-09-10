
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 858993459;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 6617186;
        result[1] += 6617186;
        result[2] += 7857908;
        result[3] += 837901178;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 849951422;
        result[1] += 0;
        result[2] += 9042036;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 163079585;
        result[1] += 0;
        result[2] += 807324;
        result[3] += 142089143;
        result[4] += 552210080;
        result[5] += 807324;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1166318;
        result[2] += 8164228;
        result[3] += 756357444;
        result[4] += 91555989;
        result[5] += 1749477;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 858696023;
        result[1] += 0;
        result[2] += 297435;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 599855302;
        result[1] += 1498389;
        result[2] += 5494095;
        result[3] += 251063501;
        result[4] += 0;
        result[5] += 166487;
        result[6] += 915682;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41840000))) ) ) {
        result[0] += 368140053;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 490853405;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 858647787;
        result[5] += 345671;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 2130175;
        result[2] += 4792895;
        result[3] += 851005299;
        result[4] += 0;
        result[5] += 1065087;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 855400546;
        result[1] += 0;
        result[2] += 431149;
        result[3] += 3161762;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 668377170;
        result[1] += 0;
        result[2] += 3796056;
        result[3] += 186006790;
        result[4] += 0;
        result[5] += 271146;
        result[6] += 542293;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 858458442;
        result[1] += 0;
        result[2] += 437740;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 97275;
      } else {
        result[0] += 598033420;
        result[1] += 3054307;
        result[2] += 5742098;
        result[3] += 251797115;
        result[4] += 0;
        result[5] += 0;
        result[6] += 366516;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 48987690;
        result[1] += 0;
        result[2] += 3987370;
        result[3] += 655637580;
        result[4] += 148671944;
        result[5] += 1708872;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 26488785;
        result[2] += 0;
        result[3] += 39733177;
        result[4] += 792771496;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 834219040;
        result[1] += 0;
        result[2] += 705321;
        result[3] += 23980932;
        result[4] += 0;
        result[5] += 0;
        result[6] += 88165;
      } else {
        result[0] += 479077442;
        result[1] += 0;
        result[2] += 7908580;
        result[3] += 371094907;
        result[4] += 0;
        result[5] += 608352;
        result[6] += 304176;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
        result[0] += 220186711;
        result[1] += 4775133;
        result[2] += 27059089;
        result[3] += 288099720;
        result[4] += 318872803;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 768041210;
        result[1] += 1038267;
        result[2] += 1107485;
        result[3] += 71917341;
        result[4] += 16819936;
        result[5] += 69217;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 725372254;
        result[1] += 0;
        result[2] += 440994;
        result[3] += 112768484;
        result[4] += 20285727;
        result[5] += 0;
        result[6] += 125998;
      } else {
        result[0] += 94640442;
        result[1] += 1314450;
        result[2] += 0;
        result[3] += 339128251;
        result[4] += 423910314;
        result[5] += 0;
        result[6] += 0;
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
        result[4] += 858085432;
        result[5] += 908026;
        result[6] += 0;
      } else {
        result[0] += 112014310;
        result[1] += 0;
        result[2] += 9768689;
        result[3] += 734605475;
        result[4] += 0;
        result[5] += 2604983;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 854677330;
        result[1] += 83808;
        result[2] += 502849;
        result[3] += 3729470;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 696447237;
        result[1] += 889660;
        result[2] += 4343636;
        result[3] += 156370930;
        result[4] += 0;
        result[5] += 104665;
        result[6] += 837327;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 858993459;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 18363280;
        result[2] += 2720486;
        result[3] += 837909692;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 833562731;
        result[1] += 0;
        result[2] += 25430727;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 858993459;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 5138939;
        result[1] += 7510757;
        result[2] += 8301363;
        result[3] += 838042399;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 848027585;
        result[1] += 0;
        result[2] += 10965873;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 811260056;
        result[1] += 534329;
        result[2] += 1335822;
        result[3] += 44586798;
        result[4] += 1157713;
        result[5] += 29684;
        result[6] += 89054;
      } else {
        result[0] += 554825283;
        result[1] += 0;
        result[2] += 5826976;
        result[3] += 296398873;
        result[4] += 1262511;
        result[5] += 291348;
        result[6] += 388465;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        result[0] += 644245094;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 858993459;
        result[5] += 0;
        result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
