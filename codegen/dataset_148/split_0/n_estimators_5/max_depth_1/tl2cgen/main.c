
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    result[0] += 0.7525242257911501;
    result[1] += 0.00040658670461475913;
    result[2] += 0.0031171647353798204;
    result[3] += 0.19739784509046557;
    result[4] += 0.045673239818391276;
    result[5] += 0.0002710578030765061;
    result[6] += 0.0006098800569221388;
  } else {
    result[0] += 0.7996381727725012;
    result[1] += 0.0008349859096127753;
    result[2] += 0.002504957728838326;
    result[3] += 0.13457189576592563;
    result[4] += 0.06199770378874857;
    result[5] += 0.00017395539783599486;
    result[6] += 0.0002783286365375918;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.12317167051578137;
    result[1] += 0.0007698229407236335;
    result[2] += 0.003849114703618168;
    result[3] += 0.4986913010007698;
    result[4] += 0.37197844495765975;
    result[5] += 0.001539645881447267;
    result[6] += 0;
  } else {
    result[0] += 0.8988785299283881;
    result[1] += 0.00043237400351303884;
    result[2] += 0.0027023375219564928;
    result[3] += 0.09752736116740983;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00045939737873260377;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2077007700770077;
    result[1] += 0.0044004400440044;
    result[2] += 0.0044004400440044;
    result[3] += 0.43080308030803083;
    result[4] += 0.3526952695269527;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8548581696829674;
    result[1] += 0.0003593890386343216;
    result[2] += 0.0025670645616737257;
    result[3] += 0.11980490309331276;
    result[4] += 0.021820048774226667;
    result[5] += 0.00025670645616737253;
    result[6] += 0.00033371839301758434;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9995018584511628;
    result[1] += 0;
    result[2] += 0.0003831858067977161;
    result[3] += 0;
    result[4] += 3.8318580679771616e-05;
    result[5] += 0;
    result[6] += 7.663716135954323e-05;
  } else {
    result[0] += 0.4602080101131989;
    result[1] += 0.0017238407171177384;
    result[2] += 0.005918519795437568;
    result[3] += 0.39125438142848934;
    result[4] += 0.14014825030167213;
    result[5] += 0.00022984542894903176;
    result[6] += 0.0005171522151353214;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9992373689227836;
    result[1] += 0;
    result[2] += 0.000648236415633937;
    result[3] += 0;
    result[4] += 0.00011439466158245949;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.46958031837916064;
    result[1] += 0.0017366136034732273;
    result[2] += 0.00642547033285094;
    result[3] += 0.3815918958031838;
    result[4] += 0.13945007235890014;
    result[5] += 0.0005788712011577424;
    result[6] += 0.0006367583212735167;
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  result[6] /= 5;
  
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
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
