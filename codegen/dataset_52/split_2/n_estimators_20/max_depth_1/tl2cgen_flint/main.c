
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 0.9836065573770492;
    result[1] += 0.01639344262295082;
  } else {
    result[0] += 0.18316831683168316;
    result[1] += 0.8168316831683168;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.208955223880597;
    result[1] += 0.7910447761194029;
  } else {
    result[0] += 0.8064516129032258;
    result[1] += 0.1935483870967742;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9827586206896551;
    result[1] += 0.017241379310344827;
  } else {
    result[0] += 0.22926829268292684;
    result[1] += 0.7707317073170732;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 0.9852941176470589;
    result[1] += 0.014705882352941176;
  } else {
    result[0] += 0.1794871794871795;
    result[1] += 0.8205128205128205;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.20430107526881722;
    result[1] += 0.7956989247311828;
  } else {
    result[0] += 0.9090909090909091;
    result[1] += 0.09090909090909091;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 0.7058823529411765;
    result[1] += 0.29411764705882354;
  } else {
    result[0] += 0.18012422360248448;
    result[1] += 0.8198757763975155;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3bcf95d5))) ) ) {
    result[0] += 0.75;
    result[1] += 0.25;
  } else {
    result[0] += 0.22564102564102564;
    result[1] += 0.7743589743589744;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 0.6796875;
    result[1] += 0.3203125;
  } else {
    result[0] += 0.24444444444444444;
    result[1] += 0.7555555555555555;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1990521327014218;
    result[1] += 0.8009478672985783;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x39c49ba6))) ) ) {
    result[0] += 0.6611570247933884;
    result[1] += 0.33884297520661155;
  } else {
    result[0] += 0.2605633802816901;
    result[1] += 0.7394366197183099;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.228310502283105;
    result[1] += 0.771689497716895;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2584745762711864;
    result[1] += 0.7415254237288136;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f533919))) ) ) {
    result[0] += 0.326271186440678;
    result[1] += 0.673728813559322;
  } else {
    result[0] += 0.9259259259259259;
    result[1] += 0.07407407407407407;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22885572139303484;
    result[1] += 0.7711442786069652;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2347417840375587;
    result[1] += 0.7652582159624414;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.27896995708154504;
    result[1] += 0.721030042918455;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19;
    result[1] += 0.81;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.22959183673469388;
    result[1] += 0.7704081632653061;
  } else {
    result[0] += 0.8656716417910447;
    result[1] += 0.13432835820895522;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3df0d5a6))) ) ) {
    result[0] += 0.9552238805970149;
    result[1] += 0.04477611940298507;
  } else {
    result[0] += 0.2193877551020408;
    result[1] += 0.7806122448979592;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 0.9636363636363636;
    result[1] += 0.03636363636363636;
  } else {
    result[0] += 0.21153846153846154;
    result[1] += 0.7884615384615384;
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
