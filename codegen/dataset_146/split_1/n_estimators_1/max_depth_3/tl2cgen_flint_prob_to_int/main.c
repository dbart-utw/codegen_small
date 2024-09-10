
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 43975774;
        result[1] += 29317182;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4089747014;
        result[5] += 131927323;
      } else {
        result[0] += 243686087;
        result[1] += 24368608;
        result[2] += 6092152;
        result[3] += 758472947;
        result[4] += 255870392;
        result[5] += 3006477106;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 4206915573;
        result[2] += 0;
        result[3] += 0;
        result[4] += 88051721;
        result[5] += 0;
      } else {
        result[0] += 2761623830;
        result[1] += 128447620;
        result[2] += 396046828;
        result[3] += 310415081;
        result[4] += 446890678;
        result[5] += 251543255;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 62245902;
        result[1] += 0;
        result[2] += 435721319;
        result[3] += 560213125;
        result[4] += 124491805;
        result[5] += 3112295141;
      } else {
        result[0] += 220254733;
        result[1] += 357913941;
        result[2] += 1844633389;
        result[3] += 1266464715;
        result[4] += 192722891;
        result[5] += 412977624;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 99882960;
        result[1] += 0;
        result[2] += 2596956969;
        result[3] += 1198595524;
        result[4] += 0;
        result[5] += 399531841;
      } else {
        result[0] += 16777215;
        result[1] += 0;
        result[2] += 4138379945;
        result[3] += 134217727;
        result[4] += 0;
        result[5] += 5592405;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
