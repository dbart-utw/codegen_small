
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
    result[0] += 22465982;
    result[1] += 396458;
    result[2] += 925069;
    result[3] += 107506335;
    result[4] += 83190212;
    result[5] += 264305;
    result[6] += 0;
  } else {
    result[0] += 193221292;
    result[1] += 139296;
    result[2] += 516556;
    result[3] += 20784159;
    result[4] += 0;
    result[5] += 0;
    result[6] += 87060;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 53166055;
    result[1] += 449520;
    result[2] += 1103369;
    result[3] += 90026764;
    result[4] += 70002654;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 184848115;
    result[1] += 84226;
    result[2] += 460435;
    result[3] += 25189205;
    result[4] += 4076541;
    result[5] += 33690;
    result[6] += 56150;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 164237397;
    result[1] += 116957;
    result[2] += 687124;
    result[3] += 40525731;
    result[4] += 9078816;
    result[5] += 29239;
    result[6] += 73098;
  } else {
    result[0] += 172493376;
    result[1] += 186342;
    result[2] += 514304;
    result[3] += 28756349;
    result[4] += 12671279;
    result[5] += 52175;
    result[6] += 74536;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214592583;
    result[1] += 0;
    result[2] += 131184;
    result[3] += 0;
    result[4] += 16398;
    result[5] += 0;
    result[6] += 8199;
  } else {
    result[0] += 98254697;
    result[1] += 471483;
    result[2] += 1178708;
    result[3] += 83973707;
    result[4] += 30621617;
    result[5] += 148889;
    result[6] += 99259;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25778940;
    result[1] += 424210;
    result[2] += 717894;
    result[3] += 106052603;
    result[4] += 81448399;
    result[5] += 326315;
    result[6] += 0;
  } else {
    result[0] += 193534700;
    result[1] += 168685;
    result[2] += 418805;
    result[3] += 20562189;
    result[4] += 0;
    result[5] += 0;
    result[6] += 63984;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 43209019;
    result[1] += 648366;
    result[2] += 1065174;
    result[3] += 97255028;
    result[4] += 72570775;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 183489030;
    result[1] += 66309;
    result[2] += 574681;
    result[3] += 25694874;
    result[4] += 4812953;
    result[5] += 38680;
    result[6] += 71835;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 43627112;
    result[1] += 1219391;
    result[2] += 1174228;
    result[3] += 95925452;
    result[4] += 72802179;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 183321774;
    result[1] += 99766;
    result[2] += 410153;
    result[3] += 26360645;
    result[4] += 4395288;
    result[5] += 72053;
    result[6] += 88681;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214616404;
    result[1] += 0;
    result[2] += 115464;
    result[3] += 0;
    result[4] += 8247;
    result[5] += 0;
    result[6] += 8247;
  } else {
    result[0] += 98052268;
    result[1] += 381239;
    result[2] += 1180611;
    result[3] += 84733491;
    result[4] += 30167090;
    result[5] += 98384;
    result[6] += 135278;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180840449;
    result[1] += 127214;
    result[2] += 583065;
    result[3] += 28315786;
    result[4] += 4802340;
    result[5] += 21202;
    result[6] += 58306;
  } else {
    result[0] += 20424827;
    result[1] += 863020;
    result[2] += 503428;
    result[3] += 88675396;
    result[4] += 104281690;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 52049900;
    result[1] += 978061;
    result[2] += 1148159;
    result[3] += 88450811;
    result[4] += 72121431;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 184717104;
    result[1] += 50266;
    result[2] += 614364;
    result[3] += 25328578;
    result[4] += 3931933;
    result[5] += 27925;
    result[6] += 78191;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25973387;
    result[1] += 328361;
    result[2] += 755231;
    result[3] += 107505526;
    result[4] += 79857495;
    result[5] += 328361;
    result[6] += 0;
  } else {
    result[0] += 193738351;
    result[1] += 104585;
    result[2] += 493874;
    result[3] += 20365070;
    result[4] += 0;
    result[5] += 0;
    result[6] += 46482;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 179829758;
    result[1] += 79747;
    result[2] += 584812;
    result[3] += 28794027;
    result[4] += 5337740;
    result[5] += 58481;
    result[6] += 63797;
  } else {
    result[0] += 21702924;
    result[1] += 1174999;
    result[2] += 276470;
    result[3] += 92410223;
    result[4] += 99183747;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180220175;
    result[1] += 84861;
    result[2] += 594033;
    result[3] += 28921999;
    result[4] += 4879559;
    result[5] += 26519;
    result[6] += 21215;
  } else {
    result[0] += 20897134;
    result[1] += 1283782;
    result[2] += 784534;
    result[3] += 89508202;
    result[4] += 102274711;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 179916831;
    result[1] += 95720;
    result[2] += 712584;
    result[3] += 28678848;
    result[4] += 5248659;
    result[5] += 42542;
    result[6] += 53177;
  } else {
    result[0] += 21288817;
    result[1] += 1309021;
    result[2] += 413375;
    result[3] += 93973939;
    result[4] += 97763211;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214559470;
    result[1] += 0;
    result[2] += 139617;
    result[3] += 0;
    result[4] += 24638;
    result[5] += 0;
    result[6] += 24638;
  } else {
    result[0] += 99738189;
    result[1] += 457912;
    result[2] += 1608880;
    result[3] += 82820196;
    result[4] += 29850913;
    result[5] += 86632;
    result[6] += 185640;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180098474;
    result[1] += 37280;
    result[2] += 484651;
    result[3] += 28935267;
    result[4] += 5080847;
    result[5] += 31955;
    result[6] += 79887;
  } else {
    result[0] += 19393574;
    result[1] += 1283895;
    result[2] += 540587;
    result[3] += 92372880;
    result[4] += 101157426;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 24600465;
    result[1] += 391519;
    result[2] += 750412;
    result[3] += 106852156;
    result[4] += 81860171;
    result[5] += 293639;
    result[6] += 0;
  } else {
    result[0] += 192713942;
    result[1] += 186140;
    result[2] += 436267;
    result[3] += 21324760;
    result[4] += 0;
    result[5] += 0;
    result[6] += 87253;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214608324;
    result[1] += 0;
    result[2] += 107089;
    result[3] += 0;
    result[4] += 8237;
    result[5] += 0;
    result[6] += 24713;
  } else {
    result[0] += 99199921;
    result[1] += 394237;
    result[2] += 1453749;
    result[3] += 81915086;
    result[4] += 31662170;
    result[5] += 61599;
    result[6] += 61599;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 180868084;
    result[1] += 209176;
    result[2] += 431030;
    result[3] += 22014258;
    result[4] += 11175104;
    result[5] += 19016;
    result[6] += 31693;
  } else {
    result[0] += 126447301;
    result[1] += 0;
    result[2] += 982114;
    result[3] += 71247976;
    result[4] += 15914726;
    result[5] += 44641;
    result[6] += 111603;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214658607;
    result[1] += 0;
    result[2] += 73437;
    result[3] += 0;
    result[4] += 16319;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 98900233;
    result[1] += 524934;
    result[2] += 1324835;
    result[3] += 82939712;
    result[4] += 30858672;
    result[5] += 99987;
    result[6] += 99987;
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
