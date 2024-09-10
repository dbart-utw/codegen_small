
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2328767123287671;
    result[1] += 0.7671232876712328;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
    result[0] += 0.5526315789473685;
    result[1] += 0.4473684210526316;
  } else {
    result[0] += 0.2080536912751678;
    result[1] += 0.7919463087248322;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9464285714285714;
    result[1] += 0.05357142857142857;
  } else {
    result[0] += 0.17391304347826086;
    result[1] += 0.8260869565217391;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
    result[0] += 0.9056603773584906;
    result[1] += 0.09433962264150944;
  } else {
    result[0] += 0.1761904761904762;
    result[1] += 0.8238095238095238;
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001844999962486326694) ) ) {
    result[0] += 0.5952380952380952;
    result[1] += 0.40476190476190477;
  } else {
    result[0] += 0.18248175182481752;
    result[1] += 0.8175182481751825;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.7801400125026702881) ) ) {
    result[0] += 0.32051282051282054;
    result[1] += 0.6794871794871795;
  } else {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.1978021978021978;
    result[1] += 0.8021978021978022;
  } else {
    result[0] += 0.8518518518518519;
    result[1] += 0.14814814814814814;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9180327868852459;
    result[1] += 0.08196721311475409;
  } else {
    result[0] += 0.2079207920792079;
    result[1] += 0.7920792079207921;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1664250046014785767) ) ) {
    result[0] += 0.6893203883495146;
    result[1] += 0.3106796116504854;
  } else {
    result[0] += 0.275;
    result[1] += 0.725;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
    result[0] += 0.26666666666666666;
    result[1] += 0.7333333333333333;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.30750998854637146) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29338842975206614;
    result[1] += 0.7066115702479339;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
    result[0] += 0.96;
    result[1] += 0.04;
  } else {
    result[0] += 0.2300469483568075;
    result[1] += 0.7699530516431925;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2687950059771537781) ) ) {
    result[0] += 0.7272727272727273;
    result[1] += 0.2727272727272727;
  } else {
    result[0] += 0.24571428571428572;
    result[1] += 0.7542857142857143;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1815799921751022339) ) ) {
    result[0] += 0.9516129032258065;
    result[1] += 0.04838709677419355;
  } else {
    result[0] += 0.15422885572139303;
    result[1] += 0.845771144278607;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
    result[0] += 0.972972972972973;
    result[1] += 0.02702702702702703;
  } else {
    result[0] += 0.25663716814159293;
    result[1] += 0.7433628318584071;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.21559633027522937;
    result[1] += 0.7844036697247706;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.1807909604519774;
    result[1] += 0.8192090395480226;
  } else {
    result[0] += 0.872093023255814;
    result[1] += 0.12790697674418605;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9824561403508771;
    result[1] += 0.017543859649122806;
  } else {
    result[0] += 0.24757281553398058;
    result[1] += 0.7524271844660194;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2488479262672811;
    result[1] += 0.7511520737327189;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.277775004506111145) ) ) {
    result[0] += 0.9824561403508771;
    result[1] += 0.017543859649122806;
  } else {
    result[0] += 0.23786407766990292;
    result[1] += 0.7621359223300971;
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
