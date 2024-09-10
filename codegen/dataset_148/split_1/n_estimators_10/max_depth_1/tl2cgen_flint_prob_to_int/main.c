
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 49925790;
    result[1] += 1012009;
    result[2] += 1484280;
    result[3] += 214073691;
    result[4] += 162528686;
    result[5] += 472270;
    result[6] += 0;
  } else {
    result[0] += 387823957;
    result[1] += 196624;
    result[2] += 994687;
    result[3] += 40400497;
    result[4] += 0;
    result[5] += 0;
    result[6] += 80962;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 85216098;
    result[1] += 664268;
    result[2] += 1708117;
    result[3] += 188272538;
    result[4] += 153635705;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 367343459;
    result[1] += 165301;
    result[2] += 1212209;
    result[3] += 51078086;
    result[4] += 9521352;
    result[5] += 77140;
    result[6] += 99180;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429053746;
    result[1] += 0;
    result[2] += 377355;
    result[3] += 0;
    result[4] += 32813;
    result[5] += 0;
    result[6] += 32813;
  } else {
    result[0] += 197788674;
    result[1] += 694256;
    result[2] += 2727435;
    result[3] += 164637933;
    result[4] += 63127737;
    result[5] += 223153;
    result[6] += 297538;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 86563801;
    result[1] += 1753424;
    result[2] += 2676279;
    result[3] += 187062713;
    result[4] += 151440509;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 368885570;
    result[1] += 165845;
    result[2] += 1149865;
    result[3] += 49864342;
    result[4] += 9243146;
    result[5] += 77394;
    result[6] += 110563;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 361660872;
    result[1] += 555100;
    result[2] += 971426;
    result[3] += 43638502;
    result[4] += 22595131;
    result[5] += 25231;
    result[6] += 50463;
  } else {
    result[0] += 255127234;
    result[1] += 0;
    result[2] += 2225606;
    result[3] += 139895296;
    result[4] += 31612703;
    result[5] += 317943;
    result[6] += 317943;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 359981576;
    result[1] += 170380;
    result[2] += 1224608;
    result[3] += 57705669;
    result[4] += 10201519;
    result[5] += 95838;
    result[6] += 117136;
  } else {
    result[0] += 42990357;
    result[1] += 2576709;
    result[2] += 1491778;
    result[3] += 169384722;
    result[4] += 213053161;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 81291291;
    result[1] += 2229703;
    result[2] += 2787129;
    result[3] += 190639690;
    result[4] += 152548914;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 368635616;
    result[1] += 121523;
    result[2] += 950091;
    result[3] += 50553721;
    result[4] += 9036919;
    result[5] += 55237;
    result[6] += 143618;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429233919;
    result[1] += 0;
    result[2] += 229958;
    result[3] += 0;
    result[4] += 32851;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 201877323;
    result[1] += 841568;
    result[2] += 2623712;
    result[3] += 164353289;
    result[4] += 59429555;
    result[5] += 123760;
    result[6] += 247520;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 362313121;
    result[1] += 138194;
    result[2] += 1233116;
    result[3] += 55702865;
    result[4] += 9918086;
    result[5] += 74412;
    result[6] += 116933;
  } else {
    result[0] += 44932818;
    result[1] += 2080223;
    result[2] += 1525496;
    result[3] += 172935880;
    result[4] += 208022310;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 361401117;
    result[1] += 148842;
    result[2] += 1148216;
    result[3] += 56507131;
    result[4] += 10131946;
    result[5] += 63789;
    result[6] += 95684;
  } else {
    result[0] += 38629783;
    result[1] += 2215328;
    result[2] += 1384580;
    result[3] += 172795589;
    result[4] += 214471448;
    result[5] += 0;
    result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
