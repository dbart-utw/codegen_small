
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4294967295;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3435973836;
          result[5] += 858993459;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4294967295;
        } else {
          result[0] += 0;
          result[1] += 3221225471;
          result[2] += 0;
          result[3] += 536870911;
          result[4] += 536870911;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
          result[0] += 2698120480;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 991146298;
          result[5] += 605700515;
        } else {
          result[0] += 4999961;
          result[1] += 9999923;
          result[2] += 0;
          result[3] += 134998972;
          result[4] += 184998591;
          result[5] += 3959969845;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 85471985;
          result[1] += 85471985;
          result[2] += 192311968;
          result[3] += 1282079789;
          result[4] += 256415957;
          result[5] += 2393215607;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 247786574;
          result[3] += 2945907054;
          result[4] += 27531841;
          result[5] += 1073741823;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 306783378;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3988183916;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 4294967295;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          result[0] += 522040223;
          result[1] += 498311122;
          result[2] += 23729101;
          result[3] += 0;
          result[4] += 2989866735;
          result[5] += 261020111;
        } else {
          result[0] += 3064548284;
          result[1] += 91993944;
          result[2] += 135116106;
          result[3] += 393849075;
          result[4] += 304729941;
          result[5] += 304729941;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 525914362;
          result[3] += 175304787;
          result[4] += 525914362;
          result[5] += 3067833782;
        } else {
          result[0] += 0;
          result[1] += 103910499;
          result[2] += 1870388983;
          result[3] += 969831324;
          result[4] += 381005163;
          result[5] += 969831324;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 169709953;
          result[1] += 0;
          result[2] += 3093943005;
          result[3] += 848549769;
          result[4] += 13054611;
          result[5] += 169709953;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4093954785;
          result[3] += 201012509;
          result[4] += 0;
          result[5] += 0;
        }
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
