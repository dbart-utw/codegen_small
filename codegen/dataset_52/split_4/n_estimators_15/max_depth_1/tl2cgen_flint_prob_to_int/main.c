
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
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 261214385;
    result[1] += 25116767;
  } else {
    result[0] += 48648496;
    result[1] += 237682656;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 56981323;
    result[1] += 229349829;
  } else {
    result[0] += 263239930;
    result[1] += 23091222;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f780c74))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 76996612;
    result[1] += 209334540;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f780c74))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 71877367;
    result[1] += 214453785;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d60bf5d))) ) ) {
    result[0] += 265878927;
    result[1] += 20452225;
  } else {
    result[0] += 71928598;
    result[1] += 214402554;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e84b1ee))) ) ) {
    result[0] += 280239000;
    result[1] += 6092152;
  } else {
    result[0] += 54349894;
    result[1] += 231981258;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 74962233;
    result[1] += 211368919;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 268435455;
    result[1] += 17895697;
  } else {
    result[0] += 47943820;
    result[1] += 238387332;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ee872b0))) ) ) {
    result[0] += 167430928;
    result[1] += 118900224;
  } else {
    result[0] += 57266230;
    result[1] += 229064922;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 94235569;
    result[1] += 192095583;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ea6c376))) ) ) {
    result[0] += 268977749;
    result[1] += 17353403;
  } else {
    result[0] += 87144263;
    result[1] += 199186889;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 54829369;
    result[1] += 231501783;
  } else {
    result[0] += 244335917;
    result[1] += 41995235;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 56974055;
    result[1] += 229357097;
  } else {
    result[0] += 243595160;
    result[1] += 42735992;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d939432))) ) ) {
    result[0] += 187995201;
    result[1] += 98335951;
  } else {
    result[0] += 61107258;
    result[1] += 225223894;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0e5c92))) ) ) {
    result[0] += 220507899;
    result[1] += 65823253;
  } else {
    result[0] += 55313972;
    result[1] += 231017180;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
