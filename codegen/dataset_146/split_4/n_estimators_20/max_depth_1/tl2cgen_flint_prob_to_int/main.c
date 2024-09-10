
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
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    result[0] += 14091732;
    result[1] += 843095;
    result[2] += 1686190;
    result[3] += 32760266;
    result[4] += 44443155;
    result[5] += 120923924;
  } else {
    result[0] += 74099830;
    result[1] += 35356204;
    result[2] += 70077267;
    result[3] += 15102251;
    result[4] += 12773399;
    result[5] += 7339411;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 68886176;
    result[1] += 32236769;
    result[2] += 4106204;
    result[3] += 17160257;
    result[4] += 32665775;
    result[5] += 59693181;
  } else {
    result[0] += 7472333;
    result[1] += 1786862;
    result[2] += 159030748;
    result[3] += 26640493;
    result[4] += 1624420;
    result[5] += 18193507;
  }
  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
    result[0] += 5611652;
    result[1] += 4790435;
    result[2] += 4927304;
    result[3] += 32574959;
    result[4] += 40102785;
    result[5] += 126741227;
  } else {
    result[0] += 75363027;
    result[1] += 32110056;
    result[2] += 60593720;
    result[3] += 15033044;
    result[4] += 17802289;
    result[5] += 13846225;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65738144;
    result[1] += 30783042;
    result[2] += 7329295;
    result[3] += 18435997;
    result[4] += 31008558;
    result[5] += 61453325;
  } else {
    result[0] += 1689269;
    result[1] += 1478110;
    result[2] += 178217915;
    result[3] += 21749342;
    result[4] += 1478110;
    result[5] += 10135616;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65474846;
    result[1] += 30710957;
    result[2] += 7649197;
    result[3] += 20721333;
    result[4] += 32023878;
    result[5] += 58168150;
  } else {
    result[0] += 4238454;
    result[1] += 1614649;
    result[2] += 176198611;
    result[3] += 19577623;
    result[4] += 1210987;
    result[5] += 11908039;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 67797160;
    result[1] += 30973321;
    result[2] += 6940318;
    result[3] += 20935671;
    result[4] += 27990705;
    result[5] += 60111187;
  } else {
    result[0] += 3175576;
    result[1] += 2381682;
    result[2] += 176046025;
    result[3] += 22625982;
    result[4] += 1587788;
    result[5] += 8931309;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
    result[0] += 5200458;
    result[1] += 4129776;
    result[2] += 2600229;
    result[3] += 19884107;
    result[4] += 41297762;
    result[5] += 141636029;
  } else {
    result[0] += 73235342;
    result[1] += 30499037;
    result[2] += 62315934;
    result[3] += 18826566;
    result[4] += 16692888;
    result[5] += 13178596;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 67148119;
    result[1] += 29976839;
    result[2] += 7708330;
    result[3] += 18899683;
    result[4] += 28834864;
    result[5] += 62180528;
  } else {
    result[0] += 4637758;
    result[1] += 1613133;
    result[2] += 172806900;
    result[3] += 22180582;
    result[4] += 2016416;
    result[5] += 11493574;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 67754211;
    result[1] += 31962817;
    result[2] += 7309101;
    result[3] += 21115182;
    result[4] += 27612161;
    result[5] += 58994891;
  } else {
    result[0] += 5158546;
    result[1] += 1146343;
    result[2] += 173862110;
    result[3] += 22162642;
    result[4] += 2101629;
    result[5] += 10317092;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 66206559;
    result[1] += 31355065;
    result[2] += 8177130;
    result[3] += 19061173;
    result[4] += 30621943;
    result[5] += 59326491;
  } else {
    result[0] += 1265707;
    result[1] += 1265707;
    result[2] += 178464751;
    result[3] += 23415587;
    result[4] += 632853;
    result[5] += 9703757;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 67430300;
    result[1] += 29486470;
    result[2] += 7657339;
    result[3] += 19657647;
    result[4] += 32457975;
    result[5] += 58058631;
  } else {
    result[0] += 1608601;
    result[1] += 2815053;
    result[2] += 178152669;
    result[3] += 22520427;
    result[4] += 0;
    result[5] += 9651611;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 68712350;
    result[1] += 31119508;
    result[2] += 4157186;
    result[3] += 18944891;
    result[4] += 32544829;
    result[5] += 59269598;
  } else {
    result[0] += 5146861;
    result[1] += 2484691;
    result[2] += 162924792;
    result[3] += 30348735;
    result[4] += 2307213;
    result[5] += 11536069;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 69484145;
    result[1] += 29533623;
    result[2] += 8127470;
    result[3] += 20204203;
    result[4] += 28904030;
    result[5] += 58494890;
  } else {
    result[0] += 1799567;
    result[1] += 2199471;
    result[2] += 181756297;
    result[3] += 20195144;
    result[4] += 0;
    result[5] += 8797884;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 67480452;
    result[1] += 32343053;
    result[2] += 4637423;
    result[3] += 17955151;
    result[4] += 30440521;
    result[5] += 61891762;
  } else {
    result[0] += 4953010;
    result[1] += 1415145;
    result[2] += 169463701;
    result[3] += 24411263;
    result[4] += 1238252;
    result[5] += 13266991;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64418793;
    result[1] += 30180233;
    result[2] += 5430155;
    result[3] += 20634591;
    result[4] += 31609221;
    result[5] += 62475369;
  } else {
    result[0] += 2410645;
    result[1] += 0;
    result[2] += 184816179;
    result[3] += 19486053;
    result[4] += 401774;
    result[5] += 7633711;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 7984234;
    result[1] += 1514251;
    result[2] += 137659;
    result[3] += 27807160;
    result[4] += 46391153;
    result[5] += 130913906;
  } else {
    result[0] += 72459491;
    result[1] += 33468131;
    result[2] += 67133521;
    result[3] += 16109414;
    result[4] += 15188876;
    result[5] += 10388928;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 64761688;
    result[1] += 31334425;
    result[2] += 6220377;
    result[3] += 19358745;
    result[4] += 34531816;
    result[5] += 58541311;
  } else {
    result[0] += 2845605;
    result[1] += 2655898;
    result[2] += 166183363;
    result[3] += 27886934;
    result[4] += 3225019;
    result[5] += 11951543;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 67105245;
    result[1] += 27502149;
    result[2] += 7816400;
    result[3] += 21249029;
    result[4] += 31439299;
    result[5] += 59636240;
  } else {
    result[0] += 6152146;
    result[1] += 2307054;
    result[2] += 172260102;
    result[3] += 22301531;
    result[4] += 1538036;
    result[5] += 10189492;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 66759969;
    result[1] += 30360975;
    result[2] += 5924092;
    result[3] += 19025451;
    result[4] += 30019201;
    result[5] += 62658674;
  } else {
    result[0] += 5287365;
    result[1] += 2847042;
    result[2] += 175093126;
    result[3] += 22369621;
    result[4] += 1626881;
    result[5] += 7524327;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 65342841;
    result[1] += 34143106;
    result[2] += 5121465;
    result[3] += 18366636;
    result[4] += 30375591;
    result[5] += 61398723;
  } else {
    result[0] += 5104375;
    result[1] += 1822991;
    result[2] += 168626687;
    result[3] += 25521876;
    result[4] += 2369888;
    result[5] += 11302545;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
