
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 51388231;
    result[1] += 995895;
    result[2] += 1925398;
    result[3] += 212059445;
    result[4] += 162596613;
    result[5] += 531144;
    result[6] += 0;
  } else {
    result[0] += 387267311;
    result[1] += 382743;
    result[2] += 985855;
    result[3] += 40686844;
    result[4] += 0;
    result[5] += 0;
    result[6] += 173974;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 359944067;
    result[1] += 159573;
    result[2] += 1212756;
    result[3] += 57563391;
    result[4] += 10350985;
    result[5] += 127658;
    result[6] += 138296;
  } else {
    result[0] += 36123325;
    result[1] += 3021723;
    result[2] += 1236159;
    result[3] += 180891331;
    result[4] += 208224189;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429266621;
    result[1] += 0;
    result[2] += 197235;
    result[3] += 0;
    result[4] += 16436;
    result[5] += 0;
    result[6] += 16436;
  } else {
    result[0] += 199948791;
    result[1] += 1112749;
    result[2] += 2448049;
    result[3] += 166269561;
    result[4] += 59321932;
    result[5] += 222549;
    result[6] += 173094;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429201599;
    result[1] += 0;
    result[2] += 245942;
    result[3] += 0;
    result[4] += 32792;
    result[5] += 0;
    result[6] += 16396;
  } else {
    result[0] += 199794780;
    result[1] += 794215;
    result[2] += 2630838;
    result[3] += 166214365;
    result[4] += 59715061;
    result[5] += 248192;
    result[6] += 99276;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429251227;
    result[1] += 0;
    result[2] += 163667;
    result[3] += 0;
    result[4] += 32733;
    result[5] += 0;
    result[6] += 49100;
  } else {
    result[0] += 200189575;
    result[1] += 945699;
    result[2] += 2613116;
    result[3] += 164924952;
    result[4] += 60624292;
    result[5] += 99547;
    result[6] += 99547;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 97571792;
    result[1] += 1561806;
    result[2] += 2548210;
    result[3] += 184539743;
    result[4] += 143275176;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 369226920;
    result[1] += 89770;
    result[2] += 998699;
    result[3] += 50742892;
    result[4] += 8214019;
    result[5] += 78549;
    result[6] += 145877;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 361111912;
    result[1] += 363216;
    result[2] += 764006;
    result[3] += 44763248;
    result[4] += 22344050;
    result[5] += 87672;
    result[6] += 62623;
  } else {
    result[0] += 254255720;
    result[1] += 0;
    result[2] += 1959042;
    result[3] += 141424205;
    result[4] += 31484610;
    result[5] += 93287;
    result[6] += 279863;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 90575968;
    result[1] += 1970990;
    result[2] += 1702218;
    result[3] += 186616956;
    result[4] += 148630595;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 366214038;
    result[1] += 177542;
    result[2] += 1154024;
    result[3] += 52363847;
    result[4] += 9420831;
    result[5] += 55481;
    result[6] += 110963;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 87328526;
    result[1] += 2041687;
    result[2] += 1670471;
    result[3] += 189134471;
    result[4] += 149321572;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 366661066;
    result[1] += 198882;
    result[2] += 1005459;
    result[3] += 51864006;
    result[4] += 9513189;
    result[5] += 121539;
    result[6] += 132588;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 104903625;
    result[1] += 2027123;
    result[2] += 2280513;
    result[3] += 177373280;
    result[4] += 142912186;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 367590614;
    result[1] += 234789;
    result[2] += 1017420;
    result[3] += 52525722;
    result[4] += 7926934;
    result[5] += 67082;
    result[6] += 134165;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
