
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44865942;
    result[1] += 19812922;
    result[2] += 4742861;
    result[3] += 14075589;
    result[4] += 19506931;
    result[5] += 40161329;
  } else {
    result[0] += 3569224;
    result[1] += 925354;
    result[2] += 113818616;
    result[3] += 15334447;
    result[4] += 793161;
    result[5] += 8724771;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44338592;
    result[1] += 18353582;
    result[2] += 4845956;
    result[3] += 13393154;
    result[4] += 19918025;
    result[5] += 42316264;
  } else {
    result[0] += 3199230;
    result[1] += 666506;
    result[2] += 115172307;
    result[3] += 17862371;
    result[4] += 799807;
    result[5] += 5465352;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45752720;
    result[1] += 20418242;
    result[2] += 3766471;
    result[3] += 12211298;
    result[4] += 19982124;
    result[5] += 41034719;
  } else {
    result[0] += 3181457;
    result[1] += 942654;
    result[2] += 109465695;
    result[3] += 17203435;
    result[4] += 706990;
    result[5] += 11665343;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42771143;
    result[1] += 18498709;
    result[2] += 4786113;
    result[3] += 12990880;
    result[4] += 20056095;
    result[5] += 44062634;
  } else {
    result[0] += 406335;
    result[1] += 1083561;
    result[2] += 117430988;
    result[3] += 15711643;
    result[4] += 1219006;
    result[5] += 7314040;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44333870;
    result[1] += 19813799;
    result[2] += 3163880;
    result[3] += 12022744;
    result[4] += 21079351;
    result[5] += 42751930;
  } else {
    result[0] += 2730355;
    result[1] += 1305822;
    result[2] += 110401315;
    result[3] += 21605418;
    result[4] += 474844;
    result[5] += 6647821;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 45668724;
    result[1] += 20585370;
    result[2] += 2796044;
    result[3] += 12075669;
    result[4] += 19855967;
    result[5] += 42183799;
  } else {
    result[0] += 5536178;
    result[1] += 996512;
    result[2] += 100426278;
    result[3] += 21591096;
    result[4] += 1771577;
    result[5] += 12843934;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 46159903;
    result[1] += 20058800;
    result[2] += 1890788;
    result[3] += 9536150;
    result[4] += 21456339;
    result[5] += 44063594;
  } else {
    result[0] += 3411242;
    result[1] += 1599019;
    result[2] += 105002302;
    result[3] += 22279676;
    result[4] += 1066013;
    result[5] += 9807321;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 44762470;
    result[1] += 20523014;
    result[2] += 3220915;
    result[3] += 11851318;
    result[4] += 20523014;
    result[5] += 42284842;
  } else {
    result[0] += 4003158;
    result[1] += 1685540;
    result[2] += 103660726;
    result[3] += 19805098;
    result[4] += 1369501;
    result[5] += 12641552;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 5089920;
    result[1] += 1388160;
    result[2] += 1017984;
    result[3] += 19249153;
    result[4] += 28040833;
    result[5] += 88379525;
  } else {
    result[0] += 50035910;
    result[1] += 20913788;
    result[2] += 43312062;
    result[3] += 11482935;
    result[4] += 9518174;
    result[5] += 7902704;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 43005010;
    result[1] += 20316705;
    result[2] += 4545566;
    result[3] += 12806639;
    result[4] += 21067711;
    result[5] += 41423943;
  } else {
    result[0] += 2259257;
    result[1] += 1070174;
    result[2] += 108563265;
    result[3] += 20214408;
    result[4] += 2497074;
    result[5] += 8561396;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44050946;
    result[1] += 18895537;
    result[2] += 4791506;
    result[3] += 14258595;
    result[4] += 19668361;
    result[5] += 41500628;
  } else {
    result[0] += 766274;
    result[1] += 766274;
    result[2] += 118389375;
    result[3] += 16474896;
    result[4] += 255424;
    result[5] += 6513331;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44178967;
    result[1] += 18609633;
    result[2] += 3782445;
    result[3] += 13843751;
    result[4] += 19706543;
    result[5] += 43044234;
  } else {
    result[0] += 1100215;
    result[1] += 0;
    result[2] += 123499219;
    result[3] += 15953128;
    result[4] += 0;
    result[5] += 2613012;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44751618;
    result[1] += 20118426;
    result[2] += 2574208;
    result[3] += 11841357;
    result[4] += 20078823;
    result[5] += 43801141;
  } else {
    result[0] += 2246198;
    result[1] += 0;
    result[2] += 110418371;
    result[3] += 22934865;
    result[4] += 236441;
    result[5] += 7329699;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44417129;
    result[1] += 18923507;
    result[2] += 2989992;
    result[3] += 12550101;
    result[4] += 19985741;
    result[5] += 44299103;
  } else {
    result[0] += 2653447;
    result[1] += 1206112;
    result[2] += 109756254;
    result[3] += 20262693;
    result[4] += 723667;
    result[5] += 8563400;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43447307;
    result[1] += 18527309;
    result[2] += 4440429;
    result[3] += 13933761;
    result[4] += 20173331;
    result[5] += 42643436;
  } else {
    result[0] += 395485;
    result[1] += 527313;
    result[2] += 120886587;
    result[3] += 14764774;
    result[4] += 263656;
    result[5] += 6327760;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
    result[0] += 12710561;
    result[1] += 2318818;
    result[2] += 1975289;
    result[3] += 11679975;
    result[4] += 31948167;
    result[5] += 82532764;
  } else {
    result[0] += 44685425;
    result[1] += 23158470;
    result[2] += 45410543;
    result[3] += 16768364;
    result[4] += 5846267;
    result[5] += 7296504;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43641551;
    result[1] += 19920011;
    result[2] += 4143666;
    result[3] += 12240922;
    result[4] += 20034057;
    result[5] += 43185367;
  } else {
    result[0] += 1485680;
    result[1] += 1215556;
    result[2] += 115883079;
    result[3] += 17828166;
    result[4] += 135061;
    result[5] += 6618031;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44331987;
    result[1] += 19962577;
    result[2] += 3766523;
    result[3] += 12580190;
    result[4] += 19774250;
    result[5] += 42750047;
  } else {
    result[0] += 1676084;
    result[1] += 0;
    result[2] += 120678105;
    result[3] += 16481500;
    result[4] += 0;
    result[5] += 4329885;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42339307;
    result[1] += 18967700;
    result[2] += 5021998;
    result[3] += 12554995;
    result[4] += 21362807;
    result[5] += 42918768;
  } else {
    result[0] += 3962618;
    result[1] += 255652;
    result[2] += 109419404;
    result[3] += 16617432;
    result[4] += 2556528;
    result[5] += 10353939;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44753635;
    result[1] += 19728446;
    result[2] += 4375569;
    result[3] += 14047882;
    result[4] += 20112268;
    result[5] += 40147772;
  } else {
    result[0] += 4441267;
    result[1] += 783753;
    result[2] += 113252331;
    result[3] += 16197565;
    result[4] += 914378;
    result[5] += 7576280;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43042738;
    result[1] += 18031417;
    result[2] += 6088026;
    result[3] += 14619020;
    result[4] += 21172373;
    result[5] += 40211999;
  } else {
    result[0] += 2019972;
    result[1] += 1262483;
    result[2] += 117410922;
    result[3] += 14013561;
    result[4] += 0;
    result[5] += 8458636;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44981473;
    result[1] += 20161408;
    result[2] += 2622940;
    result[3] += 11666213;
    result[4] += 19887370;
    result[5] += 43846170;
  } else {
    result[0] += 2571836;
    result[1] += 0;
    result[2] += 116834867;
    result[3] += 18492730;
    result[4] += 0;
    result[5] += 5266141;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45449389;
    result[1] += 19707795;
    result[2] += 3722148;
    result[3] += 12890387;
    result[4] += 19942878;
    result[5] += 41452977;
  } else {
    result[0] += 977239;
    result[1] += 366464;
    result[2] += 114581323;
    result[3] += 16490915;
    result[4] += 1465859;
    result[5] += 9283774;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
    result[0] += 4921856;
    result[1] += 1813315;
    result[2] += 2417754;
    result[3] += 21587089;
    result[4] += 28149564;
    result[5] += 84275996;
  } else {
    result[0] += 49077593;
    result[1] += 22911915;
    result[2] += 43428699;
    result[3] += 10936259;
    result[4] += 8857466;
    result[5] += 7953643;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 41869538;
    result[1] += 20992020;
    result[2] += 5190754;
    result[3] += 14389075;
    result[4] += 18625646;
    result[5] += 42098541;
  } else {
    result[0] += 932240;
    result[1] += 266354;
    result[2] += 119726375;
    result[3] += 14116791;
    result[4] += 2264013;
    result[5] += 5859800;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 46530842;
    result[1] += 22575173;
    result[2] += 2111347;
    result[3] += 10069501;
    result[4] += 20910457;
    result[5] += 40968254;
  } else {
    result[0] += 2312674;
    result[1] += 550636;
    result[2] += 105612144;
    result[3] += 20043180;
    result[4] += 2422802;
    result[5] += 12224137;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    result[0] += 7647059;
    result[1] += 946028;
    result[2] += 946028;
    result[3] += 21206795;
    result[4] += 27671320;
    result[5] += 84748345;
  } else {
    result[0] += 48562144;
    result[1] += 24495106;
    result[2] += 47040117;
    result[3] += 9560226;
    result[4] += 8561396;
    result[5] += 4946584;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 45394883;
    result[1] += 18565488;
    result[2] += 5471536;
    result[3] += 13584503;
    result[4] += 19923938;
    result[5] += 40225225;
  } else {
    result[0] += 1803442;
    result[1] += 971084;
    result[2] += 114865404;
    result[3] += 17895697;
    result[4] += 1525989;
    result[5] += 6103958;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 43016107;
    result[1] += 20926754;
    result[2] += 3072579;
    result[3] += 11210761;
    result[4] += 21425010;
    result[5] += 43514363;
  } else {
    result[0] += 4986899;
    result[1] += 935043;
    result[2] += 101192504;
    result[3] += 24518923;
    result[4] += 1766193;
    result[5] += 9766011;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 45336443;
    result[1] += 20167601;
    result[2] += 3212178;
    result[3] += 12482769;
    result[4] += 20248922;
    result[5] += 41717660;
  } else {
    result[0] += 3071751;
    result[1] += 1755286;
    result[2] += 106194849;
    result[3] += 18101394;
    result[4] += 1316465;
    result[5] += 12725829;
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
