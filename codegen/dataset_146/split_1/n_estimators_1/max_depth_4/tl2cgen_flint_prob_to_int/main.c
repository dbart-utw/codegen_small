
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
          result[0] += 17530478;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4207314901;
          result[5] += 70121915;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
          result[4] += 2004318071;
          result[5] += 2004318071;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 123629122;
          result[1] += 9157712;
          result[2] += 0;
          result[3] += 196890824;
          result[4] += 329677660;
          result[5] += 3635611974;
        } else {
          result[0] += 338087804;
          result[1] += 75130623;
          result[2] += 12521770;
          result[3] += 2153744532;
          result[4] += 150261246;
          result[5] += 1565221317;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 127573285;
          result[1] += 680390858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3444478721;
          result[5] += 42524428;
        } else {
          result[0] += 0;
          result[1] += 4155520304;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139446990;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 3769438726;
          result[1] += 68054059;
          result[2] += 0;
          result[3] += 113423432;
          result[4] += 283558580;
          result[5] += 60492497;
        } else {
          result[0] += 673320288;
          result[1] += 51009112;
          result[2] += 1234420528;
          result[3] += 1234420528;
          result[4] += 183632805;
          result[5] += 918164029;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 204522252;
          result[1] += 68174084;
          result[2] += 0;
          result[3] += 749914924;
          result[4] += 272696336;
          result[5] += 2999659698;
        } else {
          result[0] += 613566756;
          result[1] += 0;
          result[2] += 2045222521;
          result[3] += 1227133512;
          result[4] += 0;
          result[5] += 409044504;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 881018932;
          result[3] += 3303820996;
          result[4] += 0;
          result[5] += 110127366;
        } else {
          result[0] += 204522252;
          result[1] += 0;
          result[2] += 3067833782;
          result[3] += 818089008;
          result[4] += 0;
          result[5] += 204522252;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 858993459;
          result[4] += 0;
          result[5] += 2576980377;
        } else {
          result[0] += 268435455;
          result[1] += 2684354559;
          result[2] += 536870911;
          result[3] += 536870911;
          result[4] += 0;
          result[5] += 268435455;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 3904515722;
          result[1] += 0;
          result[2] += 390451572;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 47770111;
          result[1] += 0;
          result[2] += 3947548302;
          result[3] += 269249719;
          result[4] += 0;
          result[5] += 30399161;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
