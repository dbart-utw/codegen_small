
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
    result[0] += 42317239;
    result[1] += 976551;
    result[2] += 1116059;
    result[3] += 93469946;
    result[4] += 76868567;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 184183644;
    result[1] += 71800;
    result[2] += 579923;
    result[3] += 25240471;
    result[4] += 4551017;
    result[5] += 66276;
    result[6] += 55230;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214592898;
    result[1] += 0;
    result[2] += 130919;
    result[3] += 0;
    result[4] += 8182;
    result[5] += 0;
    result[6] += 16364;
  } else {
    result[0] += 101020717;
    result[1] += 448040;
    result[2] += 1493468;
    result[3] += 81219810;
    result[4] += 30342307;
    result[5] += 87119;
    result[6] += 136901;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25884406;
    result[1] += 428113;
    result[2] += 691568;
    result[3] += 106666148;
    result[4] += 80781741;
    result[5] += 296386;
    result[6] += 0;
  } else {
    result[0] += 194207923;
    result[1] += 52265;
    result[2] += 662032;
    result[3] += 19762261;
    result[4] += 0;
    result[5] += 0;
    result[6] += 63880;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 50452438;
    result[1] += 773061;
    result[2] += 1708872;
    result[3] += 89553078;
    result[4] += 72260912;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 185751548;
    result[1] += 89895;
    result[2] += 528134;
    result[3] += 24423398;
    result[4] += 3854256;
    result[5] += 16855;
    result[6] += 84276;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214575757;
    result[1] += 0;
    result[2] += 139729;
    result[3] += 0;
    result[4] += 16438;
    result[5] += 0;
    result[6] += 16438;
  } else {
    result[0] += 98220831;
    result[1] += 407914;
    result[2] += 1508046;
    result[3] += 83597720;
    result[4] += 30865519;
    result[5] += 61805;
    result[6] += 86527;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 44001275;
    result[1] += 1014704;
    result[2] += 1291442;
    result[3] += 93076073;
    result[4] += 75364868;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 184148215;
    result[1] += 55284;
    result[2] += 519677;
    result[3] += 25431018;
    result[4] += 4494656;
    result[5] += 44227;
    result[6] += 55284;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 163959699;
    result[1] += 161841;
    result[2] += 720928;
    result[3] += 39724622;
    result[4] += 10107709;
    result[5] += 29425;
    result[6] += 44138;
  } else {
    result[0] += 172057245;
    result[1] += 163453;
    result[2] += 616666;
    result[3] += 28188323;
    result[4] += 13663238;
    result[5] += 44578;
    result[6] += 14859;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    result[0] += 195252827;
    result[1] += 65441;
    result[2] += 362901;
    result[3] += 18763784;
    result[4] += 232018;
    result[5] += 11898;
    result[6] += 59492;
  } else {
    result[0] += 41423836;
    result[1] += 435124;
    result[2] += 1740497;
    result[3] += 99585456;
    result[4] += 71447416;
    result[5] += 116033;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 24796798;
    result[1] += 235839;
    result[2] += 1246578;
    result[3] += 108519686;
    result[4] += 79713622;
    result[5] += 235839;
    result[6] += 0;
  } else {
    result[0] += 194266116;
    result[1] += 127254;
    result[2] += 688333;
    result[3] += 19614601;
    result[4] += 0;
    result[5] += 0;
    result[6] += 52058;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 43489287;
    result[1] += 640220;
    result[2] += 1326171;
    result[3] += 91231470;
    result[4] += 78061213;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 183419365;
    result[1] += 66410;
    result[2] += 487007;
    result[3] += 26215416;
    result[4] += 4482686;
    result[5] += 38739;
    result[6] += 38739;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 180445333;
    result[1] += 215185;
    result[2] += 588594;
    result[3] += 22284312;
    result[4] += 11189623;
    result[5] += 12657;
    result[6] += 12657;
  } else {
    result[0] += 127650611;
    result[1] += 0;
    result[2] += 1301641;
    result[3] += 71141427;
    result[4] += 14564916;
    result[5] += 44884;
    result[6] += 44884;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214609670;
    result[1] += 0;
    result[2] += 114219;
    result[3] += 0;
    result[4] += 8158;
    result[5] += 0;
    result[6] += 16317;
  } else {
    result[0] += 99285802;
    result[1] += 375040;
    result[2] += 1337645;
    result[3] += 83034034;
    result[4] += 30465814;
    result[5] += 112512;
    result[6] += 137514;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 50417750;
    result[1] += 534609;
    result[2] += 1768322;
    result[3] += 86853417;
    result[4] += 75174264;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 185345151;
    result[1] += 56102;
    result[2] += 415156;
    result[3] += 24774773;
    result[4] += 4033755;
    result[5] += 33661;
    result[6] += 89763;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 24136563;
    result[1] += 268184;
    result[2] += 905121;
    result[3] += 107575320;
    result[4] += 81427377;
    result[5] += 435799;
    result[6] += 0;
  } else {
    result[0] += 193866352;
    result[1] += 121575;
    result[2] += 497879;
    result[3] += 20216242;
    result[4] += 0;
    result[5] += 0;
    result[6] += 46314;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214529092;
    result[1] += 0;
    result[2] += 186787;
    result[3] += 0;
    result[4] += 32484;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 99889401;
    result[1] += 616912;
    result[2] += 1510805;
    result[3] += 81596069;
    result[4] += 30833015;
    result[5] += 100720;
    result[6] += 201440;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 23816391;
    result[1] += 567852;
    result[2] += 1068898;
    result[3] += 106689419;
    result[4] += 82538996;
    result[5] += 66806;
    result[6] += 0;
  } else {
    result[0] += 193934497;
    result[1] += 81100;
    result[2] += 666182;
    result[3] += 19997069;
    result[4] += 0;
    result[5] += 0;
    result[6] += 69514;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25086007;
    result[1] += 202306;
    result[2] += 944097;
    result[3] += 105266822;
    result[4] += 82743364;
    result[5] += 505766;
    result[6] += 0;
  } else {
    result[0] += 193609551;
    result[1] += 109887;
    result[2] += 584136;
    result[3] += 20386953;
    result[4] += 0;
    result[5] += 0;
    result[6] += 57835;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214617390;
    result[1] += 0;
    result[2] += 114602;
    result[3] += 0;
    result[4] += 16371;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 98841958;
    result[1] += 298503;
    result[2] += 1492517;
    result[3] += 82449143;
    result[4] += 31355301;
    result[5] += 124376;
    result[6] += 186564;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214560761;
    result[1] += 0;
    result[2] += 154976;
    result[3] += 0;
    result[4] += 24469;
    result[5] += 0;
    result[6] += 8156;
  } else {
    result[0] += 100358468;
    result[1] += 325148;
    result[2] += 1250572;
    result[3] += 82562817;
    result[4] += 29913701;
    result[5] += 125057;
    result[6] += 212597;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214568330;
    result[1] += 0;
    result[2] += 147300;
    result[3] += 0;
    result[4] += 24550;
    result[5] += 0;
    result[6] += 8183;
  } else {
    result[0] += 99024654;
    result[1] += 410632;
    result[2] += 1430992;
    result[3] += 83644600;
    result[4] += 30038391;
    result[5] += 62217;
    result[6] += 136877;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
