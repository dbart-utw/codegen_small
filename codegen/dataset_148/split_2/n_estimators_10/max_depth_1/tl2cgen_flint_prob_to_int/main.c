
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 360383535;
    result[1] += 191331;
    result[2] += 1275543;
    result[3] += 57356935;
    result[4] += 10140570;
    result[5] += 53147;
    result[6] += 95665;
  } else {
    result[0] += 39840194;
    result[1] += 3748032;
    result[2] += 1804608;
    result[3] += 178517386;
    result[4] += 205586508;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429201565;
    result[1] += 0;
    result[2] += 245970;
    result[3] += 0;
    result[4] += 49194;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 201249045;
    result[1] += 967782;
    result[2] += 2754456;
    result[3] += 164225176;
    result[4] += 59903230;
    result[5] += 198519;
    result[6] += 198519;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 86730629;
    result[1] += 2124392;
    result[2] += 2309122;
    result[3] += 188239641;
    result[4] += 150092943;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 368781258;
    result[1] += 187939;
    result[2] += 1193967;
    result[3] += 50312474;
    result[4] += 8733652;
    result[5] += 110552;
    result[6] += 176884;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 51726227;
    result[1] += 879007;
    result[2] += 1487551;
    result[3] += 209136238;
    result[4] += 165929624;
    result[5] += 338079;
    result[6] += 0;
  } else {
    result[0] += 387897471;
    result[1] += 219673;
    result[2] += 1063683;
    result[3] += 40211845;
    result[4] += 0;
    result[5] += 11561;
    result[6] += 92494;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 53361917;
    result[1] += 1067238;
    result[2] += 1600857;
    result[3] += 212247024;
    result[4] += 160952882;
    result[5] += 266809;
    result[6] += 0;
  } else {
    result[0] += 387683928;
    result[1] += 301311;
    result[2] += 1205247;
    result[3] += 40167174;
    result[4] += 0;
    result[5] += 11588;
    result[6] += 127478;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 363266986;
    result[1] += 529837;
    result[2] += 832602;
    result[3] += 42715030;
    result[4] += 22013505;
    result[5] += 63075;
    result[6] += 75691;
  } else {
    result[0] += 255726368;
    result[1] += 0;
    result[2] += 2180647;
    result[3] += 141651237;
    result[4] += 29756754;
    result[5] += 0;
    result[6] += 181720;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 28331929;
    result[1] += 1684601;
    result[2] += 1837746;
    result[3] += 205827635;
    result[4] += 191049088;
    result[5] += 765727;
    result[6] += 0;
  } else {
    result[0] += 384065812;
    result[1] += 249371;
    result[2] += 1314866;
    result[3] += 43719323;
    result[4] += 0;
    result[5] += 0;
    result[6] += 147355;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 47361523;
    result[1] += 1013442;
    result[2] += 1418818;
    result[3] += 211944508;
    result[4] += 167555747;
    result[5] += 202688;
    result[6] += 0;
  } else {
    result[0] += 388134701;
    result[1] += 254393;
    result[2] += 1110079;
    result[3] += 39916611;
    result[4] += 0;
    result[5] += 23126;
    result[6] += 57816;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 103119654;
    result[1] += 2443194;
    result[2] += 2106202;
    result[3] += 172708571;
    result[4] += 149119107;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 369068344;
    result[1] += 190131;
    result[2] += 794080;
    result[3] += 50754027;
    result[4] += 8488829;
    result[5] += 111842;
    result[6] += 89473;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429218970;
    result[1] += 0;
    result[2] += 196065;
    result[3] += 0;
    result[4] += 65355;
    result[5] += 0;
    result[6] += 16338;
  } else {
    result[0] += 201386632;
    result[1] += 848363;
    result[2] += 2744706;
    result[3] += 163135398;
    result[4] += 60907541;
    result[5] += 174663;
    result[6] += 299422;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
