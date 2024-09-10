
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2129049971699714661) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2877649962902069092) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1616300046443939209) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5997000038623809814) ) ) {
        result[0] += 0.10526315789473684;
        result[1] += 0.8947368421052632;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 0.09202453987730061;
        result[1] += 0.9079754601226994;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2927449941635131836) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 0.07262569832402235;
        result[1] += 0.9273743016759777;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.009455000050365924835) ) ) {
        result[0] += 0.13333333333333333;
        result[1] += 0.8666666666666667;
      } else {
        result[0] += 0.9523809523809523;
        result[1] += 0.047619047619047616;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3173149973154067993) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.717220008373260498) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.4946500062942504883) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03658000007271766663) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2553400024771690369) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        result[0] += 0.08522727272727272;
        result[1] += 0.9147727272727273;
      } else {
        result[0] += 0.7;
        result[1] += 0.3;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.06247999891638755798) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2670000046491622925) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6353399753570556641) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.05263157894736842;
        result[1] += 0.9473684210526315;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.655910000205039978) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5897435897435898;
        result[1] += 0.41025641025641024;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1724349930882453918) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.01305999979376792908) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3112450093030929565) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6495400071144104004) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1368421052631579;
        result[1] += 0.8631578947368421;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
