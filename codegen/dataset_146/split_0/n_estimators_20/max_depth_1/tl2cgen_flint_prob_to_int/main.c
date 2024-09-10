
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 66676376;
    result[1] += 27327345;
    result[2] += 5981521;
    result[3] += 19821121;
    result[4] += 31725523;
    result[5] += 63216476;
  } else {
    result[0] += 2767375;
    result[1] += 553475;
    result[2] += 168809925;
    result[3] += 26935791;
    result[4] += 4612293;
    result[5] += 11069503;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 68814713;
    result[1] += 30719817;
    result[2] += 5052219;
    result[3] += 18699019;
    result[4] += 30487531;
    result[5] += 60975063;
  } else {
    result[0] += 1903797;
    result[1] += 761519;
    result[2] += 173626337;
    result[3] += 24749368;
    result[4] += 1142278;
    result[5] += 12565063;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 66937584;
    result[1] += 29853696;
    result[2] += 5480952;
    result[3] += 19766412;
    result[4] += 32594172;
    result[5] += 60115548;
  } else {
    result[0] += 3945508;
    result[1] += 563644;
    result[2] += 172099301;
    result[3] += 28182200;
    result[4] += 751525;
    result[5] += 9206185;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 65467090;
    result[1] += 30520244;
    result[2] += 5882718;
    result[3] += 20269170;
    result[4] += 28015721;
    result[5] += 64593419;
  } else {
    result[0] += 2828117;
    result[1] += 2639576;
    result[2] += 165727666;
    result[3] += 27149924;
    result[4] += 2073952;
    result[5] += 14329127;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64058785;
    result[1] += 28972171;
    result[2] += 8000205;
    result[3] += 22114852;
    result[4] += 29372181;
    result[5] += 62230167;
  } else {
    result[0] += 2211827;
    result[1] += 1608601;
    result[2] += 179962346;
    result[3] += 21716126;
    result[4] += 804300;
    result[5] += 8445160;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65966204;
    result[1] += 29974217;
    result[2] += 6648201;
    result[3] += 20460412;
    result[4] += 31693580;
    result[5] += 60005748;
  } else {
    result[0] += 6766862;
    result[1] += 1791228;
    result[2] += 163797872;
    result[3] += 25475246;
    result[4] += 1393177;
    result[5] += 15523978;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65597292;
    result[1] += 30189344;
    result[2] += 6733682;
    result[3] += 21267214;
    result[4] += 31872764;
    result[5] += 59088065;
  } else {
    result[0] += 644889;
    result[1] += 1074816;
    result[2] += 171110809;
    result[3] += 27300342;
    result[4] += 2794523;
    result[5] += 11822983;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 65271963;
    result[1] += 31614228;
    result[2] += 6070412;
    result[3] += 18391547;
    result[4] += 31073301;
    result[5] += 62326911;
  } else {
    result[0] += 10111854;
    result[1] += 685549;
    result[2] += 154077238;
    result[3] += 30678337;
    result[4] += 3256359;
    result[5] += 15939024;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 67806192;
    result[1] += 28870829;
    result[2] += 8454207;
    result[3] += 19266390;
    result[4] += 30078573;
    result[5] += 60272170;
  } else {
    result[0] += 4129776;
    result[1] += 1179936;
    result[2] += 169517482;
    result[3] += 23992033;
    result[4] += 2556528;
    result[5] += 13372608;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 67857062;
    result[1] += 29927957;
    result[2] += 3847880;
    result[3] += 16674147;
    result[4] += 34264457;
    result[5] += 62176858;
  } else {
    result[0] += 9507942;
    result[1] += 1475370;
    result[2] += 152291015;
    result[3] += 31310639;
    result[4] += 2786810;
    result[5] += 17376585;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 69442765;
    result[1] += 30274454;
    result[2] += 5889971;
    result[3] += 19378006;
    result[4] += 31570247;
    result[5] += 58192919;
  } else {
    result[0] += 3275822;
    result[1] += 727960;
    result[2] += 167248938;
    result[3] += 28390461;
    result[4] += 4185773;
    result[5] += 10919408;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    result[0] += 3130857;
    result[1] += 3273169;
    result[2] += 2276987;
    result[3] += 26896912;
    result[4] += 44543564;
    result[5] += 134626874;
  } else {
    result[0] += 72640236;
    result[1] += 33924673;
    result[2] += 62022590;
    result[3] += 17739237;
    result[4] += 15343793;
    result[5] += 13077832;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 65972298;
    result[1] += 30896928;
    result[2] += 3236821;
    result[3] += 19656331;
    result[4] += 31897400;
    result[5] += 63088585;
  } else {
    result[0] += 3466626;
    result[1] += 0;
    result[2] += 166580507;
    result[3] += 34118899;
    result[4] += 364908;
    result[5] += 10217424;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 67793573;
    result[1] += 30686752;
    result[2] += 3239484;
    result[3] += 19378006;
    result[4] += 32394843;
    result[5] += 61255704;
  } else {
    result[0] += 2001891;
    result[1] += 0;
    result[2] += 173618593;
    result[3] += 30028373;
    result[4] += 363980;
    result[5] += 8735526;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 66648000;
    result[1] += 30175945;
    result[2] += 6409552;
    result[3] += 21724411;
    result[4] += 30232667;
    result[5] += 59557787;
  } else {
    result[0] += 1858399;
    result[1] += 1651910;
    result[2] += 173657091;
    result[3] += 25191635;
    result[4] += 3303820;
    result[5] += 9085507;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 72589295;
    result[1] += 29289357;
    result[2] += 3563035;
    result[3] += 17573614;
    result[4] += 31765365;
    result[5] += 59967695;
  } else {
    result[0] += 5072796;
    result[1] += 845466;
    result[2] += 159454888;
    result[3] += 30774962;
    result[4] += 3889143;
    result[5] += 14711108;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 7334858;
    result[1] += 2580783;
    result[2] += 271661;
    result[3] += 28388620;
    result[4] += 42786676;
    result[5] += 133385764;
  } else {
    result[0] += 71869560;
    result[1] += 32228799;
    result[2] += 66906193;
    result[3] += 18463726;
    result[4] += 13963607;
    result[5] += 11316477;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 71785056;
    result[1] += 30158219;
    result[2] += 3762192;
    result[3] += 17415309;
    result[4] += 29794135;
    result[5] += 61833451;
  } else {
    result[0] += 6173806;
    result[1] += 2836613;
    result[2] += 156180628;
    result[3] += 31870192;
    result[4] += 1168017;
    result[5] += 16519104;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65328533;
    result[1] += 28655858;
    result[2] += 8983384;
    result[3] += 20980181;
    result[4] += 34910112;
    result[5] += 55890294;
  } else {
    result[0] += 6755668;
    result[1] += 2661323;
    result[2] += 171757748;
    result[3] += 22723611;
    result[4] += 1023586;
    result[5] += 9826426;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 68336976;
    result[1] += 28512612;
    result[2] += 6996960;
    result[3] += 19241640;
    result[4] += 32769096;
    result[5] += 58891080;
  } else {
    result[0] += 4509152;
    result[1] += 3381864;
    result[2] += 163080997;
    result[3] += 25176098;
    result[4] += 1690932;
    result[5] += 16909320;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
