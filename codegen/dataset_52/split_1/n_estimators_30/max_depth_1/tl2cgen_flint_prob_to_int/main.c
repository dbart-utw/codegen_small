
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 135630546;
    result[1] += 7535030;
  } else {
    result[0] += 31969012;
    result[1] += 111196564;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 26030104;
    result[1] += 117135471;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e017050))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 31094785;
    result[1] += 112070790;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f682c90))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 34432227;
    result[1] += 108733349;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 43196510;
    result[1] += 99969066;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 28633115;
    result[1] += 114532461;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 134906024;
    result[1] += 8259552;
  } else {
    result[0] += 24426354;
    result[1] += 118739222;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 26148963;
    result[1] += 117016612;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 137863147;
    result[1] += 5302428;
  } else {
    result[0] += 46710802;
    result[1] += 96454773;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 43310594;
    result[1] += 99854981;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f37e7c0))) ) ) {
    result[0] += 134488874;
    result[1] += 8676701;
  } else {
    result[0] += 40459836;
    result[1] += 102705739;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 25179875;
    result[1] += 117985701;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 96847301;
    result[1] += 46318274;
  } else {
    result[0] += 29344497;
    result[1] += 113821079;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f761f9f))) ) ) {
    result[0] += 123418600;
    result[1] += 19746976;
  } else {
    result[0] += 41603671;
    result[1] += 101561904;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 36794891;
    result[1] += 106370685;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 130981272;
    result[1] += 12184304;
  } else {
    result[0] += 24523733;
    result[1] += 118641843;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 135885970;
    result[1] += 7279605;
  } else {
    result[0] += 28071681;
    result[1] += 115093894;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 31742593;
    result[1] += 111422982;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    result[0] += 134488874;
    result[1] += 8676701;
  } else {
    result[0] += 23982050;
    result[1] += 119183525;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
    result[0] += 72387089;
    result[1] += 70778487;
  } else {
    result[0] += 18101394;
    result[1] += 125064181;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e8ce076))) ) ) {
    result[0] += 88861392;
    result[1] += 54304184;
  } else {
    result[0] += 32139211;
    result[1] += 111026365;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 27504716;
    result[1] += 115660859;
  } else {
    result[0] += 109760275;
    result[1] += 33405301;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 39264820;
    result[1] += 103900755;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 140243830;
    result[1] += 2921746;
  } else {
    result[0] += 31442906;
    result[1] += 111722669;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 31442906;
    result[1] += 111722669;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 30368455;
    result[1] += 112797120;
  } else {
    result[0] += 114532461;
    result[1] += 28633115;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 29175923;
    result[1] += 113989653;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 34687694;
    result[1] += 108477881;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0b1ceb))) ) ) {
    result[0] += 133621204;
    result[1] += 9544371;
  } else {
    result[0] += 36252227;
    result[1] += 106913348;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 29475265;
    result[1] += 113690310;
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
