
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120943262;
    result[1] += 56707;
    result[2] += 453661;
    result[3] += 18391003;
    result[4] += 3242969;
    result[5] += 21265;
    result[6] += 56707;
  } else {
    result[0] += 12675638;
    result[1] += 921864;
    result[2] += 414839;
    result[3] += 61442277;
    result[4] += 67710956;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 108323923;
    result[1] += 116592;
    result[2] += 485801;
    result[3] += 27748957;
    result[4] += 6383426;
    result[5] += 38864;
    result[6] += 68012;
  } else {
    result[0] += 114248767;
    result[1] += 109495;
    result[2] += 393188;
    result[3] += 19589769;
    result[4] += 8789515;
    result[5] += 9954;
    result[6] += 24885;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16041903;
    result[1] += 224362;
    result[2] += 516033;
    result[3] += 70674120;
    result[4] += 55529666;
    result[5] += 179489;
    result[6] += 0;
  } else {
    result[0] += 129631590;
    result[1] += 138849;
    result[2] += 443547;
    result[3] += 12897591;
    result[4] += 0;
    result[5] += 11570;
    result[6] += 42426;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120624748;
    result[1] += 42469;
    result[2] += 414080;
    result[3] += 18651304;
    result[4] += 3348033;
    result[5] += 35391;
    result[6] += 49548;
  } else {
    result[0] += 12165316;
    result[1] += 704555;
    result[2] += 516673;
    result[3] += 59041709;
    result[4] += 70737322;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16511453;
    result[1] += 243140;
    result[2] += 442073;
    result[3] += 70776003;
    result[4] += 55060282;
    result[5] += 132622;
    result[6] += 0;
  } else {
    result[0] += 128676166;
    result[1] += 58004;
    result[2] += 390560;
    result[3] += 13986707;
    result[4] += 0;
    result[5] += 0;
    result[6] += 54137;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120500524;
    result[1] += 49533;
    result[2] += 445800;
    result[3] += 18840369;
    result[4] += 3283354;
    result[5] += 21228;
    result[6] += 24766;
  } else {
    result[0] += 12920740;
    result[1] += 518715;
    result[2] += 330091;
    result[3] += 57766084;
    result[4] += 71629944;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 119921516;
    result[1] += 60153;
    result[2] += 481228;
    result[3] += 19305768;
    result[4] += 3319063;
    result[5] += 35384;
    result[6] += 42461;
  } else {
    result[0] += 11961860;
    result[1] += 1459912;
    result[2] += 423845;
    result[3] += 60327336;
    result[4] += 68992621;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143056920;
    result[1] += 0;
    result[2] += 103223;
    result[3] += 0;
    result[4] += 5432;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 67283145;
    result[1] += 300557;
    result[2] += 918370;
    result[3] += 54225590;
    result[4] += 20295982;
    result[5] += 58441;
    result[6] += 83488;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143078207;
    result[1] += 0;
    result[2] += 76448;
    result[3] += 0;
    result[4] += 5460;
    result[5] += 0;
    result[6] += 5460;
  } else {
    result[0] += 66463223;
    result[1] += 265090;
    result[2] += 902965;
    result[3] += 55387399;
    result[4] += 19997783;
    result[5] += 57988;
    result[6] += 91124;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143067469;
    result[1] += 0;
    result[2] += 70855;
    result[3] += 0;
    result[4] += 16351;
    result[5] += 0;
    result[6] += 10900;
  } else {
    result[0] += 65788208;
    result[1] += 390459;
    result[2] += 1055070;
    result[3] += 55544887;
    result[4] += 20254028;
    result[5] += 41538;
    result[6] += 91384;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 29388919;
    result[1] += 749557;
    result[2] += 468473;
    result[3] += 62338239;
    result[4] += 50220385;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122589847;
    result[1] += 29430;
    result[2] += 415708;
    result[3] += 17213273;
    result[4] += 2854776;
    result[5] += 22073;
    result[6] += 40467;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120295902;
    result[1] += 56643;
    result[2] += 403582;
    result[3] += 18833849;
    result[4] += 3518956;
    result[5] += 24781;
    result[6] += 31861;
  } else {
    result[0] += 12585470;
    result[1] += 1076081;
    result[2] += 467861;
    result[3] += 59745895;
    result[4] += 69290267;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143067585;
    result[1] += 0;
    result[2] += 76215;
    result[3] += 0;
    result[4] += 16331;
    result[5] += 0;
    result[6] += 5443;
  } else {
    result[0] += 66422768;
    result[1] += 316259;
    result[2] += 898842;
    result[3] += 56086084;
    result[4] += 19258524;
    result[5] += 49935;
    result[6] += 133161;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16195916;
    result[1] += 361415;
    result[2] += 451768;
    result[3] += 70317835;
    result[4] += 55725698;
    result[5] += 112942;
    result[6] += 0;
  } else {
    result[0] += 129246593;
    result[1] += 73196;
    result[2] += 346722;
    result[3] += 13441275;
    result[4] += 0;
    result[5] += 7704;
    result[6] += 50082;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120768222;
    result[1] += 198618;
    result[2] += 414139;
    result[3] += 14237110;
    result[4] += 7484096;
    result[5] += 25355;
    result[6] += 38033;
  } else {
    result[0] += 85673185;
    result[1] += 0;
    result[2] += 773707;
    result[3] += 46571217;
    result[4] += 10013555;
    result[5] += 59515;
    result[6] += 74394;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 108667964;
    result[1] += 87384;
    result[2] += 466052;
    result[3] += 27021349;
    result[4] += 6825730;
    result[5] += 9709;
    result[6] += 87384;
  } else {
    result[0] += 114462757;
    result[1] += 119491;
    result[2] += 378389;
    result[3] += 19382493;
    result[4] += 8782614;
    result[5] += 24894;
    result[6] += 14936;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17274376;
    result[1] += 200605;
    result[2] += 401211;
    result[3] += 70925247;
    result[4] += 54096661;
    result[5] += 267474;
    result[6] += 0;
  } else {
    result[0] += 129010035;
    result[1] += 65642;
    result[2] += 386130;
    result[3] += 13657433;
    result[4] += 0;
    result[5] += 7722;
    result[6] += 38613;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17438857;
    result[1] += 203039;
    result[2] += 721919;
    result[3] += 71988867;
    result[4] += 52722652;
    result[5] += 90239;
    result[6] += 0;
  } else {
    result[0] += 129374609;
    result[1] += 111745;
    result[2] += 408449;
    result[3] += 13239945;
    result[4] += 0;
    result[5] += 11559;
    result[6] += 19266;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 28620778;
    result[1] += 585985;
    result[2] += 709351;
    result[3] += 62330381;
    result[4] += 50919079;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122551767;
    result[1] += 44211;
    result[2] += 342642;
    result[3] += 17172647;
    result[4] += 2987989;
    result[5] += 36843;
    result[6] += 29474;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17238213;
    result[1] += 198902;
    result[2] += 707208;
    result[3] += 71781690;
    result[4] += 53084858;
    result[5] += 154701;
    result[6] += 0;
  } else {
    result[0] += 129248097;
    result[1] += 116011;
    result[2] += 406039;
    result[3] += 13341290;
    result[4] += 0;
    result[5] += 0;
    result[6] += 54138;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17083020;
    result[1] += 156930;
    result[2] += 493210;
    result[3] += 69923807;
    result[4] += 55374095;
    result[5] += 134511;
    result[6] += 0;
  } else {
    result[0] += 129332743;
    result[1] += 84864;
    result[2] += 354885;
    result[3] += 13327506;
    result[4] += 0;
    result[5] += 0;
    result[6] += 65576;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 109890239;
    result[1] += 76826;
    result[2] += 624212;
    result[3] += 25871214;
    result[4] += 6607051;
    result[5] += 57619;
    result[6] += 38413;
  } else {
    result[0] += 113828450;
    result[1] += 165237;
    result[2] += 445639;
    result[3] += 19783407;
    result[4] += 8892769;
    result[5] += 20028;
    result[6] += 30043;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 119607761;
    result[1] += 77994;
    result[2] += 485691;
    result[3] += 19530474;
    result[4] += 3403386;
    result[5] += 24816;
    result[6] += 35451;
  } else {
    result[0] += 13228003;
    result[1] += 1194194;
    result[2] += 137791;
    result[3] += 60398695;
    result[4] += 68206891;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143072158;
    result[1] += 0;
    result[2] += 82427;
    result[3] += 0;
    result[4] += 10990;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 66540359;
    result[1] += 262583;
    result[2] += 976483;
    result[3] += 55355933;
    result[4] += 19866100;
    result[5] += 82057;
    result[6] += 82057;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 15660125;
    result[1] += 311422;
    result[2] += 600601;
    result[3] += 70937697;
    result[4] += 55522262;
    result[5] += 133466;
    result[6] += 0;
  } else {
    result[0] += 129209791;
    result[1] += 119742;
    result[2] += 363089;
    result[3] += 13411150;
    result[4] += 0;
    result[5] += 3862;
    result[6] += 57939;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17246234;
    result[1] += 196476;
    result[2] += 480274;
    result[3] += 71844756;
    result[4] += 53288681;
    result[5] += 109153;
    result[6] += 0;
  } else {
    result[0] += 128896298;
    result[1] += 100760;
    result[2] += 414669;
    result[3] += 13699591;
    result[4] += 0;
    result[5] += 11626;
    result[6] += 42629;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 15907286;
    result[1] += 179489;
    result[2] += 717959;
    result[3] += 73007488;
    result[4] += 53218734;
    result[5] += 134617;
    result[6] += 0;
  } else {
    result[0] += 129338463;
    result[1] += 104137;
    result[2] += 389550;
    result[3] += 13287141;
    result[4] += 0;
    result[5] += 7713;
    result[6] += 38569;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 119883537;
    result[1] += 60251;
    result[2] += 365055;
    result[3] += 19546421;
    result[4] += 3257146;
    result[5] += 14176;
    result[6] += 38986;
  } else {
    result[0] += 12122519;
    result[1] += 1060144;
    result[2] += 184372;
    result[3] += 59460268;
    result[4] += 70338271;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120341308;
    result[1] += 46073;
    result[2] += 425296;
    result[3] += 18858374;
    result[4] += 3416551;
    result[5] += 24808;
    result[6] += 53162;
  } else {
    result[0] += 12910261;
    result[1] += 783837;
    result[2] += 368864;
    result[3] += 56759041;
    result[4] += 72343571;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 129718152;
    result[1] += 54983;
    result[2] += 290627;
    result[3] += 12555903;
    result[4] += 494852;
    result[5] += 7854;
    result[6] += 43201;
  } else {
    result[0] += 24825930;
    result[1] += 507895;
    result[2] += 893896;
    result[3] += 69114416;
    result[4] += 47620279;
    result[5] += 203158;
    result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
