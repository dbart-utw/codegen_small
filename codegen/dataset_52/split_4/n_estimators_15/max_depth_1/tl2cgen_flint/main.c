
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9122807017543859;
    result[1] += 0.08771929824561403;
  } else {
    result[0] += 0.16990291262135923;
    result[1] += 0.8300970873786407;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.19900497512437812;
    result[1] += 0.8009950248756219;
  } else {
    result[0] += 0.9193548387096774;
    result[1] += 0.08064516129032258;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f780c74))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2689075630252101;
    result[1] += 0.7310924369747899;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f780c74))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25102880658436216;
    result[1] += 0.7489711934156379;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d60bf5d))) ) ) {
    result[0] += 0.9285714285714286;
    result[1] += 0.07142857142857142;
  } else {
    result[0] += 0.25120772946859904;
    result[1] += 0.748792270531401;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e84b1ee))) ) ) {
    result[0] += 0.9787234042553191;
    result[1] += 0.02127659574468085;
  } else {
    result[0] += 0.18981481481481483;
    result[1] += 0.8101851851851852;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.26180257510729615;
    result[1] += 0.7381974248927039;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9375;
    result[1] += 0.0625;
  } else {
    result[0] += 0.16744186046511628;
    result[1] += 0.8325581395348837;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ee872b0))) ) ) {
    result[0] += 0.5847457627118644;
    result[1] += 0.4152542372881356;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3291139240506329;
    result[1] += 0.6708860759493671;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ea6c376))) ) ) {
    result[0] += 0.9393939393939394;
    result[1] += 0.06060606060606061;
  } else {
    result[0] += 0.30434782608695654;
    result[1] += 0.6956521739130435;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.19148936170212766;
    result[1] += 0.8085106382978723;
  } else {
    result[0] += 0.8533333333333334;
    result[1] += 0.14666666666666667;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.1989795918367347;
    result[1] += 0.8010204081632653;
  } else {
    result[0] += 0.8507462686567164;
    result[1] += 0.14925373134328357;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d939432))) ) ) {
    result[0] += 0.6565656565656566;
    result[1] += 0.3434343434343434;
  } else {
    result[0] += 0.21341463414634146;
    result[1] += 0.7865853658536586;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0e5c92))) ) ) {
    result[0] += 0.7701149425287356;
    result[1] += 0.22988505747126436;
  } else {
    result[0] += 0.19318181818181818;
    result[1] += 0.8068181818181818;
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
