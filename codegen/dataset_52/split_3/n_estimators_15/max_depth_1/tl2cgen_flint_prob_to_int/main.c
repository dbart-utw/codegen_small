
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
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6db328))) ) ) {
    result[0] += 254516580;
    result[1] += 31814572;
  } else {
    result[0] += 85773208;
    result[1] += 200557944;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f168922))) ) ) {
    result[0] += 274877906;
    result[1] += 11453246;
  } else {
    result[0] += 83011972;
    result[1] += 203319180;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 275175393;
    result[1] += 11155759;
  } else {
    result[0] += 58497762;
    result[1] += 227833390;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 276943246;
    result[1] += 9387906;
  } else {
    result[0] += 68039085;
    result[1] += 218292067;
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
    result[0] += 85158834;
    result[1] += 201172318;
  } else {
    result[0] += 249385197;
    result[1] += 36945955;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
    result[0] += 221675731;
    result[1] += 64655421;
  } else {
    result[0] += 37054619;
    result[1] += 249276533;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 77139443;
    result[1] += 209191709;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 85024097;
    result[1] += 201307055;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6db328))) ) ) {
    result[0] += 262470223;
    result[1] += 23860929;
  } else {
    result[0] += 83250467;
    result[1] += 203080685;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f54cd75))) ) ) {
    result[0] += 79674755;
    result[1] += 206656397;
  } else {
    result[0] += 286331153;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 281125132;
    result[1] += 5206020;
  } else {
    result[0] += 68829604;
    result[1] += 217501548;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 274400688;
    result[1] += 11930464;
  } else {
    result[0] += 70458451;
    result[1] += 215872701;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 282057553;
    result[1] += 4273599;
  } else {
    result[0] += 67200168;
    result[1] += 219130984;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 272249293;
    result[1] += 14081859;
  } else {
    result[0] += 70874047;
    result[1] += 215457105;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 71582788;
    result[1] += 214748364;
  } else {
    result[0] += 234584559;
    result[1] += 51746593;
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
