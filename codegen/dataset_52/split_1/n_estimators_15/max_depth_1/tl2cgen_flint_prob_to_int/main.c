
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
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e65e4a4))) ) ) {
    result[0] += 188440160;
    result[1] += 97890992;
  } else {
    result[0] += 49029307;
    result[1] += 237301845;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e6639d6))) ) ) {
    result[0] += 192051383;
    result[1] += 94279769;
  } else {
    result[0] += 58531782;
    result[1] += 227799370;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 207213334;
    result[1] += 79117818;
  } else {
    result[0] += 68903218;
    result[1] += 217427934;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ec96bba))) ) ) {
    result[0] += 263961531;
    result[1] += 22369621;
  } else {
    result[0] += 54676300;
    result[1] += 231654852;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 50871017;
    result[1] += 235460135;
  } else {
    result[0] += 234270943;
    result[1] += 52060209;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 276105040;
    result[1] += 10226112;
  } else {
    result[0] += 60862660;
    result[1] += 225468492;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2952d2))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 59869241;
    result[1] += 226461911;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 273316100;
    result[1] += 13015052;
  } else {
    result[0] += 43603728;
    result[1] += 242727424;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 63629145;
    result[1] += 222702007;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e95e2ac))) ) ) {
    result[0] += 262470223;
    result[1] += 23860929;
  } else {
    result[0] += 76674451;
    result[1] += 209656701;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3a8461fa))) ) ) {
    result[0] += 164857330;
    result[1] += 121473822;
  } else {
    result[0] += 40156198;
    result[1] += 246174954;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 68600172;
    result[1] += 217730980;
  } else {
    result[0] += 246002821;
    result[1] += 40328331;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e181840))) ) ) {
    result[0] += 205674490;
    result[1] += 80656662;
  } else {
    result[0] += 65617555;
    result[1] += 220713597;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 47271652;
    result[1] += 239059500;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e47396d))) ) ) {
    result[0] += 191871391;
    result[1] += 94459761;
  } else {
    result[0] += 43122161;
    result[1] += 243208991;
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
