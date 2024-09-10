
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45577494;
    result[1] += 19650177;
    result[2] += 2300318;
    result[3] += 11033730;
    result[4] += 22145437;
    result[5] += 42458418;
  } else {
    result[0] += 3473688;
    result[1] += 0;
    result[2] += 110785840;
    result[3] += 21586490;
    result[4] += 248120;
    result[5] += 7071436;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45822351;
    result[1] += 20257070;
    result[2] += 2068641;
    result[3] += 12099598;
    result[4] += 20296101;
    result[5] += 42621812;
  } else {
    result[0] += 2349003;
    result[1] += 0;
    result[2] += 112999427;
    result[3] += 19904713;
    result[4] += 247263;
    result[5] += 7665169;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44074490;
    result[1] += 18326112;
    result[2] += 3175505;
    result[3] += 13811537;
    result[4] += 21692913;
    result[5] += 42085017;
  } else {
    result[0] += 1188644;
    result[1] += 0;
    result[2] += 120449267;
    result[3] += 16773088;
    result[4] += 132071;
    result[5] += 4622504;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43857997;
    result[1] += 19686691;
    result[2] += 4370597;
    result[3] += 14441974;
    result[4] += 21396925;
    result[5] += 39411389;
  } else {
    result[0] += 1216704;
    result[1] += 1081515;
    result[2] += 119777809;
    result[3] += 14194887;
    result[4] += 811136;
    result[5] += 6083523;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 45114180;
    result[1] += 21077604;
    result[2] += 2675234;
    result[3] += 11714284;
    result[4] += 22253086;
    result[5] += 40331185;
  } else {
    result[0] += 5642538;
    result[1] += 1548932;
    result[2] += 103889085;
    result[3] += 20468030;
    result[4] += 1217018;
    result[5] += 10399972;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 46592347;
    result[1] += 19040335;
    result[2] += 2259022;
    result[3] += 12182587;
    result[4] += 21581736;
    result[5] += 41509545;
  } else {
    result[0] += 5717654;
    result[1] += 1121108;
    result[2] += 101236112;
    result[3] += 21301064;
    result[4] += 1681662;
    result[5] += 12107973;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44748731;
    result[1] += 18825590;
    result[2] += 4744352;
    result[3] += 12942593;
    result[4] += 21861975;
    result[5] += 40042333;
  } else {
    result[0] += 4074921;
    result[1] += 950815;
    result[2] += 109887050;
    result[3] += 18744639;
    result[4] += 2037460;
    result[5] += 7470689;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 45771007;
    result[1] += 21876442;
    result[2] += 2058484;
    result[3] += 11866557;
    result[4] += 21674630;
    result[5] += 39918453;
  } else {
    result[0] += 1790968;
    result[1] += 671613;
    result[2] += 104323938;
    result[3] += 22275175;
    result[4] += 2014840;
    result[5] += 12089040;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43750307;
    result[1] += 18972379;
    result[2] += 5426100;
    result[3] += 13128886;
    result[4] += 21552623;
    result[5] += 40335279;
  } else {
    result[0] += 3670912;
    result[1] += 1359597;
    result[2] += 114749996;
    result[3] += 12780212;
    result[4] += 1359597;
    result[5] += 9245260;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44278419;
    result[1] += 21528065;
    result[2] += 3469724;
    result[3] += 13326897;
    result[4] += 18846914;
    result[5] += 41715554;
  } else {
    result[0] += 1078234;
    result[1] += 599019;
    result[2] += 114532461;
    result[3] += 17491359;
    result[4] += 1797057;
    result[5] += 7667445;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45289917;
    result[1] += 20053546;
    result[2] += 3069827;
    result[3] += 11003536;
    result[4] += 21249582;
    result[5] += 42499165;
  } else {
    result[0] += 3825476;
    result[1] += 1043311;
    result[2] += 108968131;
    result[3] += 19938849;
    result[4] += 927388;
    result[5] += 8462418;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 46027208;
    result[1] += 20025328;
    result[2] += 3725642;
    result[3] += 11565015;
    result[4] += 20296990;
    result[5] += 41525390;
  } else {
    result[0] += 2266473;
    result[1] += 629575;
    result[2] += 110049880;
    result[3] += 16872636;
    result[4] += 2140558;
    result[5] += 11206452;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43707162;
    result[1] += 19884107;
    result[2] += 5264554;
    result[3] += 13142448;
    result[4] += 20300727;
    result[5] += 40866575;
  } else {
    result[0] += 3284869;
    result[1] += 958087;
    result[2] += 114833574;
    result[3] += 15603131;
    result[4] += 821217;
    result[5] += 7664696;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43660153;
    result[1] += 20474052;
    result[2] += 3857983;
    result[3] += 13713031;
    result[4] += 20321261;
    result[5] += 41139094;
  } else {
    result[0] += 2390519;
    result[1] += 0;
    result[2] += 119525991;
    result[3] += 16202412;
    result[4] += 398419;
    result[5] += 4648233;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 45943242;
    result[1] += 20794123;
    result[2] += 3060267;
    result[3] += 12319537;
    result[4] += 21657275;
    result[5] += 39391131;
  } else {
    result[0] += 2189448;
    result[1] += 851452;
    result[2] += 110688763;
    result[3] += 16907404;
    result[4] += 2554356;
    result[5] += 9974152;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 44739242;
    result[1] += 21620593;
    result[2] += 2064888;
    result[3] += 10850784;
    result[4] += 22146937;
    result[5] += 41743130;
  } else {
    result[0] += 5771015;
    result[1] += 887848;
    result[2] += 100104922;
    result[3] += 23417005;
    result[4] += 1886678;
    result[5] += 11098106;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
    result[0] += 7348321;
    result[1] += 2871757;
    result[2] += 1520342;
    result[3] += 19848914;
    result[4] += 29900067;
    result[5] += 81676172;
  } else {
    result[0] += 50297711;
    result[1] += 19981908;
    result[2] += 45359390;
    result[3] += 11751374;
    result[4] += 8139084;
    result[5] += 7636107;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 44964941;
    result[1] += 19803212;
    result[2] += 4232451;
    result[3] += 12037246;
    result[4] += 20735128;
    result[5] += 41392596;
  } else {
    result[0] += 4399293;
    result[1] += 377082;
    result[2] += 115261486;
    result[3] += 16340232;
    result[4] += 628470;
    result[5] += 6159010;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43321880;
    result[1] += 20068506;
    result[2] += 4566256;
    result[3] += 12087149;
    result[4] += 21756869;
    result[5] += 41364913;
  } else {
    result[0] += 3137875;
    result[1] += 522979;
    result[2] += 112309799;
    result[3] += 20265446;
    result[4] += 261489;
    result[5] += 6667985;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 43090954;
    result[1] += 21388497;
    result[2] += 3649780;
    result[3] += 13461017;
    result[4] += 21349252;
    result[5] += 40226073;
  } else {
    result[0] += 1458392;
    result[1] += 486130;
    result[2] += 110837865;
    result[3] += 18229912;
    result[4] += 1336860;
    result[5] += 10816414;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43756613;
    result[1] += 18752834;
    result[2] += 4924986;
    result[3] += 14774960;
    result[4] += 19699947;
    result[5] += 41256235;
  } else {
    result[0] += 1777605;
    result[1] += 683694;
    result[2] += 117868889;
    result[3] += 16271923;
    result[4] += 546955;
    result[5] += 6016509;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 46969275;
    result[1] += 21327679;
    result[2] += 1814263;
    result[3] += 10603364;
    result[4] += 21690532;
    result[5] += 40760461;
  } else {
    result[0] += 2358021;
    result[1] += 449146;
    result[2] += 102630068;
    result[3] += 22569632;
    result[4] += 2245734;
    result[5] += 12912973;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 46002607;
    result[1] += 19265725;
    result[2] += 4475109;
    result[3] += 12742684;
    result[4] += 20327615;
    result[5] += 40351834;
  } else {
    result[0] += 817310;
    result[1] += 681092;
    result[2] += 117284073;
    result[3] += 17027304;
    result[4] += 1089747;
    result[5] += 6266048;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    result[0] += 8558360;
    result[1] += 1329453;
    result[2] += 664726;
    result[3] += 22933081;
    result[4] += 29829623;
    result[5] += 79850330;
  } else {
    result[0] += 50936125;
    result[1] += 23299586;
    result[2] += 45030487;
    result[3] += 8996869;
    result[4] += 9735074;
    result[5] += 5167432;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 46933619;
    result[1] += 21843572;
    result[2] += 2685356;
    result[3] += 11262465;
    result[4] += 18436776;
    result[5] += 42003786;
  } else {
    result[0] += 2055008;
    result[1] += 228334;
    result[2] += 103892085;
    result[3] += 23632595;
    result[4] += 2397509;
    result[5] += 10960044;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 42515837;
    result[1] += 18371972;
    result[2] += 5017397;
    result[3] += 14524043;
    result[4] += 21691754;
    result[5] += 41044571;
  } else {
    result[0] += 4304687;
    result[1] += 416582;
    result[2] += 114282511;
    result[3] += 17357611;
    result[4] += 972026;
    result[5] += 5832157;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 43307116;
    result[1] += 19941591;
    result[2] += 5041836;
    result[3] += 13959114;
    result[4] += 20769355;
    result[5] += 40146562;
  } else {
    result[0] += 1682651;
    result[1] += 701104;
    result[2] += 119608459;
    result[3] += 13461209;
    result[4] += 701104;
    result[5] += 7011046;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
    result[0] += 21789295;
    result[1] += 26295718;
    result[2] += 1584676;
    result[3] += 15103943;
    result[4] += 25949070;
    result[5] += 52442872;
  } else {
    result[0] += 52235088;
    result[1] += 295949;
    result[2] += 73321491;
    result[3] += 11394056;
    result[4] += 1257785;
    result[5] += 4661204;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 44809698;
    result[1] += 20895088;
    result[2] += 2133795;
    result[3] += 12198866;
    result[4] += 20693786;
    result[5] += 42434341;
  } else {
    result[0] += 3381864;
    result[1] += 0;
    result[2] += 114081545;
    result[3] += 19276624;
    result[4] += 225457;
    result[5] += 6200084;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 41884404;
    result[1] += 21507117;
    result[2] += 3833351;
    result[3] += 12629883;
    result[4] += 21224659;
    result[5] += 42086160;
  } else {
    result[0] += 5825203;
    result[1] += 896185;
    result[2] += 108438402;
    result[3] += 17027517;
    result[4] += 1120231;
    result[5] += 9858036;
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
