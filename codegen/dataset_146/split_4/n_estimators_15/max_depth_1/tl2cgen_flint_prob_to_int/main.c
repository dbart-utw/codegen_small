
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 87968735;
    result[1] += 46344888;
    result[2] += 8104454;
    result[3] += 23998626;
    result[4] += 38869906;
    result[5] += 81044541;
  } else {
    result[0] += 7960343;
    result[1] += 1688557;
    result[2] += 222165957;
    result[3] += 30635262;
    result[4] += 2171002;
    result[5] += 21710028;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 90667680;
    result[1] += 40211154;
    result[2] += 8088450;
    result[3] += 26345239;
    result[4] += 41443680;
    result[5] += 79574947;
  } else {
    result[0] += 3356451;
    result[1] += 258188;
    result[2] += 226431398;
    result[3] += 29433499;
    result[4] += 5421960;
    result[5] += 21429653;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 92673445;
    result[1] += 43200565;
    result[2] += 3371368;
    result[3] += 25794893;
    result[4] += 37320270;
    result[5] += 83970609;
  } else {
    result[0] += 4146192;
    result[1] += 0;
    result[2] += 231211186;
    result[3] += 38535197;
    result[4] += 243893;
    result[5] += 12194682;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 86425213;
    result[1] += 40316523;
    result[2] += 9374163;
    result[3] += 24769130;
    result[4] += 41840778;
    result[5] += 83605343;
  } else {
    result[0] += 3214194;
    result[1] += 1874946;
    result[2] += 235975440;
    result[3] += 31338395;
    result[4] += 1339247;
    result[5] += 12588928;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 91306130;
    result[1] += 40436660;
    result[2] += 10204354;
    result[3] += 27033925;
    result[4] += 37466735;
    result[5] += 79883345;
  } else {
    result[0] += 3491843;
    result[1] += 1611619;
    result[2] += 236639536;
    result[3] += 29009159;
    result[4] += 1880223;
    result[5] += 13698769;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 90179435;
    result[1] += 39901730;
    result[2] += 10147093;
    result[3] += 28762814;
    result[4] += 39443966;
    result[5] += 77896111;
  } else {
    result[0] += 3469063;
    result[1] += 1601106;
    result[2] += 237230563;
    result[3] += 29620464;
    result[4] += 1867957;
    result[5] += 12541998;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 84090380;
    result[1] += 40115123;
    result[2] += 10369380;
    result[3] += 24977340;
    result[4] += 40947701;
    result[5] += 85831225;
  } else {
    result[0] += 1647159;
    result[1] += 1647159;
    result[2] += 234720168;
    result[3] += 32119602;
    result[4] += 1921685;
    result[5] += 14275378;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 96016640;
    result[1] += 39453542;
    result[2] += 8281337;
    result[3] += 25469019;
    result[4] += 37500396;
    result[5] += 79610216;
  } else {
    result[0] += 6165614;
    result[1] += 2712870;
    result[2] += 222455383;
    result[3] += 31321323;
    result[4] += 4192618;
    result[5] += 19483342;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 86010020;
    result[1] += 44269863;
    result[2] += 6324266;
    result[3] += 23874104;
    result[4] += 44348916;
    result[5] += 81503980;
  } else {
    result[0] += 7134497;
    result[1] += 2615982;
    result[2] += 220693779;
    result[3] += 39001917;
    result[4] += 1902532;
    result[5] += 14982444;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 85511692;
    result[1] += 41577685;
    result[2] += 10413423;
    result[3] += 28883949;
    result[4] += 40741571;
    result[5] += 79202830;
  } else {
    result[0] += 1081515;
    result[1] += 1351894;
    result[2] += 239014862;
    result[3] += 29200910;
    result[4] += 811136;
    result[5] += 14870834;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 88243953;
    result[1] += 43600060;
    result[2] += 4496507;
    result[3] += 25935210;
    result[4] += 41351807;
    result[5] += 82703614;
  } else {
    result[0] += 4999432;
    result[1] += 0;
    result[2] += 232019132;
    result[3] += 35450523;
    result[4] += 1363481;
    result[5] += 12498582;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 92992990;
    result[1] += 45163407;
    result[2] += 1858243;
    result[3] += 21490995;
    result[4] += 42093264;
    result[5] += 82732251;
  } else {
    result[0] += 5136986;
    result[1] += 223347;
    result[2] += 225804052;
    result[3] += 36628946;
    result[4] += 1563430;
    result[5] += 16974389;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 91539323;
    result[1] += 42841366;
    result[2] += 6819318;
    result[3] += 23105455;
    result[4] += 37867274;
    result[5] += 84158413;
  } else {
    result[0] += 11389465;
    result[1] += 1138946;
    result[2] += 215260890;
    result[3] += 31890502;
    result[4] += 4555786;
    result[5] += 22095562;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 84577116;
    result[1] += 40958729;
    result[2] += 10714621;
    result[3] += 27052518;
    result[4] += 40502787;
    result[5] += 82525380;
  } else {
    result[0] += 1353171;
    result[1] += 1623806;
    result[2] += 237346333;
    result[3] += 30852317;
    result[4] += 1623806;
    result[5] += 13531718;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 89493165;
    result[1] += 42984906;
    result[2] += 3445056;
    result[3] += 21375008;
    result[4] += 42201939;
    result[5] += 86831077;
  } else {
    result[0] += 5388610;
    result[1] += 0;
    result[2] += 225831756;
    result[3] += 40169639;
    result[4] += 244936;
    result[5] += 14696209;
  }
  
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
