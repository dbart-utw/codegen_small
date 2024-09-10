
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 858531971;
    result[1] += 0;
    result[2] += 428524;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 32963;
  } else {
    result[0] += 406225448;
    result[1] += 1920804;
    result[2] += 6304177;
    result[3] += 324369641;
    result[4] += 119139107;
    result[5] += 492513;
    result[6] += 541765;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 96681524;
    result[1] += 1724087;
    result[2] += 3448175;
    result[3] += 413913630;
    result[4] += 342032442;
    result[5] += 1193599;
    result[6] += 0;
  } else {
    result[0] += 775537243;
    result[1] += 556838;
    result[2] += 1925734;
    result[3] += 80648820;
    result[4] += 0;
    result[5] += 46403;
    result[6] += 278419;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 172684252;
    result[1] += 4427801;
    result[2] += 4981276;
    result[3] += 377470063;
    result[4] += 299430065;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 733054633;
    result[1] += 243253;
    result[2] += 2277734;
    result[3] += 104709453;
    result[4] += 18199763;
    result[5] += 176911;
    result[6] += 331708;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 658286389;
    result[1] += 819929;
    result[2] += 3279718;
    result[3] += 159827718;
    result[4] += 36369737;
    result[5] += 117132;
    result[6] += 292832;
  } else {
    result[0] += 687361602;
    result[1] += 1012928;
    result[2] += 1966273;
    result[3] += 115146176;
    result[4] += 53178764;
    result[5] += 268128;
    result[6] += 59584;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 858176117;
    result[1] += 0;
    result[2] += 686567;
    result[3] += 0;
    result[4] += 32693;
    result[5] += 0;
    result[6] += 98081;
  } else {
    result[0] += 404563678;
    result[1] += 1745313;
    result[2] += 5834333;
    result[3] += 327071757;
    result[4] += 118880785;
    result[5] += 249330;
    result[6] += 648259;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
