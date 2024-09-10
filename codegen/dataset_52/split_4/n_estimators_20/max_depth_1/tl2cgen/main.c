
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    result[0] += 0.9591836734693877;
    result[1] += 0.04081632653061224;
  } else {
    result[0] += 0.2383177570093458;
    result[1] += 0.7616822429906542;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9696969696969697;
    result[1] += 0.030303030303030304;
  } else {
    result[0] += 0.27411167512690354;
    result[1] += 0.7258883248730964;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3080168776371308;
    result[1] += 0.6919831223628692;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3276595744680851;
    result[1] += 0.6723404255319149;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.07920500077307224274) ) ) {
    result[0] += 0.7111111111111111;
    result[1] += 0.28888888888888886;
  } else {
    result[0] += 0.2138728323699422;
    result[1] += 0.7861271676300579;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04673499986529350281) ) ) {
    result[0] += 0.72;
    result[1] += 0.28;
  } else {
    result[0] += 0.26063829787234044;
    result[1] += 0.7393617021276596;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4151799976825714111) ) ) {
    result[0] += 0.8793103448275862;
    result[1] += 0.1206896551724138;
  } else {
    result[0] += 0.2048780487804878;
    result[1] += 0.7951219512195122;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 0.9538461538461539;
    result[1] += 0.046153846153846156;
  } else {
    result[0] += 0.16161616161616163;
    result[1] += 0.8383838383838383;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2925764192139738;
    result[1] += 0.7074235807860262;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05427499860525131226) ) ) {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
  } else {
    result[0] += 0.20812182741116753;
    result[1] += 0.7918781725888325;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2638888888888889;
    result[1] += 0.7361111111111112;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.270830005407333374) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21608040201005024;
    result[1] += 0.7839195979899497;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.23232323232323232;
    result[1] += 0.7676767676767676;
  } else {
    result[0] += 0.8769230769230769;
    result[1] += 0.12307692307692308;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21226415094339623;
    result[1] += 0.7877358490566038;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27230046948356806;
    result[1] += 0.7276995305164319;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    result[0] += 0.9411764705882353;
    result[1] += 0.058823529411764705;
  } else {
    result[0] += 0.2153846153846154;
    result[1] += 0.7846153846153846;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2831858407079646;
    result[1] += 0.7168141592920354;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 0.9846153846153847;
    result[1] += 0.015384615384615385;
  } else {
    result[0] += 0.21717171717171718;
    result[1] += 0.7828282828282829;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.22340425531914893;
    result[1] += 0.776595744680851;
  } else {
    result[0] += 0.8666666666666667;
    result[1] += 0.13333333333333333;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17592592592592593;
    result[1] += 0.8240740740740741;
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
