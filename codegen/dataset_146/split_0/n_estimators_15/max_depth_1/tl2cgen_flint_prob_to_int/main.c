
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 89239250;
    result[1] += 36100992;
    result[2] += 8856376;
    result[3] += 27995155;
    result[4] += 41880152;
    result[5] += 82259225;
  } else {
    result[0] += 2548942;
    result[1] += 566431;
    result[2] += 234219449;
    result[3] += 32003383;
    result[4] += 1132863;
    result[5] += 15860083;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 87584556;
    result[1] += 39424645;
    result[2] += 7653019;
    result[3] += 27829161;
    result[4] += 42362168;
    result[5] += 81477601;
  } else {
    result[0] += 2551971;
    result[1] += 1531182;
    result[2] += 230187789;
    result[3] += 30623652;
    result[4] += 2807168;
    result[5] += 18629388;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 92332808;
    result[1] += 38172387;
    result[2] += 8108763;
    result[3] += 23484815;
    result[4] += 40390822;
    result[5] += 83841555;
  } else {
    result[0] += 6345288;
    result[1] += 2379483;
    result[2] += 227901619;
    result[3] += 35163474;
    result[4] += 1321935;
    result[5] += 13219351;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 97370502;
    result[1] += 38264328;
    result[2] += 4477740;
    result[3] += 21900221;
    result[4] += 43963270;
    result[5] += 80355088;
  } else {
    result[0] += 4593547;
    result[1] += 1312442;
    result[2] += 210646982;
    result[3] += 42873113;
    result[4] += 4593547;
    result[5] += 22311518;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 86216987;
    result[1] += 41142141;
    result[2] += 9907390;
    result[3] += 29646543;
    result[4] += 38495128;
    result[5] += 80922961;
  } else {
    result[0] += 3579139;
    result[1] += 1927228;
    result[2] += 236498519;
    result[3] += 28908433;
    result[4] += 825955;
    result[5] += 14591876;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 7652918;
    result[1] += 933282;
    result[2] += 2613191;
    result[3] += 36957997;
    result[4] += 57116905;
    result[5] += 181056856;
  } else {
    result[0] += 98458950;
    result[1] += 44445692;
    result[2] += 85847159;
    result[3] += 24092870;
    result[4] += 19830954;
    result[5] += 13655525;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 93599516;
    result[1] += 36909283;
    result[2] += 7199962;
    result[3] += 23267248;
    result[4] += 41456628;
    result[5] += 83898514;
  } else {
    result[0] += 4371467;
    result[1] += 0;
    result[2] += 237425354;
    result[3] += 35791394;
    result[4] += 1092866;
    result[5] += 7650068;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 90391580;
    result[1] += 42969204;
    result[2] += 8515715;
    result[3] += 25937774;
    result[4] += 42031694;
    result[5] += 76485183;
  } else {
    result[0] += 3206119;
    result[1] += 739873;
    result[2] += 218509389;
    result[3] += 35760566;
    result[4] += 6412239;
    result[5] += 21702964;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 7535030;
    result[1] += 3864118;
    result[2] += 4250529;
    result[3] += 41925681;
    result[4] += 53904447;
    result[5] += 174851345;
  } else {
    result[0] += 97013515;
    result[1] += 42042044;
    result[2] += 85111592;
    result[3] += 24146347;
    result[4] += 21063834;
    result[5] += 16953818;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 96318618;
    result[1] += 42233845;
    result[2] += 2704238;
    result[3] += 21952055;
    result[4] += 41438480;
    result[5] += 81683915;
  } else {
    result[0] += 4437432;
    result[1] += 0;
    result[2] += 214631590;
    result[3] += 49512401;
    result[4] += 700647;
    result[5] += 17049081;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 92377252;
    result[1] += 38177487;
    result[2] += 8662763;
    result[3] += 26754905;
    result[4] += 39710719;
    result[5] += 80648024;
  } else {
    result[0] += 3411828;
    result[1] += 524896;
    result[2] += 236728414;
    result[3] += 32806044;
    result[4] += 3936725;
    result[5] += 8923243;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 91255125;
    result[1] += 38386916;
    result[2] += 9500953;
    result[3] += 27276930;
    result[4] += 40608913;
    result[5] += 79302312;
  } else {
    result[0] += 3155164;
    result[1] += 1051721;
    result[2] += 237689037;
    result[3] += 31288711;
    result[4] += 262930;
    result[5] += 12883587;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 87299795;
    result[1] += 37522928;
    result[2] += 10198929;
    result[3] += 26715107;
    result[4] += 40186828;
    result[5] += 84407562;
  } else {
    result[0] += 2152865;
    result[1] += 2691082;
    result[2] += 232778615;
    result[3] += 31754770;
    result[4] += 3229298;
    result[5] += 13724519;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 94779437;
    result[1] += 41929339;
    result[2] += 6058231;
    result[3] += 20645815;
    result[4] += 40893062;
    result[5] += 82025266;
  } else {
    result[0] += 4176629;
    result[1] += 1624244;
    result[2] += 207903333;
    result[3] += 45478854;
    result[4] += 6496979;
    result[5] += 20651112;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 87770637;
    result[1] += 41575565;
    result[2] += 5324177;
    result[3] += 27090669;
    result[4] += 40479411;
    result[5] += 84090691;
  } else {
    result[0] += 3918989;
    result[1] += 0;
    result[2] += 228281124;
    result[3] += 41394324;
    result[4] += 489873;
    result[5] += 12246841;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
