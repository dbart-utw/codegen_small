
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 45889543;
    result[1] += 597161;
    result[2] += 1194322;
    result[3] += 89160764;
    result[4] += 77906572;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 183740526;
    result[1] += 105092;
    result[2] += 470150;
    result[3] += 25852771;
    result[4] += 4474730;
    result[5] += 27655;
    result[6] += 77436;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 164175169;
    result[1] += 73614;
    result[2] += 736145;
    result[3] += 40031592;
    result[4] += 9466831;
    result[5] += 117783;
    result[6] += 147229;
  } else {
    result[0] += 171730362;
    result[1] += 259949;
    result[2] += 579317;
    result[3] += 28958424;
    result[4] += 13116331;
    result[5] += 37135;
    result[6] += 66844;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214568117;
    result[1] += 0;
    result[2] += 147475;
    result[3] += 0;
    result[4] += 24579;
    result[5] += 0;
    result[6] += 8193;
  } else {
    result[0] += 99617206;
    result[1] += 422317;
    result[2] += 1403584;
    result[3] += 82625144;
    result[4] += 30332321;
    result[5] += 186316;
    result[6] += 161474;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 42678549;
    result[1] += 701180;
    result[2] += 1028398;
    result[3] += 94285470;
    result[4] += 76054764;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 184191459;
    result[1] += 66236;
    result[2] += 640281;
    result[3] += 25081390;
    result[4] += 4636524;
    result[5] += 55196;
    result[6] += 77275;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 24638315;
    result[1] += 502139;
    result[2] += 736471;
    result[3] += 106620972;
    result[4] += 82016133;
    result[5] += 234331;
    result[6] += 0;
  } else {
    result[0] += 194011843;
    result[1] += 179511;
    result[2] += 579070;
    result[3] += 19902659;
    result[4] += 0;
    result[5] += 0;
    result[6] += 75279;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 44063147;
    result[1] += 1237194;
    result[2] += 1475116;
    result[3] += 92408890;
    result[4] += 75564015;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 183439730;
    result[1] += 66098;
    result[2] += 550820;
    result[3] += 25899577;
    result[4] += 4670957;
    result[5] += 44065;
    result[6] += 77114;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25359477;
    result[1] += 437232;
    result[2] += 840831;
    result[3] += 104834871;
    result[4] += 83040518;
    result[5] += 235432;
    result[6] += 0;
  } else {
    result[0] += 194179041;
    result[1] += 150436;
    result[2] += 567030;
    result[3] += 19770851;
    result[4] += 0;
    result[5] += 11572;
    result[6] += 69432;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 42340195;
    result[1] += 646415;
    result[2] += 1431347;
    result[3] += 94053411;
    result[4] += 76276993;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 184030542;
    result[1] += 82916;
    result[2] += 469860;
    result[3] += 25499606;
    result[4] += 4527244;
    result[5] += 44222;
    result[6] += 93972;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214610184;
    result[1] += 0;
    result[2] += 73154;
    result[3] += 0;
    result[4] += 16256;
    result[5] += 0;
    result[6] += 48769;
  } else {
    result[0] += 100396117;
    result[1] += 477777;
    result[2] += 1433332;
    result[3] += 82630342;
    result[4] += 29584479;
    result[5] += 125730;
    result[6] += 100584;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214601343;
    result[1] += 0;
    result[2] += 98013;
    result[3] += 0;
    result[4] += 32671;
    result[5] += 0;
    result[6] += 16335;
  } else {
    result[0] += 99998759;
    result[1] += 399346;
    result[2] += 1310354;
    result[3] += 81678756;
    result[4] += 31136516;
    result[5] += 74877;
    result[6] += 149754;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25442075;
    result[1] += 364879;
    result[2] += 796101;
    result[3] += 107772233;
    result[4] += 80140878;
    result[5] += 232196;
    result[6] += 0;
  } else {
    result[0] += 194129598;
    result[1] += 110198;
    result[2] += 533593;
    result[3] += 19893774;
    result[4] += 0;
    result[5] += 11599;
    result[6] += 69599;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180010829;
    result[1] += 106182;
    result[2] += 461892;
    result[3] += 29125801;
    result[4] += 4969330;
    result[5] += 31854;
    result[6] += 42472;
  } else {
    result[0] += 19004280;
    result[1] += 1337338;
    result[2] += 703862;
    result[3] += 86997370;
    result[4] += 106705513;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 7985494;
    result[1] += 327610;
    result[2] += 941878;
    result[3] += 106473254;
    result[4] += 98733468;
    result[5] += 286658;
    result[6] += 0;
  } else {
    result[0] += 191149396;
    result[1] += 145949;
    result[2] += 550118;
    result[3] += 22818697;
    result[4] += 0;
    result[5] += 28067;
    result[6] += 56134;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25083719;
    result[1] += 297435;
    result[2] += 760112;
    result[3] += 105887005;
    result[4] += 82422656;
    result[5] += 297435;
    result[6] += 0;
  } else {
    result[0] += 193332725;
    result[1] += 203129;
    result[2] += 562958;
    result[3] += 20585710;
    result[4] += 0;
    result[5] += 5803;
    result[6] += 58036;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214552225;
    result[1] += 0;
    result[2] += 122587;
    result[3] += 0;
    result[4] += 40862;
    result[5] += 0;
    result[6] += 32689;
  } else {
    result[0] += 100248322;
    result[1] += 548622;
    result[2] += 1384025;
    result[3] += 82617584;
    result[4] += 29800185;
    result[5] += 74812;
    result[6] += 74812;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25294152;
    result[1] += 369502;
    result[2] += 906961;
    result[3] += 108633851;
    result[4] += 79375940;
    result[5] += 167955;
    result[6] += 0;
  } else {
    result[0] += 193972052;
    result[1] += 109958;
    result[2] += 625025;
    result[3] += 19960306;
    result[4] += 0;
    result[5] += 5787;
    result[6] += 75234;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 194438701;
    result[1] += 88226;
    result[2] += 441130;
    result[3] += 19180368;
    result[4] += 552883;
    result[5] += 0;
    result[6] += 47053;
  } else {
    result[0] += 36841220;
    result[1] += 430172;
    result[2] += 1874323;
    result[3] += 103087818;
    result[4] += 72269016;
    result[5] += 245812;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214568932;
    result[1] += 0;
    result[2] += 130496;
    result[3] += 0;
    result[4] += 40780;
    result[5] += 0;
    result[6] += 8156;
  } else {
    result[0] += 100069986;
    result[1] += 425244;
    result[2] += 1350775;
    result[3] += 81947075;
    result[4] += 30655110;
    result[5] += 150086;
    result[6] += 150086;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214624960;
    result[1] += 0;
    result[2] += 82269;
    result[3] += 0;
    result[4] += 24680;
    result[5] += 0;
    result[6] += 16453;
  } else {
    result[0] += 101047888;
    result[1] += 543135;
    result[2] += 1197366;
    result[3] += 82470185;
    result[4] += 29218220;
    result[5] += 135783;
    result[6] += 135783;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180235898;
    result[1] += 84966;
    result[2] += 653182;
    result[3] += 28686927;
    result[4] += 5002422;
    result[5] += 37172;
    result[6] += 47793;
  } else {
    result[0] += 18591413;
    result[1] += 982187;
    result[2] += 350781;
    result[3] += 89098472;
    result[4] += 105725509;
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
