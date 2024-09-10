
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120625098;
    result[1] += 156091;
    result[2] += 341714;
    result[3] += 14854019;
    result[4] += 7163341;
    result[5] += 12656;
    result[6] += 12656;
  } else {
    result[0] += 85189805;
    result[1] += 0;
    result[2] += 868214;
    result[3] += 46329721;
    result[4] += 10598204;
    result[5] += 104784;
    result[6] += 74846;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16870833;
    result[1] += 337867;
    result[2] += 653209;
    result[3] += 72078326;
    result[4] += 53067668;
    result[5] += 157671;
    result[6] += 0;
  } else {
    result[0] += 129166616;
    result[1] += 92504;
    result[2] += 466375;
    result[3] += 13393828;
    result[4] += 0;
    result[5] += 0;
    result[6] += 46252;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143045066;
    result[1] += 0;
    result[2] += 87643;
    result[3] += 0;
    result[4] += 16433;
    result[5] += 0;
    result[6] += 16433;
  } else {
    result[0] += 66635809;
    result[1] += 296818;
    result[2] += 816251;
    result[3] += 54977428;
    result[4] += 20323839;
    result[5] += 74204;
    result[6] += 41224;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 15946551;
    result[1] += 353386;
    result[2] += 552165;
    result[3] += 71207315;
    result[4] += 55084070;
    result[5] += 22086;
    result[6] += 0;
  } else {
    result[0] += 129397424;
    result[1] += 85084;
    result[2] += 429287;
    result[3] += 13222840;
    result[4] += 0;
    result[5] += 7734;
    result[6] += 23204;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143056398;
    result[1] += 0;
    result[2] += 76424;
    result[3] += 0;
    result[4] += 27294;
    result[5] += 0;
    result[6] += 5458;
  } else {
    result[0] += 65632059;
    result[1] += 265213;
    result[2] += 994550;
    result[3] += 55471066;
    result[4] += 20661791;
    result[5] += 58015;
    result[6] += 82879;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120366051;
    result[1] += 60213;
    result[2] += 410866;
    result[3] += 18758161;
    result[4] += 3492361;
    result[5] += 49587;
    result[6] += 28335;
  } else {
    result[0] += 12178370;
    result[1] += 929646;
    result[2] += 278893;
    result[3] += 58009947;
    result[4] += 71768717;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 36090991;
    result[1] += 501650;
    result[2] += 947562;
    result[3] += 57048848;
    result[4] += 48576523;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122763464;
    result[1] += 89564;
    result[2] += 320940;
    result[3] += 17196438;
    result[4] += 2713066;
    result[5] += 37318;
    result[6] += 44782;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17020946;
    result[1] += 293464;
    result[2] += 564355;
    result[3] += 71989123;
    result[4] += 53094518;
    result[5] += 203167;
    result[6] += 0;
  } else {
    result[0] += 129094833;
    result[1] += 111733;
    result[2] += 443082;
    result[3] += 13473545;
    result[4] += 0;
    result[5] += 0;
    result[6] += 42381;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 33668175;
    result[1] += 827227;
    result[2] += 992673;
    result[3] += 60222191;
    result[4] += 47455307;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 123077997;
    result[1] += 59795;
    result[2] += 332612;
    result[3] += 17000631;
    result[4] += 2631005;
    result[5] += 33635;
    result[6] += 29897;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 29541598;
    result[1] += 698833;
    result[2] += 476477;
    result[3] += 64324449;
    result[4] += 48124217;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122296365;
    result[1] += 62416;
    result[2] += 352470;
    result[3] += 17197639;
    result[4] += 3168565;
    result[5] += 36715;
    result[6] += 51401;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120810860;
    result[1] += 189947;
    result[2] += 261705;
    result[3] += 14625961;
    result[4] += 7218006;
    result[5] += 37989;
    result[6] += 21105;
  } else {
    result[0] += 84498017;
    result[1] += 0;
    result[2] += 687218;
    result[3] += 47298571;
    result[4] += 10622010;
    result[5] += 59758;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 119743241;
    result[1] += 81352;
    result[2] += 505797;
    result[3] += 19337044;
    result[4] += 3430937;
    result[5] += 42444;
    result[6] += 24759;
  } else {
    result[0] += 13445444;
    result[1] += 994205;
    result[2] += 473431;
    result[3] += 57711255;
    result[4] += 70541239;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120317677;
    result[1] += 147324;
    result[2] += 345159;
    result[3] += 14841874;
    result[4] += 7467238;
    result[5] += 12627;
    result[6] += 33674;
  } else {
    result[0] += 84846125;
    result[1] += 0;
    result[2] += 724277;
    result[3] += 46670650;
    result[4] += 10818899;
    result[5] += 45267;
    result[6] += 60356;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 28937399;
    result[1] += 578139;
    result[2] += 760709;
    result[3] += 64447330;
    result[4] += 48441997;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122732330;
    result[1] += 62735;
    result[2] += 324747;
    result[3] += 17178393;
    result[4] += 2793564;
    result[5] += 25832;
    result[6] += 47974;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120287734;
    result[1] += 168529;
    result[2] += 303352;
    result[3] += 15306666;
    result[4] += 7065587;
    result[5] += 4213;
    result[6] += 29492;
  } else {
    result[0] += 85613616;
    result[1] += 0;
    result[2] += 691766;
    result[3] += 46604004;
    result[4] += 10015574;
    result[5] += 120307;
    result[6] += 120307;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120060514;
    result[1] += 49642;
    result[2] += 361681;
    result[3] += 19279039;
    result[4] += 3333142;
    result[5] += 46096;
    result[6] += 35458;
  } else {
    result[0] += 11407433;
    result[1] += 641381;
    result[2] += 320690;
    result[3] += 59969196;
    result[4] += 70826874;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143089297;
    result[1] += 0;
    result[2] += 70830;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 5448;
  } else {
    result[0] += 65739464;
    result[1] += 307543;
    result[2] += 847822;
    result[3] += 55324551;
    result[4] += 20813202;
    result[5] += 74807;
    result[6] += 58183;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 34064676;
    result[1] += 386784;
    result[2] += 939334;
    result[3] += 59675346;
    result[4] += 48099434;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 123154228;
    result[1] += 52307;
    result[2] += 321317;
    result[3] += 16872898;
    result[4] += 2693835;
    result[5] += 26153;
    result[6] += 44834;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120140060;
    result[1] += 74390;
    result[2] += 414459;
    result[3] += 19001364;
    result[4] += 3482166;
    result[5] += 31881;
    result[6] += 21254;
  } else {
    result[0] += 12251446;
    result[1] += 1206581;
    result[2] += 324848;
    result[3] += 61814116;
    result[4] += 67568583;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120145521;
    result[1] += 56569;
    result[2] += 424267;
    result[3] += 19067294;
    result[4] += 3394141;
    result[5] += 38891;
    result[6] += 38891;
  } else {
    result[0] += 11521805;
    result[1] += 809383;
    result[2] += 333275;
    result[3] += 59561069;
    result[4] += 70940042;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17290961;
    result[1] += 156783;
    result[2] += 559940;
    result[3] += 69634195;
    result[4] += 55366912;
    result[5] += 156783;
    result[6] += 0;
  } else {
    result[0] += 128828956;
    result[1] += 115742;
    result[2] += 343368;
    result[3] += 13842785;
    result[4] += 0;
    result[5] += 7716;
    result[6] += 27006;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 29100421;
    result[1] += 728269;
    result[2] += 1183437;
    result[3] += 62388390;
    result[4] += 49765058;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122607351;
    result[1] += 70139;
    result[2] += 424527;
    result[3] += 17025414;
    result[4] += 2982769;
    result[5] += 40607;
    result[6] += 14766;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 30034951;
    result[1] += 430388;
    result[2] += 891518;
    result[3] += 63051878;
    result[4] += 48756840;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122473777;
    result[1] += 55286;
    result[2] += 339088;
    result[3] += 17101878;
    result[4] += 3132887;
    result[5] += 14742;
    result[6] += 47914;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120455182;
    result[1] += 93058;
    result[2] += 317243;
    result[3] += 14690481;
    result[4] += 7567311;
    result[5] += 8459;
    result[6] += 33839;
  } else {
    result[0] += 84914656;
    result[1] += 0;
    result[2] += 652505;
    result[3] += 47187990;
    result[4] += 10306616;
    result[5] += 59318;
    result[6] += 44488;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120639462;
    result[1] += 70781;
    result[2] += 399913;
    result[3] += 18618992;
    result[4] += 3376262;
    result[5] += 17695;
    result[6] += 42468;
  } else {
    result[0] += 14894482;
    result[1] += 1127657;
    result[2] += 375885;
    result[3] += 59389986;
    result[4] += 67377563;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16836432;
    result[1] += 223591;
    result[2] += 804929;
    result[3] += 70565447;
    result[4] += 54578661;
    result[5] += 156513;
    result[6] += 0;
  } else {
    result[0] += 128863297;
    result[1] += 84902;
    result[2] += 443810;
    result[3] += 13742691;
    result[4] += 0;
    result[5] += 11577;
    result[6] += 19296;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 29664105;
    result[1] += 648227;
    result[2] += 926038;
    result[3] += 62137193;
    result[4] += 49790011;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122181810;
    result[1] += 62627;
    result[2] += 460493;
    result[3] += 17362445;
    result[4] += 3017153;
    result[5] += 51575;
    result[6] += 29471;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120038343;
    result[1] += 143228;
    result[2] += 341221;
    result[3] += 15051658;
    result[4] += 7565848;
    result[5] += 8425;
    result[6] += 16850;
  } else {
    result[0] += 85116938;
    result[1] += 0;
    result[2] += 767361;
    result[3] += 47004651;
    result[4] += 10111115;
    result[5] += 120370;
    result[6] += 45138;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17006902;
    result[1] += 133737;
    result[2] += 824712;
    result[3] += 71170432;
    result[4] += 53829186;
    result[5] += 200605;
    result[6] += 0;
  } else {
    result[0] += 129384581;
    result[1] += 119700;
    result[2] += 386130;
    result[3] += 13236550;
    result[4] += 0;
    result[5] += 0;
    result[6] += 38613;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120133840;
    result[1] += 198331;
    result[2] += 308046;
    result[3] += 14798882;
    result[4] += 7667399;
    result[5] += 16879;
    result[6] += 42198;
  } else {
    result[0] += 84511508;
    result[1] += 0;
    result[2] += 912263;
    result[3] += 47078787;
    result[4] += 10573285;
    result[5] += 59820;
    result[6] += 29910;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
