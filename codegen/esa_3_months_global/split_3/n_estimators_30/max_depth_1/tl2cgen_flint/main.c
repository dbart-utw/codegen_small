
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8047064602716975;
    result[1] += 0.19529353972830252;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.46879159956433913;
    result[1] += 0.5312084004356609;
  } else {
    result[0] += 0.9822071642527794;
    result[1] += 0.01779283574722057;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7755849268841395;
    result[1] += 0.2244150731158605;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05629740004202724;
    result[1] += 0.9437025999579728;
  } else {
    result[0] += 0.9357408832768197;
    result[1] += 0.0642591167231803;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8070490824130137;
    result[1] += 0.19295091758698632;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4727723219937424;
    result[1] += 0.5272276780062576;
  } else {
    result[0] += 0.9983250750226813;
    result[1] += 0.0016749249773187244;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05686255650668462;
    result[1] += 0.9431374434933154;
  } else {
    result[0] += 0.9372228946913367;
    result[1] += 0.06277710530866332;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.008490508824064527;
    result[1] += 0.9915094911759355;
  } else {
    result[0] += 0.7641707992958333;
    result[1] += 0.23582920070416669;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.4706920541242168;
    result[1] += 0.5293079458757832;
  } else {
    result[0] += 0.9822404524269891;
    result[1] += 0.01775954757301085;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8035950749215937;
    result[1] += 0.19640492507840632;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8065184165393007;
    result[1] += 0.19348158346069932;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8080699655099599;
    result[1] += 0.19193003449004012;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.056621603378782324;
    result[1] += 0.9433783966212177;
  } else {
    result[0] += 0.9365960181608354;
    result[1] += 0.06340398183916465;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005688854489164087;
    result[1] += 0.9943111455108359;
  } else {
    result[0] += 0.8097059512652296;
    result[1] += 0.19029404873477038;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4731984863746495;
    result[1] += 0.5268015136253505;
  } else {
    result[0] += 0.9983094220770949;
    result[1] += 0.001690577922905015;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8017805084844191;
    result[1] += 0.1982194915155809;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05635835369725424;
    result[1] += 0.9436416463027457;
  } else {
    result[0] += 0.9342688586268665;
    result[1] += 0.0657311413731335;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.4698097524072811;
    result[1] += 0.5301902475927188;
  } else {
    result[0] += 0.9828135301545441;
    result[1] += 0.017186469845455864;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9390459363957597;
    result[1] += 0.060954063604240286;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8019867511219745;
    result[1] += 0.19801324887802554;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7991496746203904;
    result[1] += 0.20085032537960953;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005060497679019862;
    result[1] += 0.9949395023209802;
  } else {
    result[0] += 0.8100106884036693;
    result[1] += 0.1899893115963307;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8097365366351261;
    result[1] += 0.1902634633648739;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005126257831782798;
    result[1] += 0.9948737421682172;
  } else {
    result[0] += 0.8095168159788515;
    result[1] += 0.19048318402114847;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4755673482694293;
    result[1] += 0.5244326517305707;
  } else {
    result[0] += 0.9981424292381638;
    result[1] += 0.0018575707618362087;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.0047045324153757884;
    result[1] += 0.9952954675846242;
  } else {
    result[0] += 0.8095120734677111;
    result[1] += 0.19048792653228883;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7987055352513582;
    result[1] += 0.20129446474864174;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005364276203157694;
    result[1] += 0.9946357237968423;
  } else {
    result[0] += 0.8093965643811482;
    result[1] += 0.19060343561885185;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7781955521084489;
    result[1] += 0.22180444789155104;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06105415602728762;
    result[1] += 0.9389458439727124;
  } else {
    result[0] += 0.9374384031315501;
    result[1] += 0.0625615968684499;
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_3/test_data.csv", "r");
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
