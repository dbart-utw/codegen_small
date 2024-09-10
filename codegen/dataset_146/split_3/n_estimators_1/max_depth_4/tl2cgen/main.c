
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.008888888888888889;
          result[1] += 0.03111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9333333333333333;
          result[5] += 0.02666666666666667;
        } else {
          result[0] += 0.06060606060606061;
          result[1] += 0.030303030303030304;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0.15151515151515152;
          result[5] += 0.42424242424242425;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0.0021645021645021645;
          result[2] += 0.0021645021645021645;
          result[3] += 0.06385281385281386;
          result[4] += 0.047619047619047616;
          result[5] += 0.8690476190476191;
        } else {
          result[0] += 0.06077348066298342;
          result[1] += 0.011049723756906077;
          result[2] += 0.008287292817679558;
          result[3] += 0.356353591160221;
          result[4] += 0.08839779005524862;
          result[5] += 0.47513812154696133;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9976744186046511;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002325581395348837;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7580760947595119;
          result[1] += 0.03589375448671931;
          result[2] += 0.006460875807609476;
          result[3] += 0.027279253409906678;
          result[4] += 0.13854989231873654;
          result[5] += 0.03374012921751615;
        } else {
          result[0] += 0.11864406779661017;
          result[1] += 0.026634382566585957;
          result[2] += 0.31234866828087166;
          result[3] += 0.22760290556900725;
          result[4] += 0.09443099273607748;
          result[5] += 0.22033898305084745;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.05154639175257732;
          result[2] += 0.16494845360824742;
          result[3] += 0.4948453608247423;
          result[4] += 0.010309278350515464;
          result[5] += 0.27835051546391754;
        } else {
          result[0] += 0.08974358974358974;
          result[1] += 0.02564102564102564;
          result[2] += 0.5256410256410257;
          result[3] += 0.15384615384615385;
          result[4] += 0.02564102564102564;
          result[5] += 0.1794871794871795;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
          result[0] += 0.009174311926605505;
          result[1] += 0;
          result[2] += 0.8577981651376146;
          result[3] += 0.12844036697247707;
          result[4] += 0;
          result[5] += 0.0045871559633027525;
        } else {
          result[0] += 0.7;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5217391304347826;
          result[3] += 0.4782608695652174;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.021739130434782608;
          result[2] += 0.8043478260869565;
          result[3] += 0.17391304347826086;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0036429872495446266;
          result[1] += 0;
          result[2] += 0.9872495446265938;
          result[3] += 0.007285974499089253;
          result[4] += 0;
          result[5] += 0.0018214936247723133;
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
