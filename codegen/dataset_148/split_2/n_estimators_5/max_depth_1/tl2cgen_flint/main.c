
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 0.8428542028048099;
    result[1] += 0.0010290183165260341;
    result[2] += 0.00279304971628495;
    result[3] += 0.09996177931967189;
    result[4] += 0.05321494722606063;
    result[5] += 8.820156998794579e-05;
    result[6] += 5.880104665863053e-05;
  } else {
    result[0] += 0.5990302519236852;
    result[1] += 0;
    result[2] += 0.006008221777168758;
    result[3] += 0.3207547169811321;
    result[4] += 0.07367977232001688;
    result[5] += 0.00010540739959945189;
    result[6] += 0.00042162959839780757;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 0.9992787457768668;
    result[1] += 0;
    result[2] += 0.0005314504802034697;
    result[3] += 0;
    result[4] += 0.0001898037429298106;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.4640671446057003;
    result[1] += 0.0021565541761380193;
    result[2] += 0.006527947776417789;
    result[3] += 0.3839832138485749;
    result[4] += 0.14221600512910182;
    result[5] += 0.0006411377280410328;
    result[6] += 0.0004079967360261118;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11580910928027359;
    result[1] += 0.003264417845484222;
    result[2] += 0.004508005596144878;
    result[3] += 0.5038084874863983;
    result[4] += 0.37167728897870356;
    result[5] += 0.000932690812995492;
    result[6] += 0;
  } else {
    result[0] += 0.902177138694796;
    result[1] += 0.0008363234143577847;
    result[2] += 0.0028596865136104894;
    result[3] += 0.0939110259799822;
    result[4] += 0;
    result[5] += 5.395634931340546e-05;
    result[6] += 0.0001618690479402164;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 0.23513513513513515;
    result[1] += 0.005019305019305019;
    result[2] += 0.008108108108108109;
    result[3] += 0.42162162162162165;
    result[4] += 0.3301158301158301;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8611951983298539;
    result[1] += 0.0004175365344467641;
    result[2] += 0.0018267223382045928;
    result[3] += 0.11855427974947808;
    result[4] += 0.01769311064718163;
    result[5] += 0.00010438413361169103;
    result[6] += 0.00020876826722338206;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 0.032282567413596655;
    result[1] += 0.0032282567413596656;
    result[2] += 0.005317128750474744;
    result[3] += 0.48537789593619446;
    result[4] += 0.472844663881504;
    result[5] += 0.0009494872768704899;
    result[6] += 0;
  } else {
    result[0] += 0.8906209133232202;
    result[1] += 0.0006277135533818069;
    result[2] += 0.0025631636763090446;
    result[3] += 0.10571742428205264;
    result[4] += 0;
    result[5] += 7.846419417272586e-05;
    result[6] += 0.0003923209708636293;
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
