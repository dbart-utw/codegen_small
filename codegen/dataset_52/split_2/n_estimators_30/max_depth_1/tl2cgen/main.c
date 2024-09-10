
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 0.9814814814814815;
    result[1] += 0.018518518518518517;
  } else {
    result[0] += 0.24401913875598086;
    result[1] += 0.7559808612440191;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
    result[0] += 0.9310344827586207;
    result[1] += 0.06896551724137931;
  } else {
    result[0] += 0.3333333333333333;
    result[1] += 0.6666666666666666;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.289375007152557373) ) ) {
    result[0] += 0.8082191780821918;
    result[1] += 0.1917808219178082;
  } else {
    result[0] += 0.23684210526315788;
    result[1] += 0.7631578947368421;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3157400041818618774) ) ) {
    result[0] += 0.7222222222222222;
    result[1] += 0.2777777777777778;
  } else {
    result[0] += 0.2645161290322581;
    result[1] += 0.7354838709677419;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23943661971830985;
    result[1] += 0.7605633802816901;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2557077625570776;
    result[1] += 0.7442922374429224;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    result[0] += 0.6979166666666666;
    result[1] += 0.3020833333333333;
  } else {
    result[0] += 0.23952095808383234;
    result[1] += 0.7604790419161677;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    result[0] += 0.9428571428571428;
    result[1] += 0.05714285714285714;
  } else {
    result[0] += 0.27631578947368424;
    result[1] += 0.7236842105263158;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31223628691983124;
    result[1] += 0.6877637130801688;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1338150054216384888) ) ) {
    result[0] += 0.7571428571428571;
    result[1] += 0.24285714285714285;
  } else {
    result[0] += 0.26424870466321243;
    result[1] += 0.7357512953367875;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2399550005793571472) ) ) {
    result[0] += 0.6868686868686869;
    result[1] += 0.31313131313131315;
  } else {
    result[0] += 0.1951219512195122;
    result[1] += 0.8048780487804879;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
    result[0] += 0.9411764705882353;
    result[1] += 0.058823529411764705;
  } else {
    result[0] += 0.25471698113207547;
    result[1] += 0.7452830188679245;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    result[0] += 0.6792452830188679;
    result[1] += 0.32075471698113206;
  } else {
    result[0] += 0.2484076433121019;
    result[1] += 0.7515923566878981;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
    result[0] += 0.7391304347826086;
    result[1] += 0.2608695652173913;
  } else {
    result[0] += 0.2046783625730994;
    result[1] += 0.7953216374269005;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06935500167310237885) ) ) {
    result[0] += 0.6197183098591549;
    result[1] += 0.38028169014084506;
  } else {
    result[0] += 0.17708333333333334;
    result[1] += 0.8229166666666666;
  }
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
    result[0] += 0.3793103448275862;
    result[1] += 0.6206896551724138;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 0.96;
    result[1] += 0.04;
  } else {
    result[0] += 0.31092436974789917;
    result[1] += 0.6890756302521008;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.26066350710900477;
    result[1] += 0.7393364928909952;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9135449826717376709) ) ) {
    result[0] += 0.95;
    result[1] += 0.05;
  } else {
    result[0] += 0.30864197530864196;
    result[1] += 0.691358024691358;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 0.9642857142857143;
    result[1] += 0.03571428571428571;
  } else {
    result[0] += 0.3191489361702128;
    result[1] += 0.6808510638297872;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19704433497536947;
    result[1] += 0.8029556650246306;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1227300018072128296) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.21674876847290642;
    result[1] += 0.7832512315270936;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    result[0] += 0.75;
    result[1] += 0.25;
  } else {
    result[0] += 0.26285714285714284;
    result[1] += 0.7371428571428571;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
    result[0] += 0.9113924050632911;
    result[1] += 0.08860759493670886;
  } else {
    result[0] += 0.21739130434782608;
    result[1] += 0.782608695652174;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6064100265502929688) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3080168776371308;
    result[1] += 0.6919831223628692;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.837744981050491333) ) ) {
    result[0] += 0.2754237288135593;
    result[1] += 0.7245762711864406;
  } else {
    result[0] += 0.9259259259259259;
    result[1] += 0.07407407407407407;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2857142857142857;
    result[1] += 0.7142857142857143;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 0.9814814814814815;
    result[1] += 0.018518518518518517;
  } else {
    result[0] += 0.2966507177033493;
    result[1] += 0.7033492822966507;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.837744981050491333) ) ) {
    result[0] += 0.3037974683544304;
    result[1] += 0.6962025316455697;
  } else {
    result[0] += 0.8846153846153846;
    result[1] += 0.11538461538461539;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1205449998378753662) ) ) {
    result[0] += 0.6475409836065574;
    result[1] += 0.3524590163934426;
  } else {
    result[0] += 0.2127659574468085;
    result[1] += 0.7872340425531915;
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
