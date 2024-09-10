
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44644254;
    result[1] += 20593349;
    result[2] += 6117212;
    result[3] += 12614376;
    result[4] += 18541613;
    result[5] += 40654768;
  } else {
    result[0] += 811903;
    result[1] += 676585;
    result[2] += 116237457;
    result[3] += 13937669;
    result[4] += 2029757;
    result[5] += 9472202;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 40819321;
    result[1] += 18659197;
    result[2] += 6480439;
    result[3] += 16201099;
    result[4] += 20409660;
    result[5] += 40595858;
  } else {
    result[0] += 874738;
    result[1] += 437369;
    result[2] += 126253960;
    result[3] += 10788444;
    result[4] += 0;
    result[5] += 4811063;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 41182008;
    result[1] += 20305282;
    result[2] += 4381064;
    result[3] += 14133695;
    result[4] += 21333880;
    result[5] += 41829644;
  } else {
    result[0] += 402150;
    result[1] += 1206451;
    result[2] += 121181349;
    result[3] += 13405016;
    result[4] += 268100;
    result[5] += 6702508;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    result[0] += 4415964;
    result[1] += 2031343;
    result[2] += 2031343;
    result[3] += 19695202;
    result[4] += 27908897;
    result[5] += 87082824;
  } else {
    result[0] += 48734366;
    result[1] += 22245384;
    result[2] += 44580107;
    result[3] += 10229303;
    result[4] += 8755211;
    result[5] += 8621203;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 45295761;
    result[1] += 18737733;
    result[2] += 5187719;
    result[3] += 13627442;
    result[4] += 19899163;
    result[5] += 40417756;
  } else {
    result[0] += 3172995;
    result[1] += 761519;
    result[2] += 115243212;
    result[3] += 15230380;
    result[4] += 888438;
    result[5] += 7869029;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44056881;
    result[1] += 18672093;
    result[2] += 5130967;
    result[3] += 13656861;
    result[4] += 20639607;
    result[5] += 41009164;
  } else {
    result[0] += 2311193;
    result[1] += 1027196;
    result[2] += 115944857;
    result[3] += 14509157;
    result[4] += 2824791;
    result[5] += 6548380;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 42677764;
    result[1] += 19742899;
    result[2] += 4255954;
    result[3] += 13792444;
    result[4] += 22698423;
    result[5] += 39998089;
  } else {
    result[0] += 3360130;
    result[1] += 2520098;
    result[2] += 109684272;
    result[3] += 15720612;
    result[4] += 600023;
    result[5] += 11280439;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 43412002;
    result[1] += 19903698;
    result[2] += 3878870;
    result[3] += 14966954;
    result[4] += 20491405;
    result[5] += 40512645;
  } else {
    result[0] += 4641887;
    result[1] += 1343704;
    result[2] += 106885562;
    result[3] += 18201084;
    result[4] += 1465859;
    result[5] += 10627478;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43144742;
    result[1] += 20042415;
    result[2] += 4436870;
    result[3] += 14496327;
    result[4] += 20998637;
    result[5] += 40046582;
  } else {
    result[0] += 3437031;
    result[1] += 1189741;
    result[2] += 116859067;
    result[3] += 12558383;
    result[4] += 1454128;
    result[5] += 7667223;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42148129;
    result[1] += 19942700;
    result[2] += 4640512;
    result[3] += 15187133;
    result[4] += 19981051;
    result[5] += 41266048;
  } else {
    result[0] += 3536569;
    result[1] += 1964760;
    result[2] += 115658924;
    result[3] += 15718087;
    result[4] += 916888;
    result[5] += 5370346;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44155361;
    result[1] += 21678446;
    result[2] += 2754719;
    result[3] += 12496047;
    result[4] += 21039670;
    result[5] += 41041330;
  } else {
    result[0] += 3925507;
    result[1] += 1731841;
    result[2] += 109567848;
    result[3] += 18934802;
    result[4] += 1270017;
    result[5] += 7735559;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43229188;
    result[1] += 19757538;
    result[2] += 5207413;
    result[3] += 13746039;
    result[4] += 19566089;
    result[5] += 41659306;
  } else {
    result[0] += 1185363;
    result[1] += 658535;
    result[2] += 119590012;
    result[3] += 13697534;
    result[4] += 790242;
    result[5] += 7243888;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44092526;
    result[1] += 20386036;
    result[2] += 4826239;
    result[3] += 14555939;
    result[4] += 19304959;
    result[5] += 39999875;
  } else {
    result[0] += 1664716;
    result[1] += 512220;
    result[2] += 117938726;
    result[3] += 14726333;
    result[4] += 1152495;
    result[5] += 7171084;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    result[0] += 6086829;
    result[1] += 750431;
    result[2] += 750431;
    result[3] += 21178833;
    result[4] += 30517531;
    result[5] += 83881520;
  } else {
    result[0] += 49180069;
    result[1] += 23715108;
    result[2] += 45358022;
    result[3] += 11512188;
    result[4] += 7782239;
    result[5] += 5617948;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 43822150;
    result[1] += 19670394;
    result[2] += 3132986;
    result[3] += 12650919;
    result[4] += 20741162;
    result[5] += 43147963;
  } else {
    result[0] += 3414310;
    result[1] += 1177348;
    result[2] += 106903242;
    result[3] += 19426250;
    result[4] += 824143;
    result[5] += 11420280;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42043757;
    result[1] += 21060593;
    result[2] += 4684433;
    result[3] += 13666156;
    result[4] += 19783020;
    result[5] += 41927614;
  } else {
    result[0] += 1649957;
    result[1] += 1903797;
    result[2] += 114481693;
    result[3] += 15864979;
    result[4] += 1649957;
    result[5] += 7615190;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43450733;
    result[1] += 21648868;
    result[2] += 2983413;
    result[3] += 13654851;
    result[4] += 20692646;
    result[5] += 40735062;
  } else {
    result[0] += 2511676;
    result[1] += 0;
    result[2] += 121353646;
    result[3] += 14937867;
    result[4] += 396580;
    result[5] += 3965805;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42429349;
    result[1] += 19856476;
    result[2] += 4476315;
    result[3] += 14461942;
    result[4] += 19053035;
    result[5] += 42888458;
  } else {
    result[0] += 3433860;
    result[1] += 528286;
    result[2] += 116619191;
    result[3] += 13999585;
    result[4] += 924500;
    result[5] += 7660150;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 4425938;
    result[1] += 1174228;
    result[2] += 632276;
    result[3] += 18787659;
    result[4] += 28000838;
    result[5] += 90144634;
  } else {
    result[0] += 47662961;
    result[1] += 21600730;
    result[2] += 43864059;
    result[3] += 11573397;
    result[4] += 9850639;
    result[5] += 8613788;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 42590476;
    result[1] += 20762363;
    result[2] += 3197246;
    result[3] += 12394262;
    result[4] += 20367641;
    result[5] += 43853585;
  } else {
    result[0] += 3582124;
    result[1] += 1313445;
    result[2] += 108299564;
    result[3] += 20656918;
    result[4] += 597020;
    result[5] += 8716502;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 43084435;
    result[1] += 19421686;
    result[2] += 2100713;
    result[3] += 12604278;
    result[4] += 21839488;
    result[5] += 44114974;
  } else {
    result[0] += 2476505;
    result[1] += 0;
    result[2] += 113565444;
    result[3] += 19694111;
    result[4] += 235857;
    result[5] += 7193657;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    result[0] += 6644815;
    result[1] += 1208148;
    result[2] += 345185;
    result[3] += 19071484;
    result[4] += 27960004;
    result[5] += 87935938;
  } else {
    result[0] += 47330078;
    result[1] += 23325998;
    result[2] += 46742407;
    result[3] += 10713685;
    result[4] += 8363003;
    result[5] += 6690402;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42277860;
    result[1] += 20579086;
    result[2] += 5250948;
    result[3] += 14748988;
    result[4] += 20926575;
    result[5] += 39382116;
  } else {
    result[0] += 1792771;
    result[1] += 1664716;
    result[2] += 118707056;
    result[3] += 10628571;
    result[4] += 256110;
    result[5] += 10116351;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42499273;
    result[1] += 19863790;
    result[2] += 4811964;
    result[3] += 13473501;
    result[4] += 19247859;
    result[5] += 43269187;
  } else {
    result[0] += 905292;
    result[1] += 1422602;
    result[2] += 117429397;
    result[3] += 15260648;
    result[4] += 1551930;
    result[5] += 6595704;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45385269;
    result[1] += 19761997;
    result[2] += 2495001;
    result[3] += 12475008;
    result[4] += 20039220;
    result[5] += 43009077;
  } else {
    result[0] += 4019512;
    result[1] += 1063988;
    result[2] += 110654813;
    result[3] += 19861120;
    result[4] += 1300430;
    result[5] += 6265710;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42096163;
    result[1] += 20314295;
    result[2] += 4402718;
    result[3] += 14212282;
    result[4] += 21550146;
    result[5] += 40589970;
  } else {
    result[0] += 1151465;
    result[1] += 1151465;
    result[2] += 118089211;
    result[3] += 13689648;
    result[4] += 1279406;
    result[5] += 7804379;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42295421;
    result[1] += 20166333;
    result[2] += 4387332;
    result[3] += 13469879;
    result[4] += 20474216;
    result[5] += 42372392;
  } else {
    result[0] += 3365556;
    result[1] += 2071111;
    result[2] += 114299461;
    result[3] += 15015557;
    result[4] += 517777;
    result[5] += 7896112;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44590639;
    result[1] += 19488915;
    result[2] += 2884359;
    result[3] += 13330418;
    result[4] += 20970073;
    result[5] += 41901169;
  } else {
    result[0] += 1490014;
    result[1] += 745007;
    result[2] += 114234458;
    result[3] += 17383504;
    result[4] += 869175;
    result[5] += 8443416;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43421900;
    result[1] += 19887307;
    result[2] += 5298162;
    result[3] += 15856096;
    result[4] += 21192651;
    result[5] += 37509457;
  } else {
    result[0] += 1957596;
    result[1] += 1566077;
    result[2] += 116281247;
    result[3] += 15791280;
    result[4] += 391519;
    result[5] += 7177854;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    result[0] += 4138242;
    result[1] += 3081669;
    result[2] += 2113145;
    result[3] += 19282448;
    result[4] += 31080841;
    result[5] += 83469229;
  } else {
    result[0] += 50063212;
    result[1] += 22772274;
    result[2] += 43173369;
    result[3] += 10468982;
    result[4] += 8947848;
    result[5] += 7739888;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
