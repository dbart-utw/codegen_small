
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
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4852304;
    result[1] += 81047041;
  } else {
    result[0] += 80458024;
    result[1] += 5441321;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 432734;
    result[1] += 85466611;
  } else {
    result[0] += 69596244;
    result[1] += 16303101;
  }
  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
    result[0] += 106041;
    result[1] += 85793304;
  } else {
    result[0] += 65497131;
    result[1] += 20402214;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 431109;
    result[1] += 85468236;
  } else {
    result[0] += 69486260;
    result[1] += 16413085;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 40579987;
    result[1] += 45319358;
  } else {
    result[0] += 85764104;
    result[1] += 135241;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 66763211;
    result[1] += 19136133;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 66742636;
    result[1] += 19156709;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 66682854;
    result[1] += 19216491;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 5252327;
    result[1] += 80647018;
  } else {
    result[0] += 80470056;
    result[1] += 5429289;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 40360819;
    result[1] += 45538526;
  } else {
    result[0] += 84422320;
    result[1] += 1477024;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 717548;
    result[1] += 85181797;
  } else {
    result[0] += 65687313;
    result[1] += 20212032;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80767884;
    result[1] += 5131460;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69507203;
    result[1] += 16392141;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 867670;
    result[1] += 85031675;
  } else {
    result[0] += 65855402;
    result[1] += 20043943;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69242283;
    result[1] += 16657062;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 291202;
    result[1] += 85608143;
  } else {
    result[0] += 65574749;
    result[1] += 20324596;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80724101;
    result[1] += 5175244;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 68717788;
    result[1] += 17181557;
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 5238501;
    result[1] += 80660844;
  } else {
    result[0] += 80602377;
    result[1] += 5296968;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 66813073;
    result[1] += 19086272;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 4235;
    result[1] += 85895110;
  } else {
    result[0] += 67280300;
    result[1] += 18619045;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 68534212;
    result[1] += 17365133;
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 68496160;
    result[1] += 17403185;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4897039;
    result[1] += 81002306;
  } else {
    result[0] += 80264808;
    result[1] += 5634537;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 66575093;
    result[1] += 19324252;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 68590327;
    result[1] += 17309017;
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80715181;
    result[1] += 5184164;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 5052223;
    result[1] += 80847122;
  } else {
    result[0] += 80409529;
    result[1] += 5489816;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 5097054;
    result[1] += 80802291;
  } else {
    result[0] += 80584834;
    result[1] += 5314511;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69507541;
    result[1] += 16391804;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 483985;
    result[1] += 85415360;
  } else {
    result[0] += 69515780;
    result[1] += 16383565;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80725870;
    result[1] += 5173475;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 66750562;
    result[1] += 19148783;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 40621857;
    result[1] += 45277488;
  } else {
    result[0] += 85768392;
    result[1] += 130953;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 68868147;
    result[1] += 17031198;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 40408794;
    result[1] += 45490551;
  } else {
    result[0] += 85088081;
    result[1] += 811264;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 918576;
    result[1] += 84980769;
  } else {
    result[0] += 64815174;
    result[1] += 21084171;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 40604595;
    result[1] += 45294749;
  } else {
    result[0] += 85762086;
    result[1] += 137259;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 778591;
    result[1] += 85120753;
  } else {
    result[0] += 65839398;
    result[1] += 20059946;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 68583610;
    result[1] += 17315735;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 80700920;
    result[1] += 5198424;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 68631624;
    result[1] += 17267721;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 825904;
    result[1] += 85073440;
  } else {
    result[0] += 65792565;
    result[1] += 20106780;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 68807500;
    result[1] += 17091845;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    result[0] += 69210267;
    result[1] += 16689078;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 759331;
    result[1] += 85140014;
  } else {
    result[0] += 65862836;
    result[1] += 20036509;
  }
  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
    result[0] += 76862;
    result[1] += 85822483;
  } else {
    result[0] += 65459352;
    result[1] += 20439993;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 68575946;
    result[1] += 17323399;
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 4881380;
    result[1] += 81017964;
  } else {
    result[0] += 80300372;
    result[1] += 5598972;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 529446;
    result[1] += 85369899;
  } else {
    result[0] += 69582090;
    result[1] += 16317255;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_3/test_data.csv", "r");
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
