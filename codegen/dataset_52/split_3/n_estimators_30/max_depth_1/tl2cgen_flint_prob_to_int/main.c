
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
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7edd05))) ) ) {
    result[0] += 40164098;
    result[1] += 103001478;
  } else {
    result[0] += 129530759;
    result[1] += 13634816;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 110442016;
    result[1] += 32723560;
  } else {
    result[0] += 34432227;
    result[1] += 108733349;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 139398061;
    result[1] += 3767515;
  } else {
    result[0] += 38813778;
    result[1] += 104351797;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 139984119;
    result[1] += 3181457;
  } else {
    result[0] += 30865972;
    result[1] += 112299603;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 37572866;
    result[1] += 105592710;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 47507859;
    result[1] += 95657717;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 24120287;
    result[1] += 119045289;
  } else {
    result[0] += 123231129;
    result[1] += 19934447;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 33405301;
    result[1] += 109760275;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 138691652;
    result[1] += 4473924;
  } else {
    result[0] += 42763743;
    result[1] += 100401832;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 140779483;
    result[1] += 2386092;
  } else {
    result[0] += 22567972;
    result[1] += 120597603;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 28633115;
    result[1] += 114532461;
  } else {
    result[0] += 121592681;
    result[1] += 21572895;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d73721d))) ) ) {
    result[0] += 93997600;
    result[1] += 49167975;
  } else {
    result[0] += 26188824;
    result[1] += 116976751;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 136348168;
    result[1] += 6817408;
  } else {
    result[0] += 24338148;
    result[1] += 118827428;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 137659208;
    result[1] += 5506368;
  } else {
    result[0] += 33925492;
    result[1] += 109240084;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 43655870;
    result[1] += 99509705;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 86528645;
    result[1] += 56636931;
  } else {
    result[0] += 23306024;
    result[1] += 119859552;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 140182960;
    result[1] += 2982616;
  } else {
    result[0] += 37955524;
    result[1] += 105210051;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 43677633;
    result[1] += 99487942;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 32262665;
    result[1] += 110902911;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e45b813))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 35791394;
    result[1] += 107374182;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d3150db))) ) ) {
    result[0] += 87688915;
    result[1] += 55476660;
  } else {
    result[0] += 34422324;
    result[1] += 108743252;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 132939463;
    result[1] += 10226112;
  } else {
    result[0] += 44050946;
    result[1] += 99114629;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 136238209;
    result[1] += 6927366;
  } else {
    result[0] += 40599193;
    result[1] += 102566383;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 138393390;
    result[1] += 4772185;
  } else {
    result[0] += 52842229;
    result[1] += 90323346;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7fea0c))) ) ) {
    result[0] += 39370533;
    result[1] += 103795042;
  } else {
    result[0] += 113623473;
    result[1] += 29542103;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 35957865;
    result[1] += 107207710;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
    result[0] += 47312229;
    result[1] += 95853347;
  } else {
    result[0] += 143165576;
    result[1] += 0;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 24708779;
    result[1] += 118456796;
  } else {
    result[0] += 125812173;
    result[1] += 17353403;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0cc4f0))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 43439127;
    result[1] += 99726448;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 31814572;
    result[1] += 111351003;
  } else {
    result[0] += 122466938;
    result[1] += 20698637;
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
