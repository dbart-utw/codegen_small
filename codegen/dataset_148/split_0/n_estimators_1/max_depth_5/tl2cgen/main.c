
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += 0.014492753623188406;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0.21739130434782608;
            result[4] += 0.7246376811594203;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0.4423076923076923;
            result[4] += 0.5192307692307693;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-29) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 0.9949748743718593;
            result[1] += 0;
            result[2] += 0.005025125628140704;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.84;
            result[1] += 0;
            result[2] += 0.16;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
            result[0] += 0.06286701208981002;
            result[1] += 0.004145077720207254;
            result[2] += 0.0034542314335060447;
            result[3] += 0.6604490500863558;
            result[4] += 0.2690846286701209;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5056689342403629;
            result[4] += 0.4943310657596372;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
            result[0] += 0.006369426751592357;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9872611464968153;
            result[4] += 0.0021231422505307855;
            result[5] += 0.004246284501061571;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7482517482517482;
            result[4] += 0;
            result[5] += 0.0017482517482517483;
            result[6] += 0;
          } else {
            result[0] += 0.10909090909090909;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8909090909090909;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0018484288354898336;
            result[3] += 0;
            result[4] += 0.9981515711645101;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05612244897959184;
            result[3] += 0;
            result[4] += 0.9438775510204082;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.953125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.046875;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9987714987714987;
            result[1] += 0.0004095004095004095;
            result[2] += 0.00025593775593775594;
            result[3] += 0.0004095004095004095;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00015356265356265356;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            result[0] += 0.9960715253318884;
            result[1] += 0.000948252506095909;
            result[2] += 0.002167434299647792;
            result[3] += 0.000270929287455974;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000541858574911948;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05747126436781609;
            result[3] += 0.9425287356321839;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0.382138256762559;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6178617432374409;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.988217054263566;
            result[1] += 0;
            result[2] += 0.009612403100775196;
            result[3] += 0.0012403100775193801;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000930232558139535;
          }
        }
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
  result[6] /= 1;
  
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
