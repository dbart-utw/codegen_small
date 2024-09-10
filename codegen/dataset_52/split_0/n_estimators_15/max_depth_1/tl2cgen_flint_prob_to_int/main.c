
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
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3da1fc8f))) ) ) {
    result[0] += 208493558;
    result[1] += 77837594;
  } else {
    result[0] += 68003648;
    result[1] += 218327504;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 49367440;
    result[1] += 236963712;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 197045094;
    result[1] += 89286058;
  } else {
    result[0] += 69056336;
    result[1] += 217274816;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 59290794;
    result[1] += 227040358;
  } else {
    result[0] += 220254733;
    result[1] += 66076419;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 286331153;
    result[1] += 0;
  } else {
    result[0] += 75911049;
    result[1] += 210420103;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    result[0] += 274146848;
    result[1] += 12184304;
  } else {
    result[0] += 55675501;
    result[1] += 230655651;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 50529027;
    result[1] += 235802126;
  } else {
    result[0] += 252359660;
    result[1] += 33971492;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 66953055;
    result[1] += 219378097;
  } else {
    result[0] += 249385197;
    result[1] += 36945955;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3a8461fa))) ) ) {
    result[0] += 194593987;
    result[1] += 91737165;
  } else {
    result[0] += 62634939;
    result[1] += 223696213;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e4e7d56))) ) ) {
    result[0] += 261788482;
    result[1] += 24542670;
  } else {
    result[0] += 86652848;
    result[1] += 199678304;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e942070))) ) ) {
    result[0] += 174525655;
    result[1] += 111805497;
  } else {
    result[0] += 52554452;
    result[1] += 233776700;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 270123729;
    result[1] += 16207423;
  } else {
    result[0] += 62720157;
    result[1] += 223610995;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebca969))) ) ) {
    result[0] += 265121437;
    result[1] += 21209715;
  } else {
    result[0] += 45210182;
    result[1] += 241120970;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 281218096;
    result[1] += 5113056;
  } else {
    result[0] += 59479418;
    result[1] += 226851734;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 280239000;
    result[1] += 6092152;
  } else {
    result[0] += 51698680;
    result[1] += 234632472;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
