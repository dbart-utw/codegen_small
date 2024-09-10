
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 266186480;
    result[1] += 124328000;
    result[2] += 32062322;
    result[3] += 83269774;
    result[4] += 125711985;
    result[5] += 227434895;
  } else {
    result[0] += 23384576;
    result[1] += 3117943;
    result[2] += 691403991;
    result[3] += 91199850;
    result[4] += 8574344;
    result[5] += 41312752;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 262269077;
    result[1] += 119706938;
    result[2] += 32133053;
    result[3] += 89384198;
    result[4] += 116765180;
    result[5] += 238735010;
  } else {
    result[0] += 15011536;
    result[1] += 9173716;
    result[2] += 684692844;
    result[3] += 88401268;
    result[4] += 7505768;
    result[5] += 54208325;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    result[0] += 138067833;
    result[1] += 169225999;
    result[2] += 10004915;
    result[3] += 84898854;
    result[4] += 152646424;
    result[5] += 304149431;
  } else {
    result[0] += 318407789;
    result[1] += 0;
    result[2] += 446242620;
    result[3] += 70757286;
    result[4] += 5660582;
    result[5] += 17925179;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 284025877;
    result[1] += 122815555;
    result[2] += 18839667;
    result[3] += 68204366;
    result[4] += 120192310;
    result[5] += 244915680;
  } else {
    result[0] += 14035840;
    result[1] += 701792;
    result[2] += 648455846;
    result[3] += 111584934;
    result[4] += 13334048;
    result[5] += 70880996;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 272132243;
    result[1] += 132171563;
    result[2] += 10466624;
    result[3] += 66450896;
    result[4] += 119757659;
    result[5] += 258014470;
  } else {
    result[0] += 25829410;
    result[1] += 11921266;
    result[2] += 621230427;
    result[3] += 136432268;
    result[4] += 9934388;
    result[5] += 53645697;
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
