
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2565217391304348;
    result[1] += 0.7434782608695653;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.22631578947368422;
    result[1] += 0.7736842105263158;
  } else {
    result[0] += 0.8904109589041096;
    result[1] += 0.1095890410958904;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24267782426778242;
    result[1] += 0.7573221757322176;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.33047210300429186;
    result[1] += 0.6695278969957081;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2028301886792453;
    result[1] += 0.7971698113207547;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1395450010895729065) ) ) {
    result[0] += 0.7222222222222222;
    result[1] += 0.2777777777777778;
  } else {
    result[0] += 0.23036649214659685;
    result[1] += 0.7696335078534031;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
    result[0] += 0.6145833333333334;
    result[1] += 0.3854166666666667;
  } else {
    result[0] += 0.18562874251497005;
    result[1] += 0.8143712574850299;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.13636363636363635;
    result[1] += 0.8636363636363636;
  } else {
    result[0] += 0.8307692307692308;
    result[1] += 0.16923076923076924;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.08312500268220901489) ) ) {
    result[0] += 0.711864406779661;
    result[1] += 0.288135593220339;
  } else {
    result[0] += 0.22549019607843138;
    result[1] += 0.7745098039215687;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.94;
    result[1] += 0.06;
  } else {
    result[0] += 0.22535211267605634;
    result[1] += 0.7746478873239436;
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
