
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
    result[0] += 257395493;
    result[1] += 112639619;
    result[2] += 28159904;
    result[3] += 90763329;
    result[4] += 116828695;
    result[5] += 253206416;
  } else {
    result[0] += 18163738;
    result[1] += 3027289;
    result[2] += 685681122;
    result[3] += 96116448;
    result[4] += 8325046;
    result[5] += 47679813;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 250387455;
    result[1] += 109658739;
    result[2] += 30841520;
    result[3] += 86813168;
    result[4] += 126564461;
    result[5] += 254728113;
  } else {
    result[0] += 8058099;
    result[1] += 805809;
    result[2] += 711530229;
    result[3] += 91862339;
    result[4] += 4029049;
    result[5] += 42707929;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 254416691;
    result[1] += 114397611;
    result[2] += 33712459;
    result[3] += 90349390;
    result[4] += 116645108;
    result[5] += 249472197;
  } else {
    result[0] += 6844569;
    result[1] += 4277855;
    result[2] += 747769206;
    result[3] += 67590122;
    result[4] += 855571;
    result[5] += 31656133;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 266225575;
    result[1] += 119015773;
    result[2] += 23572056;
    result[3] += 82733295;
    result[4] += 124793238;
    result[5] += 242653519;
  } else {
    result[0] += 22462407;
    result[1] += 8520223;
    result[2] += 690138117;
    result[3] += 99144420;
    result[4] += 2323697;
    result[5] += 36404592;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 260840133;
    result[1] += 114363034;
    result[2] += 28186444;
    result[3] += 89411099;
    result[4] += 121987236;
    result[5] += 244205509;
  } else {
    result[0] += 13179502;
    result[1] += 7752648;
    result[2] += 696963104;
    result[3] += 84503869;
    result[4] += 3101059;
    result[5] += 53493274;
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
