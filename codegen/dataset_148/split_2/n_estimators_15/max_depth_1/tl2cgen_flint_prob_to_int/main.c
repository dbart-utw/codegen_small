
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
    result[0] += 286069802;
    result[1] += 0;
    result[2] += 217792;
    result[3] += 0;
    result[4] += 32668;
    result[5] += 0;
    result[6] += 10889;
  } else {
    result[0] += 132415261;
    result[1] += 782143;
    result[2] += 1763983;
    result[3] += 109699811;
    result[4] += 41436973;
    result[5] += 83206;
    result[6] += 149772;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286167858;
    result[1] += 0;
    result[2] += 130635;
    result[3] += 0;
    result[4] += 32658;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 133692240;
    result[1] += 649314;
    result[2] += 1714856;
    result[3] += 110067173;
    result[4] += 40007777;
    result[5] += 99894;
    result[6] += 99894;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 241724814;
    result[1] += 141293;
    result[2] += 692337;
    result[3] += 36962363;
    result[4] += 6690244;
    result[5] += 56517;
    result[6] += 63582;
  } else {
    result[0] += 23137870;
    result[1] += 2892233;
    result[2] += 1446116;
    result[3] += 117810326;
    result[4] += 141044604;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286144760;
    result[1] += 0;
    result[2] += 142535;
    result[3] += 0;
    result[4] += 21928;
    result[5] += 0;
    result[6] += 21928;
  } else {
    result[0] += 134609405;
    result[1] += 494100;
    result[2] += 1729351;
    result[3] += 108290326;
    result[4] += 40845628;
    result[5] += 98820;
    result[6] += 263520;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 241488175;
    result[1] += 371650;
    result[2] += 591261;
    result[3] += 28895804;
    result[4] += 14899795;
    result[5] += 42232;
    result[6] += 42232;
  } else {
    result[0] += 170736991;
    result[1] += 0;
    result[2] += 1431506;
    result[3] += 93435631;
    result[4] += 20548085;
    result[5] += 29823;
    result[6] += 149115;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 220678588;
    result[1] += 214933;
    result[2] += 976972;
    result[3] += 52522051;
    result[4] += 11840908;
    result[5] += 58618;
    result[6] += 39078;
  } else {
    result[0] += 229483808;
    result[1] += 248154;
    result[2] += 694833;
    result[3] += 37759263;
    result[4] += 18065683;
    result[5] += 39704;
    result[6] += 39704;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 57128721;
    result[1] += 1125073;
    result[2] += 2125138;
    result[3] += 121132891;
    result[4] += 104819328;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 246095148;
    result[1] += 58856;
    result[2] += 691567;
    result[3] += 33636682;
    result[4] += 5716470;
    result[5] += 36785;
    result[6] += 95642;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 33955092;
    result[1] += 439832;
    result[2] += 791699;
    result[3] += 142681760;
    result[4] += 108374801;
    result[5] += 87966;
    result[6] += 0;
  } else {
    result[0] += 258975265;
    result[1] += 209000;
    result[2] += 897929;
    result[3] += 26179290;
    result[4] += 0;
    result[5] += 0;
    result[6] += 69666;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 240182418;
    result[1] += 337098;
    result[2] += 556211;
    result[3] += 29782619;
    result[4] += 15447521;
    result[5] += 25282;
    result[6] += 0;
  } else {
    result[0] += 170554035;
    result[1] += 0;
    result[2] += 1443080;
    result[3] += 93589760;
    result[4] += 20203122;
    result[5] += 270577;
    result[6] += 270577;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 33704302;
    result[1] += 932530;
    result[2] += 1287779;
    result[3] += 141744578;
    result[4] += 108439931;
    result[5] += 222030;
    result[6] += 0;
  } else {
    result[0] += 258812389;
    result[1] += 208651;
    result[2] += 718687;
    result[3] += 26483236;
    result[4] += 0;
    result[5] += 15455;
    result[6] += 92733;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286135155;
    result[1] += 0;
    result[2] += 141554;
    result[3] += 0;
    result[4] += 21777;
    result[5] += 0;
    result[6] += 32666;
  } else {
    result[0] += 135193440;
    result[1] += 582515;
    result[2] += 1581112;
    result[3] += 108181381;
    result[4] += 40526409;
    result[5] += 116503;
    result[6] += 149789;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 32759758;
    result[1] += 769220;
    result[2] += 1357448;
    result[3] += 142803590;
    result[4] += 108595886;
    result[5] += 45248;
    result[6] += 0;
  } else {
    result[0] += 258700951;
    result[1] += 161760;
    result[2] += 793395;
    result[3] += 26567205;
    result[4] += 0;
    result[5] += 23108;
    result[6] += 84731;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 241399652;
    result[1] += 319378;
    result[2] += 739613;
    result[3] += 29374409;
    result[4] += 14481289;
    result[5] += 0;
    result[6] += 16809;
  } else {
    result[0] += 172278338;
    result[1] += 0;
    result[2] += 1183939;
    result[3] += 92013329;
    result[4] += 20400183;
    result[5] += 151787;
    result[6] += 303574;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 240950937;
    result[1] += 302871;
    result[2] += 546850;
    result[3] += 29269145;
    result[4] += 15219282;
    result[5] += 8413;
    result[6] += 33652;
  } else {
    result[0] += 169088437;
    result[1] += 0;
    result[2] += 1058693;
    result[3] += 94465686;
    result[4] += 21446100;
    result[5] += 151241;
    result[6] += 120993;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 259307679;
    result[1] += 133352;
    result[2] += 525565;
    result[3] += 25509531;
    result[4] += 784425;
    result[5] += 7844;
    result[6] += 62754;
  } else {
    result[0] += 51308840;
    result[1] += 736490;
    result[2] += 2250387;
    result[3] += 133263870;
    result[4] += 98607899;
    result[5] += 163664;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
