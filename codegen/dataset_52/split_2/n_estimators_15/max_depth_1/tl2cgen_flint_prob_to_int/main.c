
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
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f754270))) ) ) {
    result[0] += 92208337;
    result[1] += 194122815;
  } else {
    result[0] += 275726295;
    result[1] += 10604857;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 74446099;
    result[1] += 211885053;
  } else {
    result[0] += 231791885;
    result[1] += 54539267;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d6963dc))) ) ) {
    result[0] += 208783132;
    result[1] += 77548020;
  } else {
    result[0] += 56580407;
    result[1] += 229750745;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3bcf95d5))) ) ) {
    result[0] += 202634354;
    result[1] += 83696798;
  } else {
    result[0] += 75198080;
    result[1] += 211133072;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 274059817;
    result[1] += 12271335;
  } else {
    result[0] += 53408919;
    result[1] += 232922233;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 65672282;
    result[1] += 220658870;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ddb352b))) ) ) {
    result[0] += 196501771;
    result[1] += 89829381;
  } else {
    result[0] += 62245902;
    result[1] += 224085250;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 69537565;
    result[1] += 216793587;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 62992853;
    result[1] += 223338299;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 75662636;
    result[1] += 210668516;
  } else {
    result[0] += 229064922;
    result[1] += 57266230;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 89557320;
    result[1] += 196773832;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 71240286;
    result[1] += 215090866;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d94562e))) ) ) {
    result[0] += 204052086;
    result[1] += 82279066;
  } else {
    result[0] += 53687091;
    result[1] += 232644061;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 69456566;
    result[1] += 216874586;
  } else {
    result[0] += 244085573;
    result[1] += 42245579;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f25930c))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 94645025;
    result[1] += 191686127;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
