
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f0e7ab7))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 47523842;
    result[1] += 95641733;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3df0d5a6))) ) ) {
    result[0] += 138827225;
    result[1] += 4338350;
  } else {
    result[0] += 28342423;
    result[1] += 114823152;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3dd98202))) ) ) {
    result[0] += 110545571;
    result[1] += 32620004;
  } else {
    result[0] += 38903689;
    result[1] += 104261887;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 29713610;
    result[1] += 113451966;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 39967056;
    result[1] += 103198519;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 28503553;
    result[1] += 114662022;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 94868755;
    result[1] += 48296820;
  } else {
    result[0] += 25451658;
    result[1] += 117713918;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 139243231;
    result[1] += 3922344;
  } else {
    result[0] += 27126109;
    result[1] += 116039467;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 38569721;
    result[1] += 104595854;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e96b1c4))) ) ) {
    result[0] += 104620998;
    result[1] += 38544578;
  } else {
    result[0] += 31514435;
    result[1] += 111651141;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 28929831;
    result[1] += 114235744;
  } else {
    result[0] += 130894241;
    result[1] += 12271335;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 44776065;
    result[1] += 98389511;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 42827309;
    result[1] += 100338267;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
    result[0] += 103212392;
    result[1] += 39953184;
  } else {
    result[0] += 30736112;
    result[1] += 112429464;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 31040324;
    result[1] += 112125252;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
    result[0] += 134488874;
    result[1] += 8676701;
  } else {
    result[0] += 46684427;
    result[1] += 96481149;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 32179418;
    result[1] += 110986157;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 30140121;
    result[1] += 113025455;
  } else {
    result[0] += 119631509;
    result[1] += 23534067;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    result[0] += 138691652;
    result[1] += 4473924;
  } else {
    result[0] += 33093550;
    result[1] += 110072026;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 100897644;
    result[1] += 42267932;
  } else {
    result[0] += 30807782;
    result[1] += 112357794;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e7c0ec0))) ) ) {
    result[0] += 126803796;
    result[1] += 16361780;
  } else {
    result[0] += 43326424;
    result[1] += 99839152;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    result[0] += 139398061;
    result[1] += 3767515;
  } else {
    result[0] += 47721858;
    result[1] += 95443717;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d530164))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 25906151;
    result[1] += 117259424;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edfb54a))) ) ) {
    result[0] += 131091371;
    result[1] += 12074205;
  } else {
    result[0] += 34996029;
    result[1] += 108169546;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d9945b7))) ) ) {
    result[0] += 114885956;
    result[1] += 28279620;
  } else {
    result[0] += 37757954;
    result[1] += 105407622;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d939432))) ) ) {
    result[0] += 91625968;
    result[1] += 51539607;
  } else {
    result[0] += 36010973;
    result[1] += 107154603;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 27993269;
    result[1] += 115172307;
  } else {
    result[0] += 122713351;
    result[1] += 20452225;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5262cc))) ) ) {
    result[0] += 130533319;
    result[1] += 12632256;
  } else {
    result[0] += 43137226;
    result[1] += 100028350;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    result[0] += 135630546;
    result[1] += 7535030;
  } else {
    result[0] += 36833861;
    result[1] += 106331714;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 22876973;
    result[1] += 120288602;
  } else {
    result[0] += 128641532;
    result[1] += 14524043;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
