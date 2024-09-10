
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
    result[0] += 29862004;
    result[1] += 56037341;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e2eaf25))) ) ) {
    result[0] += 57528919;
    result[1] += 28370426;
  } else {
    result[0] += 19522578;
    result[1] += 66376767;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 80042572;
    result[1] += 5856773;
  } else {
    result[0] += 17650550;
    result[1] += 68248795;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 28754442;
    result[1] += 57144903;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 19884107;
    result[1] += 66015238;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 18527309;
    result[1] += 67372036;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3d1244))) ) ) {
    result[0] += 68214186;
    result[1] += 17685159;
  } else {
    result[0] += 26871077;
    result[1] += 59028268;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 26819252;
    result[1] += 59080093;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df28b6e))) ) ) {
    result[0] += 51724337;
    result[1] += 34175008;
  } else {
    result[0] += 18190449;
    result[1] += 67708896;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dfb59de))) ) ) {
    result[0] += 83256289;
    result[1] += 2643056;
  } else {
    result[0] += 14316557;
    result[1] += 71582788;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec100e6))) ) ) {
    result[0] += 77773732;
    result[1] += 8125613;
  } else {
    result[0] += 14089310;
    result[1] += 71810035;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20679472;
    result[1] += 65219873;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d0801f7))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 16000858;
    result[1] += 69898487;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f15a21e))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24170811;
    result[1] += 61728534;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f673238))) ) ) {
    result[0] += 29112330;
    result[1] += 56787015;
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d5cfb))) ) ) {
    result[0] += 79391819;
    result[1] += 6507526;
  } else {
    result[0] += 15697342;
    result[1] += 70202003;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 28751433;
    result[1] += 57147911;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d0801f7))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 15011536;
    result[1] += 70887809;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 22167573;
    result[1] += 63731772;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    result[0] += 31133824;
    result[1] += 54765521;
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 55623346;
    result[1] += 30275998;
  } else {
    result[0] += 15839595;
    result[1] += 70059750;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
    result[0] += 75727054;
    result[1] += 10172290;
  } else {
    result[0] += 15618062;
    result[1] += 70281283;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 16341826;
    result[1] += 69557519;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e29fa98))) ) ) {
    result[0] += 60681189;
    result[1] += 25218156;
  } else {
    result[0] += 16175850;
    result[1] += 69723495;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 19621677;
    result[1] += 66277667;
  } else {
    result[0] += 71582788;
    result[1] += 14316557;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25478619;
    result[1] += 60420726;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d73fa6e))) ) ) {
    result[0] += 84215045;
    result[1] += 1684300;
  } else {
    result[0] += 21069650;
    result[1] += 64829695;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 27889398;
    result[1] += 58009947;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 26708199;
    result[1] += 59191145;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 84109776;
    result[1] += 1789569;
  } else {
    result[0] += 17579401;
    result[1] += 68319944;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 57816867;
    result[1] += 28082478;
  } else {
    result[0] += 15667176;
    result[1] += 70232169;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 80445419;
    result[1] += 5453926;
  } else {
    result[0] += 13314398;
    result[1] += 72584947;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20452225;
    result[1] += 65447120;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 19522578;
    result[1] += 66376767;
  } else {
    result[0] += 75327118;
    result[1] += 10572227;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20355295;
    result[1] += 65544050;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 22222716;
    result[1] += 63676629;
  } else {
    result[0] += 67888192;
    result[1] += 18011153;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
    result[0] += 28151886;
    result[1] += 57747459;
  } else {
    result[0] += 82463372;
    result[1] += 3435973;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e616096))) ) ) {
    result[0] += 56470866;
    result[1] += 29428479;
  } else {
    result[0] += 15517301;
    result[1] += 70382044;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 26063476;
    result[1] += 59835869;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 27430043;
    result[1] += 58469302;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 15858340;
    result[1] += 70041005;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25769803;
    result[1] += 60129542;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e0dd980))) ) ) {
    result[0] += 53133616;
    result[1] += 32765729;
  } else {
    result[0] += 17593841;
    result[1] += 68305503;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e09ff))) ) ) {
    result[0] += 58253579;
    result[1] += 27645766;
  } else {
    result[0] += 22939029;
    result[1] += 62960316;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 15233381;
    result[1] += 70665964;
  } else {
    result[0] += 70151132;
    result[1] += 15748213;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f4d77da))) ) ) {
    result[0] += 78090314;
    result[1] += 7809031;
  } else {
    result[0] += 23902426;
    result[1] += 61996919;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 60736911;
    result[1] += 25162434;
  } else {
    result[0] += 19903506;
    result[1] += 65995838;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    result[0] += 27049155;
    result[1] += 58850190;
  } else {
    result[0] += 79763678;
    result[1] += 6135667;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f03266c))) ) ) {
    result[0] += 82937299;
    result[1] += 2962046;
  } else {
    result[0] += 27531841;
    result[1] += 58367504;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3e92a3))) ) ) {
    result[0] += 23167873;
    result[1] += 62731472;
  } else {
    result[0] += 81994830;
    result[1] += 3904515;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
