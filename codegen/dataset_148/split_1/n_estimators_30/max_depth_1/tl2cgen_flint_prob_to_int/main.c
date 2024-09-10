
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
    result[0] += 108860658;
    result[1] += 115966;
    result[2] += 453322;
    result[3] += 27083384;
    result[4] += 6631159;
    result[5] += 21084;
    result[6] += 0;
  } else {
    result[0] += 114460687;
    result[1] += 124408;
    result[2] += 373225;
    result[3] += 19335965;
    result[4] += 8828224;
    result[5] += 23924;
    result[6] += 19139;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16460691;
    result[1] += 245681;
    result[2] += 670041;
    result[3] += 70756403;
    result[4] += 54876415;
    result[5] += 156343;
    result[6] += 0;
  } else {
    result[0] += 129373972;
    result[1] += 84918;
    result[2] += 409154;
    result[3] += 13243491;
    result[4] += 0;
    result[5] += 0;
    result[6] += 54039;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17073532;
    result[1] += 275009;
    result[2] += 595854;
    result[3] += 70150444;
    result[4] += 54841559;
    result[5] += 229174;
    result[6] += 0;
  } else {
    result[0] += 129069226;
    result[1] += 61488;
    result[2] += 426579;
    result[3] += 13546792;
    result[4] += 0;
    result[5] += 0;
    result[6] += 61488;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 34881149;
    result[1] += 305731;
    result[2] += 1028368;
    result[3] += 59589787;
    result[4] += 47360540;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 123808787;
    result[1] += 70931;
    result[2] += 302391;
    result[3] += 16194744;
    result[4] += 2743922;
    result[5] += 18666;
    result[6] += 26132;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120412285;
    result[1] += 60287;
    result[2] += 418467;
    result[3] += 18891330;
    result[4] += 3290999;
    result[5] += 46102;
    result[6] += 46102;
  } else {
    result[0] += 12715664;
    result[1] += 823316;
    result[2] += 548877;
    result[3] += 58043807;
    result[4] += 71033910;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143094464;
    result[1] += 0;
    result[2] += 60171;
    result[3] += 0;
    result[4] += 5470;
    result[5] += 0;
    result[6] += 5470;
  } else {
    result[0] += 66220688;
    result[1] += 239600;
    result[2] += 933616;
    result[3] += 55083385;
    result[4] += 20580877;
    result[5] += 41310;
    result[6] += 66096;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16137289;
    result[1] += 133549;
    result[2] += 422908;
    result[3] += 71337946;
    result[4] += 54889040;
    result[5] += 244841;
    result[6] += 0;
  } else {
    result[0] += 129130190;
    result[1] += 84969;
    result[2] += 451882;
    result[3] += 13456050;
    result[4] += 0;
    result[5] += 0;
    result[6] += 42484;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143088832;
    result[1] += 0;
    result[2] += 60298;
    result[3] += 0;
    result[4] += 10963;
    result[5] += 0;
    result[6] += 5481;
  } else {
    result[0] += 66530030;
    result[1] += 181190;
    result[2] += 930662;
    result[3] += 54876156;
    result[4] += 20523995;
    result[5] += 49415;
    result[6] += 74123;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 15482857;
    result[1] += 203424;
    result[2] += 610273;
    result[3] += 71673199;
    result[4] += 55060205;
    result[5] += 135616;
    result[6] += 0;
  } else {
    result[0] += 129479215;
    result[1] += 73189;
    result[2] += 469951;
    result[3] += 13127812;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15408;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143073744;
    result[1] += 0;
    result[2] += 81027;
    result[3] += 0;
    result[4] += 5401;
    result[5] += 0;
    result[6] += 5401;
  } else {
    result[0] += 66112055;
    result[1] += 328496;
    result[2] += 901260;
    result[3] += 54867362;
    result[4] += 20804787;
    result[5] += 84229;
    result[6] += 67383;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143078970;
    result[1] += 0;
    result[2] += 75780;
    result[3] += 0;
    result[4] += 5412;
    result[5] += 0;
    result[6] += 5412;
  } else {
    result[0] += 66272118;
    result[1] += 251889;
    result[2] += 1083124;
    result[3] += 54945488;
    result[4] += 20478613;
    result[5] += 33585;
    result[6] += 100755;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120327934;
    result[1] += 42587;
    result[2] += 393936;
    result[3] += 18976359;
    result[4] += 3350230;
    result[5] += 31940;
    result[6] += 42587;
  } else {
    result[0] += 11960668;
    result[1] += 453055;
    result[2] += 770194;
    result[3] += 60301703;
    result[4] += 69679954;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16833704;
    result[1] += 225955;
    result[2] += 542293;
    result[3] += 70882325;
    result[4] += 54568318;
    result[5] += 112977;
    result[6] += 0;
  } else {
    result[0] += 129728876;
    result[1] += 77045;
    result[2] += 404487;
    result[3] += 12897383;
    result[4] += 0;
    result[5] += 0;
    result[6] += 57783;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 29214911;
    result[1] += 625586;
    result[2] += 563028;
    result[3] += 63153003;
    result[4] += 49609046;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122564122;
    result[1] += 69885;
    result[2] += 290575;
    result[3] += 17037303;
    result[4] += 3126448;
    result[5] += 33103;
    result[6] += 44138;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17291515;
    result[1] += 294999;
    result[2] += 544614;
    result[3] += 70527597;
    result[4] += 54279926;
    result[5] += 226922;
    result[6] += 0;
  } else {
    result[0] += 129011081;
    result[1] += 84688;
    result[2] += 431140;
    result[3] += 13600171;
    result[4] += 0;
    result[5] += 0;
    result[6] += 38494;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17050931;
    result[1] += 88922;
    result[2] += 711381;
    result[3] += 70871406;
    result[4] += 54198396;
    result[5] += 244537;
    result[6] += 0;
  } else {
    result[0] += 129467110;
    result[1] += 73398;
    result[2] += 428801;
    result[3] += 13161498;
    result[4] += 0;
    result[5] += 0;
    result[6] += 34767;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 31295780;
    result[1] += 504770;
    result[2] += 599415;
    result[3] += 61045700;
    result[4] += 49719909;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 121993150;
    result[1] += 51442;
    result[2] += 400519;
    result[3] += 17567748;
    result[4] += 3093922;
    result[5] += 18372;
    result[6] += 40419;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 110471537;
    result[1] += 116973;
    result[2] += 633605;
    result[3] += 25159008;
    result[4] += 6706469;
    result[5] += 9747;
    result[6] += 68234;
  } else {
    result[0] += 114813694;
    result[1] += 104344;
    result[2] += 382596;
    result[3] += 19224225;
    result[4] += 8591027;
    result[5] += 4968;
    result[6] += 44719;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 31049767;
    result[1] += 450867;
    result[2] += 631215;
    result[3] += 60867161;
    result[4] += 50166564;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122354327;
    result[1] += 62829;
    result[2] += 410237;
    result[3] += 17130197;
    result[4] += 3134068;
    result[5] += 18479;
    result[6] += 55437;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16905243;
    result[1] += 225103;
    result[2] += 450206;
    result[3] += 69399288;
    result[4] += 56028163;
    result[5] += 157572;
    result[6] += 0;
  } else {
    result[0] += 129215220;
    result[1] += 77095;
    result[2] += 474134;
    result[3] += 13341304;
    result[4] += 0;
    result[5] += 0;
    result[6] += 57821;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 15406032;
    result[1] += 248120;
    result[2] += 541353;
    result[3] += 74165497;
    result[4] += 52714345;
    result[5] += 90225;
    result[6] += 0;
  } else {
    result[0] += 129235515;
    result[1] += 53947;
    result[2] += 385340;
    result[3] += 13425264;
    result[4] += 0;
    result[5] += 0;
    result[6] += 65507;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120130002;
    result[1] += 35422;
    result[2] += 400279;
    result[3] += 19135501;
    result[4] += 3404149;
    result[5] += 10626;
    result[6] += 49592;
  } else {
    result[0] += 13276703;
    result[1] += 603486;
    result[2] += 557064;
    result[3] += 59884433;
    result[4] += 68843887;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120074697;
    result[1] += 38945;
    result[2] += 407152;
    result[3] += 19001648;
    result[4] += 3590026;
    result[5] += 35404;
    result[6] += 17702;
  } else {
    result[0] += 14068833;
    result[1] += 514143;
    result[2] += 327182;
    result[3] += 58144948;
    result[4] += 70110468;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 28706252;
    result[1] += 335211;
    result[2] += 579000;
    result[3] += 61587405;
    result[4] += 51957707;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122662223;
    result[1] += 33206;
    result[2] += 394791;
    result[3] += 16917018;
    result[4] += 3139887;
    result[5] += 3689;
    result[6] += 14758;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 15866758;
    result[1] += 250767;
    result[2] += 547129;
    result[3] += 71423208;
    result[4] += 54963726;
    result[5] += 113985;
    result[6] += 0;
  } else {
    result[0] += 129291362;
    result[1] += 53850;
    result[2] += 426958;
    result[3] += 13354940;
    result[4] += 0;
    result[5] += 0;
    result[6] += 38464;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120662024;
    result[1] += 148077;
    result[2] += 296155;
    result[3] += 14676597;
    result[4] += 7344644;
    result[5] += 21153;
    result[6] += 16923;
  } else {
    result[0] += 85268059;
    result[1] += 0;
    result[2] += 770583;
    result[3] += 46427673;
    result[4] += 10595527;
    result[5] += 44456;
    result[6] += 59275;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143089034;
    result[1] += 0;
    result[2] += 71074;
    result[3] += 0;
    result[4] += 5467;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 66720748;
    result[1] += 157106;
    result[2] += 1033596;
    result[3] += 54946012;
    result[4] += 20151005;
    result[5] += 41343;
    result[6] += 115762;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16380909;
    result[1] += 178538;
    result[2] += 602567;
    result[3] += 71683216;
    result[4] += 54119489;
    result[5] += 200855;
    result[6] += 0;
  } else {
    result[0] += 128962902;
    result[1] += 77209;
    result[2] += 459396;
    result[3] += 13608161;
    result[4] += 0;
    result[5] += 0;
    result[6] += 57907;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16013400;
    result[1] += 177679;
    result[2] += 599669;
    result[3] += 70694388;
    result[4] += 55547177;
    result[5] += 133259;
    result[6] += 0;
  } else {
    result[0] += 129263980;
    result[1] += 46364;
    result[2] += 421143;
    result[3] += 13399315;
    result[4] += 0;
    result[5] += 0;
    result[6] += 34773;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16577304;
    result[1] += 158094;
    result[2] += 542037;
    result[3] += 71097213;
    result[4] += 54610248;
    result[5] += 180679;
    result[6] += 0;
  } else {
    result[0] += 129542867;
    result[1] += 53936;
    result[2] += 381405;
    result[3] += 13148841;
    result[4] += 0;
    result[5] += 0;
    result[6] += 38525;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
