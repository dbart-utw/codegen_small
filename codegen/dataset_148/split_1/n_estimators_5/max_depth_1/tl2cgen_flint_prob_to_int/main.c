
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 102758587;
    result[1] += 1708262;
    result[2] += 3942145;
    result[3] += 418787234;
    result[4] += 330351775;
    result[5] += 1445453;
    result[6] += 0;
  } else {
    result[0] += 774100373;
    result[1] += 418307;
    result[2] += 2509842;
    result[3] += 81825500;
    result[4] += 0;
    result[5] += 0;
    result[6] += 139435;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 99882960;
    result[1] += 1494847;
    result[2] += 3533274;
    result[3] += 422769917;
    result[4] += 330632983;
    result[5] += 679475;
    result[6] += 0;
  } else {
    result[0] += 776049148;
    result[1] += 670023;
    result[2] += 2379739;
    result[3] += 79640400;
    result[4] += 0;
    result[5] += 0;
    result[6] += 254146;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 96153006;
    result[1] += 1329917;
    result[2] += 3723767;
    result[3] += 430361175;
    result[4] += 326627641;
    result[5] += 797950;
    result[6] += 0;
  } else {
    result[0] += 774070426;
    result[1] += 440616;
    result[2] += 2875602;
    result[3] += 81421290;
    result[4] += 0;
    result[5] += 0;
    result[6] += 185522;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 652794794;
    result[1] += 355004;
    result[2] += 3668383;
    result[3] += 161645552;
    result[4] += 39819713;
    result[5] += 295837;
    result[6] += 414172;
  } else {
    result[0] += 689518453;
    result[1] += 652054;
    result[2] += 2133997;
    result[3] += 113902141;
    result[4] += 52549699;
    result[5] += 177833;
    result[6] += 59277;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 858278551;
    result[1] += 0;
    result[2] += 519932;
    result[3] += 0;
    result[4] += 162478;
    result[5] += 0;
    result[6] += 32495;
  } else {
    result[0] += 396628879;
    result[1] += 1912677;
    result[2] += 5687698;
    result[3] += 335372871;
    result[4] += 118585994;
    result[5] += 302001;
    result[6] += 503336;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
