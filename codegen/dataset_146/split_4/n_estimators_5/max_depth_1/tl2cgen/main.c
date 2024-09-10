
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    result[0] += 0.3098818474758324;
    result[1] += 0.14473684210526316;
    result[2] += 0.03732545649838883;
    result[3] += 0.09693877551020408;
    result[4] += 0.14634801288936627;
    result[5] += 0.2647690655209452;
  } else {
    result[0] += 0.02722323049001814;
    result[1] += 0.003629764065335752;
    result[2] += 0.8049001814882031;
    result[3] += 0.10617059891107075;
    result[4] += 0.00998185117967332;
    result[5] += 0.04809437386569872;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    result[0] += 0.3053213909378293;
    result[1] += 0.1393572181243414;
    result[2] += 0.037407797681770286;
    result[3] += 0.10405690200210749;
    result[4] += 0.13593256059009484;
    result[5] += 0.2779241306638567;
  } else {
    result[0] += 0.017475728155339806;
    result[1] += 0.010679611650485437;
    result[2] += 0.7970873786407767;
    result[3] += 0.1029126213592233;
    result[4] += 0.008737864077669903;
    result[5] += 0.06310679611650485;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    result[0] += 0.16073211314475874;
    result[1] += 0.19700499168053245;
    result[2] += 0.011647254575707155;
    result[3] += 0.09883527454242928;
    result[4] += 0.17770382695507486;
    result[5] += 0.3540765391014975;
  } else {
    result[0] += 0.37067545304777594;
    result[1] += 0;
    result[2] += 0.5194947830862163;
    result[3] += 0.08237232289950576;
    result[4] += 0.006589785831960461;
    result[5] += 0.02086765513454146;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    result[0] += 0.33064963908939476;
    result[1] += 0.14297612437534704;
    result[2] += 0.02193225985563576;
    result[3] += 0.07940033314825097;
    result[4] += 0.1399222654081066;
    result[5] += 0.2851193781232649;
  } else {
    result[0] += 0.016339869281045753;
    result[1] += 0.0008169934640522876;
    result[2] += 0.7549019607843137;
    result[3] += 0.12990196078431374;
    result[4] += 0.015522875816993464;
    result[5] += 0.08251633986928104;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3168036270898272;
    result[1] += 0.15386795126098046;
    result[2] += 0.012184754888070276;
    result[3] += 0.07735902521960897;
    result[4] += 0.13941626523094364;
    result[5] += 0.3003683763105696;
  } else {
    result[0] += 0.03006939090208173;
    result[1] += 0.013878180416345413;
    result[2] += 0.7232074016962221;
    result[3] += 0.15882806476484196;
    result[4] += 0.011565150346954512;
    result[5] += 0.062451811873554364;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
