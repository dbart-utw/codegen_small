
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
    result[0] += 87228542;
    result[1] += 1661496;
    result[2] += 3969129;
    result[3] += 185626031;
    result[4] += 151011530;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 366499011;
    result[1] += 210066;
    result[2] += 995049;
    result[3] += 52649198;
    result[4] += 8999674;
    result[5] += 55280;
    result[6] += 88448;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 51510019;
    result[1] += 874190;
    result[2] += 2353590;
    result[3] += 211083487;
    result[4] += 163339213;
    result[5] += 336227;
    result[6] += 0;
  } else {
    result[0] += 387673077;
    result[1] += 335607;
    result[2] += 1122549;
    result[3] += 40226622;
    result[4] += 0;
    result[5] += 11572;
    result[6] += 127299;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 360206968;
    result[1] += 148622;
    result[2] += 1093434;
    result[3] += 58164332;
    result[4] += 9713517;
    result[5] += 63695;
    result[6] += 106158;
  } else {
    result[0] += 38826956;
    result[1] += 2259022;
    result[2] += 705944;
    result[3] += 175921408;
    result[4] += 211783397;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429216884;
    result[1] += 0;
    result[2] += 213999;
    result[3] += 0;
    result[4] += 16461;
    result[5] += 0;
    result[6] += 49384;
  } else {
    result[0] += 196504190;
    result[1] += 937496;
    result[2] += 3157882;
    result[3] += 168576664;
    result[4] += 59975101;
    result[5] += 172696;
    result[6] += 172696;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 52022054;
    result[1] += 397620;
    result[2] += 3379776;
    result[3] += 211998154;
    result[4] += 161235232;
    result[5] += 463890;
    result[6] += 0;
  } else {
    result[0] += 387972949;
    result[1] += 266847;
    result[2] += 962971;
    result[3] += 40212746;
    result[4] += 0;
    result[5] += 0;
    result[6] += 81214;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 429151197;
    result[1] += 0;
    result[2] += 279716;
    result[3] += 0;
    result[4] += 65815;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 201527953;
    result[1] += 715951;
    result[2] += 3085997;
    result[3] += 164816932;
    result[4] += 58979576;
    result[5] += 123439;
    result[6] += 246879;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 48305749;
    result[1] += 808464;
    result[2] += 1549556;
    result[3] += 216533723;
    result[4] += 161692886;
    result[5] += 606348;
    result[6] += 0;
  } else {
    result[0] += 387501493;
    result[1] += 277654;
    result[2] += 1110617;
    result[3] += 40479705;
    result[4] += 0;
    result[5] += 11568;
    result[6] += 115689;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 50702569;
    result[1] += 548877;
    result[2] += 1783852;
    result[3] += 217767191;
    result[4] += 157939532;
    result[5] += 754706;
    result[6] += 0;
  } else {
    result[0] += 388542301;
    result[1] += 184531;
    result[2] += 1210987;
    result[3] += 39466643;
    result[4] += 0;
    result[5] += 0;
    result[6] += 92265;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 360118284;
    result[1] += 233525;
    result[2] += 1358696;
    result[3] += 57160790;
    result[4] += 10423750;
    result[5] += 84918;
    result[6] += 116762;
  } else {
    result[0] += 41140075;
    result[1] += 2968871;
    result[2] += 1272373;
    result[3] += 176859910;
    result[4] += 207255498;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 88239824;
    result[1] += 2170605;
    result[2] += 2831224;
    result[3] += 187049553;
    result[4] += 149205521;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 367071994;
    result[1] += 154380;
    result[2] += 1025525;
    result[3] += 51871745;
    result[4] += 9218703;
    result[5] += 88217;
    result[6] += 66162;
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
