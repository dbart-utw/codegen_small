
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3a811b1e))) ) ) {
    result[0] += 239337872;
    result[1] += 190158857;
  } else {
    result[0] += 68329025;
    result[1] += 361167704;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
    result[0] += 275526203;
    result[1] += 153970525;
  } else {
    result[0] += 101218974;
    result[1] += 328277755;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 399356608;
    result[1] += 30140121;
  } else {
    result[0] += 95907036;
    result[1] += 333589692;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 429496729;
    result[1] += 0;
  } else {
    result[0] += 101776476;
    result[1] += 327720253;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 429496729;
    result[1] += 0;
  } else {
    result[0] += 106870078;
    result[1] += 322626651;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 294374162;
    result[1] += 135122566;
  } else {
    result[0] += 91329764;
    result[1] += 338166965;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 102261126;
    result[1] += 327235603;
  } else {
    result[0] += 359848611;
    result[1] += 69648118;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
    result[0] += 116653432;
    result[1] += 312843296;
  } else {
    result[0] += 429496729;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3dcd6a16))) ) ) {
    result[0] += 429496729;
    result[1] += 0;
  } else {
    result[0] += 85492239;
    result[1] += 344004489;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e94d6a2))) ) ) {
    result[0] += 254657352;
    result[1] += 174839376;
  } else {
    result[0] += 74446099;
    result[1] += 355050629;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
