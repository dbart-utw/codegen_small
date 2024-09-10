
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.013215859030837005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.960352422907489;
            result[5] += 0.02643171806167401;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0;
            result[4] += 0.65;
            result[5] += 0.3;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6521739130434783;
            result[5] += 0.34782608695652173;
          } else {
            result[0] += 0.0030211480362537764;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01812688821752266;
            result[4] += 0.013595166163141994;
            result[5] += 0.9652567975830816;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0.10837438423645321;
            result[1] += 0.0024630541871921183;
            result[2] += 0.007389162561576354;
            result[3] += 0.13793103448275862;
            result[4] += 0.13793103448275862;
            result[5] += 0.6059113300492611;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006250000000000001;
            result[3] += 0.7625000000000001;
            result[4] += 0.006250000000000001;
            result[5] += 0.22500000000000003;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96) ) ) {
            result[0] += 0.05128205128205128;
            result[1] += 0.1282051282051282;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.975;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.1069182389937107;
            result[1] += 0.31446540880503143;
            result[2] += 0;
            result[3] += 0.03773584905660377;
            result[4] += 0.5345911949685535;
            result[5] += 0.006289308176100629;
          } else {
            result[0] += 0.8817391304347828;
            result[1] += 0.008695652173913045;
            result[2] += 0.008695652173913045;
            result[3] += 0.031304347826086966;
            result[4] += 0.05304347826086958;
            result[5] += 0.016521739130434785;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)114.5) ) ) {
            result[0] += 0.03468208092485549;
            result[1] += 0.023121387283236993;
            result[2] += 0.31213872832369943;
            result[3] += 0.32947976878612717;
            result[4] += 0.10404624277456648;
            result[5] += 0.19653179190751446;
          } else {
            result[0] += 0.7903225806451613;
            result[1] += 0;
            result[2] += 0.016129032258064516;
            result[3] += 0;
            result[4] += 0.1935483870967742;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.034482758620689655;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9655172413793104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.30000000000000004;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6000000000000001;
            result[5] += 0.10000000000000002;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22033898305084745;
            result[3] += 0.6271186440677966;
            result[4] += 0;
            result[5] += 0.15254237288135594;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.11904761904761904;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)130) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7441860465116279;
            result[3] += 0.23255813953488372;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0.012396694214876035;
            result[1] += 0;
            result[2] += 0.8677685950413224;
            result[3] += 0.10743801652892564;
            result[4] += 0;
            result[5] += 0.012396694214876035;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9487179487179487;
            result[3] += 0.05128205128205128;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9954128440366973;
            result[3] += 0.0045871559633027525;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
