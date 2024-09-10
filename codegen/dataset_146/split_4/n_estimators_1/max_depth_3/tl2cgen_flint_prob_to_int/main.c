
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4294967295;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 4286255393;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8711901;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
        result[0] += 288827190;
        result[1] += 58835168;
        result[2] += 32091910;
        result[3] += 599048987;
        result[4] += 831715335;
        result[5] += 2484448703;
      } else {
        result[0] += 2826125665;
        result[1] += 183273186;
        result[2] += 196553852;
        result[3] += 260301048;
        result[4] += 462167167;
        result[5] += 366546373;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1311095279;
        result[3] += 1808407282;
        result[4] += 0;
        result[5] += 1175464733;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4294967295;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 112654879;
        result[1] += 0;
        result[2] += 3337400816;
        result[3] += 732256719;
        result[4] += 0;
        result[5] += 112654879;
      } else {
        result[0] += 18433336;
        result[1] += 0;
        result[2] += 4153645052;
        result[3] += 104455570;
        result[4] += 0;
        result[5] += 18433336;
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
