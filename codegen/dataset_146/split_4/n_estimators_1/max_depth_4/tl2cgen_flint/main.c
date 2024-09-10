
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0.125;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0.6282051282051282;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23076923076923078;
          result[5] += 0.14102564102564102;
        } else {
          result[0] += 0.0011641443538998836;
          result[1] += 0.002328288707799767;
          result[2] += 0;
          result[3] += 0.03143189755529686;
          result[4] += 0.04307334109429569;
          result[5] += 0.9220023282887078;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.01990049751243781;
          result[1] += 0.01990049751243781;
          result[2] += 0.04477611940298507;
          result[3] += 0.29850746268656714;
          result[4] += 0.05970149253731343;
          result[5] += 0.5572139303482587;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.057692307692307696;
          result[3] += 0.6858974358974359;
          result[4] += 0.00641025641025641;
          result[5] += 0.25;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.12154696132596685;
          result[1] += 0.11602209944751381;
          result[2] += 0.0055248618784530384;
          result[3] += 0;
          result[4] += 0.6961325966850829;
          result[5] += 0.06077348066298342;
        } else {
          result[0] += 0.713520749665328;
          result[1] += 0.0214190093708166;
          result[2] += 0.03145917001338688;
          result[3] += 0.09170013386880857;
          result[4] += 0.07095046854082998;
          result[5] += 0.07095046854082998;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12244897959183673;
          result[3] += 0.04081632653061224;
          result[4] += 0.12244897959183673;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0.024193548387096774;
          result[2] += 0.43548387096774194;
          result[3] += 0.22580645161290322;
          result[4] += 0.08870967741935484;
          result[5] += 0.22580645161290322;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.03951367781155016;
          result[1] += 0;
          result[2] += 0.7203647416413375;
          result[3] += 0.1975683890577508;
          result[4] += 0.0030395136778115506;
          result[5] += 0.03951367781155016;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.953198127925117;
          result[3] += 0.046801872074883;
          result[4] += 0;
          result[5] += 0;
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
