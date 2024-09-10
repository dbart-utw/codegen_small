
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.07909500040113925934) ) ) {
    result[0] += 0.7281553398058253;
    result[1] += 0.27184466019417475;
  } else {
    result[0] += 0.2375;
    result[1] += 0.7625;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1724137931034483;
    result[1] += 0.8275862068965517;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    result[0] += 0.6881720430107527;
    result[1] += 0.3118279569892473;
  } else {
    result[0] += 0.2411764705882353;
    result[1] += 0.7588235294117647;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.20707070707070707;
    result[1] += 0.7929292929292929;
  } else {
    result[0] += 0.7692307692307693;
    result[1] += 0.23076923076923078;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2651162790697674;
    result[1] += 0.7348837209302326;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
    result[0] += 0.9574468085106383;
    result[1] += 0.0425531914893617;
  } else {
    result[0] += 0.19444444444444445;
    result[1] += 0.8055555555555556;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.17647058823529413;
    result[1] += 0.8235294117647058;
  } else {
    result[0] += 0.8813559322033898;
    result[1] += 0.11864406779661017;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.23383084577114427;
    result[1] += 0.7661691542288557;
  } else {
    result[0] += 0.8709677419354839;
    result[1] += 0.12903225806451613;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.001010000007227063179) ) ) {
    result[0] += 0.6796116504854369;
    result[1] += 0.32038834951456313;
  } else {
    result[0] += 0.21875;
    result[1] += 0.78125;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2016500011086463928) ) ) {
    result[0] += 0.9142857142857143;
    result[1] += 0.08571428571428572;
  } else {
    result[0] += 0.3026315789473684;
    result[1] += 0.6973684210526315;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2893099933862686157) ) ) {
    result[0] += 0.6095238095238096;
    result[1] += 0.3904761904761905;
  } else {
    result[0] += 0.18354430379746836;
    result[1] += 0.8164556962025317;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9433962264150944;
    result[1] += 0.05660377358490566;
  } else {
    result[0] += 0.21904761904761905;
    result[1] += 0.780952380952381;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.368479996919631958) ) ) {
    result[0] += 0.9259259259259259;
    result[1] += 0.07407407407407407;
  } else {
    result[0] += 0.15789473684210525;
    result[1] += 0.8421052631578947;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9821428571428571;
    result[1] += 0.017857142857142856;
  } else {
    result[0] += 0.20772946859903382;
    result[1] += 0.7922705314009661;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 0.9787234042553191;
    result[1] += 0.02127659574468085;
  } else {
    result[0] += 0.18055555555555555;
    result[1] += 0.8194444444444444;
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
