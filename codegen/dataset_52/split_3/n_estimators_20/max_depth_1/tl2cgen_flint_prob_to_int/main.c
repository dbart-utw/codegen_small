
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 50009893;
    result[1] += 164738471;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eb5a07b))) ) ) {
    result[0] += 118676727;
    result[1] += 96071636;
  } else {
    result[0] += 44679189;
    result[1] += 170069174;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 203243988;
    result[1] += 11504376;
  } else {
    result[0] += 37347541;
    result[1] += 177400823;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
    result[0] += 194489085;
    result[1] += 20259279;
  } else {
    result[0] += 37836616;
    result[1] += 176911748;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3af1d3ed))) ) ) {
    result[0] += 127826407;
    result[1] += 86921957;
  } else {
    result[0] += 39187657;
    result[1] += 175560706;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f47b742))) ) ) {
    result[0] += 68829604;
    result[1] += 145918760;
  } else {
    result[0] += 207343248;
    result[1] += 7405116;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 42477698;
    result[1] += 172270666;
  } else {
    result[0] += 182933792;
    result[1] += 31814572;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 197146039;
    result[1] += 17602324;
  } else {
    result[0] += 44650650;
    result[1] += 170097714;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e2a6b51))) ) ) {
    result[0] += 148030426;
    result[1] += 66717938;
  } else {
    result[0] += 59055800;
    result[1] += 155692564;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f416e04))) ) ) {
    result[0] += 57266230;
    result[1] += 157482134;
  } else {
    result[0] += 214748364;
    result[1] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e9d71f3))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 63004685;
    result[1] += 151743679;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
    result[0] += 206158430;
    result[1] += 8589934;
  } else {
    result[0] += 49402205;
    result[1] += 165346158;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e899f80))) ) ) {
    result[0] += 156180628;
    result[1] += 58567735;
  } else {
    result[0] += 52766741;
    result[1] += 161981623;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e39f01b))) ) ) {
    result[0] += 204357314;
    result[1] += 10391049;
  } else {
    result[0] += 33120394;
    result[1] += 181627970;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3ea1b6))) ) ) {
    result[0] += 208944354;
    result[1] += 5804009;
  } else {
    result[0] += 55112412;
    result[1] += 159635952;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 200431807;
    result[1] += 14316557;
  } else {
    result[0] += 46298959;
    result[1] += 168449405;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 38824563;
    result[1] += 175923801;
  } else {
    result[0] += 187280550;
    result[1] += 27467814;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 210980849;
    result[1] += 3767515;
  } else {
    result[0] += 53165857;
    result[1] += 161582507;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 53439685;
    result[1] += 161308679;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8e3886))) ) ) {
    result[0] += 210980849;
    result[1] += 3767515;
  } else {
    result[0] += 51080921;
    result[1] += 163667443;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
