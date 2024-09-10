
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 207078780;
    result[1] += 7669584;
  } else {
    result[0] += 41497268;
    result[1] += 173251096;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 39443577;
    result[1] += 175304787;
  } else {
    result[0] += 176285971;
    result[1] += 38462393;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
    result[0] += 66709066;
    result[1] += 148039298;
  } else {
    result[0] += 199409195;
    result[1] += 15339168;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 200743036;
    result[1] += 14005328;
  } else {
    result[0] += 50470813;
    result[1] += 164277550;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 211444543;
    result[1] += 3303820;
  } else {
    result[0] += 35791394;
    result[1] += 178956970;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 41143378;
    result[1] += 173604986;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e971de6))) ) ) {
    result[0] += 129287280;
    result[1] += 85461083;
  } else {
    result[0] += 39045157;
    result[1] += 175703207;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 46817179;
    result[1] += 167931185;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 57454606;
    result[1] += 157293758;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
    result[0] += 203828956;
    result[1] += 10919408;
  } else {
    result[0] += 46318274;
    result[1] += 168430090;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 49054194;
    result[1] += 165694169;
  } else {
    result[0] += 169195681;
    result[1] += 45552683;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 60129542;
    result[1] += 154618822;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f6e9835))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 45115202;
    result[1] += 169633162;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 41902119;
    result[1] += 172846244;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 200431807;
    result[1] += 14316557;
  } else {
    result[0] += 39403369;
    result[1] += 175344995;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 211045806;
    result[1] += 3702558;
  } else {
    result[0] += 38759460;
    result[1] += 175988903;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 58567735;
    result[1] += 156180628;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e32c12b))) ) ) {
    result[0] += 132504310;
    result[1] += 82244054;
  } else {
    result[0] += 39391711;
    result[1] += 175356652;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 209867720;
    result[1] += 4880644;
  } else {
    result[0] += 39223445;
    result[1] += 175524919;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d68f084))) ) ) {
    result[0] += 162688155;
    result[1] += 52060209;
  } else {
    result[0] += 50144288;
    result[1] += 164604076;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
