
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9979716024340771;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002028397565922921;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
        result[0] += 0.06724782067247821;
        result[1] += 0.0136986301369863;
        result[2] += 0.007471980074719801;
        result[3] += 0.13947696139476962;
        result[4] += 0.19364881693648817;
        result[5] += 0.5784557907845579;
      } else {
        result[0] += 0.658008658008658;
        result[1] += 0.04267161410018553;
        result[2] += 0.045763760049474335;
        result[3] += 0.06060606060606061;
        result[4] += 0.10760667903525047;
        result[5] += 0.08534322820037106;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.30526315789473685;
        result[3] += 0.42105263157894735;
        result[4] += 0;
        result[5] += 0.2736842105263158;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
        result[0] += 0.02622950819672131;
        result[1] += 0;
        result[2] += 0.7770491803278688;
        result[3] += 0.17049180327868851;
        result[4] += 0;
        result[5] += 0.02622950819672131;
      } else {
        result[0] += 0.004291845493562232;
        result[1] += 0;
        result[2] += 0.9670958512160229;
        result[3] += 0.024320457796852647;
        result[4] += 0;
        result[5] += 0.004291845493562232;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
