
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
          result[0] += 0.004081632653061225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9795918367346939;
          result[5] += 0.0163265306122449;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.4666666666666667;
          result[5] += 0.4666666666666667;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.028784648187633263;
          result[1] += 0.0021321961620469083;
          result[2] += 0;
          result[3] += 0.04584221748400853;
          result[4] += 0.0767590618336887;
          result[5] += 0.8464818763326226;
        } else {
          result[0] += 0.07871720116618076;
          result[1] += 0.01749271137026239;
          result[2] += 0.0029154518950437317;
          result[3] += 0.5014577259475219;
          result[4] += 0.03498542274052478;
          result[5] += 0.36443148688046645;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.0297029702970297;
          result[1] += 0.15841584158415842;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.801980198019802;
          result[5] += 0.009900990099009901;
        } else {
          result[0] += 0;
          result[1] += 0.9675324675324676;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.032467532467532464;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8776408450704225;
          result[1] += 0.01584507042253521;
          result[2] += 0;
          result[3] += 0.02640845070422535;
          result[4] += 0.06602112676056338;
          result[5] += 0.014084507042253521;
        } else {
          result[0] += 0.15676959619952494;
          result[1] += 0.011876484560570071;
          result[2] += 0.28741092636579574;
          result[3] += 0.28741092636579574;
          result[4] += 0.04275534441805225;
          result[5] += 0.21377672209026127;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0.015873015873015872;
          result[2] += 0;
          result[3] += 0.1746031746031746;
          result[4] += 0.06349206349206349;
          result[5] += 0.6984126984126984;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.47619047619047616;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.09523809523809523;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20512820512820512;
          result[3] += 0.7692307692307693;
          result[4] += 0;
          result[5] += 0.02564102564102564;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.19047619047619047;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0.0625;
          result[1] += 0.625;
          result[2] += 0.125;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.0625;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9090909090909091;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011122345803842264;
          result[1] += 0;
          result[2] += 0.9191102123356926;
          result[3] += 0.06268958543983821;
          result[4] += 0;
          result[5] += 0.007077856420626896;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
