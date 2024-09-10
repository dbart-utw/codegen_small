
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 4294967295;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16843009;
          result[3] += 101058054;
          result[4] += 3823363043;
          result[5] += 353703189;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11750936;
          result[3] += 105758428;
          result[4] += 88132023;
          result[5] += 4089325906;
        } else {
          result[0] += 410020744;
          result[1] += 112755704;
          result[2] += 20501037;
          result[3] += 1496575716;
          result[4] += 317766076;
          result[5] += 1937348016;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 143165576;
          result[1] += 477218588;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139412;
          result[5] += 95443717;
        } else {
          result[0] += 9586980;
          result[1] += 4064879761;
          result[2] += 0;
          result[3] += 47934902;
          result[4] += 172565650;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
          result[0] += 840319688;
          result[1] += 373475416;
          result[2] += 350133203;
          result[3] += 1120426250;
          result[4] += 303448776;
          result[5] += 1307163959;
        } else {
          result[0] += 3377925392;
          result[1] += 114244277;
          result[2] += 154384158;
          result[3] += 200699406;
          result[4] += 333469782;
          result[5] += 114244277;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 674923432;
          result[3] += 490853405;
          result[4] += 552210080;
          result[5] += 2576980377;
        } else {
          result[0] += 27183337;
          result[1] += 135916686;
          result[2] += 761133444;
          result[3] += 2364950345;
          result[4] += 108733349;
          result[5] += 897050131;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1108378656;
          result[1] += 0;
          result[2] += 1246925988;
          result[3] += 0;
          result[4] += 831283992;
          result[5] += 1108378656;
        } else {
          result[0] += 75350303;
          result[1] += 0;
          result[2] += 3993566081;
          result[3] += 0;
          result[4] += 0;
          result[5] += 226050910;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 715827882;
          result[4] += 0;
          result[5] += 3579139412;
        } else {
          result[0] += 101058054;
          result[1] += 0;
          result[2] += 3365233198;
          result[3] += 747829599;
          result[4] += 10105805;
          result[5] += 70740637;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4229768550;
          result[3] += 65198744;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 560213125;
          result[1] += 0;
          result[2] += 3734754169;
          result[3] += 0;
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
