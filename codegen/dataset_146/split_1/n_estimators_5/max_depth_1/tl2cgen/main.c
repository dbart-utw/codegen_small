
#include "header.h"


static const int32_t num_class[] = {  6, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 36;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    result[0] += 0.29964779192630725;
    result[1] += 0.13112977512869142;
    result[2] += 0.032782443782172856;
    result[3] += 0.10566242210782986;
    result[4] += 0.13600650230289893;
    result[5] += 0.2947710647520997;
  } else {
    result[0] += 0.021145374449339206;
    result[1] += 0.003524229074889868;
    result[2] += 0.798237885462555;
    result[3] += 0.11189427312775331;
    result[4] += 0.009691629955947136;
    result[5] += 0.055506607929515416;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    result[0] += 0.29148936170212764;
    result[1] += 0.1276595744680851;
    result[2] += 0.03590425531914894;
    result[3] += 0.10106382978723404;
    result[4] += 0.1473404255319149;
    result[5] += 0.29654255319148937;
  } else {
    result[0] += 0.009380863039399626;
    result[1] += 0.0009380863039399625;
    result[2] += 0.8283302063789869;
    result[3] += 0.10694183864915573;
    result[4] += 0.004690431519699813;
    result[5] += 0.04971857410881801;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    result[0] += 0.29618001046572473;
    result[1] += 0.13317634746206175;
    result[2] += 0.03924646781789639;
    result[3] += 0.10518053375196232;
    result[4] += 0.1357927786499215;
    result[5] += 0.2904238618524333;
  } else {
    result[0] += 0.00796812749003984;
    result[1] += 0.0049800796812749;
    result[2] += 0.8705179282868526;
    result[3] += 0.07868525896414343;
    result[4] += 0.00099601593625498;
    result[5] += 0.036852589641434265;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    result[0] += 0.3099273607748184;
    result[1] += 0.13855259617971483;
    result[2] += 0.02744148506860371;
    result[3] += 0.09631423190745225;
    result[4] += 0.14527845036319612;
    result[5] += 0.2824858757062147;
  } else {
    result[0] += 0.026149684400360685;
    result[1] += 0.009918845807033363;
    result[2] += 0.8034265103697025;
    result[3] += 0.11541929666366095;
    result[4] += 0.002705139765554554;
    result[5] += 0.04238052299368801;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    result[0] += 0.3036578805809575;
    result[1] += 0.13313609467455623;
    result[2] += 0.0328133405056482;
    result[3] += 0.10408821947283486;
    result[4] += 0.14201183431952663;
    result[5] += 0.2842926304464766;
  } else {
    result[0] += 0.015342960288808664;
    result[1] += 0.009025270758122744;
    result[2] += 0.8113718411552346;
    result[3] += 0.0983754512635379;
    result[4] += 0.0036101083032490976;
    result[5] += 0.06227436823104693;
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
