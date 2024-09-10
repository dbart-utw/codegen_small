
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20693933;
    result[1] += 65205412;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 82937299;
    result[1] += 2962046;
  } else {
    result[0] += 21658382;
    result[1] += 64240963;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 27734317;
    result[1] += 58165027;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d0a5ce6))) ) ) {
    result[0] += 77945702;
    result[1] += 7953643;
  } else {
    result[0] += 22194089;
    result[1] += 63705256;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 21569439;
    result[1] += 64329906;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 21077154;
    result[1] += 64822191;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 22241794;
    result[1] += 63657550;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 21474836;
    result[1] += 64424509;
  } else {
    result[0] += 71010125;
    result[1] += 14889219;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24267528;
    result[1] += 61631817;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee17c1c))) ) ) {
    result[0] += 76082277;
    result[1] += 9817068;
  } else {
    result[0] += 22698790;
    result[1] += 63200555;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25518215;
    result[1] += 60381130;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 78741067;
    result[1] += 7158278;
  } else {
    result[0] += 28380841;
    result[1] += 57518504;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 26054777;
    result[1] += 59844567;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 79536431;
    result[1] += 6362914;
  } else {
    result[0] += 20550082;
    result[1] += 65349263;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6db328))) ) ) {
    result[0] += 81494251;
    result[1] += 4405094;
  } else {
    result[0] += 25693107;
    result[1] += 60206237;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5bef4a))) ) ) {
    result[0] += 83854123;
    result[1] += 2045222;
  } else {
    result[0] += 24487143;
    result[1] += 61412202;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f0da272))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 32304027;
    result[1] += 53595318;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d540cc8))) ) ) {
    result[0] += 56097532;
    result[1] += 29801813;
  } else {
    result[0] += 15618062;
    result[1] += 70281283;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 26342466;
    result[1] += 59556879;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 79871321;
    result[1] += 6028024;
  } else {
    result[0] += 16679484;
    result[1] += 69219861;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 16459754;
    result[1] += 69439590;
  } else {
    result[0] += 69793218;
    result[1] += 16106127;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 79117818;
    result[1] += 6781527;
  } else {
    result[0] += 22524717;
    result[1] += 63374628;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e09abf3))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20471339;
    result[1] += 65428006;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 84577817;
    result[1] += 1321528;
  } else {
    result[0] += 13882722;
    result[1] += 72016623;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 82416939;
    result[1] += 3482405;
  } else {
    result[0] += 24997164;
    result[1] += 60902181;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 18888861;
    result[1] += 67010484;
  } else {
    result[0] += 75161927;
    result[1] += 10737418;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 16000858;
    result[1] += 69898487;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25150709;
    result[1] += 60748636;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 80640202;
    result[1] += 5259143;
  } else {
    result[0] += 23281131;
    result[1] += 62618214;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 58727103;
    result[1] += 27172242;
  } else {
    result[0] += 18221073;
    result[1] += 67678272;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 80357452;
    result[1] += 5541893;
  } else {
    result[0] += 26658417;
    result[1] += 59240928;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 17549328;
    result[1] += 68350017;
  } else {
    result[0] += 66934555;
    result[1] += 18964790;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 21851587;
    result[1] += 64047757;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 70281283;
    result[1] += 15618062;
  } else {
    result[0] += 15713294;
    result[1] += 70186050;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c02d384))) ) ) {
    result[0] += 71340134;
    result[1] += 14559211;
  } else {
    result[0] += 20211610;
    result[1] += 65687735;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
    result[0] += 76354974;
    result[1] += 9544371;
  } else {
    result[0] += 26488785;
    result[1] += 59410560;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4b9970))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24291208;
    result[1] += 61608137;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d73721d))) ) ) {
    result[0] += 64845584;
    result[1] += 21053761;
  } else {
    result[0] += 21874988;
    result[1] += 64024357;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 84181358;
    result[1] += 1717986;
  } else {
    result[0] += 20164165;
    result[1] += 65735180;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25845820;
    result[1] += 60053525;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d5cfb))) ) ) {
    result[0] += 80172722;
    result[1] += 5726623;
  } else {
    result[0] += 16925979;
    result[1] += 68973366;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 16750372;
    result[1] += 69148973;
  } else {
    result[0] += 72264529;
    result[1] += 13634816;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 59603627;
    result[1] += 26295718;
  } else {
    result[0] += 17700471;
    result[1] += 68198874;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 84146298;
    result[1] += 1753047;
  } else {
    result[0] += 24485327;
    result[1] += 61414018;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f57e671))) ) ) {
    result[0] += 80172722;
    result[1] += 5726623;
  } else {
    result[0] += 29862004;
    result[1] += 56037341;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25069337;
    result[1] += 60830008;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 56955001;
    result[1] += 28944344;
  } else {
    result[0] += 16577066;
    result[1] += 69322279;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 27917287;
    result[1] += 57982058;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3af3cb3e))) ) ) {
    result[0] += 58604226;
    result[1] += 27295119;
  } else {
    result[0] += 20924199;
    result[1] += 64975146;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24332003;
    result[1] += 61567342;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
