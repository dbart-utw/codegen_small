
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
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    result[0] += 48423650;
    result[1] += 12632256;
    result[2] += 2631720;
    result[3] += 106321494;
    result[4] += 158955897;
    result[5] += 530028439;
  } else {
    result[0] += 294757930;
    result[1] += 144689568;
    result[2] += 260064707;
    result[3] += 64545532;
    result[4] += 56746280;
    result[5] += 38189439;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 277436023;
    result[1] += 125375317;
    result[2] += 26455342;
    result[3] += 71774493;
    result[4] += 111112437;
    result[5] += 246839845;
  } else {
    result[0] += 14159232;
    result[1] += 8652864;
    result[2] += 667843815;
    result[3] += 117206982;
    result[4] += 7866240;
    result[5] += 43264322;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    result[0] += 24654737;
    result[1] += 8965358;
    result[2] += 11767033;
    result[3] += 124954691;
    result[4] += 157454117;
    result[5] += 531197520;
  } else {
    result[0] += 288765793;
    result[1] += 137731110;
    result[2] += 262158647;
    result[3] += 67039574;
    result[4] += 54257710;
    result[5] += 49040622;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 257005301;
    result[1] += 122614388;
    result[2] += 23553046;
    result[3] += 75277383;
    result[4] += 127463545;
    result[5] += 253079793;
  } else {
    result[0] += 13203335;
    result[1] += 0;
    result[2] += 718416771;
    result[3] += 97860014;
    result[4] += 0;
    result[5] += 29513337;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 281242234;
    result[1] += 118794430;
    result[2] += 20991786;
    result[3] += 71324366;
    result[4] += 114739198;
    result[5] += 251901442;
  } else {
    result[0] += 10518287;
    result[1] += 4207314;
    result[2] += 665456973;
    result[3] += 102377995;
    result[4] += 9115848;
    result[5] += 67317038;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
