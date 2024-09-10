
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 275136972;
    result[1] += 117299023;
    result[2] += 23507779;
    result[3] += 77239847;
    result[4] += 124255406;
    result[5] += 241554429;
  } else {
    result[0] += 13799091;
    result[1] += 2069863;
    result[2] += 590601125;
    result[3] += 153169917;
    result[4] += 19318728;
    result[5] += 80034731;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 266205640;
    result[1] += 112062511;
    result[2] += 28587375;
    result[3] += 75013273;
    result[4] += 117322589;
    result[5] += 259802068;
  } else {
    result[0] += 9633571;
    result[1] += 6422381;
    result[2] += 688800362;
    result[3] += 105166488;
    result[4] += 10436369;
    result[5] += 38534286;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 283532056;
    result[1] += 116327176;
    result[2] += 19758331;
    result[3] += 61497806;
    result[4] += 128429154;
    result[5] += 249448934;
  } else {
    result[0] += 26126655;
    result[1] += 8921297;
    result[2] += 610471612;
    result[3] += 133819455;
    result[4] += 15293652;
    result[5] += 64360785;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 264709763;
    result[1] += 109629582;
    result[2] += 31290110;
    result[3] += 79024657;
    result[4] += 120135750;
    result[5] += 254203594;
  } else {
    result[0] += 7259099;
    result[1] += 4032833;
    result[2] += 688807900;
    result[3] += 104047095;
    result[4] += 12905066;
    result[5] += 41941464;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 270936185;
    result[1] += 131466925;
    result[2] += 23321089;
    result[3] += 78194240;
    result[4] += 107231283;
    result[5] += 247843734;
  } else {
    result[0] += 12053229;
    result[1] += 0;
    result[2] += 715158258;
    result[3] += 109282610;
    result[4] += 0;
    result[5] += 22499360;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
