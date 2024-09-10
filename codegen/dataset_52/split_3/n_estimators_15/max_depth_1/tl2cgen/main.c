
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
    result[0] += 0.8888888888888888;
    result[1] += 0.1111111111111111;
  } else {
    result[0] += 0.29955947136563876;
    result[1] += 0.7004405286343612;
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
    result[0] += 0.96;
    result[1] += 0.04;
  } else {
    result[0] += 0.28991596638655465;
    result[1] += 0.7100840336134454;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.961038961038961;
    result[1] += 0.03896103896103896;
  } else {
    result[0] += 0.20430107526881722;
    result[1] += 0.7956989247311828;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9672131147540983;
    result[1] += 0.03278688524590164;
  } else {
    result[0] += 0.2376237623762376;
    result[1] += 0.7623762376237624;
  }
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
    result[0] += 0.2974137931034483;
    result[1] += 0.7025862068965517;
  } else {
    result[0] += 0.8709677419354839;
    result[1] += 0.12903225806451613;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
    result[0] += 0.7741935483870968;
    result[1] += 0.22580645161290322;
  } else {
    result[0] += 0.12941176470588237;
    result[1] += 0.8705882352941177;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2694063926940639;
    result[1] += 0.730593607305936;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29694323144104806;
    result[1] += 0.7030567685589519;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
    result[0] += 0.9166666666666666;
    result[1] += 0.08333333333333333;
  } else {
    result[0] += 0.2907488986784141;
    result[1] += 0.7092511013215859;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8312600255012512207) ) ) {
    result[0] += 0.2782608695652174;
    result[1] += 0.7217391304347827;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9818181818181818;
    result[1] += 0.01818181818181818;
  } else {
    result[0] += 0.2403846153846154;
    result[1] += 0.7596153846153846;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9583333333333334;
    result[1] += 0.041666666666666664;
  } else {
    result[0] += 0.24607329842931938;
    result[1] += 0.7539267015706806;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    result[0] += 0.9850746268656716;
    result[1] += 0.014925373134328358;
  } else {
    result[0] += 0.23469387755102042;
    result[1] += 0.7653061224489796;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9508196721311475;
    result[1] += 0.04918032786885246;
  } else {
    result[0] += 0.24752475247524752;
    result[1] += 0.7524752475247525;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.25;
    result[1] += 0.75;
  } else {
    result[0] += 0.8192771084337349;
    result[1] += 0.18072289156626506;
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  
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
