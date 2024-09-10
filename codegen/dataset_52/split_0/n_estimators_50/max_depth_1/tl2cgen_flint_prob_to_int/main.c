
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 12449180;
    result[1] += 73450165;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4b9970))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24181748;
    result[1] += 61717597;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 65132471;
    result[1] += 20766874;
  } else {
    result[0] += 20476006;
    result[1] += 65423339;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f33e6c4))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24593588;
    result[1] += 61305757;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 82937299;
    result[1] += 2962046;
  } else {
    result[0] += 26063476;
    result[1] += 59835869;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 83256289;
    result[1] += 2643056;
  } else {
    result[0] += 15618062;
    result[1] += 70281283;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 19041726;
    result[1] += 66857618;
  } else {
    result[0] += 68719476;
    result[1] += 17179869;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
    result[0] += 82595524;
    result[1] += 3303820;
  } else {
    result[0] += 26820892;
    result[1] += 59078453;
  }
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f666df0))) ) ) {
    result[0] += 80172722;
    result[1] += 5726623;
  } else {
    result[0] += 28756004;
    result[1] += 57143341;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 21771723;
    result[1] += 64127622;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 80846443;
    result[1] += 5052902;
  } else {
    result[0] += 24006804;
    result[1] += 61892541;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e39c62a))) ) ) {
    result[0] += 60805154;
    result[1] += 25094190;
  } else {
    result[0] += 21227999;
    result[1] += 64671346;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 23126746;
    result[1] += 62772598;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f33f09a))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24595111;
    result[1] += 61304234;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6e3c75))) ) ) {
    result[0] += 79975253;
    result[1] += 5924092;
  } else {
    result[0] += 24962203;
    result[1] += 60937142;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25877627;
    result[1] += 60021718;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e932768))) ) ) {
    result[0] += 84308617;
    result[1] += 1590728;
  } else {
    result[0] += 19728079;
    result[1] += 66171266;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 82393250;
    result[1] += 3506095;
  } else {
    result[0] += 21675535;
    result[1] += 64223810;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e075e20))) ) ) {
    result[0] += 54975581;
    result[1] += 30923764;
  } else {
    result[0] += 18971634;
    result[1] += 66927711;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    result[0] += 24846918;
    result[1] += 61052427;
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 75987882;
    result[1] += 9911462;
  } else {
    result[0] += 16284236;
    result[1] += 69615109;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3a956c0d))) ) ) {
    result[0] += 51262512;
    result[1] += 34636833;
  } else {
    result[0] += 17303465;
    result[1] += 68595880;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 82717888;
    result[1] += 3181457;
  } else {
    result[0] += 20139081;
    result[1] += 65760264;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 10837767;
    result[1] += 75061577;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 14782678;
    result[1] += 71116667;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 80693324;
    result[1] += 5206020;
  } else {
    result[0] += 23528951;
    result[1] += 62370394;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de82e88))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 23612142;
    result[1] += 62287203;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 19177528;
    result[1] += 66721817;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d8b3bb8))) ) ) {
    result[0] += 65219873;
    result[1] += 20679472;
  } else {
    result[0] += 25482102;
    result[1] += 60417243;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 21372086;
    result[1] += 64527259;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3df0d5a6))) ) ) {
    result[0] += 79391819;
    result[1] += 6507526;
  } else {
    result[0] += 18749603;
    result[1] += 67149742;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 18954315;
    result[1] += 66945030;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 84513872;
    result[1] += 1385473;
  } else {
    result[0] += 19231196;
    result[1] += 66668149;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e96b9a2))) ) ) {
    result[0] += 51224380;
    result[1] += 34674965;
  } else {
    result[0] += 15060274;
    result[1] += 70839070;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 64975146;
    result[1] += 20924199;
  } else {
    result[0] += 18108510;
    result[1] += 67790835;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dfb59de))) ) ) {
    result[0] += 75350303;
    result[1] += 10549042;
  } else {
    result[0] += 18347433;
    result[1] += 67551912;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
    result[0] += 83854123;
    result[1] += 2045222;
  } else {
    result[0] += 18656871;
    result[1] += 67242474;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eb5a07b))) ) ) {
    result[0] += 58822378;
    result[1] += 27076967;
  } else {
    result[0] += 21600420;
    result[1] += 64298925;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f53d513))) ) ) {
    result[0] += 27445019;
    result[1] += 58454326;
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 82530744;
    result[1] += 3368601;
  } else {
    result[0] += 16612609;
    result[1] += 69286736;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cebc409))) ) ) {
    result[0] += 81297595;
    result[1] += 4601750;
  } else {
    result[0] += 13279125;
    result[1] += 72620219;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6d9652))) ) ) {
    result[0] += 23330686;
    result[1] += 62568659;
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 22408525;
    result[1] += 63490820;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 20918493;
    result[1] += 64980852;
  } else {
    result[0] += 77309411;
    result[1] += 8589934;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
    result[0] += 81709133;
    result[1] += 4190211;
  } else {
    result[0] += 25924577;
    result[1] += 59974768;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 82937299;
    result[1] += 2962046;
  } else {
    result[0] += 18017911;
    result[1] += 67881434;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef7342f))) ) ) {
    result[0] += 76354974;
    result[1] += 9544371;
  } else {
    result[0] += 25353551;
    result[1] += 60545794;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    result[0] += 82595524;
    result[1] += 3303820;
  } else {
    result[0] += 22471558;
    result[1] += 63427787;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de82e88))) ) ) {
    result[0] += 83947088;
    result[1] += 1952257;
  } else {
    result[0] += 14904909;
    result[1] += 70994436;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 83335186;
    result[1] += 2564159;
  } else {
    result[0] += 13147859;
    result[1] += 72751486;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
