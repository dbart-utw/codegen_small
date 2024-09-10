
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    result[0] += 0.056372549019607844;
    result[1] += 0.014705882352941176;
    result[2] += 0.0030637254901960784;
    result[3] += 0.12377450980392157;
    result[4] += 0.18504901960784315;
    result[5] += 0.6170343137254902;
  } else {
    result[0] += 0.3431433938634941;
    result[1] += 0.16844082654978085;
    result[2] += 0.3027551659361302;
    result[3] += 0.07514088916718847;
    result[4] += 0.06606136505948654;
    result[5] += 0.044458359423919847;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.3229780396357793;
    result[1] += 0.14595607927155865;
    result[2] += 0.030798071772897697;
    result[3] += 0.08355650776647028;
    result[4] += 0.12935190144617031;
    result[5] += 0.28735940010712374;
  } else {
    result[0] += 0.016483516483516484;
    result[1] += 0.010073260073260074;
    result[2] += 0.7774725274725275;
    result[3] += 0.13644688644688643;
    result[4] += 0.009157509157509158;
    result[5] += 0.05036630036630037;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    result[0] += 0.028701891715590344;
    result[1] += 0.010437051532941943;
    result[2] += 0.0136986301369863;
    result[3] += 0.14546640574037834;
    result[4] += 0.18330071754729288;
    result[5] += 0.6183953033268101;
  } else {
    result[0] += 0.3361676283024598;
    result[1] += 0.16034011539629517;
    result[2] += 0.3051928332827209;
    result[3] += 0.07804433647130277;
    result[4] += 0.063164287883389;
    result[5] += 0.05709079866383237;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.2991935483870968;
    result[1] += 0.14274193548387096;
    result[2] += 0.027419354838709678;
    result[3] += 0.08763440860215053;
    result[4] += 0.14838709677419354;
    result[5] += 0.2946236559139785;
  } else {
    result[0] += 0.015370705244122965;
    result[1] += 0;
    result[2] += 0.8363471971066908;
    result[3] += 0.11392405063291139;
    result[4] += 0;
    result[5] += 0.034358047016274866;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    result[0] += 0.327409053040822;
    result[1] += 0.13829491807831157;
    result[2] += 0.024437656206609277;
    result[3] += 0.08303249097472924;
    result[4] += 0.13357400722021662;
    result[5] += 0.2932518744793113;
  } else {
    result[0] += 0.012244897959183673;
    result[1] += 0.004897959183673469;
    result[2] += 0.7746938775510204;
    result[3] += 0.11918367346938775;
    result[4] += 0.010612244897959184;
    result[5] += 0.0783673469387755;
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
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
