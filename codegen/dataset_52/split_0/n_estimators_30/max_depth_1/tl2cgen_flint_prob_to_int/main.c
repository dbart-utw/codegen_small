
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f63d85a))) ) ) {
    result[0] += 45691141;
    result[1] += 97474435;
  } else {
    result[0] += 143165576;
    result[1] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 38544578;
    result[1] += 104620998;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 34250137;
    result[1] += 108915438;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 31442906;
    result[1] += 111722669;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 39099842;
    result[1] += 104065734;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7eaed1))) ) ) {
    result[0] += 41838341;
    result[1] += 101327234;
  } else {
    result[0] += 117135471;
    result[1] += 26030104;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 29934620;
    result[1] += 113230955;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 26618725;
    result[1] += 116546851;
  } else {
    result[0] += 118558993;
    result[1] += 24606583;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e577319))) ) ) {
    result[0] += 96935025;
    result[1] += 46230550;
  } else {
    result[0] += 30862040;
    result[1] += 112303536;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f663d1c))) ) ) {
    result[0] += 136940986;
    result[1] += 6224590;
  } else {
    result[0] += 48318382;
    result[1] += 94847194;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 27615694;
    result[1] += 115549881;
  } else {
    result[0] += 123642997;
    result[1] += 19522578;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c02d384))) ) ) {
    result[0] += 102261126;
    result[1] += 40904450;
  } else {
    result[0] += 38390769;
    result[1] += 104774807;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3d1244))) ) ) {
    result[0] += 115387181;
    result[1] += 27778395;
  } else {
    result[0] += 37252267;
    result[1] += 105913309;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 140514362;
    result[1] += 2651214;
  } else {
    result[0] += 30140121;
    result[1] += 113025455;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 95443717;
    result[1] += 47721858;
  } else {
    result[0] += 38231716;
    result[1] += 104933860;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 32041819;
    result[1] += 111123756;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3b5898b3))) ) ) {
    result[0] += 82885333;
    result[1] += 60280242;
  } else {
    result[0] += 26430567;
    result[1] += 116735008;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de82e88))) ) ) {
    result[0] += 140464339;
    result[1] += 2701237;
  } else {
    result[0] += 32041819;
    result[1] += 111123756;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 38710005;
    result[1] += 104455570;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 28349619;
    result[1] += 114815957;
  } else {
    result[0] += 126736739;
    result[1] += 16428836;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 25828841;
    result[1] += 117336735;
  } else {
    result[0] += 128641532;
    result[1] += 14524043;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
    result[0] += 47317436;
    result[1] += 95848140;
  } else {
    result[0] += 143165576;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 140053281;
    result[1] += 3112295;
  } else {
    result[0] += 20452225;
    result[1] += 122713351;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 43546196;
    result[1] += 99619380;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 96005151;
    result[1] += 47160425;
  } else {
    result[0] += 24933330;
    result[1] += 118232245;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 39324450;
    result[1] += 103841126;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0a2d0e))) ) ) {
    result[0] += 132939463;
    result[1] += 10226112;
  } else {
    result[0] += 32897621;
    result[1] += 110267954;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    result[0] += 44472710;
    result[1] += 98692865;
  } else {
    result[0] += 143165576;
    result[1] += 0;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f254de8))) ) ) {
    result[0] += 138393390;
    result[1] += 4772185;
  } else {
    result[0] += 41167783;
    result[1] += 101997792;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 30773908;
    result[1] += 112391667;
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
