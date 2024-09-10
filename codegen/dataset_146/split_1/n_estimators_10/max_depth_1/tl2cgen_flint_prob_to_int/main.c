
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 130195475;
    result[1] += 59449467;
    result[2] += 14605627;
    result[3] += 40279581;
    result[4] += 62302129;
    result[5] += 122664448;
  } else {
    result[0] += 4448647;
    result[1] += 3639802;
    result[2] += 348612223;
    result[3] += 48530703;
    result[4] += 3639802;
    result[5] += 20625549;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 134470220;
    result[1] += 55057764;
    result[2] += 14081859;
    result[3] += 40398778;
    result[4] += 60251892;
    result[5] += 125236213;
  } else {
    result[0] += 1943424;
    result[1] += 2720793;
    result[2] += 354869243;
    result[3] += 42366645;
    result[4] += 2720793;
    result[5] += 24875828;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 127047341;
    result[1] += 58932298;
    result[2] += 14529659;
    result[3] += 40334334;
    result[4] += 58351111;
    result[5] += 130301984;
  } else {
    result[0] += 6835491;
    result[1] += 6835491;
    result[2] += 345192331;
    result[3] += 47088942;
    result[4] += 3417745;
    result[5] += 20126725;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 135700629;
    result[1] += 63068713;
    result[2] += 7505297;
    result[3] += 33894894;
    result[4] += 60647649;
    result[5] += 128679544;
  } else {
    result[0] += 4368902;
    result[1] += 1008208;
    result[2] += 309183874;
    result[3] += 71582788;
    result[4] += 5713180;
    result[5] += 37639775;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 128544078;
    result[1] += 57938663;
    result[2] += 15833440;
    result[3] += 39173104;
    result[4] += 61105351;
    result[5] += 126902092;
  } else {
    result[0] += 5165768;
    result[1] += 6272718;
    result[2] += 347951388;
    result[3] += 44646996;
    result[4] += 4796784;
    result[5] += 20663072;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 131811065;
    result[1] += 56051032;
    result[2] += 18341902;
    result[3] += 42038274;
    result[4] += 60038402;
    result[5] += 121216053;
  } else {
    result[0] += 3660483;
    result[1] += 4473924;
    result[2] += 359134102;
    result[3] += 36604834;
    result[4] += 1220161;
    result[5] += 24403223;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 134079596;
    result[1] += 64829695;
    result[2] += 8840412;
    result[3] += 30818661;
    result[4] += 63847426;
    result[5] += 127080936;
  } else {
    result[0] += 4204410;
    result[1] += 1617081;
    result[2] += 295602417;
    result[3] += 76973058;
    result[4] += 7761989;
    result[5] += 43337772;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 127759507;
    result[1] += 60439192;
    result[2] += 8716088;
    result[3] += 42892330;
    result[4] += 61471361;
    result[5] += 128218249;
  } else {
    result[0] += 7548971;
    result[1] += 0;
    result[2] += 366721074;
    result[3] += 44499198;
    result[4] += 397314;
    result[5] += 10330171;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 129635726;
    result[1] += 58147951;
    result[2] += 15848167;
    result[3] += 40019472;
    result[4] += 60770309;
    result[5] += 125075102;
  } else {
    result[0] += 3650113;
    result[1] += 2027841;
    result[2] += 354466611;
    result[3] += 43801366;
    result[4] += 2433409;
    result[5] += 23117387;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 132126210;
    result[1] += 57350852;
    result[2] += 15116623;
    result[3] += 40849500;
    result[4] += 60581886;
    result[5] += 123471655;
  } else {
    result[0] += 6613627;
    result[1] += 5446516;
    result[2] += 351689350;
    result[3] += 40459836;
    result[4] += 5446516;
    result[5] += 19840881;
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
