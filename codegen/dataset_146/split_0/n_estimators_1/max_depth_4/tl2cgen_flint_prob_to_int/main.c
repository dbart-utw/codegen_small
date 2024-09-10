
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 17530478;
          result[2] += 0;
          result[3] += 35060957;
          result[4] += 4049540592;
          result[5] += 192835266;
        } else {
          result[0] += 0;
          result[1] += 1952257861;
          result[2] += 0;
          result[3] += 1561806289;
          result[4] += 0;
          result[5] += 780903144;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 109110023;
          result[1] += 14878639;
          result[2] += 0;
          result[3] += 183503221;
          result[4] += 362046896;
          result[5] += 3625428513;
        } else {
          result[0] += 395086012;
          result[1] += 76468260;
          result[2] += 140191810;
          result[3] += 2026408901;
          result[4] += 254894201;
          result[5] += 1401918108;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 1227133512;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3067833782;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 4274168421;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20798873;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 3147882450;
          result[1] += 167222087;
          result[2] += 35204649;
          result[3] += 170155808;
          result[4] += 501666261;
          result[5] += 272836037;
        } else {
          result[0] += 520952906;
          result[1] += 92613850;
          result[2] += 1111366200;
          result[3] += 1134519662;
          result[4] += 405185593;
          result[5] += 1030329081;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4294967295;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 602802427;
          result[3] += 3014012136;
          result[4] += 0;
          result[5] += 678152730;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4294967295;
        } else {
          result[0] += 252645135;
          result[1] += 421075225;
          result[2] += 1852730990;
          result[3] += 1263225675;
          result[4] += 84215045;
          result[5] += 421075225;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 1561806289;
          result[1] += 0;
          result[2] += 1952257861;
          result[3] += 390451572;
          result[4] += 130150524;
          result[5] += 260301048;
        } else {
          result[0] += 23572817;
          result[1] += 0;
          result[2] += 3927231346;
          result[3] += 306446623;
          result[4] += 0;
          result[5] += 37716507;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ee0000))) ) ) {
          result[0] += 2962046410;
          result[1] += 0;
          result[2] += 1332920884;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967295;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
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
