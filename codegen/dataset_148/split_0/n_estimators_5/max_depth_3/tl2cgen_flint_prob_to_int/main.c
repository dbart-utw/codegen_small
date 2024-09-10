
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 114917444;
        result[1] += 0;
        result[2] += 2309898;
        result[3] += 653989978;
        result[4] += 86043714;
        result[5] += 1732423;
        result[6] += 0;
      } else {
        result[0] += 851568587;
        result[1] += 549990;
        result[2] += 1833301;
        result[3] += 4797139;
        result[4] += 0;
        result[5] += 0;
        result[6] += 244440;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 343626968;
        result[1] += 0;
        result[2] += 3993942;
        result[3] += 416257550;
        result[4] += 95114998;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 795471253;
        result[1] += 0;
        result[2] += 5052902;
        result[3] += 53416399;
        result[4] += 3127987;
        result[5] += 721843;
        result[6] += 1203072;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 521989628;
        result[1] += 0;
        result[2] += 20146968;
        result[3] += 316856862;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2323697;
        result[1] += 14716749;
        result[2] += 0;
        result[3] += 841953011;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 207486342;
        result[1] += 5705874;
        result[2] += 0;
        result[3] += 644763810;
        result[4] += 1037431;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 423623939;
        result[1] += 0;
        result[2] += 14877735;
        result[3] += 420491784;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 4466170;
        result[1] += 13398511;
        result[2] += 0;
        result[3] += 203955119;
        result[4] += 637173657;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 679583;
        result[2] += 0;
        result[3] += 74074594;
        result[4] += 784239281;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 93071855;
        result[1] += 0;
        result[2] += 9392572;
        result[3] += 692915697;
        result[4] += 60197851;
        result[5] += 3415480;
        result[6] += 0;
      } else {
        result[0] += 782172712;
        result[1] += 355651;
        result[2] += 1967938;
        result[3] += 74283764;
        result[4] += 0;
        result[5] += 71130;
        result[6] += 142260;
      }
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 858993459;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 858456160;
        result[1] += 0;
        result[2] += 537298;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 858893819;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 99639;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 523244403;
        result[1] += 1553455;
        result[2] += 4930533;
        result[3] += 287321762;
        result[4] += 40997722;
        result[5] += 472790;
        result[6] += 472790;
      } else {
        result[0] += 6969520;
        result[1] += 0;
        result[2] += 13939041;
        result[3] += 689982575;
        result[4] += 146940733;
        result[5] += 1161586;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 111792450;
        result[1] += 5754023;
        result[2] += 4110016;
        result[3] += 472240901;
        result[4] += 265096067;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 854719;
        result[1] += 12820797;
        result[2] += 0;
        result[3] += 106839982;
        result[4] += 738477958;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 858112891;
        result[1] += 0;
        result[2] += 704453;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 176113;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 589392840;
        result[1] += 1544357;
        result[2] += 3088714;
        result[3] += 263754123;
        result[4] += 551556;
        result[5] += 220622;
        result[6] += 441244;
      } else {
        result[0] += 320585917;
        result[1] += 0;
        result[2] += 10359303;
        result[3] += 400145369;
        result[4] += 127074124;
        result[5] += 276248;
        result[6] += 552496;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 178956970;
        result[1] += 3463683;
        result[2] += 10391049;
        result[3] += 666181755;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2071111;
        result[1] += 5177778;
        result[2] += 0;
        result[3] += 78184455;
        result[4] += 773560113;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45935c00))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 858238670;
        result[1] += 0;
        result[2] += 621590;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 133197;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43238000))) ) ) {
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
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 4730140;
        result[1] += 4730140;
        result[2] += 0;
        result[3] += 176907243;
        result[4] += 670733879;
        result[5] += 1892056;
        result[6] += 0;
      } else {
        result[0] += 473450727;
        result[1] += 1476948;
        result[2] += 6380419;
        result[3] += 373786218;
        result[4] += 3308365;
        result[5] += 236311;
        result[6] += 354467;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1687609;
        result[1] += 8438049;
        result[2] += 0;
        result[3] += 465780343;
        result[4] += 383087456;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 20506475;
        result[4] += 838486983;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
