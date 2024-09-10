
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 724006247;
    result[1] += 883920;
    result[2] += 2399211;
    result[3] += 85866514;
    result[4] += 45711291;
    result[5] += 75764;
    result[6] += 50509;
  } else {
    result[0] += 514563068;
    result[1] += 0;
    result[2] += 5161023;
    result[3] += 275526203;
    result[4] += 63290442;
    result[5] += 90544;
    result[6] += 362177;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 858373906;
    result[1] += 0;
    result[2] += 456512;
    result[3] += 0;
    result[4] += 163040;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 398630641;
    result[1] += 1852465;
    result[2] += 5607464;
    result[3] += 329839069;
    result[4] += 122162618;
    result[5] += 550733;
    result[6] += 350466;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 99479267;
    result[1] += 2804113;
    result[2] += 3872347;
    result[3] += 432768195;
    result[4] += 319268360;
    result[5] += 801175;
    result[6] += 0;
  } else {
    result[0] += 774964260;
    result[1] += 718396;
    result[2] += 2456452;
    result[3] += 80668957;
    result[4] += 0;
    result[5] += 46348;
    result[6] += 139044;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 201979543;
    result[1] += 4311550;
    result[2] += 6964811;
    result[3] += 362170215;
    result[4] += 283567338;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 739761042;
    result[1] += 358661;
    result[2] += 1569142;
    result[3] += 101837350;
    result[4] += 15198266;
    result[5] += 89665;
    result[6] += 179330;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 27730514;
    result[1] += 2773051;
    result[2] += 4567378;
    result[3] += 416936437;
    result[4] += 406170473;
    result[5] += 815603;
    result[6] += 0;
  } else {
    result[0] += 765037538;
    result[1] += 539201;
    result[2] += 2201740;
    result[3] += 90810575;
    result[4] += 0;
    result[5] += 67400;
    result[6] += 337001;
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
