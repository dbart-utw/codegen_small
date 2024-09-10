
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 4294967295;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
        result[0] += 0;
        result[1] += 4294967295;
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f415a36))) ) ) {
          result[0] += 0;
          result[1] += 4294967295;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 0;
            result[1] += 4294967295;
          } else {
            result[0] += 4285499181;
            result[1] += 9468113;
          }
        }
      }
    } else {
      if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f455a69))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += 4233860036;
            result[1] += 61107258;
          } else {
            result[0] += 2503850364;
            result[1] += 1791116930;
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 4229395275;
            result[1] += 65572019;
          } else {
            result[0] += 88556026;
            result[1] += 4206411268;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
            result[0] += 3148113544;
            result[1] += 1146853750;
          } else {
            result[0] += 22827173;
            result[1] += 4272140121;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += 0;
            result[1] += 4294967295;
          } else {
            result[0] += 4291041795;
            result[1] += 3925499;
          }
        }
      }
    }
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
