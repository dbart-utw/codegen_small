
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 63531193;
    result[1] += 29209068;
    result[2] += 7875282;
    result[3] += 22450431;
    result[4] += 29032756;
    result[5] += 62649632;
  } else {
    result[0] += 6779598;
    result[1] += 183232;
    result[2] += 168390569;
    result[3] += 24186675;
    result[4] += 2748485;
    result[5] += 12459802;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65253120;
    result[1] += 28023165;
    result[2] += 7538058;
    result[3] += 20370021;
    result[4] += 29346641;
    result[5] += 64217356;
  } else {
    result[0] += 3729633;
    result[1] += 1570371;
    result[2] += 176274251;
    result[3] += 20807428;
    result[4] += 1374075;
    result[5] += 10992603;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 69519703;
    result[1] += 31508930;
    result[2] += 5001417;
    result[3] += 16754748;
    result[4] += 31071306;
    result[5] += 60892258;
  } else {
    result[0] += 8027976;
    result[1] += 2315762;
    result[2] += 152840317;
    result[3] += 33038209;
    result[4] += 3087683;
    result[5] += 15438415;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 67689828;
    result[1] += 32474433;
    result[2] += 5720267;
    result[3] += 17935421;
    result[4] += 28958852;
    result[5] += 61969561;
  } else {
    result[0] += 3866173;
    result[1] += 175735;
    result[2] += 164136638;
    result[3] += 27766155;
    result[4] += 2987497;
    result[5] += 15816164;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 68266652;
    result[1] += 28701725;
    result[2] += 7775766;
    result[3] += 19496590;
    result[4] += 27729754;
    result[5] += 62777876;
  } else {
    result[0] += 3211190;
    result[1] += 2207693;
    result[2] += 172601489;
    result[3] += 22879732;
    result[4] += 1404895;
    result[5] += 12443363;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 62236891;
    result[1] += 30468378;
    result[2] += 6726784;
    result[3] += 19275912;
    result[4] += 30016157;
    result[5] += 66024240;
  } else {
    result[0] += 1254615;
    result[1] += 1254615;
    result[2] += 179828231;
    result[3] += 23628593;
    result[4] += 1045512;
    result[5] += 7736796;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 7265396;
    result[1] += 5029890;
    result[2] += 2375225;
    result[3] += 28642429;
    result[4] += 35069511;
    result[5] += 136365910;
  } else {
    result[0] += 73193346;
    result[1] += 31667058;
    result[2] += 66402884;
    result[3] += 16714983;
    result[4] += 15409125;
    result[5] += 11360965;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 70864497;
    result[1] += 29244688;
    result[2] += 3755633;
    result[3] += 17238974;
    result[4] += 30907018;
    result[5] += 62737552;
  } else {
    result[0] += 2246993;
    result[1] += 641998;
    result[2] += 150869553;
    result[3] += 36914890;
    result[4] += 3530989;
    result[5] += 20543939;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
    result[0] += 3674401;
    result[1] += 816533;
    result[2] += 952622;
    result[3] += 24632100;
    result[4] += 43820642;
    result[5] += 140852064;
  } else {
    result[0] += 72596583;
    result[1] += 32860202;
    result[2] += 64464179;
    result[3] += 20099600;
    result[4] += 13421772;
    result[5] += 11306025;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 68014491;
    result[1] += 28566086;
    result[2] += 4258298;
    result[3] += 17033194;
    result[4] += 30340377;
    result[5] += 66535915;
  } else {
    result[0] += 2695586;
    result[1] += 0;
    result[2] += 171798691;
    result[3] += 30370270;
    result[4] += 0;
    result[5] += 9883815;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 66237320;
    result[1] += 29748691;
    result[2] += 6333217;
    result[3] += 20975151;
    result[4] += 28877147;
    result[5] += 62576836;
  } else {
    result[0] += 2850642;
    result[1] += 950214;
    result[2] += 173509077;
    result[3] += 25655778;
    result[4] += 760171;
    result[5] += 11022482;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64099660;
    result[1] += 30280563;
    result[2] += 7657154;
    result[3] += 21289208;
    result[4] += 29816493;
    result[5] += 61605284;
  } else {
    result[0] += 4203259;
    result[1] += 3247973;
    result[2] += 171760480;
    result[3] += 21971585;
    result[4] += 955286;
    result[5] += 12609779;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 67123860;
    result[1] += 31132514;
    result[2] += 3659120;
    result[3] += 17875701;
    result[4] += 29512903;
    result[5] += 65444264;
  } else {
    result[0] += 2757603;
    result[1] += 172350;
    result[2] += 156838693;
    result[3] += 34814742;
    result[4] += 4481105;
    result[5] += 15683869;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 66799212;
    result[1] += 28587557;
    result[2] += 7630941;
    result[3] += 20273247;
    result[4] += 29726503;
    result[5] += 61730900;
  } else {
    result[0] += 1221317;
    result[1] += 1831976;
    result[2] += 173630668;
    result[3] += 27479648;
    result[4] += 1221317;
    result[5] += 9363435;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 68763603;
    result[1] += 28743431;
    result[2] += 4351350;
    result[3] += 16302244;
    result[4] += 31378756;
    result[5] += 65208978;
  } else {
    result[0] += 5035702;
    result[1] += 2111746;
    result[2] += 156919001;
    result[3] += 31351311;
    result[4] += 2923956;
    result[5] += 16406645;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 67674304;
    result[1] += 31426589;
    result[2] += 3749763;
    result[3] += 16487055;
    result[4] += 31783710;
    result[5] += 63626940;
  } else {
    result[0] += 3702558;
    result[1] += 0;
    result[2] += 177017535;
    result[3] += 25388969;
    result[4] += 176312;
    result[5] += 8462989;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    result[0] += 5126251;
    result[1] += 2355304;
    result[2] += 415641;
    result[3] += 26462540;
    result[4] += 40732915;
    result[5] += 139655710;
  } else {
    result[0] += 71123924;
    result[1] += 33300417;
    result[2] += 68174084;
    result[3] += 17895697;
    result[4] += 12782640;
    result[5] += 11471600;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65136128;
    result[1] += 29612548;
    result[2] += 7804857;
    result[3] += 20889472;
    result[4] += 29956880;
    result[5] += 61348477;
  } else {
    result[0] += 792429;
    result[1] += 1584858;
    result[2] += 179485256;
    result[3] += 21791808;
    result[4] += 0;
    result[5] += 11094011;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 63009656;
    result[1] += 27208715;
    result[2] += 8305818;
    result[3] += 22225224;
    result[4] += 30416479;
    result[5] += 63582471;
  } else {
    result[0] += 3190319;
    result[1] += 1993949;
    result[2] += 172277239;
    result[3] += 22731024;
    result[4] += 598184;
    result[5] += 13957646;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 67139161;
    result[1] += 29327936;
    result[2] += 5998896;
    result[3] += 18299663;
    result[4] += 29630911;
    result[5] += 64351795;
  } else {
    result[0] += 1507593;
    result[1] += 502531;
    result[2] += 160977518;
    result[3] += 30151876;
    result[4] += 3685229;
    result[5] += 17923615;
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
