
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2409090909090909;
    result[1] += 0.759090909090909;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.25213675213675213;
    result[1] += 0.7478632478632479;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.32286995515695066;
    result[1] += 0.6771300448430493;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d0a5ce6))) ) ) {
    result[0] += 0.9074074074074074;
    result[1] += 0.09259259259259259;
  } else {
    result[0] += 0.2583732057416268;
    result[1] += 0.7416267942583732;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2511013215859031;
    result[1] += 0.748898678414097;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24537037037037038;
    result[1] += 0.7546296296296297;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25892857142857145;
    result[1] += 0.7410714285714286;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.25;
    result[1] += 0.75;
  } else {
    result[0] += 0.8266666666666667;
    result[1] += 0.17333333333333334;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2825112107623318;
    result[1] += 0.7174887892376681;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee17c1c))) ) ) {
    result[0] += 0.8857142857142857;
    result[1] += 0.11428571428571428;
  } else {
    result[0] += 0.26424870466321243;
    result[1] += 0.7357512953367875;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29707112970711297;
    result[1] += 0.702928870292887;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 0.9166666666666666;
    result[1] += 0.08333333333333333;
  } else {
    result[0] += 0.3303964757709251;
    result[1] += 0.6696035242290749;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3033175355450237;
    result[1] += 0.6966824644549763;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9259259259259259;
    result[1] += 0.07407407407407407;
  } else {
    result[0] += 0.23923444976076555;
    result[1] += 0.7607655502392344;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6db328))) ) ) {
    result[0] += 0.9487179487179487;
    result[1] += 0.05128205128205128;
  } else {
    result[0] += 0.29910714285714285;
    result[1] += 0.7008928571428571;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5bef4a))) ) ) {
    result[0] += 0.9761904761904762;
    result[1] += 0.023809523809523808;
  } else {
    result[0] += 0.2850678733031674;
    result[1] += 0.7149321266968326;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f0da272))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.37606837606837606;
    result[1] += 0.6239316239316239;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d540cc8))) ) ) {
    result[0] += 0.6530612244897959;
    result[1] += 0.3469387755102041;
  } else {
    result[0] += 0.18181818181818182;
    result[1] += 0.8181818181818182;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30666666666666664;
    result[1] += 0.6933333333333334;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 0.9298245614035088;
    result[1] += 0.07017543859649122;
  } else {
    result[0] += 0.1941747572815534;
    result[1] += 0.8058252427184466;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.19161676646706588;
    result[1] += 0.8083832335329342;
  } else {
    result[0] += 0.8125;
    result[1] += 0.1875;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 0.9210526315789473;
    result[1] += 0.07894736842105263;
  } else {
    result[0] += 0.26222222222222225;
    result[1] += 0.7377777777777778;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e09abf3))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2383177570093458;
    result[1] += 0.7616822429906542;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 0.9846153846153847;
    result[1] += 0.015384615384615385;
  } else {
    result[0] += 0.16161616161616163;
    result[1] += 0.8383838383838383;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9594594594594594;
    result[1] += 0.04054054054054054;
  } else {
    result[0] += 0.291005291005291;
    result[1] += 0.708994708994709;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.2198952879581152;
    result[1] += 0.7801047120418848;
  } else {
    result[0] += 0.875;
    result[1] += 0.125;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18627450980392157;
    result[1] += 0.8137254901960784;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2927927927927928;
    result[1] += 0.7072072072072072;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9387755102040817;
    result[1] += 0.061224489795918366;
  } else {
    result[0] += 0.27102803738317754;
    result[1] += 0.7289719626168224;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 0.6836734693877551;
    result[1] += 0.3163265306122449;
  } else {
    result[0] += 0.21212121212121213;
    result[1] += 0.7878787878787878;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 0.9354838709677419;
    result[1] += 0.06451612903225806;
  } else {
    result[0] += 0.3103448275862069;
    result[1] += 0.6896551724137931;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.20430107526881722;
    result[1] += 0.7956989247311828;
  } else {
    result[0] += 0.7792207792207793;
    result[1] += 0.22077922077922077;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2543859649122807;
    result[1] += 0.7456140350877193;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 0.8181818181818182;
    result[1] += 0.18181818181818182;
  } else {
    result[0] += 0.18292682926829268;
    result[1] += 0.8170731707317073;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c02d384))) ) ) {
    result[0] += 0.8305084745762712;
    result[1] += 0.1694915254237288;
  } else {
    result[0] += 0.23529411764705882;
    result[1] += 0.7647058823529411;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
    result[0] += 0.8888888888888888;
    result[1] += 0.1111111111111111;
  } else {
    result[0] += 0.30837004405286345;
    result[1] += 0.6916299559471366;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4b9970))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2827868852459016;
    result[1] += 0.7172131147540983;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d73721d))) ) ) {
    result[0] += 0.7549019607843137;
    result[1] += 0.24509803921568626;
  } else {
    result[0] += 0.2546583850931677;
    result[1] += 0.7453416149068323;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.98;
    result[1] += 0.02;
  } else {
    result[0] += 0.2347417840375587;
    result[1] += 0.7652582159624414;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3008849557522124;
    result[1] += 0.6991150442477876;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d5cfb))) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.19704433497536947;
    result[1] += 0.8029556650246306;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.195;
    result[1] += 0.805;
  } else {
    result[0] += 0.8412698412698413;
    result[1] += 0.15873015873015872;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 0.6938775510204082;
    result[1] += 0.30612244897959184;
  } else {
    result[0] += 0.20606060606060606;
    result[1] += 0.793939393939394;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 0.9795918367346939;
    result[1] += 0.02040816326530612;
  } else {
    result[0] += 0.2850467289719626;
    result[1] += 0.7149532710280374;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f57e671))) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.34763948497854075;
    result[1] += 0.6523605150214592;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2918454935622318;
    result[1] += 0.7081545064377682;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 0.6630434782608695;
    result[1] += 0.33695652173913043;
  } else {
    result[0] += 0.19298245614035087;
    result[1] += 0.8070175438596491;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.325;
    result[1] += 0.675;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3af3cb3e))) ) ) {
    result[0] += 0.6822429906542056;
    result[1] += 0.3177570093457944;
  } else {
    result[0] += 0.24358974358974358;
    result[1] += 0.7564102564102564;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2832618025751073;
    result[1] += 0.7167381974248928;
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
