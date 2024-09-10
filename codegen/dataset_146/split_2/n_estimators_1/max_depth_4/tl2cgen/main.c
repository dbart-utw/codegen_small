
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00392156862745098;
          result[3] += 0.023529411764705882;
          result[4] += 0.8901960784313725;
          result[5] += 0.08235294117647059;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0027359781121751026;
          result[3] += 0.024623803009575923;
          result[4] += 0.02051983584131327;
          result[5] += 0.9521203830369357;
        } else {
          result[0] += 0.0954653937947494;
          result[1] += 0.026252983293556086;
          result[2] += 0.00477326968973747;
          result[3] += 0.34844868735083534;
          result[4] += 0.07398568019093078;
          result[5] += 0.4510739856801909;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0.03333333333333333;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0.002232142857142857;
          result[1] += 0.9464285714285714;
          result[2] += 0;
          result[3] += 0.011160714285714286;
          result[4] += 0.04017857142857143;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
          result[0] += 0.1956521739130435;
          result[1] += 0.08695652173913043;
          result[2] += 0.08152173913043478;
          result[3] += 0.2608695652173913;
          result[4] += 0.07065217391304347;
          result[5] += 0.30434782608695654;
        } else {
          result[0] += 0.7864845434938894;
          result[1] += 0.026599568655643425;
          result[2] += 0.03594536304816679;
          result[3] += 0.04672897196261683;
          result[4] += 0.07764198418404027;
          result[5] += 0.026599568655643425;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15714285714285714;
          result[3] += 0.11428571428571428;
          result[4] += 0.12857142857142856;
          result[5] += 0.6;
        } else {
          result[0] += 0.006329113924050633;
          result[1] += 0.03164556962025317;
          result[2] += 0.17721518987341772;
          result[3] += 0.5506329113924051;
          result[4] += 0.02531645569620253;
          result[5] += 0.2088607594936709;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          result[0] += 0.25806451612903225;
          result[1] += 0;
          result[2] += 0.2903225806451613;
          result[3] += 0;
          result[4] += 0.1935483870967742;
          result[5] += 0.25806451612903225;
        } else {
          result[0] += 0.017543859649122806;
          result[1] += 0;
          result[2] += 0.9298245614035088;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0.023529411764705882;
          result[1] += 0;
          result[2] += 0.7835294117647059;
          result[3] += 0.17411764705882352;
          result[4] += 0.002352941176470588;
          result[5] += 0.01647058823529412;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9848197343453511;
          result[3] += 0.015180265654648957;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.13043478260869565;
          result[1] += 0;
          result[2] += 0.8695652173913043;
          result[3] += 0;
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
