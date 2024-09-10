
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 45102822;
    result[1] += 20624908;
    result[2] += 4192975;
    result[3] += 14165459;
    result[4] += 20662683;
    result[5] += 38416725;
  } else {
    result[0] += 1520097;
    result[1] += 1243716;
    result[2] += 122298779;
    result[3] += 9396968;
    result[4] += 0;
    result[5] += 8706014;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 3793661;
    result[1] += 812927;
    result[2] += 451626;
    result[3] += 18877984;
    result[4] += 27368561;
    result[5] += 91860814;
  } else {
    result[0] += 48413906;
    result[1] += 21865769;
    result[2] += 43289807;
    result[3] += 12103476;
    result[4] += 11220011;
    result[5] += 6272604;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 46318274;
    result[1] += 21217285;
    result[2] += 2943438;
    result[3] += 11487586;
    result[4] += 21135523;
    result[5] += 40063468;
  } else {
    result[0] += 2595146;
    result[1] += 756917;
    result[2] += 110942508;
    result[3] += 18814811;
    result[4] += 1081311;
    result[5] += 8974881;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44383604;
    result[1] += 21205500;
    result[2] += 3527927;
    result[3] += 13466820;
    result[4] += 19915720;
    result[5] += 40666003;
  } else {
    result[0] += 4627024;
    result[1] += 1360889;
    result[2] += 117036497;
    result[3] += 15378051;
    result[4] += 272177;
    result[5] += 4490935;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44268303;
    result[1] += 20043180;
    result[2] += 4634043;
    result[3] += 13864455;
    result[4] += 18536174;
    result[5] += 41819418;
  } else {
    result[0] += 1116300;
    result[1] += 558150;
    result[2] += 118886034;
    result[3] += 15209598;
    result[4] += 418612;
    result[5] += 6976879;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43164153;
    result[1] += 20337325;
    result[2] += 4940706;
    result[3] += 13673116;
    result[4] += 21103326;
    result[5] += 39946949;
  } else {
    result[0] += 1184274;
    result[1] += 526344;
    result[2] += 123164503;
    result[3] += 11053224;
    result[4] += 263172;
    result[5] += 6974058;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 3607620;
    result[1] += 379749;
    result[2] += 759499;
    result[3] += 19462163;
    result[4] += 28481215;
    result[5] += 90475327;
  } else {
    result[0] += 48843710;
    result[1] += 23774633;
    result[2] += 41940006;
    result[3] += 11347964;
    result[4] += 9708334;
    result[5] += 7550927;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45981930;
    result[1] += 20361149;
    result[2] += 2271204;
    result[3] += 11356022;
    result[4] += 22313588;
    result[5] += 40881681;
  } else {
    result[0] += 3599458;
    result[1] += 1045004;
    result[2] += 110305999;
    result[3] += 18926187;
    result[4] += 1161115;
    result[5] += 8127810;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 45816013;
    result[1] += 20068171;
    result[2] += 5793264;
    result[3] += 13593346;
    result[4] += 18326405;
    result[5] += 39568375;
  } else {
    result[0] += 1096004;
    result[1] += 685002;
    result[2] += 121656489;
    result[3] += 12467050;
    result[4] += 274001;
    result[5] += 6987028;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44220148;
    result[1] += 20858560;
    result[2] += 4816431;
    result[3] += 12325513;
    result[4] += 20972334;
    result[5] += 39972587;
  } else {
    result[0] += 1634621;
    result[1] += 953529;
    result[2] += 115240797;
    result[3] += 16346212;
    result[4] += 1225965;
    result[5] += 7764450;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45554442;
    result[1] += 21016195;
    result[2] += 4334832;
    result[3] += 12114308;
    result[4] += 20590453;
    result[5] += 39555344;
  } else {
    result[0] += 1524389;
    result[1] += 635162;
    result[2] += 109501975;
    result[3] += 17149381;
    result[4] += 2540649;
    result[5] += 11814018;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45043523;
    result[1] += 22205111;
    result[2] += 2414459;
    result[3] += 12943086;
    result[4] += 20146883;
    result[5] += 40412511;
  } else {
    result[0] += 4144578;
    result[1] += 1420998;
    result[2] += 111666781;
    result[3] += 17880894;
    result[4] += 1065748;
    result[5] += 6986574;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 4309958;
    result[1] += 468473;
    result[2] += 1218031;
    result[3] += 19020034;
    result[4] += 28389508;
    result[5] += 89759569;
  } else {
    result[0] += 47663979;
    result[1] += 23180842;
    result[2] += 45102799;
    result[3] += 11069503;
    result[4] += 9897438;
    result[5] += 6251013;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 43422592;
    result[1] += 22395270;
    result[2] += 2345054;
    result[3] += 11881609;
    result[4] += 20362889;
    result[5] += 42758160;
  } else {
    result[0] += 1969603;
    result[1] += 0;
    result[2] += 117437626;
    result[3] += 17357133;
    result[4] += 615501;
    result[5] += 5785711;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 5356226;
    result[1] += 907834;
    result[2] += 272350;
    result[3] += 17884349;
    result[4] += 28778368;
    result[5] += 89966446;
  } else {
    result[0] += 48294697;
    result[1] += 24543929;
    result[2] += 44328891;
    result[3] += 10090771;
    result[4] += 10090771;
    result[5] += 5816514;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 46202721;
    result[1] += 22079872;
    result[2] += 3378770;
    result[3] += 11236376;
    result[4] += 19211846;
    result[5] += 41055989;
  } else {
    result[0] += 1574579;
    result[1] += 605607;
    result[2] += 107798107;
    result[3] += 18773827;
    result[4] += 2906915;
    result[5] += 11506539;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44661639;
    result[1] += 19301955;
    result[2] += 5380467;
    result[3] += 13018472;
    result[4] += 20844606;
    result[5] += 39958434;
  } else {
    result[0] += 2383755;
    result[1] += 1682651;
    result[2] += 113719179;
    result[3] += 16405849;
    result[4] += 1542430;
    result[5] += 7431709;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 46025829;
    result[1] += 21167997;
    result[2] += 2835346;
    result[3] += 12506596;
    result[4] += 20546551;
    result[5] += 40083254;
  } else {
    result[0] += 2386092;
    result[1] += 753503;
    result[2] += 115160380;
    result[3] += 15823563;
    result[4] += 1507006;
    result[5] += 7535030;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 43684476;
    result[1] += 22003733;
    result[2] += 2705046;
    result[3] += 13121492;
    result[4] += 19379435;
    result[5] += 42271392;
  } else {
    result[0] += 4362076;
    result[1] += 1901417;
    result[2] += 110729625;
    result[3] += 17560152;
    result[4] += 1006632;
    result[5] += 7605671;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 47735096;
    result[1] += 21405338;
    result[2] += 3018192;
    result[3] += 10643099;
    result[4] += 20491938;
    result[5] += 39871910;
  } else {
    result[0] += 2227801;
    result[1] += 234505;
    result[2] += 106465473;
    result[3] += 18291425;
    result[4] += 2227801;
    result[5] += 13718568;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43539066;
    result[1] += 20457657;
    result[2] += 4486995;
    result[3] += 13384935;
    result[4] += 20419632;
    result[5] += 40877289;
  } else {
    result[0] += 1349345;
    result[1] += 404803;
    result[2] += 120361634;
    result[3] += 14572933;
    result[4] += 269869;
    result[5] += 6206990;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    result[0] += 6199094;
    result[1] += 753943;
    result[2] += 1424116;
    result[3] += 20942887;
    result[4] += 28649869;
    result[5] += 85195664;
  } else {
    result[0] += 51350373;
    result[1] += 24572853;
    result[2] += 42347982;
    result[3] += 10747752;
    result[4] += 7945988;
    result[5] += 6200626;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44436007;
    result[1] += 22372027;
    result[2] += 2695425;
    result[3] += 12629991;
    result[4] += 19753615;
    result[5] += 41278509;
  } else {
    result[0] += 2325794;
    result[1] += 0;
    result[2] += 124171587;
    result[3] += 12145816;
    result[4] += 387632;
    result[5] += 4134745;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43610086;
    result[1] += 20533556;
    result[2] += 4858216;
    result[3] += 13663734;
    result[4] += 21254698;
    result[5] += 39245282;
  } else {
    result[0] += 1765799;
    result[1] += 407492;
    result[2] += 121025169;
    result[3] += 13311410;
    result[4] += 271661;
    result[5] += 6384043;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    result[0] += 5433392;
    result[1] += 1293664;
    result[2] += 2156108;
    result[3] += 21216103;
    result[4] += 29581802;
    result[5] += 83484504;
  } else {
    result[0] += 50510407;
    result[1] += 22564631;
    result[2] += 44586626;
    result[3] += 10445751;
    result[4] += 7506470;
    result[5] += 7551690;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 43190483;
    result[1] += 21167997;
    result[2] += 1708975;
    result[3] += 12040512;
    result[4] += 22255527;
    result[5] += 42802079;
  } else {
    result[0] += 2260509;
    result[1] += 0;
    result[2] += 118551144;
    result[3] += 15572396;
    result[4] += 502335;
    result[5] += 6279191;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45463685;
    result[1] += 20871786;
    result[2] += 2153749;
    result[3] += 11316972;
    result[4] += 22790581;
    result[5] += 40568801;
  } else {
    result[0] += 1713092;
    result[1] += 0;
    result[2] += 114287733;
    result[3] += 19945289;
    result[4] += 367091;
    result[5] += 6852369;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 46317158;
    result[1] += 21070510;
    result[2] += 3151085;
    result[3] += 12110797;
    result[4] += 20311212;
    result[5] += 40204811;
  } else {
    result[0] += 2035529;
    result[1] += 0;
    result[2] += 120503347;
    result[3] += 15605726;
    result[4] += 0;
    result[5] += 5020972;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 46448050;
    result[1] += 20643577;
    result[2] += 2166787;
    result[3] += 11621861;
    result[4] += 22180027;
    result[5] += 40105271;
  } else {
    result[0] += 2762423;
    result[1] += 1321158;
    result[2] += 108455130;
    result[3] += 20297804;
    result[4] += 1201053;
    result[5] += 9128006;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 3874210;
    result[1] += 540587;
    result[2] += 1081174;
    result[3] += 18470071;
    result[4] += 29371918;
    result[5] += 89827614;
  } else {
    result[0] += 47942998;
    result[1] += 22202384;
    result[2] += 44493225;
    result[3] += 11676154;
    result[4] += 9464761;
    result[5] += 7386052;
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
