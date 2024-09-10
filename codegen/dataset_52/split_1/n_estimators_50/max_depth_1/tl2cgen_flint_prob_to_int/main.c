
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 22044964;
    result[1] += 63854381;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 17505553;
    result[1] += 68393791;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f15a21e))) ) ) {
    result[0] += 79763678;
    result[1] += 6135667;
  } else {
    result[0] += 21566218;
    result[1] += 64333127;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e0317ad))) ) ) {
    result[0] += 55834574;
    result[1] += 30064771;
  } else {
    result[0] += 14755715;
    result[1] += 71143630;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25396328;
    result[1] += 60503017;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d134acb))) ) ) {
    result[0] += 66265209;
    result[1] += 19634136;
  } else {
    result[0] += 23143865;
    result[1] += 62755480;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 14782678;
    result[1] += 71116667;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e77a787))) ) ) {
    result[0] += 59756066;
    result[1] += 26143279;
  } else {
    result[0] += 16074731;
    result[1] += 69824614;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20770743;
    result[1] += 65128602;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 19267143;
    result[1] += 66632202;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 18920560;
    result[1] += 66978785;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3ea1b6))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20364069;
    result[1] += 65535276;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c02d384))) ) ) {
    result[0] += 61847529;
    result[1] += 24051816;
  } else {
    result[0] += 21931747;
    result[1] += 63967598;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f158106))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24491962;
    result[1] += 61407383;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 23602973;
    result[1] += 62296372;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 13963933;
    result[1] += 71935412;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3bd0917d))) ) ) {
    result[0] += 43653765;
    result[1] += 42245579;
  } else {
    result[0] += 14011950;
    result[1] += 71887395;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 17254890;
    result[1] += 68644455;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 22930757;
    result[1] += 62968588;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3c6d1e))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 21277819;
    result[1] += 64621526;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 14703491;
    result[1] += 71195854;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f17d370))) ) ) {
    result[0] += 81994830;
    result[1] += 3904515;
  } else {
    result[0] += 26019303;
    result[1] += 59880041;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 82595524;
    result[1] += 3303820;
  } else {
    result[0] += 18319765;
    result[1] += 67579580;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 23427094;
    result[1] += 62472251;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 22341533;
    result[1] += 63557811;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 17697855;
    result[1] += 68201490;
  } else {
    result[0] += 72477573;
    result[1] += 13421772;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 17417378;
    result[1] += 68481967;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
    result[0] += 55743192;
    result[1] += 30156153;
  } else {
    result[0] += 12198723;
    result[1] += 73700622;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 15812317;
    result[1] += 70087028;
  } else {
    result[0] += 77586505;
    result[1] += 8312839;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 79456894;
    result[1] += 6442450;
  } else {
    result[0] += 23111931;
    result[1] += 62787414;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3df3c8a0))) ) ) {
    result[0] += 56132245;
    result[1] += 29767100;
  } else {
    result[0] += 16437529;
    result[1] += 69461816;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 84247435;
    result[1] += 1651910;
  } else {
    result[0] += 22390824;
    result[1] += 63508521;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 21474836;
    result[1] += 64424509;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 15833980;
    result[1] += 70065365;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 24294764;
    result[1] += 61604581;
  } else {
    result[0] += 70041005;
    result[1] += 15858340;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d540cc8))) ) ) {
    result[0] += 59603627;
    result[1] += 26295718;
  } else {
    result[0] += 17700471;
    result[1] += 68198874;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 81994830;
    result[1] += 3904515;
  } else {
    result[0] += 16866081;
    result[1] += 69033264;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 57266230;
    result[1] += 28633115;
  } else {
    result[0] += 20986772;
    result[1] += 64912573;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e7408d9))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 19132127;
    result[1] += 66767218;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25329294;
    result[1] += 60570051;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3c6d1e))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 17707321;
    result[1] += 68192024;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
    result[0] += 23721158;
    result[1] += 62178187;
  } else {
    result[0] += 82320206;
    result[1] += 3579139;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 84109776;
    result[1] += 1789569;
  } else {
    result[0] += 20376123;
    result[1] += 65523221;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7bcb92))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 26430567;
    result[1] += 59468777;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20003957;
    result[1] += 65895388;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24332003;
    result[1] += 61567342;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 18407002;
    result[1] += 67492343;
  } else {
    result[0] += 66668149;
    result[1] += 19231196;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 18436932;
    result[1] += 67462413;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 62821909;
    result[1] += 23077436;
  } else {
    result[0] += 23227884;
    result[1] += 62671461;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b3c60))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 13805252;
    result[1] += 72094093;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
