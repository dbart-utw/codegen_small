
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 429496729;
    result[1] += 0;
  } else {
    result[0] += 110175248;
    result[1] += 319321481;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 97201891;
    result[1] += 332294838;
  } else {
    result[0] += 382428594;
    result[1] += 47068134;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3ea1b6))) ) ) {
    result[0] += 429496729;
    result[1] += 0;
  } else {
    result[0] += 104229331;
    result[1] += 325267397;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
    result[0] += 400863614;
    result[1] += 28633115;
  } else {
    result[0] += 141936687;
    result[1] += 287560042;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 429496729;
    result[1] += 0;
  } else {
    result[0] += 87114902;
    result[1] += 342381826;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0ee4e2))) ) ) {
    result[0] += 310192082;
    result[1] += 119304647;
  } else {
    result[0] += 98941654;
    result[1] += 330555074;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    result[0] += 263961531;
    result[1] += 165535197;
  } else {
    result[0] += 79726937;
    result[1] += 349769791;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 58567735;
    result[1] += 370928993;
  } else {
    result[0] += 356812667;
    result[1] += 72684061;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 305743434;
    result[1] += 123753294;
  } else {
    result[0] += 96847301;
    result[1] += 332649427;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 403726925;
    result[1] += 25769803;
  } else {
    result[0] += 96787995;
    result[1] += 332708734;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
