
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 142084628;
    result[1] += 62334676;
    result[2] += 3362949;
    result[3] += 32668655;
    result[4] += 67379101;
    result[5] += 121666718;
  } else {
    result[0] += 8589934;
    result[1] += 343597;
    result[2] += 322294345;
    result[3] += 68032281;
    result[4] += 1030792;
    result[5] += 29205777;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 133174640;
    result[1] += 60286218;
    result[2] += 12375137;
    result[3] += 39169011;
    result[4] += 57447883;
    result[5] += 127043838;
  } else {
    result[0] += 6176846;
    result[1] += 1235369;
    result[2] += 347962355;
    result[3] += 51885510;
    result[4] += 3294318;
    result[5] += 18942329;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 129009707;
    result[1] += 61405865;
    result[2] += 12510727;
    result[3] += 37991292;
    result[4] += 57847769;
    result[5] += 130731366;
  } else {
    result[0] += 4754576;
    result[1] += 5150791;
    result[2] += 340348423;
    result[3] += 49923051;
    result[4] += 2773502;
    result[5] += 26546384;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 136959196;
    result[1] += 58941572;
    result[2] += 15306532;
    result[3] += 42264305;
    result[4] += 56885471;
    result[5] += 119139651;
  } else {
    result[0] += 7252289;
    result[1] += 5237764;
    result[2] += 340051819;
    result[3] += 41902119;
    result[4] += 2417429;
    result[5] += 32635304;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 138515472;
    result[1] += 58887594;
    result[2] += 6789974;
    result[3] += 32344967;
    result[4] += 64566481;
    result[5] += 128392238;
  } else {
    result[0] += 8290211;
    result[1] += 3507397;
    result[2] += 306100119;
    result[3] += 69191381;
    result[4] += 4145105;
    result[5] += 38262514;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 137395979;
    result[1] += 57775546;
    result[2] += 14443886;
    result[3] += 37482482;
    result[4] += 59685482;
    result[5] += 122713351;
  } else {
    result[0] += 16088639;
    result[1] += 2798024;
    result[2] += 316876251;
    result[3] += 52812708;
    result[4] += 6295554;
    result[5] += 34625550;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 131857935;
    result[1] += 59481289;
    result[2] += 14870322;
    result[3] += 38569898;
    result[4] += 60991556;
    result[5] += 123725728;
  } else {
    result[0] += 4945489;
    result[1] += 4565067;
    result[2] += 338575809;
    result[3] += 54019960;
    result[4] += 3423800;
    result[5] += 23966602;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 138234024;
    result[1] += 58726873;
    result[2] += 13891164;
    result[3] += 37607786;
    result[4] += 59291554;
    result[5] += 121745325;
  } else {
    result[0] += 4618244;
    result[1] += 2519042;
    result[2] += 347627851;
    result[3] += 48701486;
    result[4] += 1259521;
    result[5] += 24770583;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 131196750;
    result[1] += 61340234;
    result[2] += 14385608;
    result[3] += 37172412;
    result[4] += 58578198;
    result[5] += 126823525;
  } else {
    result[0] += 4318522;
    result[1] += 2355557;
    result[2] += 347444794;
    result[3] += 45933379;
    result[4] += 2748150;
    result[5] += 26696323;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 130478576;
    result[1] += 61307837;
    result[2] += 9572227;
    result[3] += 39200550;
    result[4] += 61307837;
    result[5] += 127629699;
  } else {
    result[0] += 4876027;
    result[1] += 0;
    result[2] += 349448616;
    result[3] += 56886984;
    result[4] += 406335;
    result[5] += 17878766;
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
