
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
    result[0] += 0.6581196581196581;
    result[1] += 0.3418803418803419;
  } else {
    result[0] += 0.17123287671232876;
    result[1] += 0.8287671232876712;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2248299941420555115) ) ) {
    result[0] += 0.6707317073170732;
    result[1] += 0.32926829268292684;
  } else {
    result[0] += 0.20441988950276244;
    result[1] += 0.7955801104972375;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.06627999991178512573) ) ) {
    result[0] += 0.7236842105263158;
    result[1] += 0.27631578947368424;
  } else {
    result[0] += 0.24064171122994651;
    result[1] += 0.7593582887700535;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3933999985456466675) ) ) {
    result[0] += 0.921875;
    result[1] += 0.078125;
  } else {
    result[0] += 0.19095477386934673;
    result[1] += 0.8090452261306532;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.17766497461928935;
    result[1] += 0.8223350253807107;
  } else {
    result[0] += 0.8181818181818182;
    result[1] += 0.18181818181818182;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9642857142857143;
    result[1] += 0.03571428571428571;
  } else {
    result[0] += 0.21256038647342995;
    result[1] += 0.7874396135265701;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1653549931943416595) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20909090909090908;
    result[1] += 0.7909090909090909;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
  } else {
    result[0] += 0.15228426395939088;
    result[1] += 0.8477157360406091;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2222222222222222;
    result[1] += 0.7777777777777778;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2927449941635131836) ) ) {
    result[0] += 0.9166666666666666;
    result[1] += 0.08333333333333333;
  } else {
    result[0] += 0.26778242677824265;
    result[1] += 0.7322175732217573;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.001010000007227063179) ) ) {
    result[0] += 0.5757575757575758;
    result[1] += 0.42424242424242425;
  } else {
    result[0] += 0.1402439024390244;
    result[1] += 0.8597560975609756;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.23958333333333334;
    result[1] += 0.7604166666666666;
  } else {
    result[0] += 0.8591549295774648;
    result[1] += 0.14084507042253522;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1485300064086914062) ) ) {
    result[0] += 0.7183098591549296;
    result[1] += 0.28169014084507044;
  } else {
    result[0] += 0.22916666666666666;
    result[1] += 0.7708333333333334;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1650943396226415;
    result[1] += 0.8349056603773585;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1945549994707107544) ) ) {
    result[0] += 0.6701030927835051;
    result[1] += 0.32989690721649484;
  } else {
    result[0] += 0.15060240963855423;
    result[1] += 0.8493975903614458;
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
