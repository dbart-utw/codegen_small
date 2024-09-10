
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44126896;
    result[1] += 20430525;
    result[2] += 5126618;
    result[3] += 14658332;
    result[4] += 18949502;
    result[5] += 39873701;
  } else {
    result[0] += 1491308;
    result[1] += 135573;
    result[2] += 118491206;
    result[3] += 14506360;
    result[4] += 949014;
    result[5] += 7592113;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44314059;
    result[1] += 19990733;
    result[2] += 4712644;
    result[3] += 12655730;
    result[4] += 18812572;
    result[5] += 42679836;
  } else {
    result[0] += 1757462;
    result[1] += 1487083;
    result[2] += 116127696;
    result[3] += 16493107;
    result[4] += 675947;
    result[5] += 6624280;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42292880;
    result[1] += 19931563;
    result[2] += 5315083;
    result[3] += 14312761;
    result[4] += 19400055;
    result[5] += 41913231;
  } else {
    result[0] += 1628423;
    result[1] += 2035529;
    result[2] += 115346673;
    result[3] += 13298792;
    result[4] += 542807;
    result[5] += 10313349;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44990393;
    result[1] += 21116331;
    result[2] += 4018406;
    result[3] += 12291596;
    result[4] += 19540485;
    result[5] += 41208363;
  } else {
    result[0] += 2402106;
    result[1] += 600526;
    result[2] += 109896394;
    result[3] += 19697277;
    result[4] += 1201053;
    result[5] += 9368217;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42779462;
    result[1] += 19555245;
    result[2] += 5144126;
    result[3] += 14032874;
    result[4] += 20992574;
    result[5] += 40661293;
  } else {
    result[0] += 1925377;
    result[1] += 1650323;
    result[2] += 113459750;
    result[3] += 15127966;
    result[4] += 275053;
    result[5] += 10727103;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42440538;
    result[1] += 19567481;
    result[2] += 4521418;
    result[3] += 13830220;
    result[4] += 20061418;
    result[5] += 42744499;
  } else {
    result[0] += 676585;
    result[1] += 1082537;
    result[2] += 117996581;
    result[3] += 15696792;
    result[4] += 270634;
    result[5] += 7442444;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 45679877;
    result[1] += 19776966;
    result[2] += 3365487;
    result[3] += 13121620;
    result[4] += 19247564;
    result[5] += 41974059;
  } else {
    result[0] += 1514251;
    result[1] += 0;
    result[2] += 121002443;
    result[3] += 16106127;
    result[4] += 137659;
    result[5] += 4405094;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 44938187;
    result[1] += 19248523;
    result[2] += 5392582;
    result[3] += 13706147;
    result[4] += 20371978;
    result[5] += 39508156;
  } else {
    result[0] += 1427373;
    result[1] += 0;
    result[2] += 126037092;
    result[3] += 11704463;
    result[4] += 0;
    result[5] += 3996646;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45539905;
    result[1] += 20601385;
    result[2] += 3855230;
    result[3] += 12730291;
    result[4] += 20521068;
    result[5] += 39917695;
  } else {
    result[0] += 4200734;
    result[1] += 1248867;
    result[2] += 105926631;
    result[3] += 18392405;
    result[4] += 2270667;
    result[5] += 11126270;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44190724;
    result[1] += 19447011;
    result[2] += 4910080;
    result[3] += 13454393;
    result[4] += 18673770;
    result[5] += 42489594;
  } else {
    result[0] += 1784789;
    result[1] += 1657304;
    result[2] += 114099012;
    result[3] += 15553161;
    result[4] += 1019879;
    result[5] += 9051430;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 45406000;
    result[1] += 20273247;
    result[2] += 2999225;
    result[3] += 13857182;
    result[4] += 19741739;
    result[5] += 40888179;
  } else {
    result[0] += 1492721;
    result[1] += 0;
    result[2] += 122403175;
    result[3] += 14791514;
    result[4] += 0;
    result[5] += 4478164;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 41425314;
    result[1] += 20673869;
    result[2] += 4305439;
    result[3] += 13226621;
    result[4] += 20169628;
    result[5] += 43364701;
  } else {
    result[0] += 3153426;
    result[1] += 1009096;
    result[2] += 115667694;
    result[3] += 15514859;
    result[4] += 1135233;
    result[5] += 6685264;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44071564;
    result[1] += 20599914;
    result[2] += 4901094;
    result[3] += 12137867;
    result[4] += 19412930;
    result[5] += 42042204;
  } else {
    result[0] += 1053656;
    result[1] += 395121;
    result[2] += 119985133;
    result[3] += 14356069;
    result[4] += 526828;
    result[5] += 6848767;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 41018073;
    result[1] += 19921982;
    result[2] += 4885809;
    result[3] += 13710565;
    result[4] += 20906719;
    result[5] += 42722426;
  } else {
    result[0] += 1231826;
    result[1] += 2326782;
    result[2] += 112506791;
    result[3] += 15876870;
    result[4] += 821217;
    result[5] += 10402087;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
    result[0] += 3437460;
    result[1] += 1021947;
    result[2] += 557425;
    result[3] += 16258258;
    result[4] += 29079056;
    result[5] += 92811428;
  } else {
    result[0] += 51295550;
    result[1] += 21790803;
    result[2] += 40618057;
    result[3] += 12638665;
    result[4] += 9152137;
    result[5] += 7670362;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43627490;
    result[1] += 20709014;
    result[2] += 4718509;
    result[3] += 12732486;
    result[4] += 19735354;
    result[5] += 41642720;
  } else {
    result[0] += 428212;
    result[1] += 570949;
    result[2] += 117472850;
    result[3] += 16414796;
    result[4] += 999161;
    result[5] += 7279605;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    result[0] += 5877765;
    result[1] += 1427457;
    result[2] += 1007616;
    result[3] += 20740115;
    result[4] += 25190424;
    result[5] += 88922196;
  } else {
    result[0] += 50963458;
    result[1] += 22339518;
    result[2] += 43165269;
    result[3] += 11284438;
    result[4] += 8853238;
    result[5] += 6559653;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43400737;
    result[1] += 20544279;
    result[2] += 4093694;
    result[3] += 13569837;
    result[4] += 18838573;
    result[5] += 42718455;
  } else {
    result[0] += 2729562;
    result[1] += 545912;
    result[2] += 115460512;
    result[3] += 17196246;
    result[4] += 955347;
    result[5] += 6277994;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 48631356;
    result[1] += 21185937;
    result[2] += 2287118;
    result[3] += 10913967;
    result[4] += 18296945;
    result[5] += 41850251;
  } else {
    result[0] += 2503690;
    result[1] += 1138041;
    result[2] += 103106528;
    result[3] += 22988431;
    result[4] += 1024237;
    result[5] += 12404648;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43728078;
    result[1] += 20681168;
    result[2] += 4769642;
    result[3] += 13736569;
    result[4] += 18849625;
    result[5] += 41400493;
  } else {
    result[0] += 2132820;
    result[1] += 933108;
    result[2] += 114639102;
    result[3] += 16396057;
    result[4] += 1199711;
    result[5] += 7864775;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 45920278;
    result[1] += 20057593;
    result[2] += 2241966;
    result[3] += 11770324;
    result[4] += 21218611;
    result[5] += 41956802;
  } else {
    result[0] += 4466765;
    result[1] += 1603454;
    result[2] += 103193747;
    result[3] += 20615843;
    result[4] += 2405181;
    result[5] += 10880583;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44693918;
    result[1] += 20953852;
    result[2] += 3816730;
    result[3] += 12709713;
    result[4] += 18320308;
    result[5] += 42671051;
  } else {
    result[0] += 1997659;
    result[1] += 0;
    result[2] += 120259084;
    result[3] += 16380805;
    result[4] += 133177;
    result[5] += 4394850;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 44830044;
    result[1] += 23120680;
    result[2] += 2075465;
    result[3] += 11041473;
    result[4] += 19135787;
    result[5] += 42962125;
  } else {
    result[0] += 5510367;
    result[1] += 1767476;
    result[2] += 100018362;
    result[3] += 22249406;
    result[4] += 2079383;
    result[5] += 11540580;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43642846;
    result[1] += 18897701;
    result[2] += 3717580;
    result[3] += 12817907;
    result[4] += 20175619;
    result[5] += 43913920;
  } else {
    result[0] += 2409340;
    result[1] += 1014459;
    result[2] += 116155596;
    result[3] += 16865386;
    result[4] += 760844;
    result[5] += 5959948;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43449398;
    result[1] += 20217893;
    result[2] += 4425048;
    result[3] += 13236998;
    result[4] += 18539427;
    result[5] += 43296810;
  } else {
    result[0] += 1334255;
    result[1] += 1067404;
    result[2] += 116347048;
    result[3] += 15077083;
    result[4] += 1067404;
    result[5] += 8272381;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44536976;
    result[1] += 19456032;
    result[2] += 4122367;
    result[3] += 13330271;
    result[4] += 18724023;
    result[5] += 42995905;
  } else {
    result[0] += 2450581;
    result[1] += 1289779;
    result[2] += 115564285;
    result[3] += 18701809;
    result[4] += 515911;
    result[5] += 4643207;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43784202;
    result[1] += 20196368;
    result[2] += 3429571;
    result[3] += 13489649;
    result[4] += 19510453;
    result[5] += 42755330;
  } else {
    result[0] += 1874946;
    result[1] += 0;
    result[2] += 118523419;
    result[3] += 17544144;
    result[4] += 133924;
    result[5] += 5089141;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44355586;
    result[1] += 21662951;
    result[2] += 3049446;
    result[3] += 12039373;
    result[4] += 20554062;
    result[5] += 41504156;
  } else {
    result[0] += 2955523;
    result[1] += 1655093;
    result[2] += 110063709;
    result[3] += 19033573;
    result[4] += 1891535;
    result[5] += 7566141;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 45326259;
    result[1] += 19126768;
    result[2] += 4677122;
    result[3] += 12928631;
    result[4] += 18746515;
    result[5] += 42360279;
  } else {
    result[0] += 4452840;
    result[1] += 1349345;
    result[2] += 113479971;
    result[3] += 16596951;
    result[4] += 944541;
    result[5] += 6341924;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44148143;
    result[1] += 21174261;
    result[2] += 4097009;
    result[3] += 13133402;
    result[4] += 18915163;
    result[5] += 41697596;
  } else {
    result[0] += 1448777;
    result[1] += 1053656;
    result[2] += 116824164;
    result[3] += 16463382;
    result[4] += 395121;
    result[5] += 6980474;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
