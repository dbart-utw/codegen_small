
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
    result[0] += 66652189;
    result[1] += 30177640;
    result[2] += 4930598;
    result[3] += 17702631;
    result[4] += 29880616;
    result[5] += 65404688;
  } else {
    result[0] += 3191965;
    result[1] += 2482640;
    result[2] += 167578203;
    result[3] += 26422383;
    result[4] += 2305308;
    result[5] += 12767863;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 66574860;
    result[1] += 30965051;
    result[2] += 6594409;
    result[3] += 19209800;
    result[4] += 30334281;
    result[5] += 61069962;
  } else {
    result[0] += 2781199;
    result[1] += 1390599;
    result[2] += 174619623;
    result[3] += 26222742;
    result[4] += 794628;
    result[5] += 8939571;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64839344;
    result[1] += 29720400;
    result[2] += 7955747;
    result[3] += 22787534;
    result[4] += 28981652;
    result[5] += 60463683;
  } else {
    result[0] += 2666407;
    result[1] += 2666407;
    result[2] += 170444977;
    result[3] += 22767018;
    result[4] += 410216;
    result[5] += 15793337;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 69351995;
    result[1] += 31685155;
    result[2] += 3198127;
    result[3] += 18774195;
    result[4] += 29849193;
    result[5] += 61889696;
  } else {
    result[0] += 2505397;
    result[1] += 1789569;
    result[2] += 158734832;
    result[3] += 32928082;
    result[4] += 3221225;
    result[5] += 15569256;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 62786598;
    result[1] += 29175294;
    result[2] += 7393349;
    result[3] += 21611329;
    result[4] += 29630269;
    result[5] += 64151524;
  } else {
    result[0] += 1636178;
    result[1] += 1431655;
    result[2] += 176911748;
    result[3] += 23111014;
    result[4] += 1022611;
    result[5] += 10635157;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65353243;
    result[1] += 30369031;
    result[2] += 7976856;
    result[3] += 19087477;
    result[4] += 30653918;
    result[5] += 61307837;
  } else {
    result[0] += 4469691;
    result[1] += 1422174;
    result[2] += 169035609;
    result[3] += 25395975;
    result[4] += 1015839;
    result[5] += 13409074;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 63546822;
    result[1] += 32314841;
    result[2] += 6383178;
    result[3] += 19833447;
    result[4] += 29123252;
    result[5] += 63546822;
  } else {
    result[0] += 2638685;
    result[1] += 0;
    result[2] += 180648435;
    result[3] += 25777922;
    result[4] += 0;
    result[5] += 5683321;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 6267846;
    result[1] += 2984688;
    result[2] += 4029329;
    result[3] += 27160668;
    result[4] += 40442534;
    result[5] += 133863296;
  } else {
    result[0] += 74626166;
    result[1] += 31955469;
    result[2] += 61882020;
    result[3] += 19084516;
    result[4] += 15597312;
    result[5] += 11602878;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 67824593;
    result[1] += 29750735;
    result[2] += 6493216;
    result[3] += 20424116;
    result[4] += 30104910;
    result[5] += 60150792;
  } else {
    result[0] += 3434527;
    result[1] += 2892233;
    result[2] += 162688155;
    result[3] += 25668575;
    result[4] += 1084587;
    result[5] += 18980284;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 68922013;
    result[1] += 29725224;
    result[2] += 2680631;
    result[3] += 16024219;
    result[4] += 31154894;
    result[5] += 66241381;
  } else {
    result[0] += 1934669;
    result[1] += 1934669;
    result[2] += 159522331;
    result[3] += 28844170;
    result[4] += 1582911;
    result[5] += 20929611;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 71461666;
    result[1] += 32097189;
    result[2] += 1877382;
    result[3] += 14231772;
    result[4] += 30764853;
    result[5] += 64315500;
  } else {
    result[0] += 4529848;
    result[1] += 0;
    result[2] += 161396817;
    result[3] += 34896609;
    result[4] += 838860;
    result[5] += 13086228;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65729987;
    result[1] += 31525310;
    result[2] += 6156841;
    result[3] += 19439658;
    result[4] += 29986100;
    result[5] += 61910465;
  } else {
    result[0] += 4055682;
    result[1] += 1216704;
    result[2] += 172772055;
    result[3] += 26970285;
    result[4] += 811136;
    result[5] += 8922500;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 70500023;
    result[1] += 30918952;
    result[2] += 4210752;
    result[3] += 17264084;
    result[4] += 30197108;
    result[5] += 61657443;
  } else {
    result[0] += 3248581;
    result[1] += 1538801;
    result[2] += 159522471;
    result[3] += 32143863;
    result[4] += 1025867;
    result[5] += 17268777;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 70369183;
    result[1] += 30797708;
    result[2] += 5312007;
    result[3] += 15577910;
    result[4] += 29962112;
    result[5] += 62729441;
  } else {
    result[0] += 1573888;
    result[1] += 699506;
    result[2] += 156514484;
    result[3] += 33751168;
    result[4] += 4896542;
    result[5] += 17312775;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 66944637;
    result[1] += 33323022;
    result[2] += 4717775;
    result[3] += 18751664;
    result[4] += 27112279;
    result[5] += 63898985;
  } else {
    result[0] += 5063172;
    result[1] += 1920513;
    result[2] += 162370714;
    result[3] += 27934746;
    result[4] += 1920513;
    result[5] += 15538702;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 66380939;
    result[1] += 31211090;
    result[2] += 6770052;
    result[3] += 22605091;
    result[4] += 26908090;
    result[5] += 60873100;
  } else {
    result[0] += 2776063;
    result[1] += 2577773;
    result[2] += 171124504;
    result[3] += 19630736;
    result[4] += 396580;
    result[5] += 18242705;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 67403677;
    result[1] += 31839858;
    result[2] += 4592884;
    result[3] += 16199226;
    result[4] += 30288208;
    result[5] += 64424509;
  } else {
    result[0] += 6288385;
    result[1] += 2672563;
    result[2] += 151707300;
    result[3] += 32070766;
    result[4] += 2672563;
    result[5] += 19336785;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 66815627;
    result[1] += 29507408;
    result[2] += 6387619;
    result[3] += 19219385;
    result[4] += 30637960;
    result[5] += 62180363;
  } else {
    result[0] += 1881923;
    result[1] += 1463718;
    result[2] += 175437076;
    result[3] += 25510516;
    result[4] += 627307;
    result[5] += 9827821;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 67083843;
    result[1] += 28652178;
    result[2] += 7148747;
    result[3] += 18243602;
    result[4] += 27965898;
    result[5] += 65654093;
  } else {
    result[0] += 3007680;
    result[1] += 1804608;
    result[2] += 175247498;
    result[3] += 23459905;
    result[4] += 200512;
    result[5] += 11028160;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    result[0] += 5499137;
    result[1] += 4371109;
    result[2] += 2961073;
    result[3] += 29892746;
    result[4] += 43288081;
    result[5] += 128736216;
  } else {
    result[0] += 72102917;
    result[1] += 32052965;
    result[2] += 63780849;
    result[3] += 18854685;
    result[4] += 13588376;
    result[5] += 14368570;
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
