
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 646413387;
    result[1] += 349255;
    result[2] += 2677624;
    result[3] += 169563457;
    result[4] += 39233014;
    result[5] += 232836;
    result[6] += 523882;
  } else {
    result[0] += 686883959;
    result[1] += 717247;
    result[2] += 2151742;
    result[3] += 115596378;
    result[4] += 53255622;
    result[5] += 149426;
    result[6] += 239082;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 105803659;
    result[1] += 661272;
    result[2] += 3306364;
    result[3] += 428372565;
    result[4] += 319527051;
    result[5] += 1322545;
    result[6] += 0;
  } else {
    result[0] += 772130777;
    result[1] += 371406;
    result[2] += 2321290;
    result[3] += 83775365;
    result[4] += 0;
    result[5] += 0;
    result[6] += 394619;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 178413602;
    result[1] += 3779949;
    result[2] += 3779949;
    result[3] += 370057028;
    result[4] += 302962929;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 734317576;
    result[1] += 308712;
    result[2] += 2205091;
    result[3] += 102911628;
    result[4] += 18743279;
    result[5] += 220509;
    result[6] += 286661;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 858565558;
    result[1] += 0;
    result[2] += 329154;
    result[3] += 0;
    result[4] += 32915;
    result[5] += 0;
    result[6] += 65830;
  } else {
    result[0] += 395315670;
    result[1] += 1480767;
    result[2] += 5083969;
    result[3] += 336084954;
    result[4] += 120386430;
    result[5] += 197435;
    result[6] += 444230;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 858338363;
    result[1] += 0;
    result[2] += 556830;
    result[3] += 0;
    result[4] += 98264;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 403366421;
    result[1] += 1491739;
    result[2] += 5519436;
    result[3] += 327784942;
    result[4] += 119786700;
    result[5] += 497246;
    result[6] += 546971;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
