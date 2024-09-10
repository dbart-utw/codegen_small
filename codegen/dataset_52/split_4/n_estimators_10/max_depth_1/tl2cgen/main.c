
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2965200096368789673) ) ) {
    result[0] += 0.5779816513761468;
    result[1] += 0.42201834862385323;
  } else {
    result[0] += 0.14285714285714285;
    result[1] += 0.8571428571428571;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    result[0] += 0.6896551724137931;
    result[1] += 0.3103448275862069;
  } else {
    result[0] += 0.19886363636363635;
    result[1] += 0.8011363636363636;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2579549998044967651) ) ) {
    result[0] += 0.9354838709677419;
    result[1] += 0.06451612903225806;
  } else {
    result[0] += 0.31896551724137934;
    result[1] += 0.6810344827586207;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4287499934434890747) ) ) {
    result[0] += 0.8552631578947368;
    result[1] += 0.14473684210526316;
  } else {
    result[0] += 0.15508021390374332;
    result[1] += 0.8449197860962567;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3062150031328201294) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21052631578947367;
    result[1] += 0.7894736842105263;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2399550005793571472) ) ) {
    result[0] += 0.6272727272727273;
    result[1] += 0.37272727272727274;
  } else {
    result[0] += 0.2222222222222222;
    result[1] += 0.7777777777777778;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1384000033140182495) ) ) {
    result[0] += 0.7727272727272727;
    result[1] += 0.22727272727272727;
  } else {
    result[0] += 0.19428571428571428;
    result[1] += 0.8057142857142857;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7134000062942504883) ) ) {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
  } else {
    result[0] += 0.3112033195020747;
    result[1] += 0.6887966804979253;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.22797927461139897;
    result[1] += 0.772020725388601;
  } else {
    result[0] += 0.9142857142857143;
    result[1] += 0.08571428571428572;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 0.9701492537313433;
    result[1] += 0.029850746268656716;
  } else {
    result[0] += 0.19387755102040816;
    result[1] += 0.8061224489795918;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
