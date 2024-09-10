
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11723384327193256;
    result[1] += 0.001248829222603809;
    result[2] += 0.004058694973462379;
    result[3] += 0.4968779269434905;
    result[4] += 0.379019669060256;
    result[5] += 0.0015610365282547611;
    result[6] += 0;
  } else {
    result[0] += 0.9026796786542298;
    result[1] += 0.0005930878309160511;
    result[2] += 0.002722812314660053;
    result[3] += 0.09370787728473608;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00029654391545802554;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 0.1938268940211526;
    result[1] += 0.0047485430606518456;
    result[2] += 0.005180228793438377;
    result[3] += 0.4260738182603065;
    result[4] += 0.37017051586445066;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8541436179792626;
    result[1] += 0.0005403041140298969;
    result[2] += 0.0023670465947976433;
    result[3] += 0.12164561195873105;
    result[4] += 0.020917487843157435;
    result[5] += 0.00012864383667378495;
    result[6] += 0.0002572876733475699;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 0.840157343954875;
    result[1] += 0.00039583384874199054;
    result[2] += 0.002944014250018555;
    result[3] += 0.13250538086638133;
    result[4] += 0.023576853615694813;
    result[5] += 7.421884663912323e-05;
    result[6] += 0.00034635461764924175;
  } else {
    result[0] += 0.08249431633647288;
    result[1] += 0.006170834686586554;
    result[2] += 0.0022734654108476776;
    result[3] += 0.41539460863916855;
    result[4] += 0.49366677492692435;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 0.21057155135367425;
    result[1] += 0.0034379028792436614;
    result[2] += 0.006875805758487323;
    result[3] += 0.43425010743446496;
    result[4] += 0.3448646325741298;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8551459609741029;
    result[1] += 0.0005663388765896103;
    result[2] += 0.002651495649487721;
    result[3] += 0.1207846367708387;
    result[4] += 0.02036245688101735;
    result[5] += 0.0002059414096689492;
    result[6] += 0.0002831694382948051;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11647771393073458;
    result[1] += 0.0026401615157633173;
    result[2] += 0.004969715794378009;
    result[3] += 0.49277838173629446;
    result[4] += 0.3817362944556608;
    result[5] += 0.001397732567168815;
    result[6] += 0;
  } else {
    result[0] += 0.9026469873991527;
    result[1] += 0.0006745635573783762;
    result[2] += 0.00272523677180864;
    result[3] += 0.09371036939100402;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00024284288065621544;
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  result[6] /= 5;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
