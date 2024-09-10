
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16776171;
    result[1] += 245070;
    result[2] += 534698;
    result[3] += 72451673;
    result[4] += 52935171;
    result[5] += 222791;
    result[6] += 0;
  } else {
    result[0] += 129209693;
    result[1] += 54062;
    result[2] += 339822;
    result[3] += 13507935;
    result[4] += 0;
    result[5] += 0;
    result[6] += 54062;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143078400;
    result[1] += 0;
    result[2] += 54485;
    result[3] += 0;
    result[4] += 16345;
    result[5] += 0;
    result[6] += 16345;
  } else {
    result[0] += 66520791;
    result[1] += 340791;
    result[2] += 806262;
    result[3] += 55740150;
    result[4] += 19591341;
    result[5] += 91431;
    result[6] += 74807;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17243784;
    result[1] += 133156;
    result[2] += 643590;
    result[3] += 71704848;
    result[4] += 53218268;
    result[5] += 221927;
    result[6] += 0;
  } else {
    result[0] += 128806125;
    result[1] += 77284;
    result[2] += 313002;
    result[3] += 13926657;
    result[4] += 0;
    result[5] += 0;
    result[6] += 42506;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 35444565;
    result[1] += 544045;
    result[2] += 761663;
    result[3] += 58675308;
    result[4] += 47739993;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122846001;
    result[1] += 56162;
    result[2] += 374416;
    result[3] += 17069641;
    result[4] += 2755704;
    result[5] += 29953;
    result[6] += 33697;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 119990438;
    result[1] += 49617;
    result[2] += 407576;
    result[3] += 19209244;
    result[4] += 3437816;
    result[5] += 21264;
    result[6] += 49617;
  } else {
    result[0] += 14339611;
    result[1] += 737729;
    result[2] += 461080;
    result[3] += 58326716;
    result[4] += 69300438;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120466605;
    result[1] += 53192;
    result[2] += 375892;
    result[3] += 18794648;
    result[4] += 3422044;
    result[5] += 24823;
    result[6] += 28369;
  } else {
    result[0] += 13181485;
    result[1] += 823842;
    result[2] += 594997;
    result[3] += 59682836;
    result[4] += 68882414;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120346948;
    result[1] += 53058;
    result[2] += 371408;
    result[3] += 18980740;
    result[4] += 3339138;
    result[5] += 35372;
    result[6] += 38909;
  } else {
    result[0] += 13341934;
    result[1] += 1088171;
    result[2] += 331182;
    result[3] += 58997843;
    result[4] += 69406444;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120516844;
    result[1] += 138897;
    result[2] += 282004;
    result[3] += 14979899;
    result[4] += 7205840;
    result[5] += 16836;
    result[6] += 25254;
  } else {
    result[0] += 83354783;
    result[1] += 0;
    result[2] += 830076;
    result[3] += 48551935;
    result[4] += 10292949;
    result[5] += 60369;
    result[6] += 75461;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143050860;
    result[1] += 0;
    result[2] += 92865;
    result[3] += 0;
    result[4] += 10925;
    result[5] += 0;
    result[6] += 10925;
  } else {
    result[0] += 65538902;
    result[1] += 289775;
    result[2] += 778253;
    result[3] += 55761054;
    result[4] += 20681679;
    result[5] += 41396;
    result[6] += 74513;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17121753;
    result[1] += 111760;
    result[2] += 581156;
    result[3] += 71281034;
    result[4] += 53935758;
    result[5] += 134112;
    result[6] += 0;
  } else {
    result[0] += 128665695;
    result[1] += 158236;
    result[2] += 385943;
    result[3] += 13928684;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27016;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 109196405;
    result[1] += 29351;
    result[2] += 518538;
    result[3] += 27110764;
    result[4] += 6202895;
    result[5] += 39134;
    result[6] += 68486;
  } else {
    result[0] += 114281511;
    result[1] += 148784;
    result[2] += 332285;
    result[3] += 19748686;
    result[4] += 8614632;
    result[5] += 19837;
    result[6] += 19837;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120541810;
    result[1] += 39030;
    result[2] += 379664;
    result[3] += 18848407;
    result[4] += 3310535;
    result[5] += 17741;
    result[6] += 28386;
  } else {
    result[0] += 12581492;
    result[1] += 908411;
    result[2] += 681308;
    result[3] += 60227650;
    result[4] += 68766714;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 16410460;
    result[1] += 246605;
    result[2] += 470791;
    result[3] += 71739718;
    result[4] += 54006557;
    result[5] += 291442;
    result[6] += 0;
  } else {
    result[0] += 129332743;
    result[1] += 84864;
    result[2] += 366458;
    result[3] += 13354508;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27002;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 34565708;
    result[1] += 520402;
    result[2] += 547792;
    result[3] += 60366736;
    result[4] += 47164936;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 123097034;
    result[1] += 56109;
    result[2] += 359101;
    result[3] += 16866553;
    result[4] += 2697002;
    result[5] += 41147;
    result[6] += 48628;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 5761408;
    result[1] += 434823;
    result[2] += 570705;
    result[3] += 70550082;
    result[4] += 65685497;
    result[5] += 163058;
    result[6] += 0;
  } else {
    result[0] += 127044844;
    result[1] += 97360;
    result[2] += 280848;
    result[3] += 15682607;
    result[4] += 0;
    result[5] += 14978;
    result[6] += 44935;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143061789;
    result[1] += 0;
    result[2] += 87399;
    result[3] += 0;
    result[4] += 10924;
    result[5] += 0;
    result[6] += 5462;
  } else {
    result[0] += 66900575;
    result[1] += 273232;
    result[2] += 770019;
    result[3] += 55532445;
    result[4] += 19589945;
    result[5] += 33119;
    result[6] += 66238;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 29479776;
    result[1] += 828255;
    result[2] += 736227;
    result[3] += 62364606;
    result[4] += 49756709;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 122413148;
    result[1] += 40553;
    result[2] += 320742;
    result[3] += 17242690;
    result[4] += 3096827;
    result[5] += 25806;
    result[6] += 25806;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143040117;
    result[1] += 0;
    result[2] += 114549;
    result[3] += 0;
    result[4] += 5454;
    result[5] += 0;
    result[6] += 5454;
  } else {
    result[0] += 65641757;
    result[1] += 307008;
    result[2] += 854645;
    result[3] += 55693018;
    result[4] += 20611063;
    result[5] += 41487;
    result[6] += 16595;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 120273224;
    result[1] += 53024;
    result[2] += 371170;
    result[3] += 18961485;
    result[4] += 3435973;
    result[5] += 31814;
    result[6] += 38884;
  } else {
    result[0] += 14077948;
    result[1] += 906715;
    result[2] += 668106;
    result[3] += 58411555;
    result[4] += 69101251;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143083366;
    result[1] += 0;
    result[2] += 65767;
    result[3] += 0;
    result[4] += 10961;
    result[5] += 0;
    result[6] += 5480;
  } else {
    result[0] += 66615079;
    result[1] += 321294;
    result[2] += 799117;
    result[3] += 54735417;
    result[4] += 20628760;
    result[5] += 0;
    result[6] += 65906;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 119936057;
    result[1] += 53059;
    result[2] += 336044;
    result[3] += 19320791;
    result[4] += 3470101;
    result[5] += 31835;
    result[6] += 17686;
  } else {
    result[0] += 13574007;
    result[1] += 851331;
    result[2] += 283777;
    result[3] += 60255350;
    result[4] += 68201110;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 10276611;
    result[1] += 277746;
    result[2] += 883738;
    result[3] += 71027295;
    result[4] += 60573936;
    result[5] += 126248;
    result[6] += 0;
  } else {
    result[0] += 128194309;
    result[1] += 113533;
    result[2] += 363306;
    result[3] += 14471719;
    result[4] += 0;
    result[5] += 0;
    result[6] += 22706;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    result[0] += 120142529;
    result[1] += 118588;
    result[2] += 220235;
    result[3] += 15268227;
    result[4] += 7348231;
    result[5] += 38117;
    result[6] += 29647;
  } else {
    result[0] += 86029268;
    result[1] += 0;
    result[2] += 871070;
    result[3] += 46019088;
    result[4] += 10113274;
    result[5] += 29527;
    result[6] += 103347;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 5721225;
    result[1] += 296856;
    result[2] += 674672;
    result[3] += 70867635;
    result[4] += 65335317;
    result[5] += 269869;
    result[6] += 0;
  } else {
    result[0] += 126916780;
    result[1] += 71217;
    result[2] += 311107;
    result[3] += 15813995;
    result[4] += 0;
    result[5] += 7496;
    result[6] += 44979;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 120583036;
    result[1] += 184827;
    result[2] += 319247;
    result[3] += 14769384;
    result[4] += 7279676;
    result[5] += 4200;
    result[6] += 25203;
  } else {
    result[0] += 83591792;
    result[1] += 0;
    result[2] += 653654;
    result[3] += 48020817;
    result[4] += 10808104;
    result[5] += 30402;
    result[6] += 60805;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143061124;
    result[1] += 0;
    result[2] += 87959;
    result[3] += 0;
    result[4] += 5497;
    result[5] += 0;
    result[6] += 10994;
  } else {
    result[0] += 66342623;
    result[1] += 270618;
    result[2] += 664246;
    result[3] += 55468665;
    result[4] += 20263612;
    result[5] += 106607;
    result[6] += 49203;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 143088938;
    result[1] += 0;
    result[2] += 49267;
    result[3] += 0;
    result[4] += 21896;
    result[5] += 0;
    result[6] += 5474;
  } else {
    result[0] += 66511291;
    result[1] += 363133;
    result[2] += 784039;
    result[3] += 55427452;
    result[4] += 19947610;
    result[5] += 90783;
    result[6] += 41265;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17647494;
    result[1] += 156172;
    result[2] += 580069;
    result[3] += 70701529;
    result[4] += 53812586;
    result[5] += 267724;
    result[6] += 0;
  } else {
    result[0] += 129023907;
    result[1] += 123541;
    result[2] += 378346;
    result[3] += 13608895;
    result[4] += 0;
    result[5] += 0;
    result[6] += 30885;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    result[0] += 120441692;
    result[1] += 123499;
    result[2] += 264033;
    result[3] += 14905096;
    result[4] += 7392927;
    result[5] += 12775;
    result[6] += 25551;
  } else {
    result[0] += 84983735;
    result[1] += 0;
    result[2] += 738863;
    result[3] += 47649421;
    result[4] += 9663169;
    result[5] += 28975;
    result[6] += 101412;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 17441149;
    result[1] += 246914;
    result[2] += 606063;
    result[3] += 71605235;
    result[4] += 53131533;
    result[5] += 134680;
    result[6] += 0;
  } else {
    result[0] += 129081187;
    result[1] += 127268;
    result[2] += 296960;
    result[3] += 13613880;
    result[4] += 0;
    result[5] += 0;
    result[6] += 46279;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
