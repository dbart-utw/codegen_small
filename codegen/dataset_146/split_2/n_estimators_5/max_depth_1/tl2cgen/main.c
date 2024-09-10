
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    result[0] += 0.32030159173415246;
    result[1] += 0.1365540351857023;
    result[2] += 0.02736665735827981;
    result[3] += 0.08991901703434795;
    result[4] += 0.14465233175090758;
    result[5] += 0.2812063669366099;
  } else {
    result[0] += 0.01606425702811245;
    result[1] += 0.0024096385542168677;
    result[2] += 0.6875502008032128;
    result[3] += 0.1783132530120482;
    result[4] += 0.02248995983935743;
    result[5] += 0.09317269076305221;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.30990415335463256;
    result[1] += 0.13045793397231098;
    result[2] += 0.033280085197018104;
    result[3] += 0.08732694355697551;
    result[4] += 0.1365814696485623;
    result[5] += 0.30244941427050054;
  } else {
    result[0] += 0.011214953271028037;
    result[1] += 0.007476635514018692;
    result[2] += 0.8018691588785046;
    result[3] += 0.12242990654205607;
    result[4] += 0.012149532710280374;
    result[5] += 0.044859813084112146;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3300747556066705;
    result[1] += 0.13542265669925244;
    result[2] += 0.023001725129384705;
    result[3] += 0.07159286946520989;
    result[4] += 0.14951121334100057;
    result[5] += 0.2903967797584819;
  } else {
    result[0] += 0.030415430267062313;
    result[1] += 0.010385756676557863;
    result[2] += 0.7106824925816023;
    result[3] += 0.15578635014836795;
    result[4] += 0.017804154302670624;
    result[5] += 0.07492581602373888;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.3081627226801383;
    result[1] += 0.1276256314809891;
    result[2] += 0.03642648231853231;
    result[3] += 0.09199680935921298;
    result[4] += 0.13985642116458388;
    result[5] += 0.29593193299654347;
  } else {
    result[0] += 0.008450704225352112;
    result[1] += 0.004694835680751174;
    result[2] += 0.8018779342723005;
    result[3] += 0.12112676056338029;
    result[4] += 0.015023474178403756;
    result[5] += 0.048826291079812206;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.3154112323662497;
    result[1] += 0.15304764439712537;
    result[2] += 0.027149321266968326;
    result[3] += 0.09103007718924674;
    result[4] += 0.12483364386478574;
    result[5] += 0.28852808091562415;
  } else {
    result[0] += 0.014031805425631433;
    result[1] += 0;
    result[2] += 0.832553788587465;
    result[3] += 0.127221702525725;
    result[4] += 0;
    result[5] += 0.026192703461178676;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
