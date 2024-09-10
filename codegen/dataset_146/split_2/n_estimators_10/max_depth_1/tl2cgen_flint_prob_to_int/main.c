
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 133852052;
    result[1] += 58985650;
    result[2] += 10388161;
    result[3] += 35224224;
    result[4] += 61851349;
    result[5] += 129195290;
  } else {
    result[0] += 6989369;
    result[1] += 2795747;
    result[2] += 328150877;
    result[3] += 59759105;
    result[4] += 2096810;
    result[5] += 29704818;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 9854609;
    result[1] += 6569739;
    result[2] += 5201043;
    result[3] += 56116526;
    result[4] += 82121745;
    result[5] += 269633064;
  } else {
    result[0] += 145451302;
    result[1] += 63165162;
    result[2] += 127121537;
    result[3] += 35604579;
    result[4] += 30329827;
    result[5] += 27824319;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 139485532;
    result[1] += 56269057;
    result[2] += 6529110;
    result[3] += 38937238;
    result[4] += 65053678;
    result[5] += 123222113;
  } else {
    result[0] += 5333154;
    result[1] += 0;
    result[2] += 350921582;
    result[3] += 56175896;
    result[4] += 0;
    result[5] += 17066095;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 137774404;
    result[1] += 60860345;
    result[2] += 4073330;
    result[3] += 34982718;
    result[4] += 62417795;
    result[5] += 129388136;
  } else {
    result[0] += 8306141;
    result[1] += 0;
    result[2] += 330169121;
    result[3] += 68179577;
    result[4] += 346089;
    result[5] += 22495799;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 132223227;
    result[1] += 57418737;
    result[2] += 10522955;
    result[3] += 42549343;
    result[4] += 55245518;
    result[5] += 131536947;
  } else {
    result[0] += 7619456;
    result[1] += 0;
    result[2] += 370145173;
    result[3] += 42508546;
    result[4] += 0;
    result[5] += 9223552;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 132936675;
    result[1] += 56805539;
    result[2] += 15109102;
    result[3] += 40173814;
    result[4] += 59148036;
    result[5] += 125323561;
  } else {
    result[0] += 2223451;
    result[1] += 1852876;
    result[2] += 360199155;
    result[3] += 39651553;
    result[4] += 2964602;
    result[5] += 22605091;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 137266772;
    result[1] += 59306898;
    result[2] += 8489495;
    result[3] += 35392826;
    result[4] += 60861312;
    result[5] += 128179424;
  } else {
    result[0] += 7657154;
    result[1] += 1740262;
    result[2] += 316379681;
    result[3] += 60909179;
    result[4] += 9049363;
    result[5] += 33761088;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 127922722;
    result[1] += 60971416;
    result[2] += 14304832;
    result[3] += 43383508;
    result[4] += 61088669;
    result[5] += 121825580;
  } else {
    result[0] += 7016713;
    result[1] += 2215804;
    result[2] += 350097076;
    result[3] += 52440701;
    result[4] += 2585104;
    result[5] += 15141329;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 130373003;
    result[1] += 52727648;
    result[2] += 21358034;
    result[3] += 40713753;
    result[4] += 55731121;
    result[5] += 128593167;
  } else {
    result[0] += 4450743;
    result[1] += 3115520;
    result[2] += 362735579;
    result[3] += 45842656;
    result[4] += 2670445;
    result[5] += 10681783;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 7883352;
    result[1] += 5839520;
    result[2] += 6131496;
    result[3] += 59855084;
    result[4] += 77957598;
    result[5] += 271829677;
  } else {
    result[0] += 141202650;
    result[1] += 66440775;
    result[2] += 127760875;
    result[3] += 36356802;
    result[4] += 33412413;
    result[5] += 24323212;
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
