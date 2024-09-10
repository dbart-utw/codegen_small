
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
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5565599799156188965) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.33195020746887965;
    result[1] += 0.6680497925311203;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1175950020551681519) ) ) {
    result[0] += 0.9696969696969697;
    result[1] += 0.030303030303030304;
  } else {
    result[0] += 0.19796954314720813;
    result[1] += 0.8020304568527918;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1062050033360719681) ) ) {
    result[0] += 0.7721518987341772;
    result[1] += 0.22784810126582278;
  } else {
    result[0] += 0.2717391304347826;
    result[1] += 0.7282608695652174;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20754716981132076;
    result[1] += 0.7924528301886793;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2791666666666667;
    result[1] += 0.7208333333333333;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19909502262443438;
    result[1] += 0.8009049773755657;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.06627999991178512573) ) ) {
    result[0] += 0.6626506024096386;
    result[1] += 0.3373493975903614;
  } else {
    result[0] += 0.17777777777777778;
    result[1] += 0.8222222222222222;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    result[0] += 0.9726027397260274;
    result[1] += 0.0273972602739726;
  } else {
    result[0] += 0.18947368421052632;
    result[1] += 0.8105263157894737;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2694063926940639;
    result[1] += 0.730593607305936;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2943250089883804321) ) ) {
    result[0] += 0.7307692307692307;
    result[1] += 0.2692307692307692;
  } else {
    result[0] += 0.22012578616352202;
    result[1] += 0.779874213836478;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.20207253886010362;
    result[1] += 0.7979274611398963;
  } else {
    result[0] += 0.9142857142857143;
    result[1] += 0.08571428571428572;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31275720164609055;
    result[1] += 0.6872427983539094;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29914529914529914;
    result[1] += 0.7008547008547008;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    result[0] += 0.7209302325581395;
    result[1] += 0.27906976744186046;
  } else {
    result[0] += 0.21468926553672316;
    result[1] += 0.7853107344632768;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2168141592920354;
    result[1] += 0.7831858407079646;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
    result[0] += 0.9393939393939394;
    result[1] += 0.06060606060606061;
  } else {
    result[0] += 0.32608695652173914;
    result[1] += 0.6739130434782609;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22477064220183487;
    result[1] += 0.7752293577981652;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    result[0] += 0.21052631578947367;
    result[1] += 0.7894736842105263;
  } else {
    result[0] += 0.8356164383561644;
    result[1] += 0.1643835616438356;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
    result[0] += 0.96875;
    result[1] += 0.03125;
  } else {
    result[0] += 0.23115577889447236;
    result[1] += 0.7688442211055276;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    result[0] += 0.7047619047619048;
    result[1] += 0.29523809523809524;
  } else {
    result[0] += 0.21518987341772153;
    result[1] += 0.7848101265822784;
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2461500093340873718) ) ) {
    result[0] += 0.8857142857142857;
    result[1] += 0.11428571428571428;
  } else {
    result[0] += 0.3026315789473684;
    result[1] += 0.6973684210526315;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7134000062942504883) ) ) {
    result[0] += 0.9736842105263158;
    result[1] += 0.02631578947368421;
  } else {
    result[0] += 0.3333333333333333;
    result[1] += 0.6666666666666666;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18095238095238095;
    result[1] += 0.819047619047619;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
    result[0] += 0.9156626506024096;
    result[1] += 0.08433734939759036;
  } else {
    result[0] += 0.24444444444444444;
    result[1] += 0.7555555555555555;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.07483999989926815033) ) ) {
    result[0] += 0.8024691358024691;
    result[1] += 0.19753086419753085;
  } else {
    result[0] += 0.26373626373626374;
    result[1] += 0.7362637362637363;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.07206000015139579773) ) ) {
    result[0] += 0.64;
    result[1] += 0.36;
  } else {
    result[0] += 0.25153374233128833;
    result[1] += 0.7484662576687117;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    result[0] += 0.19553072625698323;
    result[1] += 0.8044692737430168;
  } else {
    result[0] += 0.8571428571428571;
    result[1] += 0.14285714285714285;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
    result[0] += 0.9117647058823529;
    result[1] += 0.08823529411764706;
  } else {
    result[0] += 0.30131004366812225;
    result[1] += 0.6986899563318777;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    result[0] += 0.9473684210526315;
    result[1] += 0.05263157894736842;
  } else {
    result[0] += 0.25728155339805825;
    result[1] += 0.7427184466019418;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.15979381443298968;
    result[1] += 0.8402061855670103;
  } else {
    result[0] += 0.8985507246376812;
    result[1] += 0.10144927536231885;
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
