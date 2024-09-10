
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
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 38177487;
          result[1] += 133621204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4008636142;
          result[5] += 114532461;
        } else {
          result[0] += 260301048;
          result[1] += 130150524;
          result[2] += 0;
          result[3] += 1431655765;
          result[4] += 650752620;
          result[5] += 1822107337;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 65075262;
          result[1] += 9296466;
          result[2] += 9296466;
          result[3] += 274245747;
          result[4] += 204522252;
          result[5] += 3732531101;
        } else {
          result[0] += 261020111;
          result[1] += 47458202;
          result[2] += 35593651;
          result[3] += 1530527019;
          result[4] += 379665617;
          result[5] += 2040702692;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4294967295;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 4284978998;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9988296;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 3255912034;
          result[1] += 154162501;
          result[2] += 27749250;
          result[3] += 117163501;
          result[4] += 595067256;
          result[5] += 144912751;
        } else {
          result[0] += 509572390;
          result[1] += 114393802;
          result[2] += 1341527314;
          result[3] += 977547035;
          result[4] += 405578025;
          result[5] += 946348726;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 221390066;
          result[2] += 708448213;
          result[3] += 2125344640;
          result[4] += 44278013;
          result[5] += 1195506360;
        } else {
          result[0] += 385445782;
          result[1] += 110127366;
          result[2] += 2257611014;
          result[3] += 660764199;
          result[4] += 110127366;
          result[5] += 770891565;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
          result[0] += 39403369;
          result[1] += 0;
          result[2] += 3684215064;
          result[3] += 551647175;
          result[4] += 0;
          result[5] += 19701684;
        } else {
          result[0] += 3006477106;
          result[1] += 0;
          result[2] += 429496729;
          result[3] += 858993459;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967295;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2240852501;
          result[3] += 2054114793;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 93368854;
          result[2] += 3454647606;
          result[3] += 746950833;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 15646511;
          result[1] += 0;
          result[2] += 4240204506;
          result[3] += 31293022;
          result[4] += 0;
          result[5] += 7823255;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
