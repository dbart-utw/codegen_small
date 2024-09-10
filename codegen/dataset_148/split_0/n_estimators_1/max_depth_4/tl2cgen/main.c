
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.9955555555555555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0044444444444444444;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9905817174515236;
          result[4] += 0.00554016620498615;
          result[5] += 0.003878116343490305;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 0.9628543499511242;
          result[1] += 0;
          result[2] += 0.0039100684261974585;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009775171065493646;
        } else {
          result[0] += 0.9977614977614978;
          result[1] += 0.0006105006105006105;
          result[2] += 0.0007326007326007326;
          result[3] += 0.0007733007733007733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001221001221001221;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
          result[0] += 0.2675213675213675;
          result[1] += 0;
          result[2] += 0.006837606837606838;
          result[3] += 0.4888888888888889;
          result[4] += 0.23675213675213674;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0036231884057971015;
          result[1] += 0.0036231884057971015;
          result[2] += 0;
          result[3] += 0.2572463768115942;
          result[4] += 0.7355072463768116;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 0.1937363437727604;
          result[1] += 0.0065549890750182084;
          result[2] += 0.025491624180626365;
          result[3] += 0.303714493809177;
          result[4] += 0.47050254916241807;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18089430894308944;
          result[1] += 0.0033875338753387536;
          result[2] += 0;
          result[3] += 0.43089430894308944;
          result[4] += 0.38482384823848237;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.1650943396226415;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8349056603773585;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.36196078431372547;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6380392156862745;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.8482202820685023;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15177971793149764;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9395121951219512;
          result[1] += 0;
          result[2] += 0.0448780487804878;
          result[3] += 0;
          result[4] += 0.005853658536585366;
          result[5] += 0.002926829268292683;
          result[6] += 0.006829268292682927;
        } else {
          result[0] += 0.9934924078091107;
          result[1] += 0;
          result[2] += 0.003904555314533623;
          result[3] += 0.00043383947939262476;
          result[4] += 0.0008676789587852495;
          result[5] += 0;
          result[6] += 0.0013015184381778744;
        }
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
