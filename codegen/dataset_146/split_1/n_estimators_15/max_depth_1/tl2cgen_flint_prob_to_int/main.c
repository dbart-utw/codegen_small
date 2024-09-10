
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 87283102;
    result[1] += 40144144;
    result[2] += 9351760;
    result[3] += 27751160;
    result[4] += 40220175;
    result[5] += 81580809;
  } else {
    result[0] += 3241484;
    result[1] += 2701237;
    result[2] += 236358263;
    result[3] += 26202001;
    result[4] += 4051855;
    result[5] += 13776310;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 83098779;
    result[1] += 36958296;
    result[2] += 8646558;
    result[3] += 31295949;
    result[4] += 40172061;
    result[5] += 86159507;
  } else {
    result[0] += 1056572;
    result[1] += 792429;
    result[2] += 241955107;
    result[3] += 28527458;
    result[4] += 792429;
    result[5] += 13207156;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 88205481;
    result[1] += 43934409;
    result[2] += 4544938;
    result[3] += 23482184;
    result[4] += 44776065;
    result[5] += 81388073;
  } else {
    result[0] += 8445160;
    result[1] += 2815053;
    result[2] += 205297828;
    result[3] += 42829027;
    result[4] += 3418279;
    result[5] += 23525804;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 82426367;
    result[1] += 40037830;
    result[2] += 11071066;
    result[3] += 27905154;
    result[4] += 40720293;
    result[5] += 84170439;
  } else {
    result[0] += 2454267;
    result[1] += 1090785;
    result[2] += 239972775;
    result[3] += 28360418;
    result[4] += 2454267;
    result[5] += 11998638;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 87965015;
    result[1] += 39766066;
    result[2] += 9593370;
    result[3] += 28934842;
    result[4] += 39456603;
    result[5] += 80615255;
  } else {
    result[0] += 4326781;
    result[1] += 3308715;
    result[2] += 232119121;
    result[3] += 28760373;
    result[4] += 2290649;
    result[5] += 15525511;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 88267498;
    result[1] += 39212913;
    result[2] += 6612373;
    result[3] += 26910822;
    result[4] += 43211092;
    result[5] += 82116453;
  } else {
    result[0] += 3377772;
    result[1] += 0;
    result[2] += 247616686;
    result[3] += 25723034;
    result[4] += 0;
    result[5] += 9613659;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 80353499;
    result[1] += 37763846;
    result[2] += 8962211;
    result[3] += 30027237;
    result[4] += 43585453;
    result[5] += 85638905;
  } else {
    result[0] += 7631988;
    result[1] += 1579032;
    result[2] += 234486265;
    result[3] += 24738169;
    result[4] += 1579032;
    result[5] += 16316664;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 85583511;
    result[1] += 41212581;
    result[2] += 8935812;
    result[3] += 25420844;
    result[4] += 41212581;
    result[5] += 83965821;
  } else {
    result[0] += 4905583;
    result[1] += 2840074;
    result[2] += 227464153;
    result[3] += 26851613;
    result[4] += 1549131;
    result[5] += 22720596;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 83868682;
    result[1] += 41443660;
    result[2] += 8983234;
    result[3] += 30044766;
    result[4] += 43028936;
    result[5] += 78961873;
  } else {
    result[0] += 1940288;
    result[1] += 1385920;
    result[2] += 240318595;
    result[3] += 30767432;
    result[4] += 831552;
    result[5] += 11087363;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 88035912;
    result[1] += 40392030;
    result[2] += 11072718;
    result[3] += 27369889;
    result[4] += 37662839;
    result[5] += 81797761;
  } else {
    result[0] += 8436099;
    result[1] += 496241;
    result[2] += 229759660;
    result[3] += 29774469;
    result[4] += 2233085;
    result[5] += 15631596;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 84052048;
    result[1] += 41564199;
    result[2] += 6542512;
    result[3] += 29787676;
    result[4] += 42026024;
    result[5] += 82358691;
  } else {
    result[0] += 4142222;
    result[1] += 0;
    result[2] += 237401145;
    result[3] += 35208894;
    result[4] += 776666;
    result[5] += 8802223;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 83071854;
    result[1] += 42069416;
    result[2] += 6173229;
    result[3] += 26903086;
    result[4] += 40926225;
    result[5] += 87187340;
  } else {
    result[0] += 4017743;
    result[1] += 0;
    result[2] += 240528882;
    result[3] += 31874094;
    result[4] += 267849;
    result[5] += 9642583;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 88615224;
    result[1] += 37867100;
    result[2] += 11406688;
    result[3] += 27857150;
    result[4] += 38099890;
    result[5] += 82485099;
  } else {
    result[0] += 5545145;
    result[1] += 3024624;
    result[2] += 228863280;
    result[3] += 29490092;
    result[4] += 3780781;
    result[5] += 15627228;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 85830313;
    result[1] += 38581454;
    result[2] += 9664539;
    result[3] += 28993617;
    result[4] += 38964968;
    result[5] += 84296259;
  } else {
    result[0] += 4453458;
    result[1] += 1309840;
    result[2] += 235509338;
    result[3] += 26196811;
    result[4] += 1571808;
    result[5] += 17289895;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 85121313;
    result[1] += 36667642;
    result[2] += 9937239;
    result[3] += 25574910;
    result[4] += 40365220;
    result[5] += 88664825;
  } else {
    result[0] += 5680149;
    result[1] += 3098263;
    result[2] += 229529661;
    result[3] += 30466254;
    result[4] += 1032754;
    result[5] += 16524070;
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
