
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
    result[0] += 86248057;
    result[1] += 40450571;
    result[2] += 9531456;
    result[3] += 27974437;
    result[4] += 37583385;
    result[5] += 84543244;
  } else {
    result[0] += 5316493;
    result[1] += 3797495;
    result[2] += 231900385;
    result[3] += 32658460;
    result[4] += 1265831;
    result[5] += 11392486;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 23495289;
    result[1] += 3538447;
    result[2] += 3679985;
    result[3] += 48405958;
    result[4] += 55199777;
    result[5] += 152011694;
  } else {
    result[0] += 102866739;
    result[1] += 54753299;
    result[2] += 91221448;
    result[3] += 15629206;
    result[4] += 14403386;
    result[5] += 7457072;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 90325284;
    result[1] += 39968938;
    result[2] += 10688492;
    result[3] += 28000838;
    result[4] += 38388246;
    result[5] += 78959353;
  } else {
    result[0] += 1681004;
    result[1] += 3362009;
    result[2] += 232258831;
    result[3] += 33339928;
    result[4] += 2801674;
    result[5] += 12887703;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 87643150;
    result[1] += 40764255;
    result[2] += 12380255;
    result[3] += 27931064;
    result[4] += 38122128;
    result[5] += 79490299;
  } else {
    result[0] += 2771840;
    result[1] += 1663104;
    result[2] += 228676864;
    result[3] += 31044616;
    result[4] += 4434945;
    result[5] += 17739781;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 7200915;
    result[1] += 6063929;
    result[2] += 3410960;
    result[3] += 37520561;
    result[4] += 45668966;
    result[5] += 186465820;
  } else {
    result[0] += 94752722;
    result[1] += 45692060;
    result[2] += 83869547;
    result[3] += 23752961;
    result[4] += 20470734;
    result[5] += 17793127;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 89237226;
    result[1] += 39585300;
    result[2] += 9688180;
    result[3] += 30502631;
    result[4] += 37541700;
    result[5] += 79776112;
  } else {
    result[0] += 1921685;
    result[1] += 2196212;
    result[2] += 241308804;
    result[3] += 28001704;
    result[4] += 1647159;
    result[5] += 11255587;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 88308435;
    result[1] += 39604543;
    result[2] += 10740215;
    result[3] += 28715158;
    result[4] += 37068659;
    result[5] += 81894140;
  } else {
    result[0] += 2610922;
    result[1] += 0;
    result[2] += 254419879;
    result[3] += 23498301;
    result[4] += 0;
    result[5] += 5802049;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 91076492;
    result[1] += 40099066;
    result[2] += 7225772;
    result[3] += 24138843;
    result[4] += 41448935;
    result[5] += 82342042;
  } else {
    result[0] += 4459255;
    result[1] += 5398046;
    result[2] += 206768644;
    result[3] += 39429207;
    result[4] += 2346976;
    result[5] += 27929022;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 93162301;
    result[1] += 40421326;
    result[2] += 4831234;
    result[3] += 23189924;
    result[4] += 42514861;
    result[5] += 82211503;
  } else {
    result[0] += 5410982;
    result[1] += 2254576;
    result[2] += 208999195;
    result[3] += 47346096;
    result[4] += 2254576;
    result[5] += 20065726;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 88343732;
    result[1] += 43936073;
    result[2] += 6759395;
    result[3] += 25229838;
    result[4] += 40241984;
    result[5] += 81820129;
  } else {
    result[0] += 6535030;
    result[1] += 3146496;
    result[2] += 211783397;
    result[3] += 41630564;
    result[4] += 3388534;
    result[5] += 19847129;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    result[0] += 9022653;
    result[1] += 4235123;
    result[2] += 4050987;
    result[3] += 38852651;
    result[4] += 57634502;
    result[5] += 172535234;
  } else {
    result[0] += 98303235;
    result[1] += 45343790;
    result[2] += 89286999;
    result[3] += 21621459;
    result[4] += 17594791;
    result[5] += 14180876;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 87958443;
    result[1] += 42658291;
    result[2] += 7614776;
    result[3] += 25486192;
    result[4] += 39006306;
    result[5] += 83607142;
  } else {
    result[0] += 3764213;
    result[1] += 3262318;
    result[2] += 228111321;
    result[3] += 35885499;
    result[4] += 1756632;
    result[5] += 13551167;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 88458179;
    result[1] += 40622425;
    result[2] += 9719010;
    result[3] += 24221595;
    result[4] += 41002074;
    result[5] += 82307867;
  } else {
    result[0] += 5699482;
    result[1] += 1628423;
    result[2] += 224179651;
    result[3] += 35011107;
    result[4] += 1357019;
    result[5] += 18455467;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 86092551;
    result[1] += 38409334;
    result[2] += 10278554;
    result[3] += 29290015;
    result[4] += 41809758;
    result[5] += 80450939;
  } else {
    result[0] += 5874769;
    result[1] += 2554247;
    result[2] += 226306335;
    result[3] += 33205218;
    result[4] += 1787973;
    result[5] += 16602609;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 10246072;
    result[1] += 5029890;
    result[2] += 2608091;
    result[3] += 36326984;
    result[4] += 59240928;
    result[5] += 172879186;
  } else {
    result[0] += 96807613;
    result[1] += 40568658;
    result[2] += 87840721;
    result[3] += 23766617;
    result[4] += 20806672;
    result[5] += 16540869;
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
