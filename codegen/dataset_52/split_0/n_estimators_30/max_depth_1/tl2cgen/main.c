
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8900200128555297852) ) ) {
    result[0] += 0.3191489361702128;
    result[1] += 0.6808510638297872;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2692307692307692;
    result[1] += 0.7307692307692307;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23923444976076555;
    result[1] += 0.7607655502392344;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21962616822429906;
    result[1] += 0.780373831775701;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27310924369747897;
    result[1] += 0.726890756302521;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9948549866676330566) ) ) {
    result[0] += 0.2922374429223744;
    result[1] += 0.7077625570776256;
  } else {
    result[0] += 0.8181818181818182;
    result[1] += 0.18181818181818182;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20909090909090908;
    result[1] += 0.7909090909090909;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.18592964824120603;
    result[1] += 0.8140703517587939;
  } else {
    result[0] += 0.828125;
    result[1] += 0.171875;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2104000002145767212) ) ) {
    result[0] += 0.6770833333333334;
    result[1] += 0.3229166666666667;
  } else {
    result[0] += 0.2155688622754491;
    result[1] += 0.7844311377245509;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8993699848651885986) ) ) {
    result[0] += 0.9565217391304348;
    result[1] += 0.043478260869565216;
  } else {
    result[0] += 0.3375;
    result[1] += 0.6625;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    result[0] += 0.19289340101522842;
    result[1] += 0.8071065989847716;
  } else {
    result[0] += 0.8636363636363636;
    result[1] += 0.13636363636363635;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
    result[0] += 0.7142857142857143;
    result[1] += 0.2857142857142857;
  } else {
    result[0] += 0.2681564245810056;
    result[1] += 0.7318435754189944;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    result[0] += 0.8059701492537313;
    result[1] += 0.19402985074626866;
  } else {
    result[0] += 0.2602040816326531;
    result[1] += 0.7397959183673469;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9814814814814815;
    result[1] += 0.018518518518518517;
  } else {
    result[0] += 0.21052631578947367;
    result[1] += 0.7894736842105263;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    result[0] += 0.6666666666666666;
    result[1] += 0.3333333333333333;
  } else {
    result[0] += 0.26704545454545453;
    result[1] += 0.7329545454545454;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22380952380952382;
    result[1] += 0.7761904761904762;
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.003305000020191073418) ) ) {
    result[0] += 0.5789473684210527;
    result[1] += 0.42105263157894735;
  } else {
    result[0] += 0.18461538461538463;
    result[1] += 0.8153846153846154;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1133700013160705566) ) ) {
    result[0] += 0.9811320754716981;
    result[1] += 0.018867924528301886;
  } else {
    result[0] += 0.22380952380952382;
    result[1] += 0.7761904761904762;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2703862660944206;
    result[1] += 0.7296137339055794;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.19801980198019803;
    result[1] += 0.801980198019802;
  } else {
    result[0] += 0.8852459016393442;
    result[1] += 0.11475409836065574;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.18041237113402062;
    result[1] += 0.8195876288659794;
  } else {
    result[0] += 0.8985507246376812;
    result[1] += 0.10144927536231885;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
    result[0] += 0.3305084745762712;
    result[1] += 0.6694915254237288;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 0.9782608695652174;
    result[1] += 0.021739130434782608;
  } else {
    result[0] += 0.14285714285714285;
    result[1] += 0.8571428571428571;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7134000062942504883) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30416666666666664;
    result[1] += 0.6958333333333333;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    result[0] += 0.6705882352941176;
    result[1] += 0.32941176470588235;
  } else {
    result[0] += 0.17415730337078653;
    result[1] += 0.8258426966292135;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27467811158798283;
    result[1] += 0.7253218884120172;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5397500097751617432) ) ) {
    result[0] += 0.9285714285714286;
    result[1] += 0.07142857142857142;
  } else {
    result[0] += 0.2297872340425532;
    result[1] += 0.7702127659574468;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
    result[0] += 0.31063829787234043;
    result[1] += 0.6893617021276596;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6457199752330780029) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.2875536480686695;
    result[1] += 0.7124463519313304;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21495327102803738;
    result[1] += 0.7850467289719626;
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
