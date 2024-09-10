
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0.00904977375565611;
            result[1] += 0.00904977375565611;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9592760180995475;
            result[5] += 0.02262443438914027;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3783783783783784;
            result[5] += 0.5945945945945946;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0.07894736842105263;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9210526315789473;
            result[5] += 0;
          } else {
            result[0] += 0.8596491228070176;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12280701754385964;
            result[5] += 0.017543859649122806;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0.6956521739130435;
            result[5] += 0.2608695652173913;
          } else {
            result[0] += 0;
            result[1] += 0.0022522522522522522;
            result[2] += 0;
            result[3] += 0.057432432432432436;
            result[4] += 0.05067567567567568;
            result[5] += 0.8896396396396397;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.011235955056179775;
            result[2] += 0.1348314606741573;
            result[3] += 0.20224719101123595;
            result[4] += 0.0898876404494382;
            result[5] += 0.5617977528089888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.36363636363636365;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.9615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0.9978070175438597;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0021929824561403508;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6363636363636364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36363636363636365;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
            result[0] += 0.8378378378378378;
            result[1] += 0.007371007371007371;
            result[2] += 0;
            result[3] += 0.02375102375102375;
            result[4] += 0.10319410319410319;
            result[5] += 0.027846027846027847;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.024844720496894408;
            result[1] += 0.018633540372670808;
            result[2] += 0.11801242236024845;
            result[3] += 0.42857142857142855;
            result[4] += 0.06832298136645963;
            result[5] += 0.3416149068322981;
          } else {
            result[0] += 0.5405405405405406;
            result[1] += 0;
            result[2] += 0.3153153153153153;
            result[3] += 0.02702702702702703;
            result[4] += 0.11711711711711711;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.06451612903225806;
            result[2] += 0.06451612903225806;
            result[3] += 0;
            result[4] += 0.1935483870967742;
            result[5] += 0.6774193548387096;
          } else {
            result[0] += 0;
            result[1] += 0.022222222222222223;
            result[2] += 0.05555555555555555;
            result[3] += 0.6111111111111112;
            result[4] += 0;
            result[5] += 0.3111111111111111;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15094339622641512;
            result[3] += 0.7169811320754718;
            result[4] += 0;
            result[5] += 0.13207547169811323;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8115942028985508;
            result[3] += 0.14492753623188406;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.54;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.06;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8480565371024735;
            result[3] += 0.1413427561837456;
            result[4] += 0.007067137809187279;
            result[5] += 0.0035335689045936395;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.45454545454545453;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001669449081803005;
            result[1] += 0;
            result[2] += 0.9732888146911519;
            result[3] += 0.021702838063439065;
            result[4] += 0.001669449081803005;
            result[5] += 0.001669449081803005;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
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
