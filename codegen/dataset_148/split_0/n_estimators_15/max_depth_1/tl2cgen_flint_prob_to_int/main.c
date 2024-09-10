
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 34240943;
    result[1] += 305722;
    result[2] += 1441264;
    result[3] += 142379432;
    result[4] += 107527043;
    result[5] += 436746;
    result[6] += 0;
  } else {
    result[0] += 257569380;
    result[1] += 240262;
    result[2] += 775041;
    result[3] += 27653463;
    result[4] += 0;
    result[5] += 0;
    result[6] += 93004;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 240616827;
    result[1] += 380108;
    result[2] += 565938;
    result[3] += 30036980;
    result[4] += 14629935;
    result[5] += 25340;
    result[6] += 76021;
  } else {
    result[0] += 166842616;
    result[1] += 0;
    result[2] += 1192797;
    result[3] += 97690153;
    result[4] += 20367025;
    result[5] += 119279;
    result[6] += 119279;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 239772433;
    result[1] += 85194;
    result[2] += 809346;
    result[3] += 38820231;
    result[4] += 6730354;
    result[5] += 42597;
    result[6] += 70995;
  } else {
    result[0] += 26564013;
    result[1] += 2078137;
    result[2] += 813184;
    result[3] += 120351245;
    result[4] += 136524573;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286188328;
    result[1] += 0;
    result[2] += 98878;
    result[3] += 0;
    result[4] += 32959;
    result[5] += 0;
    result[6] += 10986;
  } else {
    result[0] += 131950748;
    result[1] += 623958;
    result[2] += 1871874;
    result[3] += 112903601;
    result[4] += 38685410;
    result[5] += 131359;
    result[6] += 164199;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 240666849;
    result[1] += 141331;
    result[2] += 657192;
    result[3] += 38110118;
    result[4] += 6635527;
    result[5] += 42399;
    result[6] += 77732;
  } else {
    result[0] += 24973532;
    result[1] += 1152624;
    result[2] += 864468;
    result[3] += 122754516;
    result[4] += 136586011;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 66840533;
    result[1] += 1290791;
    result[2] += 897941;
    result[3] += 122456796;
    result[4] += 94845089;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 246212875;
    result[1] += 89483;
    result[2] += 604011;
    result[3] += 33996138;
    result[4] += 5316790;
    result[5] += 37284;
    result[6] += 74569;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 240901435;
    result[1] += 92063;
    result[2] += 694015;
    result[3] += 37547679;
    result[4] += 6933077;
    result[5] += 99145;
    result[6] += 63736;
  } else {
    result[0] += 26038589;
    result[1] += 2146550;
    result[2] += 653297;
    result[3] += 118433583;
    result[4] += 139059132;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 241755821;
    result[1] += 243764;
    result[2] += 571586;
    result[3] += 29192933;
    result[4] += 14457773;
    result[5] += 67245;
    result[6] += 42028;
  } else {
    result[0] += 168412240;
    result[1] += 0;
    result[2] += 1668950;
    result[3] += 96434972;
    result[4] += 19602577;
    result[5] += 91033;
    result[6] += 121378;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286016789;
    result[1] += 0;
    result[2] += 260163;
    result[3] += 0;
    result[4] += 43360;
    result[5] += 0;
    result[6] += 10840;
  } else {
    result[0] += 133998823;
    result[1] += 737362;
    result[2] += 1675823;
    result[3] += 109112848;
    result[4] += 40588438;
    result[5] += 167582;
    result[6] += 50274;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 240241930;
    result[1] += 113328;
    result[2] += 701219;
    result[3] += 38389977;
    result[4] += 6799700;
    result[5] += 28332;
    result[6] += 56664;
  } else {
    result[0] += 28586557;
    result[1] += 1303621;
    result[2] += 651810;
    result[3] += 121236800;
    result[4] += 134552362;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 240306937;
    result[1] += 106324;
    result[2] += 659210;
    result[3] += 38461018;
    result[4] += 6641720;
    result[5] += 77971;
    result[6] += 77971;
  } else {
    result[0] += 24068415;
    result[1] += 1936539;
    result[2] += 1383242;
    result[3] += 123292995;
    result[4] += 135649960;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 242077517;
    result[1] += 329368;
    result[2] += 515166;
    result[3] += 28511502;
    result[4] += 14779362;
    result[5] += 84453;
    result[6] += 33781;
  } else {
    result[0] += 172496914;
    result[1] += 0;
    result[2] += 1342736;
    result[3] += 93006899;
    result[4] += 19186216;
    result[5] += 59677;
    result[6] += 238708;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 240186993;
    result[1] += 105964;
    result[2] += 642853;
    result[3] += 38352211;
    result[4] += 6901843;
    result[5] += 77707;
    result[6] += 63578;
  } else {
    result[0] += 26819427;
    result[1] += 2025927;
    result[2] += 771782;
    result[3] += 118372077;
    result[4] += 138341938;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 54938832;
    result[1] += 1224946;
    result[2] += 1531182;
    result[3] += 129783040;
    result[4] += 98853151;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 245687985;
    result[1] += 110623;
    result[2] += 685867;
    result[3] += 33872993;
    result[4] += 5870433;
    result[5] += 73749;
    result[6] += 29499;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 10602812;
    result[1] += 607452;
    result[2] += 497006;
    result[3] += 139493248;
    result[4] += 134909740;
    result[5] += 220891;
    result[6] += 0;
  } else {
    result[0] += 254951679;
    result[1] += 171880;
    result[2] += 612792;
    result[3] += 30475230;
    result[4] += 0;
    result[5] += 14946;
    result[6] += 104623;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
