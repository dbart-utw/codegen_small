
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0.21841541755888647;
        result[1] += 0.05781584582441112;
        result[2] += 0;
        result[3] += 0.017130620985010704;
        result[4] += 0.6059957173447537;
        result[5] += 0.10064239828693787;
      } else {
        result[0] += 0.013489208633093525;
        result[1] += 0.0044964028776978415;
        result[2] += 0.007194244604316547;
        result[3] += 0.09712230215827339;
        result[4] += 0.08273381294964029;
        result[5] += 0.7949640287769785;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0.00453514739229025;
        result[1] += 0.9523809523809524;
        result[2] += 0.002267573696145125;
        result[3] += 0;
        result[4] += 0.036281179138322;
        result[5] += 0.00453514739229025;
      } else {
        result[0] += 0.6536523929471033;
        result[1] += 0.03211586901763224;
        result[2] += 0.05037783375314862;
        result[3] += 0.10768261964735516;
        result[4] += 0.07745591939546599;
        result[5] += 0.0787153652392947;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07653061224489796;
        result[3] += 0.4336734693877551;
        result[4] += 0.11734693877551021;
        result[5] += 0.37244897959183676;
      } else {
        result[0] += 0.00980392156862745;
        result[1] += 0.00980392156862745;
        result[2] += 0.696078431372549;
        result[3] += 0.08823529411764706;
        result[4] += 0.0196078431372549;
        result[5] += 0.17647058823529413;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0.05217391304347826;
        result[1] += 0;
        result[2] += 0.7391304347826086;
        result[3] += 0.18840579710144928;
        result[4] += 0;
        result[5] += 0.020289855072463767;
      } else {
        result[0] += 0.0017391304347826088;
        result[1] += 0;
        result[2] += 0.9686956521739131;
        result[3] += 0.02782608695652174;
        result[4] += 0;
        result[5] += 0.0017391304347826088;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 1;
  result[1] /= 1;
  result[2] /= 1;
  result[3] /= 1;
  result[4] /= 1;
  result[5] /= 1;
  
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
