
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 38868482;
            result[1] += 38868482;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4120059124;
            result[5] += 97171205;
          } else {
            result[0] += 116080197;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1625122760;
            result[5] += 2553764337;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 339076365;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3955890929;
            result[5] += 0;
          } else {
            result[0] += 3692164867;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 527452123;
            result[5] += 75350303;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 186737708;
            result[4] += 2987803335;
            result[5] += 1120426250;
          } else {
            result[0] += 0;
            result[1] += 9673349;
            result[2] += 0;
            result[3] += 246670418;
            result[4] += 217650369;
            result[5] += 3820973156;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 48258059;
            result[2] += 579096713;
            result[3] += 868645070;
            result[4] += 386064475;
            result[5] += 2412902974;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2733161005;
            result[4] += 0;
            result[5] += 1561806289;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 4129776245;
            result[2] += 0;
            result[3] += 0;
            result[4] += 165191049;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967295;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 4285548507;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9418787;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2733161005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1561806289;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 3598486112;
            result[1] += 31658235;
            result[2] += 0;
            result[3] += 102009870;
            result[4] += 443215298;
            result[5] += 119597778;
          } else {
            result[0] += 0;
            result[1] += 4294967295;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 106707261;
            result[1] += 80030446;
            result[2] += 506859494;
            result[3] += 1840700269;
            result[4] += 293444970;
            result[5] += 1467224852;
          } else {
            result[0] += 2321603943;
            result[1] += 0;
            result[2] += 1354268966;
            result[3] += 116080197;
            result[4] += 503014187;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 4294967295;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 277094664;
            result[2] += 277094664;
            result[3] += 0;
            result[4] += 831283992;
            result[5] += 2909493974;
          } else {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 238609294;
            result[3] += 2624702235;
            result[4] += 0;
            result[5] += 1336212047;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 648296950;
            result[3] += 3079410513;
            result[4] += 0;
            result[5] += 567259831;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3435973836;
            result[3] += 858993459;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4294967295;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3485770558;
            result[3] += 622459028;
            result[4] += 0;
            result[5] += 186737708;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4294967295;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967295;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2319282339;
            result[3] += 1717986918;
            result[4] += 0;
            result[5] += 257698037;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3642375091;
            result[3] += 607062515;
            result[4] += 30353125;
            result[5] += 15176562;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 1952257861;
            result[1] += 0;
            result[2] += 1561806289;
            result[3] += 780903144;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7170229;
            result[1] += 0;
            result[2] += 4180243627;
            result[3] += 93212979;
            result[4] += 7170229;
            result[5] += 7170229;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 4294967295;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 560213125;
            result[1] += 0;
            result[2] += 3734754169;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
