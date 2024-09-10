
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
    result[0] += 28749336;
    result[1] += 1009285;
    result[2] += 795194;
    result[3] += 61291137;
    result[4] += 51320623;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122335591;
    result[1] += 59008;
    result[2] += 320858;
    result[3] += 17237844;
    result[4] += 3153264;
    result[5] += 18440;
    result[6] += 40568;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 30111306;
    result[1] += 851632;
    result[2] += 973294;
    result[3] += 61347985;
    result[4] += 49881356;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122646395;
    result[1] += 62738;
    result[2] += 372740;
    result[3] += 17127611;
    result[4] += 2871209;
    result[5] += 29524;
    result[6] += 55357;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 34297480;
    result[1] += 583668;
    result[2] += 1000574;
    result[3] += 59561993;
    result[4] += 47721858;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 123614659;
    result[1] += 41065;
    result[2] += 313591;
    result[3] += 16638999;
    result[4] += 2501263;
    result[5] += 33599;
    result[6] += 22399;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120501411;
    result[1] += 53110;
    result[2] += 385938;
    result[3] += 18695015;
    result[4] += 3480530;
    result[5] += 10622;
    result[6] += 38947;
  } else {
    result[0] += 12887703;
    result[1] += 980586;
    result[2] += 653724;
    result[3] += 57994666;
    result[4] += 70648896;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120287122;
    result[1] += 164684;
    result[2] += 350482;
    result[3] += 14779362;
    result[4] += 7562811;
    result[5] += 8445;
    result[6] += 12668;
  } else {
    result[0] += 84935559;
    result[1] += 0;
    result[2] += 865319;
    result[3] += 47234495;
    result[4] += 10025767;
    result[5] += 14919;
    result[6] += 89515;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 119852638;
    result[1] += 38931;
    result[2] += 396394;
    result[3] += 19458711;
    result[4] += 3369351;
    result[5] += 21235;
    result[6] += 28313;
  } else {
    result[0] += 11926551;
    result[1] += 1267783;
    result[2] += 281729;
    result[3] += 58552795;
    result[4] += 71136716;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143007147;
    result[1] += 0;
    result[2] += 125650;
    result[3] += 0;
    result[4] += 27315;
    result[5] += 0;
    result[6] += 5463;
  } else {
    result[0] += 66963475;
    result[1] += 339411;
    result[2] += 827833;
    result[3] += 53991320;
    result[4] += 20969030;
    result[5] += 33113;
    result[6] += 41391;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16564612;
    result[1] += 341303;
    result[2] += 477825;
    result[3] += 71719309;
    result[4] += 53880496;
    result[5] += 182028;
    result[6] += 0;
  } else {
    result[0] += 129713983;
    result[1] += 126974;
    result[2] += 384770;
    result[3] += 12928304;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11543;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 15874898;
    result[1] += 336332;
    result[2] += 627820;
    result[3] += 70607423;
    result[4] += 55651834;
    result[5] += 67266;
    result[6] += 0;
  } else {
    result[0] += 129433407;
    result[1] += 84861;
    result[2] += 381877;
    result[3] += 13222998;
    result[4] += 0;
    result[5] += 3857;
    result[6] += 38573;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120350331;
    result[1] += 49513;
    result[2] += 403183;
    result[3] += 18970853;
    result[4] += 3331570;
    result[5] += 28293;
    result[6] += 31830;
  } else {
    result[0] += 14126934;
    result[1] += 900710;
    result[2] += 284434;
    result[3] += 56033679;
    result[4] += 71819817;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 109677348;
    result[1] += 97180;
    result[2] += 369284;
    result[3] += 26753654;
    result[4] += 6209802;
    result[5] += 19436;
    result[6] += 38872;
  } else {
    result[0] += 114908688;
    result[1] += 149296;
    result[2] += 353335;
    result[3] += 18891008;
    result[4] += 8803528;
    result[5] += 19906;
    result[6] += 39812;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120320947;
    result[1] += 53085;
    result[2] += 385757;
    result[3] += 19061374;
    result[4] += 3298403;
    result[5] += 17695;
    result[6] += 28312;
  } else {
    result[0] += 12827109;
    result[1] += 1362586;
    result[2] += 563828;
    result[3] += 55490169;
    result[4] += 72921882;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120532053;
    result[1] += 160371;
    result[2] += 312302;
    result[3] += 14737322;
    result[4] += 7398203;
    result[5] += 25321;
    result[6] += 0;
  } else {
    result[0] += 84864882;
    result[1] += 0;
    result[2] += 642802;
    result[3] += 47223562;
    result[4] += 10329687;
    result[5] += 29897;
    result[6] += 74744;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 34175186;
    result[1] += 911706;
    result[2] += 994589;
    result[3] += 59454326;
    result[4] += 47629767;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 123520380;
    result[1] += 48571;
    result[2] += 310108;
    result[3] += 16581471;
    result[4] += 2667681;
    result[5] += 29889;
    result[6] += 7472;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 9689673;
    result[1] += 341370;
    result[2] += 814037;
    result[3] += 70978824;
    result[4] += 61210373;
    result[5] += 131296;
    result[6] += 0;
  } else {
    result[0] += 128170969;
    result[1] += 97831;
    result[2] += 349936;
    result[3] += 14524262;
    result[4] += 0;
    result[5] += 7525;
    result[6] += 15051;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 9750736;
    result[1] += 309547;
    result[2] += 593298;
    result[3] += 69880278;
    result[4] += 62605919;
    result[5] += 25795;
    result[6] += 0;
  } else {
    result[0] += 128102068;
    result[1] += 109401;
    result[2] += 347068;
    result[3] += 14550451;
    result[4] += 0;
    result[5] += 7544;
    result[6] += 49042;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16214147;
    result[1] += 289538;
    result[2] += 668165;
    result[3] += 70580540;
    result[4] += 55324096;
    result[5] += 89088;
    result[6] += 0;
  } else {
    result[0] += 129313210;
    result[1] += 100407;
    result[2] += 428662;
    result[3] += 13288539;
    result[4] += 0;
    result[5] += 7723;
    result[6] += 27032;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 34557208;
    result[1] += 448794;
    result[2] += 841490;
    result[3] += 58595785;
    result[4] += 48722297;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 123496902;
    result[1] += 41015;
    result[2] += 350493;
    result[3] += 16592530;
    result[4] += 2606332;
    result[5] += 44743;
    result[6] += 33557;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143077862;
    result[1] += 0;
    result[2] += 71267;
    result[3] += 0;
    result[4] += 16446;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 67321172;
    result[1] += 288225;
    result[2] += 897615;
    result[3] += 55042779;
    result[4] += 19484023;
    result[5] += 41175;
    result[6] += 90585;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16732769;
    result[1] += 423896;
    result[2] += 647000;
    result[3] += 71036184;
    result[4] += 54258794;
    result[5] += 66931;
    result[6] += 0;
  } else {
    result[0] += 129386811;
    result[1] += 88795;
    result[2] += 432396;
    result[3] += 13203523;
    result[4] += 0;
    result[5] += 11582;
    result[6] += 42467;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 15738850;
    result[1] += 312101;
    result[2] += 624203;
    result[3] += 71716546;
    result[4] += 54617823;
    result[5] += 156050;
    result[6] += 0;
  } else {
    result[0] += 129257533;
    result[1] += 46334;
    result[2] += 428593;
    result[3] += 13394503;
    result[4] += 0;
    result[5] += 0;
    result[6] += 38612;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120631460;
    result[1] += 172240;
    result[2] += 336079;
    result[3] += 14527027;
    result[4] += 7477764;
    result[5] += 12602;
    result[6] += 8401;
  } else {
    result[0] += 86011799;
    result[1] += 0;
    result[2] += 501482;
    result[3] += 46318721;
    result[4] += 10196805;
    result[5] += 45589;
    result[6] += 91178;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 29499444;
    result[1] += 727210;
    result[2] += 885299;
    result[3] += 59915805;
    result[4] += 52137817;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122641454;
    result[1] += 29388;
    result[2] += 319598;
    result[3] += 17148129;
    result[4] += 2968228;
    result[5] += 33061;
    result[6] += 25714;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 9841338;
    result[1] += 362575;
    result[2] += 725151;
    result[3] += 69562724;
    result[4] += 62466601;
    result[5] += 207186;
    result[6] += 0;
  } else {
    result[0] += 128363405;
    result[1] += 75405;
    result[2] += 350637;
    result[3] += 14342195;
    result[4] += 0;
    result[5] += 0;
    result[6] += 33932;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120069316;
    result[1] += 185715;
    result[2] += 375651;
    result[3] += 14912113;
    result[4] += 7580570;
    result[5] += 29545;
    result[6] += 12662;
  } else {
    result[0] += 84694967;
    result[1] += 0;
    result[2] += 702304;
    result[3] += 47278560;
    result[4] += 10400087;
    result[5] += 14942;
    result[6] += 74713;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16910360;
    result[1] += 352299;
    result[2] += 374317;
    result[3] += 71472694;
    result[4] += 53967829;
    result[5] += 88074;
    result[6] += 0;
  } else {
    result[0] += 129459633;
    result[1] += 77390;
    result[2] += 348259;
    result[3] += 13233857;
    result[4] += 0;
    result[5] += 3869;
    result[6] += 42565;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143039714;
    result[1] += 0;
    result[2] += 82084;
    result[3] += 0;
    result[4] += 21889;
    result[5] += 0;
    result[6] += 21889;
  } else {
    result[0] += 67404579;
    result[1] += 322035;
    result[2] += 833990;
    result[3] += 53920360;
    result[4] += 20610294;
    result[5] += 24771;
    result[6] += 49543;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 27524776;
    result[1] += 673576;
    result[2] += 1132832;
    result[3] += 61662846;
    result[4] += 52171544;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 123005721;
    result[1] += 51625;
    result[2] += 387193;
    result[3] += 16796806;
    result[4] += 2854166;
    result[5] += 22125;
    result[6] += 47938;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143066917;
    result[1] += 0;
    result[2] += 82216;
    result[3] += 0;
    result[4] += 16443;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 67043994;
    result[1] += 453055;
    result[2] += 897873;
    result[3] += 54267826;
    result[4] += 20371028;
    result[5] += 49424;
    result[6] += 82373;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 9230809;
    result[1] += 352128;
    result[2] += 503041;
    result[3] += 69470014;
    result[4] += 63508974;
    result[5] += 100608;
    result[6] += 0;
  } else {
    result[0] += 127697120;
    result[1] += 102239;
    result[2] += 431677;
    result[3] += 14904245;
    result[4] += 0;
    result[5] += 0;
    result[6] += 30293;
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
