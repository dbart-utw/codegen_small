
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9473684210526315;
    result[1] += 0.05263157894736842;
  } else {
    result[0] += 0.22330097087378642;
    result[1] += 0.7766990291262136;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18181818181818182;
    result[1] += 0.8181818181818182;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e017050))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2171945701357466;
    result[1] += 0.7828054298642534;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f682c90))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24050632911392406;
    result[1] += 0.759493670886076;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3017241379310345;
    result[1] += 0.6982758620689655;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9423076923076923;
    result[1] += 0.057692307692307696;
  } else {
    result[0] += 0.17061611374407584;
    result[1] += 0.8293838862559242;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.182648401826484;
    result[1] += 0.817351598173516;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 0.9629629629629629;
    result[1] += 0.037037037037037035;
  } else {
    result[0] += 0.326271186440678;
    result[1] += 0.673728813559322;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3025210084033613;
    result[1] += 0.6974789915966386;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f37e7c0))) ) ) {
    result[0] += 0.9393939393939394;
    result[1] += 0.06060606060606061;
  } else {
    result[0] += 0.2826086956521739;
    result[1] += 0.717391304347826;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17587939698492464;
    result[1] += 0.8241206030150754;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 0.6764705882352942;
    result[1] += 0.3235294117647059;
  } else {
    result[0] += 0.20496894409937888;
    result[1] += 0.7950310559006211;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f761f9f))) ) ) {
    result[0] += 0.8620689655172413;
    result[1] += 0.13793103448275862;
  } else {
    result[0] += 0.2905982905982906;
    result[1] += 0.7094017094017094;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2570093457943925;
    result[1] += 0.7429906542056075;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9148936170212766;
    result[1] += 0.0851063829787234;
  } else {
    result[0] += 0.1712962962962963;
    result[1] += 0.8287037037037037;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9491525423728814;
    result[1] += 0.05084745762711865;
  } else {
    result[0] += 0.19607843137254902;
    result[1] += 0.803921568627451;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22171945701357465;
    result[1] += 0.7782805429864253;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    result[0] += 0.9393939393939394;
    result[1] += 0.06060606060606061;
  } else {
    result[0] += 0.16751269035532995;
    result[1] += 0.8324873096446701;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
    result[0] += 0.5056179775280899;
    result[1] += 0.4943820224719101;
  } else {
    result[0] += 0.12643678160919541;
    result[1] += 0.8735632183908046;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e8ce076))) ) ) {
    result[0] += 0.6206896551724138;
    result[1] += 0.3793103448275862;
  } else {
    result[0] += 0.22448979591836735;
    result[1] += 0.7755102040816326;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.1921182266009852;
    result[1] += 0.8078817733990148;
  } else {
    result[0] += 0.7666666666666667;
    result[1] += 0.23333333333333334;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2742616033755274;
    result[1] += 0.7257383966244726;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 0.9795918367346939;
    result[1] += 0.02040816326530612;
  } else {
    result[0] += 0.21962616822429906;
    result[1] += 0.780373831775701;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21962616822429906;
    result[1] += 0.780373831775701;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.21212121212121213;
    result[1] += 0.7878787878787878;
  } else {
    result[0] += 0.8;
    result[1] += 0.2;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2037914691943128;
    result[1] += 0.7962085308056872;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2422907488986784;
    result[1] += 0.7577092511013216;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0b1ceb))) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.2532188841201717;
    result[1] += 0.7467811158798283;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20588235294117646;
    result[1] += 0.7941176470588235;
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  
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
