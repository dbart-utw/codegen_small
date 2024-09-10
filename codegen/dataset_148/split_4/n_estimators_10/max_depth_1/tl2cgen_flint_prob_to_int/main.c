
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 359929158;
    result[1] += 255450;
    result[2] += 1341112;
    result[3] += 57678498;
    result[4] += 10037059;
    result[5] += 127725;
    result[6] += 127725;
  } else {
    result[0] += 39429655;
    result[1] += 2592261;
    result[2] += 955043;
    result[3] += 180912535;
    result[4] += 205607233;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 51507033;
    result[1] += 407170;
    result[2] += 1628680;
    result[3] += 213764370;
    result[4] += 161714442;
    result[5] += 475031;
    result[6] += 0;
  } else {
    result[0] += 388431614;
    result[1] += 311974;
    result[2] += 1282562;
    result[3] += 39308812;
    result[4] += 0;
    result[5] += 0;
    result[6] += 161764;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429153119;
    result[1] += 0;
    result[2] += 229073;
    result[3] += 0;
    result[4] += 81812;
    result[5] += 0;
    result[6] += 32724;
  } else {
    result[0] += 200146322;
    result[1] += 1120361;
    result[2] += 2713764;
    result[3] += 163697234;
    result[4] += 61296211;
    result[5] += 348556;
    result[6] += 174278;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 51197400;
    result[1] += 935722;
    result[2] += 1470421;
    result[3] += 216018274;
    result[4] += 159206537;
    result[5] += 668373;
    result[6] += 0;
  } else {
    result[0] += 387096178;
    result[1] += 335960;
    result[2] += 1274333;
    result[3] += 40639653;
    result[4] += 0;
    result[5] += 11584;
    result[6] += 139018;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 359461878;
    result[1] += 138303;
    result[2] += 1148984;
    result[3] += 57566243;
    result[4] += 10968544;
    result[5] += 74471;
    result[6] += 138303;
  } else {
    result[0] += 42414346;
    result[1] += 2882528;
    result[2] += 686316;
    result[3] += 179128549;
    result[4] += 204384988;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 50532933;
    result[1] += 398419;
    result[2] += 2324116;
    result[3] += 214416348;
    result[4] += 161293685;
    result[5] += 531226;
    result[6] += 0;
  } else {
    result[0] += 387001697;
    result[1] += 313145;
    result[2] += 1171396;
    result[3] += 40848117;
    result[4] += 0;
    result[5] += 23195;
    result[6] += 139175;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 83287479;
    result[1] += 1826479;
    result[2] += 3196339;
    result[3] += 182556657;
    result[4] += 158629772;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 368631894;
    result[1] += 243547;
    result[2] += 1118106;
    result[3] += 50170868;
    result[4] += 9077694;
    result[5] += 121773;
    result[6] += 132844;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429217087;
    result[1] += 0;
    result[2] += 131596;
    result[3] += 0;
    result[4] += 98697;
    result[5] += 0;
    result[6] += 49348;
  } else {
    result[0] += 199559147;
    result[1] += 765635;
    result[2] += 2222812;
    result[3] += 163969452;
    result[4] += 62485723;
    result[5] += 271677;
    result[6] += 222281;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 360296078;
    result[1] += 180652;
    result[2] += 1338956;
    result[3] += 56895006;
    result[4] += 10552249;
    result[5] += 85013;
    result[6] += 148772;
  } else {
    result[0] += 37196116;
    result[1] += 3064848;
    result[2] += 1114490;
    result[3] += 180408129;
    result[4] += 207713144;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429218822;
    result[1] += 0;
    result[2] += 179822;
    result[3] += 0;
    result[4] += 81737;
    result[5] += 0;
    result[6] += 16347;
  } else {
    result[0] += 202519413;
    result[1] += 997264;
    result[2] += 2667681;
    result[3] += 161083088;
    result[4] += 61780512;
    result[5] += 224384;
    result[6] += 224384;
  }
  
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
