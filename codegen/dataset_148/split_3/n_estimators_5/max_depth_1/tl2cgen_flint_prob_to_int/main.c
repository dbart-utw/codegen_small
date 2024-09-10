
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
    result[0] += 100703104;
    result[1] += 1072736;
    result[2] += 3486392;
    result[3] += 426814889;
    result[4] += 325575416;
    result[5] += 1340920;
    result[6] += 0;
  } else {
    result[0] += 775395939;
    result[1] += 509458;
    result[2] += 2338877;
    result[3] += 80494453;
    result[4] += 0;
    result[5] += 0;
    result[6] += 254729;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 166496034;
    result[1] += 4078967;
    result[2] += 4449782;
    result[3] += 365994622;
    result[4] += 317974051;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 733703780;
    result[1] += 464117;
    result[2] += 2033277;
    result[3] += 104492784;
    result[4] += 17967985;
    result[5] += 110504;
    result[6] += 221008;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 721689662;
    result[1] += 340018;
    result[2] += 2528888;
    result[3] += 113821255;
    result[4] += 20252363;
    result[5] += 63753;
    result[6] += 297516;
  } else {
    result[0] += 70862078;
    result[1] += 5300706;
    result[2] += 1952891;
    result[3] += 356821251;
    result[4] += 424056530;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 180879585;
    result[1] += 2953136;
    result[2] += 5906272;
    result[3] += 373018001;
    result[4] += 296236463;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 734564786;
    result[1] += 486481;
    result[2] += 2277617;
    result[3] += 103753212;
    result[4] += 17491217;
    result[5] += 176902;
    result[6] += 243240;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 100053594;
    result[1] += 2267881;
    result[2] += 4268953;
    result[3] += 423293406;
    result[4] += 327908980;
    result[5] += 1200643;
    result[6] += 0;
  } else {
    result[0] += 775367857;
    result[1] += 579445;
    result[2] += 2340960;
    result[3] += 80496594;
    result[4] += 0;
    result[5] += 0;
    result[6] += 208600;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
