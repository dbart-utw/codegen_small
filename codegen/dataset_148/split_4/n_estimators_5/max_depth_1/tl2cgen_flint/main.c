
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 0.9994627575885491;
    result[1] += 0;
    result[2] += 0.0004988679534901569;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 3.8374457960781306e-05;
  } else {
    result[0] += 0.47290866349406574;
    result[1] += 0.0022361103147755293;
    result[2] += 0.007339028725417121;
    result[3] += 0.37761596238747785;
    result[4] += 0.13869617567800013;
    result[5] += 0.0005733616191732127;
    result[6] += 0.0006306977810905339;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11255210745715609;
    result[1] += 0.002007102053419793;
    result[2] += 0.004014204106839586;
    result[3] += 0.48185888528639803;
    result[4] += 0.3981781689053574;
    result[5] += 0.0013895321908290875;
    result[6] += 0;
  } else {
    result[0] += 0.9028441779434405;
    result[1] += 0.0006482456851146585;
    result[2] += 0.002241849661021527;
    result[3] += 0.09388758339410637;
    result[4] += 0;
    result[5] += 5.402047375955487e-05;
    result[6] += 0.00032412284255732923;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 0.20103092783505155;
    result[1] += 0.005154639175257732;
    result[2] += 0.005798969072164949;
    result[3] += 0.43943298969072164;
    result[4] += 0.3485824742268041;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8533879106168263;
    result[1] += 0.0002831840181237772;
    result[2] += 0.002651632169704459;
    result[3] += 0.12189784780146226;
    result[4] += 0.021187313355988054;
    result[5] += 0.00020595201318092884;
    result[6] += 0.0003861600247142416;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 0.7663462194041044;
    result[1] += 0.0009545237608236176;
    result[2] += 0.0038180950432944705;
    result[3] += 0.18606395309197518;
    result[4] += 0.04233994681939047;
    result[5] += 0.0001363605372605168;
    result[6] += 0.000340901343151292;
  } else {
    result[0] += 0.8001942218985191;
    result[1] += 0.0011792043838657095;
    result[2] += 0.0022890438039746123;
    result[3] += 0.13404779246002843;
    result[4] += 0.061908230152949745;
    result[5] += 0.00031214233690562894;
    result[6] += 6.936496375680644e-05;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 0.9990484890005329;
    result[1] += 0;
    result[2] += 0.0007992692395524092;
    result[3] += 0;
    result[4] += 3.806043997868615e-05;
    result[5] += 0;
    result[6] += 0.00011418131993605846;
  } else {
    result[0] += 0.4709741089051434;
    result[1] += 0.0020318123766399627;
    result[2] += 0.006792058516196447;
    result[3] += 0.38076163938232904;
    result[4] += 0.13839544874027632;
    result[5] += 0.00029025891094856614;
    result[6] += 0.0007546731684662719;
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  result[6] /= 5;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
