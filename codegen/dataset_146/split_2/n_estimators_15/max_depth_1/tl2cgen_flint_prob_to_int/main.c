
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 82082619;
    result[1] += 39623449;
    result[2] += 8430521;
    result[3] += 28817053;
    result[4] += 42535811;
    result[5] += 84841698;
  } else {
    result[0] += 4991093;
    result[1] += 1576134;
    result[2] += 233267948;
    result[3] += 31785384;
    result[4] += 1050756;
    result[5] += 13659834;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 89521561;
    result[1] += 40051134;
    result[2] += 7428221;
    result[3] += 27798397;
    result[4] += 35762676;
    result[5] += 85769160;
  } else {
    result[0] += 2370727;
    result[1] += 0;
    result[2] += 239970267;
    result[3] += 37668219;
    result[4] += 0;
    result[5] += 6321938;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 84158682;
    result[1] += 40482402;
    result[2] += 6946684;
    result[3] += 27706890;
    result[4] += 41919647;
    result[5] += 85116845;
  } else {
    result[0] += 8081927;
    result[1] += 1385473;
    result[2] += 215902925;
    result[3] += 35791394;
    result[4] += 3925507;
    result[5] += 21243924;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 91449717;
    result[1] += 37801278;
    result[2] += 9817509;
    result[3] += 27056129;
    result[4] += 38728916;
    result[5] += 81477601;
  } else {
    result[0] += 3317562;
    result[1] += 3827956;
    result[2] += 232229366;
    result[3] += 28326878;
    result[4] += 1786379;
    result[5] += 16843009;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 90412379;
    result[1] += 37697108;
    result[2] += 10467205;
    result[3] += 27381601;
    result[4] += 39441642;
    result[5] += 80931215;
  } else {
    result[0] += 5448737;
    result[1] += 3814116;
    result[2] += 229119409;
    result[3] += 28605871;
    result[4] += 1362184;
    result[5] += 17980833;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 88927997;
    result[1] += 37626354;
    result[2] += 9271381;
    result[3] += 28123189;
    result[4] += 41103122;
    result[5] += 81279107;
  } else {
    result[0] += 4346097;
    result[1] += 1789569;
    result[2] += 230854492;
    result[3] += 37069658;
    result[4] += 1278264;
    result[5] += 10993071;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 87503859;
    result[1] += 40609068;
    result[2] += 4631584;
    result[3] += 20676715;
    result[4] += 42676740;
    result[5] += 90233185;
  } else {
    result[0] += 9026568;
    result[1] += 1469441;
    result[2] += 205721796;
    result[3] += 41144359;
    result[4] += 2309122;
    result[5] += 26659865;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 88572374;
    result[1] += 39340329;
    result[2] += 9438658;
    result[3] += 28315976;
    result[4] += 41605607;
    result[5] += 79058206;
  } else {
    result[0] += 1661496;
    result[1] += 1661496;
    result[2] += 236209355;
    result[3] += 28245432;
    result[4] += 2492244;
    result[5] += 16061128;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 91207732;
    result[1] += 40375909;
    result[2] += 7882149;
    result[3] += 24289889;
    result[4] += 38606447;
    result[5] += 83969023;
  } else {
    result[0] += 2940209;
    result[1] += 226169;
    result[2] += 214182939;
    result[3] += 40484420;
    result[4] += 5201908;
    result[5] += 23295504;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 91172148;
    result[1] += 37056540;
    result[2] += 6040052;
    result[3] += 25058057;
    result[4] += 41464146;
    result[5] += 85540207;
  } else {
    result[0] += 3910440;
    result[1] += 1086233;
    result[2] += 208556833;
    result[3] += 41276873;
    result[4] += 4996674;
    result[5] += 26504097;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 87172469;
    result[1] += 43788961;
    result[2] += 5351984;
    result[3] += 23273022;
    result[4] += 41437331;
    result[5] += 85307384;
  } else {
    result[0] += 3095471;
    result[1] += 663315;
    result[2] += 216683034;
    result[3] += 41788870;
    result[4] += 4864313;
    result[5] += 19236146;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 92602979;
    result[1] += 41317516;
    result[2] += 6543842;
    result[3] += 27088464;
    result[4] += 36752045;
    result[5] += 82026304;
  } else {
    result[0] += 2154891;
    result[1] += 0;
    result[2] += 242963969;
    result[3] += 34747618;
    result[4] += 0;
    result[5] += 6464673;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 89443008;
    result[1] += 38274795;
    result[2] += 6081800;
    result[3] += 26922102;
    result[4] += 41923875;
    result[5] += 83685570;
  } else {
    result[0] += 6633154;
    result[1] += 4200997;
    result[2] += 209386565;
    result[3] += 33829086;
    result[4] += 3095471;
    result[5] += 29185878;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 86658844;
    result[1] += 39190152;
    result[2] += 10481087;
    result[3] += 27721716;
    result[4] += 39949651;
    result[5] += 82329700;
  } else {
    result[0] += 1084587;
    result[1] += 1626881;
    result[2] += 236982412;
    result[3] += 33351071;
    result[4] += 813440;
    result[5] += 12472758;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 86516203;
    result[1] += 41227938;
    result[2] += 4450743;
    result[3] += 25298961;
    result[4] += 38729275;
    result[5] += 90108031;
  } else {
    result[0] += 2964602;
    result[1] += 0;
    result[2] += 232968315;
    result[3] += 41257379;
    result[4] += 247050;
    result[5] += 8893806;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
