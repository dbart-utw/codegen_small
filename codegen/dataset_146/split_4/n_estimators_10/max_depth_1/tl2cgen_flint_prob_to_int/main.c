
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 147480707;
    result[1] += 58193782;
    result[2] += 9799784;
    result[3] += 32786933;
    result[4] += 58072797;
    result[5] += 123162724;
  } else {
    result[0] += 4375750;
    result[1] += 1009788;
    result[2] += 337269375;
    result[3] += 47123465;
    result[4] += 4712346;
    result[5] += 35006003;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 132244485;
    result[1] += 64930850;
    result[2] += 11556500;
    result[3] += 40269041;
    result[4] += 59212170;
    result[5] += 121283681;
  } else {
    result[0] += 18291425;
    result[1] += 1758790;
    result[2] += 323265761;
    result[3] += 48894386;
    result[4] += 6331647;
    result[5] += 30954719;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 138574145;
    result[1] += 66140358;
    result[2] += 7718354;
    result[3] += 32060856;
    result[4] += 65427895;
    result[5] += 119575119;
  } else {
    result[0] += 5683993;
    result[1] += 2841996;
    result[2] += 320079862;
    result[3] += 56484681;
    result[4] += 5683993;
    result[5] += 38722203;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 132738844;
    result[1] += 61752418;
    result[2] += 13735584;
    result[3] += 41783879;
    result[4] += 58289666;
    result[5] += 121196335;
  } else {
    result[0] += 12049229;
    result[1] += 2720793;
    result[2] += 339710535;
    result[3] += 46253493;
    result[4] += 2720793;
    result[5] += 26041883;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 130272257;
    result[1] += 62553639;
    result[2] += 15609715;
    result[3] += 39942507;
    result[4] += 60143315;
    result[5] += 120975294;
  } else {
    result[0] += 10697796;
    result[1] += 1188644;
    result[2] += 349461361;
    result[3] += 41206328;
    result[4] += 3565932;
    result[5] += 23376667;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 131114345;
    result[1] += 58578136;
    result[2] += 13271609;
    result[3] += 39357185;
    result[4] += 61552807;
    result[5] += 125622644;
  } else {
    result[0] += 9214948;
    result[1] += 1201949;
    result[2] += 349366742;
    result[3] += 43670842;
    result[4] += 4807799;
    result[5] += 21234446;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 135558113;
    result[1] += 61012619;
    result[2] += 10092313;
    result[3] += 40598622;
    result[4] += 59407024;
    result[5] += 122828036;
  } else {
    result[0] += 6357028;
    result[1] += 0;
    result[2] += 361555988;
    result[3] += 50061598;
    result[4] += 397314;
    result[5] += 11124799;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 135240694;
    result[1] += 65230935;
    result[2] += 9438175;
    result[3] += 34049114;
    result[4] += 64036230;
    result[5] += 121501578;
  } else {
    result[0] += 5582410;
    result[1] += 1046702;
    result[2] += 327617732;
    result[3] += 49194995;
    result[4] += 6280212;
    result[5] += 39774676;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 130164511;
    result[1] += 61274251;
    result[2] += 14655046;
    result[3] += 41772653;
    result[4] += 62774374;
    result[5] += 118855892;
  } else {
    result[0] += 12449180;
    result[1] += 3890368;
    result[2] += 334571727;
    result[3] += 36569467;
    result[4] += 8558811;
    result[5] += 33457172;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 15359485;
    result[1] += 2559914;
    result[2] += 284434;
    result[3] += 60869072;
    result[4] += 89312564;
    result[5] += 261111256;
  } else {
    result[0] += 145842375;
    result[1] += 67092673;
    result[2] += 131206329;
    result[3] += 35359652;
    result[4] += 27847345;
    result[5] += 22148353;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
