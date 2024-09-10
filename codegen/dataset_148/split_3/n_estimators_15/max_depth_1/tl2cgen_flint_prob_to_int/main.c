
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 217601583;
    result[1] += 213506;
    result[2] += 989892;
    result[3] += 54327609;
    result[4] += 12965646;
    result[5] += 97048;
    result[6] += 135867;
  } else {
    result[0] += 229628660;
    result[1] += 229080;
    result[2] += 886443;
    result[3] += 38415863;
    result[4] += 17071503;
    result[5] += 29880;
    result[6] += 69720;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 35299876;
    result[1] += 580884;
    result[2] += 893667;
    result[3] += 141378240;
    result[4] += 107776332;
    result[5] += 402150;
    result[6] += 0;
  } else {
    result[0] += 258131872;
    result[1] += 192987;
    result[2] += 825984;
    result[3] += 27049076;
    result[4] += 0;
    result[5] += 30877;
    result[6] += 100353;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286177759;
    result[1] += 0;
    result[2] += 142436;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10956;
  } else {
    result[0] += 134369718;
    result[1] += 824354;
    result[2] += 1434376;
    result[3] += 109622608;
    result[4] += 39816303;
    result[5] += 181357;
    result[6] += 82435;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 33843601;
    result[1] += 491134;
    result[2] += 1428753;
    result[3] += 138231911;
    result[4] += 111933915;
    result[5] += 401836;
    result[6] += 0;
  } else {
    result[0] += 257888734;
    result[1] += 223895;
    result[2] += 895581;
    result[3] += 27222575;
    result[4] += 0;
    result[5] += 0;
    result[6] += 100366;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 31272418;
    result[1] += 665370;
    result[2] += 1197667;
    result[3] += 145316941;
    result[4] += 107479532;
    result[5] += 399222;
    result[6] += 0;
  } else {
    result[0] += 257771465;
    result[1] += 208690;
    result[2] += 633800;
    result[3] += 27624444;
    result[4] += 0;
    result[5] += 0;
    result[6] += 92751;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286101352;
    result[1] += 0;
    result[2] += 186028;
    result[3] += 0;
    result[4] += 32828;
    result[5] += 0;
    result[6] += 10942;
  } else {
    result[0] += 131685240;
    result[1] += 743331;
    result[2] += 1817031;
    result[3] += 110475525;
    result[4] += 41246618;
    result[5] += 181703;
    result[6] += 181703;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 59315758;
    result[1] += 1326165;
    result[2] += 1748127;
    result[3] += 124960943;
    result[4] += 98980158;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 244633947;
    result[1] += 103448;
    result[2] += 642859;
    result[3] += 34773533;
    result[4] += 6036969;
    result[5] += 66502;
    result[6] += 73891;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 34518360;
    result[1] += 495694;
    result[2] += 1757462;
    result[3] += 142084061;
    result[4] += 107340385;
    result[5] += 135189;
    result[6] += 0;
  } else {
    result[0] += 258118908;
    result[1] += 184998;
    result[2] += 840200;
    result[3] += 27086837;
    result[4] += 0;
    result[5] += 7708;
    result[6] += 92499;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 60540014;
    result[1] += 1436966;
    result[2] += 1999257;
    result[3] += 124141392;
    result[4] += 98213522;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 245070390;
    result[1] += 66217;
    result[2] += 779893;
    result[3] += 34307941;
    result[4] += 5959560;
    result[5] += 66217;
    result[6] += 80932;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286014366;
    result[1] += 0;
    result[2] += 294939;
    result[3] += 0;
    result[4] += 10923;
    result[5] += 0;
    result[6] += 10923;
  } else {
    result[0] += 133426872;
    result[1] += 712184;
    result[2] += 1672804;
    result[3] += 109908232;
    result[4] += 40296372;
    result[5] += 132499;
    result[6] += 182186;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286134714;
    result[1] += 0;
    result[2] += 152785;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 43653;
  } else {
    result[0] += 133902067;
    result[1] += 563937;
    result[2] += 1724986;
    result[3] += 108690728;
    result[4] += 41134290;
    result[5] += 99518;
    result[6] += 215623;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286003267;
    result[1] += 0;
    result[2] += 251378;
    result[3] += 0;
    result[4] += 21859;
    result[5] += 0;
    result[6] += 54647;
  } else {
    result[0] += 132640399;
    result[1] += 612313;
    result[2] += 1572156;
    result[3] += 110530908;
    result[4] += 40627845;
    result[5] += 132392;
    result[6] += 215137;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 60658570;
    result[1] += 1198038;
    result[2] += 1261092;
    result[3] += 123334889;
    result[4] += 99878561;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 245915972;
    result[1] += 124942;
    result[2] += 779052;
    result[3] += 33903478;
    result[4] += 5526862;
    result[5] += 44097;
    result[6] += 36747;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286067819;
    result[1] += 0;
    result[2] += 208472;
    result[3] += 0;
    result[4] += 10972;
    result[5] += 0;
    result[6] += 43888;
  } else {
    result[0] += 133935986;
    result[1] += 592273;
    result[2] += 1645203;
    result[3] += 109389556;
    result[4] += 40504901;
    result[5] += 82260;
    result[6] += 180972;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 11742113;
    result[1] += 771782;
    result[2] += 1708946;
    result[3] += 137322083;
    result[4] += 134620846;
    result[5] += 165381;
    result[6] += 0;
  } else {
    result[0] += 254749961;
    result[1] += 216770;
    result[2] += 814757;
    result[3] += 30445016;
    result[4] += 0;
    result[5] += 29899;
    result[6] += 74748;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
