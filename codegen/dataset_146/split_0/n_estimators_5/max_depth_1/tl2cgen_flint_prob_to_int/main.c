
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 263199430;
    result[1] += 117332617;
    result[2] += 32186573;
    result[3] += 78754383;
    result[4] += 119843626;
    result[5] += 247676827;
  } else {
    result[0] += 8888925;
    result[1] += 7272757;
    result[2] += 696568543;
    result[3] += 92121593;
    result[4] += 10505094;
    result[5] += 43636544;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 268492147;
    result[1] += 121547120;
    result[2] += 23357002;
    result[3] += 71431610;
    result[4] += 124948626;
    result[5] += 249216951;
  } else {
    result[0] += 7447920;
    result[1] += 2482640;
    result[2] += 686863748;
    result[3] += 114201442;
    result[4] += 5792826;
    result[5] += 42204880;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 278796122;
    result[1] += 120332151;
    result[2] += 28770115;
    result[3] += 76035306;
    result[4] += 120788819;
    result[5] += 234270943;
  } else {
    result[0] += 10495220;
    result[1] += 7265922;
    result[2] += 690262600;
    result[3] += 100108260;
    result[4] += 18568467;
    result[5] += 32292987;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 267009125;
    result[1] += 103380456;
    result[2] += 25788060;
    result[3] += 86492699;
    result[4] += 125060684;
    result[5] += 251262433;
  } else {
    result[0] += 6470760;
    result[1] += 6470760;
    result[2] += 714210192;
    result[3] += 93017182;
    result[4] += 4853070;
    result[5] += 33971492;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 250625044;
    result[1] += 115305714;
    result[2] += 28655858;
    result[3] += 86649856;
    result[4] += 133954764;
    result[5] += 243802220;
  } else {
    result[0] += 18015115;
    result[1] += 5732082;
    result[2] += 692763075;
    result[3] += 96626528;
    result[4] += 4094344;
    result[5] += 41762313;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
