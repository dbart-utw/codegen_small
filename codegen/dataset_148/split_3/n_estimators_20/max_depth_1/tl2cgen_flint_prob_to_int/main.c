
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 180632580;
    result[1] += 314373;
    result[2] += 547009;
    result[3] += 21955827;
    result[4] += 11216837;
    result[5] += 31437;
    result[6] += 50299;
  } else {
    result[0] += 124919434;
    result[1] += 0;
    result[2] += 1194961;
    result[3] += 73099470;
    result[4] += 15396618;
    result[5] += 22980;
    result[6] += 114900;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 24789063;
    result[1] += 270549;
    result[2] += 744010;
    result[3] += 106663990;
    result[4] += 82077839;
    result[5] += 202911;
    result[6] += 0;
  } else {
    result[0] += 193568337;
    result[1] += 196539;
    result[2] += 560715;
    result[3] += 20382307;
    result[4] += 0;
    result[5] += 0;
    result[6] += 40464;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 40605441;
    result[1] += 744200;
    result[2] += 1302350;
    result[3] += 98187957;
    result[4] += 73908414;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 183350467;
    result[1] += 82844;
    result[2] += 568862;
    result[3] += 26101400;
    result[4] += 4567469;
    result[5] += 38660;
    result[6] += 38660;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 42225802;
    result[1] += 1299255;
    result[2] += 1252853;
    result[3] += 94428029;
    result[4] += 75542423;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 184181306;
    result[1] += 66294;
    result[2] += 535876;
    result[3] += 25478994;
    result[4] += 4353306;
    result[5] += 60769;
    result[6] += 71818;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 179009189;
    result[1] += 84966;
    result[2] += 653182;
    result[3] += 29711840;
    result[4] += 5167045;
    result[5] += 63725;
    result[6] += 58414;
  } else {
    result[0] += 19643757;
    result[1] += 1473281;
    result[2] += 350781;
    result[3] += 87765502;
    result[4] += 105515041;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 179872154;
    result[1] += 79735;
    result[2] += 574093;
    result[3] += 28943905;
    result[4] += 5103057;
    result[5] += 79735;
    result[6] += 95682;
  } else {
    result[0] += 18559355;
    result[1] += 1385026;
    result[2] += 277005;
    result[3] += 89957473;
    result[4] += 104569503;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214551656;
    result[1] += 0;
    result[2] += 180316;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 16392;
  } else {
    result[0] += 99621690;
    result[1] += 521384;
    result[2] += 1253805;
    result[3] += 82428414;
    result[4] += 30699618;
    result[5] += 124139;
    result[6] += 99311;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180909067;
    result[1] += 90465;
    result[2] += 590684;
    result[3] += 28124026;
    result[4] += 4933012;
    result[5] += 31928;
    result[6] += 69179;
  } else {
    result[0] += 20211610;
    result[1] += 1297366;
    result[2] += 477977;
    result[3] += 89245186;
    result[4] += 103516222;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 24740906;
    result[1] += 406143;
    result[2] += 1116894;
    result[3] += 107018806;
    result[4] += 81127160;
    result[5] += 338452;
    result[6] += 0;
  } else {
    result[0] += 193808159;
    result[1] += 132935;
    result[2] += 572199;
    result[3] += 20183051;
    result[4] += 0;
    result[5] += 5779;
    result[6] += 46238;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214511920;
    result[1] += 0;
    result[2] += 195677;
    result[3] += 0;
    result[4] += 8153;
    result[5] += 0;
    result[6] += 32612;
  } else {
    result[0] += 98533222;
    result[1] += 513063;
    result[2] += 1163778;
    result[3] += 83729462;
    result[4] += 30633645;
    result[5] += 75082;
    result[6] += 100109;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214583598;
    result[1] += 0;
    result[2] += 123574;
    result[3] += 0;
    result[4] += 8238;
    result[5] += 0;
    result[6] += 32953;
  } else {
    result[0] += 98166105;
    result[1] += 554332;
    result[2] += 1207212;
    result[3] += 84467936;
    result[4] += 30044815;
    result[5] += 147821;
    result[6] += 160140;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214576277;
    result[1] += 0;
    result[2] += 139308;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 32778;
  } else {
    result[0] += 100109940;
    result[1] += 384942;
    result[2] += 1353508;
    result[3] += 82340488;
    result[4] += 30447726;
    result[5] += 49670;
    result[6] += 62087;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 43300886;
    result[1] += 739396;
    result[2] += 1432580;
    result[3] += 93995733;
    result[4] += 75279768;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 183613637;
    result[1] += 121598;
    result[2] += 447703;
    result[3] += 25861776;
    result[4] += 4598631;
    result[5] += 60799;
    result[6] += 44217;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 13019613;
    result[1] += 526805;
    result[2] += 1467528;
    result[3] += 106941449;
    result[4] += 92379049;
    result[5] += 413918;
    result[6] += 0;
  } else {
    result[0] += 191792171;
    result[1] += 142055;
    result[2] += 596633;
    result[3] += 22154998;
    result[4] += 0;
    result[5] += 5682;
    result[6] += 56822;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214569563;
    result[1] += 0;
    result[2] += 162546;
    result[3] += 0;
    result[4] += 8127;
    result[5] += 0;
    result[6] += 8127;
  } else {
    result[0] += 99357429;
    result[1] += 553313;
    result[2] += 1383282;
    result[3] += 82808337;
    result[4] += 30444796;
    result[5] += 125752;
    result[6] += 75451;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 180018185;
    result[1] += 95748;
    result[2] += 664921;
    result[3] += 29118242;
    result[4] += 4739560;
    result[5] += 21277;
    result[6] += 90429;
  } else {
    result[0] += 19697277;
    result[1] += 1304000;
    result[2] += 411789;
    result[3] += 88672063;
    result[4] += 104663233;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 24145299;
    result[1] += 505131;
    result[2] += 774535;
    result[3] += 105875624;
    result[4] += 83245720;
    result[5] += 202052;
    result[6] += 0;
  } else {
    result[0] += 194125626;
    result[1] += 104126;
    result[2] += 555338;
    result[3] += 19922780;
    result[4] += 0;
    result[5] += 0;
    result[6] += 40493;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 214542761;
    result[1] += 0;
    result[2] += 156258;
    result[3] += 0;
    result[4] += 16448;
    result[5] += 0;
    result[6] += 32896;
  } else {
    result[0] += 99185882;
    result[1] += 419912;
    result[2] += 1531446;
    result[3] += 83488552;
    result[4] += 29962015;
    result[5] += 111153;
    result[6] += 49401;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 22541722;
    result[1] += 434780;
    result[2] += 635449;
    result[3] += 107023013;
    result[4] += 83745507;
    result[5] += 367891;
    result[6] += 0;
  } else {
    result[0] += 193469865;
    result[1] += 173749;
    result[2] += 590747;
    result[3] += 20438711;
    result[4] += 0;
    result[5] += 17374;
    result[6] += 57916;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 180387360;
    result[1] += 221520;
    result[2] += 575953;
    result[3] += 22221677;
    result[4] += 11303877;
    result[5] += 25316;
    result[6] += 12658;
  } else {
    result[0] += 127682152;
    result[1] += 0;
    result[2] += 1234186;
    result[3] += 70595439;
    result[4] += 15101948;
    result[5] += 67319;
    result[6] += 67319;
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
