
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.0009850000496953725815) ) ) {
    result[0] += 0.5572519083969466;
    result[1] += 0.44274809160305345;
  } else {
    result[0] += 0.1590909090909091;
    result[1] += 0.8409090909090909;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    result[0] += 0.6415094339622641;
    result[1] += 0.3584905660377358;
  } else {
    result[0] += 0.2356687898089172;
    result[1] += 0.7643312101910829;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9298245614035088;
    result[1] += 0.07017543859649122;
  } else {
    result[0] += 0.22330097087378642;
    result[1] += 0.7766990291262136;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23696682464454977;
    result[1] += 0.7630331753554502;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24882629107981222;
    result[1] += 0.7511737089201878;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06778999976813793182) ) ) {
    result[0] += 0.6853932584269663;
    result[1] += 0.3146067415730337;
  } else {
    result[0] += 0.21264367816091953;
    result[1] += 0.7873563218390804;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.23809523809523808;
    result[1] += 0.7619047619047619;
  } else {
    result[0] += 0.8378378378378378;
    result[1] += 0.16216216216216217;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
    result[0] += 0.2716049382716049;
    result[1] += 0.7283950617283951;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1003000028431415558) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1990521327014218;
    result[1] += 0.8009478672985783;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2907000035047531128) ) ) {
    result[0] += 0.5929203539823009;
    result[1] += 0.40707964601769914;
  } else {
    result[0] += 0.17333333333333334;
    result[1] += 0.8266666666666667;
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  
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
