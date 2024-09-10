
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286157137;
    result[1] += 0;
    result[2] += 130511;
    result[3] += 0;
    result[4] += 21751;
    result[5] += 0;
    result[6] += 21751;
  } else {
    result[0] += 134403739;
    result[1] += 733626;
    result[2] += 1867413;
    result[3] += 110010653;
    result[4] += 38898886;
    result[5] += 150059;
    result[6] += 266773;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286145994;
    result[1] += 0;
    result[2] += 152483;
    result[3] += 0;
    result[4] += 10891;
    result[5] += 0;
    result[6] += 21783;
  } else {
    result[0] += 133458166;
    result[1] += 449186;
    result[2] += 1963109;
    result[3] += 108320384;
    result[4] += 41824212;
    result[5] += 149728;
    result[6] += 166365;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 58232644;
    result[1] += 929244;
    result[2] += 1734589;
    result[3] += 125200186;
    result[4] += 100234488;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 245875959;
    result[1] += 125202;
    result[2] += 707026;
    result[3] += 33569046;
    result[4] += 5913985;
    result[5] += 58918;
    result[6] += 81013;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 240899742;
    result[1] += 335596;
    result[2] += 662803;
    result[3] += 29104628;
    result[4] += 15244482;
    result[5] += 41949;
    result[6] += 41949;
  } else {
    result[0] += 169928923;
    result[1] += 0;
    result[2] += 1313725;
    result[3] += 95596476;
    result[4] += 19247612;
    result[5] += 91655;
    result[6] += 152758;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 33123712;
    result[1] += 355690;
    result[2] += 1155995;
    result[3] += 142987731;
    result[4] += 108530177;
    result[5] += 177845;
    result[6] += 0;
  } else {
    result[0] += 259119649;
    result[1] += 61809;
    result[2] += 788067;
    result[3] += 26284365;
    result[4] += 0;
    result[5] += 0;
    result[6] += 77261;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    result[0] += 241842329;
    result[1] += 152475;
    result[2] += 499779;
    result[3] += 28351883;
    result[4] += 15416919;
    result[5] += 25412;
    result[6] += 42354;
  } else {
    result[0] += 172867488;
    result[1] += 0;
    result[2] += 1328614;
    result[3] += 92648706;
    result[4] += 19309195;
    result[5] += 59049;
    result[6] += 118099;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 240343070;
    result[1] += 120221;
    result[2] += 784972;
    result[3] += 38088853;
    result[4] += 6880886;
    result[5] += 28287;
    result[6] += 84861;
  } else {
    result[0] += 25770754;
    result[1] += 950950;
    result[2] += 1711710;
    result[3] += 120295220;
    result[4] += 137602516;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 31794500;
    result[1] += 677439;
    result[2] += 1083903;
    result[3] += 141042932;
    result[4] += 111506564;
    result[5] += 225813;
    result[6] += 0;
  } else {
    result[0] += 259154350;
    result[1] += 254276;
    result[2] += 832178;
    result[3] += 26059525;
    result[4] += 0;
    result[5] += 0;
    result[6] += 30821;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286145252;
    result[1] += 0;
    result[2] += 185900;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 133012693;
    result[1] += 694496;
    result[2] += 1885063;
    result[3] += 110143902;
    result[4] += 40280820;
    result[5] += 82678;
    result[6] += 231498;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 241318358;
    result[1] += 210222;
    result[2] += 706346;
    result[3] += 29077945;
    result[4] += 14917372;
    result[5] += 50453;
    result[6] += 50453;
  } else {
    result[0] += 169695677;
    result[1] += 0;
    result[2] += 1484837;
    result[3] += 93453833;
    result[4] += 21514987;
    result[5] += 121211;
    result[6] += 60605;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 240193324;
    result[1] += 120575;
    result[2] += 787286;
    result[3] += 38690523;
    result[4] += 6433053;
    result[5] += 42556;
    result[6] += 63834;
  } else {
    result[0] += 26895002;
    result[1] += 1555153;
    result[2] += 823316;
    result[3] += 116727971;
    result[4] += 140329708;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286136141;
    result[1] += 0;
    result[2] += 173343;
    result[3] += 0;
    result[4] += 10833;
    result[5] += 0;
    result[6] += 10833;
  } else {
    result[0] += 134166884;
    result[1] += 452869;
    result[2] += 2012754;
    result[3] += 108739081;
    result[4] += 40741513;
    result[5] += 83864;
    result[6] += 134183;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 240121365;
    result[1] += 251778;
    result[2] += 814084;
    result[3] += 30238624;
    result[4] += 14762625;
    result[5] += 83926;
    result[6] += 58748;
  } else {
    result[0] += 169485582;
    result[1] += 0;
    result[2] += 1739409;
    result[3] += 94294283;
    result[4] += 20567749;
    result[5] += 30515;
    result[6] += 213611;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 33640983;
    result[1] += 405313;
    result[2] += 1260973;
    result[3] += 140193280;
    result[4] += 110605428;
    result[5] += 225173;
    result[6] += 0;
  } else {
    result[0] += 258809688;
    result[1] += 223563;
    result[2] += 878836;
    result[3] += 26311136;
    result[4] += 0;
    result[5] += 0;
    result[6] += 107927;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286113988;
    result[1] += 0;
    result[2] += 206306;
    result[3] += 0;
    result[4] += 10858;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 130361743;
    result[1] += 534885;
    result[2] += 1755094;
    result[3] += 112275910;
    result[4] += 41202935;
    result[5] += 100291;
    result[6] += 100291;
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
