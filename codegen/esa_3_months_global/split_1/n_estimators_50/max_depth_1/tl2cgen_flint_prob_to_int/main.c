
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 68766821;
    result[1] += 17132524;
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 391597;
    result[1] += 85507748;
  } else {
    result[0] += 65824113;
    result[1] += 20075231;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 443756;
    result[1] += 85455589;
  } else {
    result[0] += 65691342;
    result[1] += 20208003;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 40414676;
    result[1] += 45484669;
  } else {
    result[0] += 84469816;
    result[1] += 1429529;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69332585;
    result[1] += 16566760;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 5329238;
    result[1] += 80570107;
  } else {
    result[0] += 80545539;
    result[1] += 5353806;
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
    result[0] += 61563111;
    result[1] += 24336234;
  } else {
    result[0] += 1869538;
    result[1] += 84029806;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 68702701;
    result[1] += 17196643;
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 66897776;
    result[1] += 19001569;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4862729;
    result[1] += 81036616;
  } else {
    result[0] += 80312936;
    result[1] += 5586409;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80708573;
    result[1] += 5190772;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4715167;
    result[1] += 81184178;
  } else {
    result[0] += 80390166;
    result[1] += 5509178;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 68610224;
    result[1] += 17289121;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80717316;
    result[1] += 5182029;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69332223;
    result[1] += 16567122;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69106775;
    result[1] += 16792570;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 40722959;
    result[1] += 45176386;
  } else {
    result[0] += 85775352;
    result[1] += 123992;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4974737;
    result[1] += 80924608;
  } else {
    result[0] += 80310506;
    result[1] += 5588839;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 40887639;
    result[1] += 45011706;
  } else {
    result[0] += 85769005;
    result[1] += 130340;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 40443351;
    result[1] += 45455994;
  } else {
    result[0] += 84348657;
    result[1] += 1550688;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 68661705;
    result[1] += 17237640;
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69565738;
    result[1] += 16333607;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80779501;
    result[1] += 5119844;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69573285;
    result[1] += 16326060;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 42915181;
    result[1] += 42984163;
  } else {
    result[0] += 79148357;
    result[1] += 6750988;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4897362;
    result[1] += 81001983;
  } else {
    result[0] += 80339798;
    result[1] += 5559547;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4899340;
    result[1] += 81000004;
  } else {
    result[0] += 80410184;
    result[1] += 5489160;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80726607;
    result[1] += 5172738;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69608055;
    result[1] += 16291289;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69303787;
    result[1] += 16595558;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80823081;
    result[1] += 5076263;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 40499331;
    result[1] += 45400014;
  } else {
    result[0] += 84321561;
    result[1] += 1577784;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 451533;
    result[1] += 85447812;
  } else {
    result[0] += 69725411;
    result[1] += 16173934;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 40559704;
    result[1] += 45339640;
  } else {
    result[0] += 84373834;
    result[1] += 1525511;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 68691597;
    result[1] += 17207748;
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4875408;
    result[1] += 81023937;
  } else {
    result[0] += 80394143;
    result[1] += 5505202;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 68814880;
    result[1] += 17084465;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69267477;
    result[1] += 16631868;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 68667604;
    result[1] += 17231741;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 360877;
    result[1] += 85538468;
  } else {
    result[0] += 65682944;
    result[1] += 20216401;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 43781419;
    result[1] += 42117926;
  } else {
    result[0] += 79005848;
    result[1] += 6893497;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 43056990;
    result[1] += 42842355;
  } else {
    result[0] += 79354573;
    result[1] += 6544772;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 40629796;
    result[1] += 45269549;
  } else {
    result[0] += 85756984;
    result[1] += 142361;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 8422;
    result[1] += 85890923;
  } else {
    result[0] += 67218303;
    result[1] += 18681042;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69422869;
    result[1] += 16476476;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 5467969;
    result[1] += 80431376;
  } else {
    result[0] += 80574205;
    result[1] += 5325140;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 754652;
    result[1] += 85144693;
  } else {
    result[0] += 65866860;
    result[1] += 20032485;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4859990;
    result[1] += 81039355;
  } else {
    result[0] += 80344421;
    result[1] += 5554924;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 797826;
    result[1] += 85101519;
  } else {
    result[0] += 65922132;
    result[1] += 19977213;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69474094;
    result[1] += 16425251;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
