
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2409090909090909;
    result[1] += 0.759090909090909;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.25213675213675213;
    result[1] += 0.7478632478632479;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.32286995515695066;
    result[1] += 0.6771300448430493;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03378000017255544662) ) ) {
    result[0] += 0.9074074074074074;
    result[1] += 0.09259259259259259;
  } else {
    result[0] += 0.2583732057416268;
    result[1] += 0.7416267942583732;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2511013215859031;
    result[1] += 0.748898678414097;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24537037037037038;
    result[1] += 0.7546296296296297;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25892857142857145;
    result[1] += 0.7410714285714286;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.25;
    result[1] += 0.75;
  } else {
    result[0] += 0.8266666666666667;
    result[1] += 0.17333333333333334;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2825112107623318;
    result[1] += 0.7174887892376681;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
    result[0] += 0.8857142857142857;
    result[1] += 0.11428571428571428;
  } else {
    result[0] += 0.26424870466321243;
    result[1] += 0.7357512953367875;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29707112970711297;
    result[1] += 0.702928870292887;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    result[0] += 0.9166666666666666;
    result[1] += 0.08333333333333333;
  } else {
    result[0] += 0.3303964757709251;
    result[1] += 0.6696035242290749;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3033175355450237;
    result[1] += 0.6966824644549763;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9259259259259259;
    result[1] += 0.07407407407407407;
  } else {
    result[0] += 0.23923444976076555;
    result[1] += 0.7607655502392344;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
    result[0] += 0.9487179487179487;
    result[1] += 0.05128205128205128;
  } else {
    result[0] += 0.29910714285714285;
    result[1] += 0.7008928571428571;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
    result[0] += 0.9761904761904762;
    result[1] += 0.023809523809523808;
  } else {
    result[0] += 0.2850678733031674;
    result[1] += 0.7149321266968326;
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5532599985599517822) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.37606837606837606;
    result[1] += 0.6239316239316239;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
    result[0] += 0.6530612244897959;
    result[1] += 0.3469387755102041;
  } else {
    result[0] += 0.18181818181818182;
    result[1] += 0.8181818181818182;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30666666666666664;
    result[1] += 0.6933333333333334;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
    result[0] += 0.9298245614035088;
    result[1] += 0.07017543859649122;
  } else {
    result[0] += 0.1941747572815534;
    result[1] += 0.8058252427184466;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.19161676646706588;
    result[1] += 0.8083832335329342;
  } else {
    result[0] += 0.8125;
    result[1] += 0.1875;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 0.9210526315789473;
    result[1] += 0.07894736842105263;
  } else {
    result[0] += 0.26222222222222225;
    result[1] += 0.7377777777777778;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.13444499671459198) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2383177570093458;
    result[1] += 0.7616822429906542;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    result[0] += 0.9846153846153847;
    result[1] += 0.015384615384615385;
  } else {
    result[0] += 0.16161616161616163;
    result[1] += 0.8383838383838383;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9594594594594594;
    result[1] += 0.04054054054054054;
  } else {
    result[0] += 0.291005291005291;
    result[1] += 0.708994708994709;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.2198952879581152;
    result[1] += 0.7801047120418848;
  } else {
    result[0] += 0.875;
    result[1] += 0.125;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18627450980392157;
    result[1] += 0.8137254901960784;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2927927927927928;
    result[1] += 0.7072072072072072;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9387755102040817;
    result[1] += 0.061224489795918366;
  } else {
    result[0] += 0.27102803738317754;
    result[1] += 0.7289719626168224;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
    result[0] += 0.6836734693877551;
    result[1] += 0.3163265306122449;
  } else {
    result[0] += 0.21212121212121213;
    result[1] += 0.7878787878787878;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 0.9354838709677419;
    result[1] += 0.06451612903225806;
  } else {
    result[0] += 0.3103448275862069;
    result[1] += 0.6896551724137931;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.20430107526881722;
    result[1] += 0.7956989247311828;
  } else {
    result[0] += 0.7792207792207793;
    result[1] += 0.22077922077922077;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2543859649122807;
    result[1] += 0.7456140350877193;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    result[0] += 0.8181818181818182;
    result[1] += 0.18181818181818182;
  } else {
    result[0] += 0.18292682926829268;
    result[1] += 0.8170731707317073;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
    result[0] += 0.8305084745762712;
    result[1] += 0.1694915254237288;
  } else {
    result[0] += 0.23529411764705882;
    result[1] += 0.7647058823529411;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
    result[0] += 0.8888888888888888;
    result[1] += 0.1111111111111111;
  } else {
    result[0] += 0.30837004405286345;
    result[1] += 0.6916299559471366;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2827868852459016;
    result[1] += 0.7172131147540983;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0594349987804889679) ) ) {
    result[0] += 0.7549019607843137;
    result[1] += 0.24509803921568626;
  } else {
    result[0] += 0.2546583850931677;
    result[1] += 0.7453416149068323;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 0.98;
    result[1] += 0.02;
  } else {
    result[0] += 0.2347417840375587;
    result[1] += 0.7652582159624414;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3008849557522124;
    result[1] += 0.6991150442477876;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.19704433497536947;
    result[1] += 0.8029556650246306;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.195;
    result[1] += 0.805;
  } else {
    result[0] += 0.8412698412698413;
    result[1] += 0.15873015873015872;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    result[0] += 0.6938775510204082;
    result[1] += 0.30612244897959184;
  } else {
    result[0] += 0.20606060606060606;
    result[1] += 0.793939393939394;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    result[0] += 0.9795918367346939;
    result[1] += 0.02040816326530612;
  } else {
    result[0] += 0.2850467289719626;
    result[1] += 0.7149532710280374;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8433600068092346191) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.34763948497854075;
    result[1] += 0.6523605150214592;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2918454935622318;
    result[1] += 0.7081545064377682;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
    result[0] += 0.6630434782608695;
    result[1] += 0.33695652173913043;
  } else {
    result[0] += 0.19298245614035087;
    result[1] += 0.8070175438596491;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.325;
    result[1] += 0.675;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.001859999960288405418) ) ) {
    result[0] += 0.6822429906542056;
    result[1] += 0.3177570093457944;
  } else {
    result[0] += 0.24358974358974358;
    result[1] += 0.7564102564102564;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
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
