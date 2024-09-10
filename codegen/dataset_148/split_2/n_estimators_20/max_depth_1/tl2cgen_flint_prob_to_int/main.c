
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180458979;
    result[1] += 63764;
    result[2] += 568567;
    result[3] += 28470869;
    result[4] += 5074595;
    result[5] += 63764;
    result[6] += 47823;
  } else {
    result[0] += 19832561;
    result[1] += 2157225;
    result[2] += 487115;
    result[3] += 85941098;
    result[4] += 106330363;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214625139;
    result[1] += 0;
    result[2] += 106795;
    result[3] += 0;
    result[4] += 8215;
    result[5] += 0;
    result[6] += 8215;
  } else {
    result[0] += 99957761;
    result[1] += 581437;
    result[2] += 1496892;
    result[3] += 81586811;
    result[4] += 30939896;
    result[5] += 61855;
    result[6] += 123710;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 51601646;
    result[1] += 712614;
    result[2] += 1550983;
    result[3] += 88825255;
    result[4] += 72057864;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 185074065;
    result[1] += 55957;
    result[2] += 425277;
    result[3] += 24873139;
    result[4] += 4213604;
    result[5] += 27978;
    result[6] += 78340;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 48318382;
    result[1] += 873975;
    result[2] += 1248537;
    result[3] += 91143201;
    result[4] += 73164268;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 185185457;
    result[1] += 72815;
    result[2] += 470497;
    result[3] += 25059577;
    result[4] += 3864798;
    result[5] += 33606;
    result[6] += 61612;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214658736;
    result[1] += 0;
    result[2] += 81479;
    result[3] += 0;
    result[4] += 8147;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 99996278;
    result[1] += 488519;
    result[2] += 1565769;
    result[3] += 83161128;
    result[4] += 29311197;
    result[5] += 112735;
    result[6] += 112735;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 44618726;
    result[1] += 521579;
    result[2] += 1043158;
    result[3] += 91560850;
    result[4] += 77004050;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 183983433;
    result[1] += 88167;
    result[2] += 534515;
    result[3] += 25634687;
    result[4] += 4402862;
    result[5] += 27552;
    result[6] += 77146;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180474642;
    result[1] += 79644;
    result[2] += 530963;
    result[3] += 28549930;
    result[4] += 5038847;
    result[5] += 26548;
    result[6] += 47786;
  } else {
    result[0] += 22283218;
    result[1] += 1546469;
    result[2] += 632646;
    result[3] += 85688463;
    result[4] += 104597566;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214593311;
    result[1] += 0;
    result[2] += 138731;
    result[3] += 0;
    result[4] += 16321;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 99470292;
    result[1] += 424873;
    result[2] += 1449567;
    result[3] += 83587536;
    result[4] += 29578666;
    result[5] += 112466;
    result[6] += 124962;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 50654222;
    result[1] += 1106730;
    result[2] += 1532396;
    result[3] += 90113436;
    result[4] += 71341577;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 185715033;
    result[1] += 111688;
    result[2] += 457921;
    result[3] += 24437364;
    result[4] += 3937006;
    result[5] += 27922;
    result[6] += 61428;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214559593;
    result[1] += 0;
    result[2] += 131319;
    result[3] += 0;
    result[4] += 49244;
    result[5] += 0;
    result[6] += 8207;
  } else {
    result[0] += 99774059;
    result[1] += 346867;
    result[2] += 1263590;
    result[3] += 82405891;
    result[4] += 30759745;
    result[5] += 74328;
    result[6] += 123881;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 24766074;
    result[1] += 621605;
    result[2] += 1014198;
    result[3] += 103513684;
    result[4] += 84734653;
    result[5] += 98148;
    result[6] += 0;
  } else {
    result[0] += 194521226;
    result[1] += 87210;
    result[2] += 633733;
    result[3] += 19418982;
    result[4] += 0;
    result[5] += 5814;
    result[6] += 81396;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214601550;
    result[1] += 0;
    result[2] += 114188;
    result[3] += 0;
    result[4] += 24469;
    result[5] += 0;
    result[6] += 8156;
  } else {
    result[0] += 99914081;
    result[1] += 437725;
    result[2] += 1450748;
    result[3] += 82830261;
    result[4] += 29877924;
    result[5] += 150077;
    result[6] += 87545;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 48819826;
    result[1] += 840996;
    result[2] += 1808141;
    result[3] += 89397889;
    result[4] += 73881511;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 185064058;
    result[1] += 95088;
    result[2] += 397133;
    result[3] += 25075324;
    result[4] += 4038452;
    result[5] += 16780;
    result[6] += 61527;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180962899;
    result[1] += 79495;
    result[2] += 625362;
    result[3] += 28120106;
    result[4] += 4854507;
    result[5] += 15899;
    result[6] += 90094;
  } else {
    result[0] += 19535685;
    result[1] += 1658010;
    result[2] += 360437;
    result[3] += 88018715;
    result[4] += 105175516;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 49744921;
    result[1] += 714846;
    result[2] += 1471743;
    result[3] += 90911682;
    result[4] += 71905170;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 185259828;
    result[1] += 78307;
    result[2] += 475441;
    result[3] += 24873960;
    result[4] += 3965738;
    result[5] += 39153;
    result[6] += 55934;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 44559817;
    result[1] += 982937;
    result[2] += 1357389;
    result[3] += 90196185;
    result[4] += 77652035;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 184604564;
    result[1] += 60707;
    result[2] += 496693;
    result[3] += 25370020;
    result[4] += 4106002;
    result[5] += 44150;
    result[6] += 66225;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25038831;
    result[1] += 336543;
    result[2] += 1110593;
    result[3] += 105876564;
    result[4] += 82116597;
    result[5] += 269234;
    result[6] += 0;
  } else {
    result[0] += 194470528;
    result[1] += 150420;
    result[2] += 613252;
    result[3] += 19438953;
    result[4] += 0;
    result[5] += 0;
    result[6] += 75210;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214609796;
    result[1] += 0;
    result[2] += 89661;
    result[3] += 0;
    result[4] += 40755;
    result[5] += 0;
    result[6] += 8151;
  } else {
    result[0] += 100726672;
    result[1] += 525791;
    result[2] += 1326998;
    result[3] += 82123660;
    result[4] += 29857458;
    result[5] += 50075;
    result[6] += 137707;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 25447730;
    result[1] += 165675;
    result[2] += 861511;
    result[3] += 105336375;
    result[4] += 82705125;
    result[5] += 231945;
    result[6] += 0;
  } else {
    result[0] += 194195312;
    result[1] += 139224;
    result[2] += 493087;
    result[3] += 19885934;
    result[4] += 0;
    result[5] += 0;
    result[6] += 34806;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180678043;
    result[1] += 58521;
    result[2] += 675660;
    result[3] += 28271344;
    result[4] += 4979672;
    result[5] += 31920;
    result[6] += 53201;
  } else {
    result[0] += 19385578;
    result[1] += 1507006;
    result[2] += 822003;
    result[3] += 85693845;
    result[4] += 107339932;
    result[5] += 0;
    result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
