
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
    result[0] += 136772888;
    result[1] += 57074832;
    result[2] += 16307095;
    result[3] += 39389673;
    result[4] += 60749671;
    result[5] += 119202568;
  } else {
    result[0] += 6327760;
    result[1] += 2372910;
    result[2] += 349213270;
    result[3] += 45876262;
    result[4] += 6723245;
    result[5] += 18983280;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 135485019;
    result[1] += 61866884;
    result[2] += 16359585;
    result[3] += 38594797;
    result[4] += 59793133;
    result[5] += 117397308;
  } else {
    result[0] += 11734883;
    result[1] += 4302790;
    result[2] += 339138127;
    result[3] += 50851161;
    result[4] += 1955813;
    result[5] += 21513952;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 138585870;
    result[1] += 58779524;
    result[2] += 9557646;
    result[3] += 39186349;
    result[4] += 61049465;
    result[5] += 122337872;
  } else {
    result[0] += 18491735;
    result[1] += 4186808;
    result[2] += 317150712;
    result[3] += 55126306;
    result[4] += 5582410;
    result[5] += 28958755;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 136134582;
    result[1] += 61218133;
    result[2] += 7515889;
    result[3] += 33942727;
    result[4] += 65097302;
    result[5] += 125588092;
  } else {
    result[0] += 8703752;
    result[1] += 4351876;
    result[2] += 319360779;
    result[3] += 62265309;
    result[4] += 5356155;
    result[5] += 29458855;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 135238623;
    result[1] += 57290251;
    result[2] += 9128006;
    result[3] += 38553817;
    result[4] += 62094465;
    result[5] += 127191565;
  } else {
    result[0] += 10307921;
    result[1] += 4466765;
    result[2] += 313017216;
    result[3] += 64939905;
    result[4] += 4466765;
    result[5] += 32298154;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 131906694;
    result[1] += 61153507;
    result[2] += 10903338;
    result[3] += 37569112;
    result[4] += 66368148;
    result[5] += 121595928;
  } else {
    result[0] += 6074412;
    result[1] += 3215865;
    result[2] += 322301206;
    result[3] += 63245358;
    result[4] += 6789049;
    result[5] += 27870836;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 14790231;
    result[1] += 4350068;
    result[2] += 290004;
    result[3] += 56260881;
    result[4] += 85551340;
    result[5] += 268254203;
  } else {
    result[0] += 146503966;
    result[1] += 69720993;
    result[2] += 126602025;
    result[3] += 34282698;
    result[4] += 32228304;
    result[5] += 20158740;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 131838106;
    result[1] += 56031195;
    result[2] += 15229574;
    result[3] += 41028928;
    result[4] += 62282140;
    result[5] += 123086784;
  } else {
    result[0] += 3691948;
    result[1] += 410216;
    result[2] += 353606667;
    result[3] += 48815769;
    result[4] += 820433;
    result[5] += 22151693;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 143660530;
    result[1] += 65828942;
    result[2] += 4702067;
    result[3] += 28707358;
    result[4] += 60631920;
    result[5] += 125965909;
  } else {
    result[0] += 12995841;
    result[1] += 950915;
    result[2] += 300172253;
    result[3] += 71001673;
    result[4] += 6339435;
    result[5] += 38036610;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 138456182;
    result[1] += 63694553;
    result[2] += 12833098;
    result[3] += 38617030;
    result[4] += 56983666;
    result[5] += 118912197;
  } else {
    result[0] += 7656563;
    result[1] += 1822991;
    result[2] += 329961409;
    result[3] += 55783531;
    result[4] += 6198170;
    result[5] += 28074064;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
