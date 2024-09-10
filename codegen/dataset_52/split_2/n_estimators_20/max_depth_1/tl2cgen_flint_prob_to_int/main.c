
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 211227899;
    result[1] += 3520464;
  } else {
    result[0] += 39335096;
    result[1] += 175413268;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 44872792;
    result[1] += 169875572;
  } else {
    result[0] += 173184165;
    result[1] += 41564199;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 211045806;
    result[1] += 3702558;
  } else {
    result[0] += 49234990;
    result[1] += 165513373;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 211590300;
    result[1] += 3158064;
  } else {
    result[0] += 38544578;
    result[1] += 176203786;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 43873321;
    result[1] += 170875042;
  } else {
    result[0] += 195225786;
    result[1] += 19522578;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 151587081;
    result[1] += 63161283;
  } else {
    result[0] += 38681382;
    result[1] += 176066982;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3bcf95d5))) ) ) {
    result[0] += 161061273;
    result[1] += 53687091;
  } else {
    result[0] += 48456041;
    result[1] += 166292323;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 145961779;
    result[1] += 68786585;
  } else {
    result[0] += 52494044;
    result[1] += 162254320;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 42746119;
    result[1] += 172002244;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x39c49ba6))) ) ) {
    result[0] += 141982389;
    result[1] += 72765974;
  } else {
    result[0] += 55955559;
    result[1] += 158792804;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 49029307;
    result[1] += 165719057;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 55506992;
    result[1] += 159241372;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f533919))) ) ) {
    result[0] += 70066203;
    result[1] += 144682160;
  } else {
    result[0] += 198841078;
    result[1] += 15907286;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 49146391;
    result[1] += 165601972;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 50410414;
    result[1] += 164337950;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 207590085;
    result[1] += 7158278;
  } else {
    result[0] += 59908342;
    result[1] += 154840022;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 40802189;
    result[1] += 173946175;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 49304471;
    result[1] += 165443893;
  } else {
    result[0] += 185901569;
    result[1] += 28846795;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3df0d5a6))) ) ) {
    result[0] += 205132766;
    result[1] += 9615598;
  } else {
    result[0] += 47113161;
    result[1] += 167635203;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 206939333;
    result[1] += 7809031;
  } else {
    result[0] += 45427538;
    result[1] += 169320826;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
