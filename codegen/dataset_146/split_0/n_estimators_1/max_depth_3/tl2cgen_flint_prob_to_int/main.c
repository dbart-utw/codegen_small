
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
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1790432149;
        result[1] += 336352860;
        result[2] += 15523978;
        result[3] += 56921253;
        result[4] += 1893925337;
        result[5] += 201811716;
      } else {
        result[0] += 301770577;
        result[1] += 91232965;
        result[2] += 131001181;
        result[3] += 891275892;
        result[4] += 425753838;
        result[5] += 2453932839;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 4284592977;
        result[2] += 0;
        result[3] += 10374317;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 3221225471;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1073741823;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 4224210008;
        result[1] += 0;
        result[2] += 49530100;
        result[3] += 14151457;
        result[4] += 7075728;
        result[5] += 0;
      } else {
        result[0] += 687194767;
        result[1] += 0;
        result[2] += 2233382993;
        result[3] += 343597383;
        result[4] += 515396075;
        result[5] += 515396075;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        result[0] += 2942847961;
        result[1] += 0;
        result[2] += 874900745;
        result[3] += 397682156;
        result[4] += 79536431;
        result[5] += 0;
      } else {
        result[0] += 79381691;
        result[1] += 0;
        result[2] += 3722583521;
        result[3] += 380196521;
        result[4] += 0;
        result[5] += 112805561;
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
