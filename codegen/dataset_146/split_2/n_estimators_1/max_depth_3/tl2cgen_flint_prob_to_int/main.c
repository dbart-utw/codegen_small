
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
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 938087075;
        result[1] += 248317166;
        result[2] += 0;
        result[3] += 73575456;
        result[4] += 2602731786;
        result[5] += 432255809;
      } else {
        result[0] += 57935709;
        result[1] += 19311903;
        result[2] += 30899045;
        result[3] += 417137111;
        result[4] += 355339020;
        result[5] += 3414344504;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 19478309;
        result[1] += 4090445042;
        result[2] += 9739154;
        result[3] += 0;
        result[4] += 155826477;
        result[5] += 19478309;
      } else {
        result[0] += 2807415650;
        result[1] += 137936607;
        result[2] += 216371148;
        result[3] += 462493329;
        result[4] += 332670640;
        result[5] += 338079919;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 328696476;
        result[3] += 1862613367;
        result[4] += 504001264;
        result[5] += 1599656186;
      } else {
        result[0] += 42107522;
        result[1] += 42107522;
        result[2] += 2989634097;
        result[3] += 378967702;
        result[4] += 84215045;
        result[5] += 757935405;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 224085250;
        result[1] += 0;
        result[2] += 3174541044;
        result[3] += 809196736;
        result[4] += 0;
        result[5] += 87144263;
      } else {
        result[0] += 7469508;
        result[1] += 0;
        result[2] += 4160516144;
        result[3] += 119512133;
        result[4] += 0;
        result[5] += 7469508;
      }
    }
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
