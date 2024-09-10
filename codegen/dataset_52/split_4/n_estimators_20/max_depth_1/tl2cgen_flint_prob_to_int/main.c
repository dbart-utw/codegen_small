
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    result[0] += 205983125;
    result[1] += 8765239;
  } else {
    result[0] += 51178348;
    result[1] += 163570016;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 208240838;
    result[1] += 6507526;
  } else {
    result[0] += 58865033;
    result[1] += 155883330;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 66146120;
    result[1] += 148602243;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7bcb92))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 70364357;
    result[1] += 144384006;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3da2363b))) ) ) {
    result[0] += 152709948;
    result[1] += 62038416;
  } else {
    result[0] += 45928841;
    result[1] += 168819523;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3f6d33))) ) ) {
    result[0] += 154618822;
    result[1] += 60129542;
  } else {
    result[0] += 55971648;
    result[1] += 158776716;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ed49279))) ) ) {
    result[0] += 188830458;
    result[1] += 25917906;
  } else {
    result[0] += 43997225;
    result[1] += 170751138;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 204836901;
    result[1] += 9911462;
  } else {
    result[0] += 34706806;
    result[1] += 180041558;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 62830307;
    result[1] += 151918057;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d5e4f76))) ) ) {
    result[0] += 204987075;
    result[1] += 9761289;
  } else {
    result[0] += 44693822;
    result[1] += 170054542;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 56669707;
    result[1] += 158078657;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8aaa3b))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 46402912;
    result[1] += 168345451;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 49891034;
    result[1] += 164857330;
  } else {
    result[0] += 188317796;
    result[1] += 26430567;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 45583379;
    result[1] += 169164985;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 58476080;
    result[1] += 156272284;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 202116108;
    result[1] += 12632256;
  } else {
    result[0] += 46253493;
    result[1] += 168494870;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 60813696;
    result[1] += 153934668;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 211444543;
    result[1] += 3303820;
  } else {
    result[0] += 46637271;
    result[1] += 168111093;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 47975698;
    result[1] += 166772666;
  } else {
    result[0] += 186115249;
    result[1] += 28633115;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 37779804;
    result[1] += 176968559;
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
