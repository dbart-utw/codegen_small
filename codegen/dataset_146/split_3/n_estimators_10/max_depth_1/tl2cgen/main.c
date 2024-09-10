
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3308165548098434;
    result[1] += 0.14513422818791946;
    result[2] += 0.007829977628635347;
    result[3] += 0.07606263982102908;
    result[4] += 0.1568791946308725;
    result[5] += 0.2832774049217002;
  } else {
    result[0] += 0.02;
    result[1] += 0.0008;
    result[2] += 0.7504;
    result[3] += 0.1584;
    result[4] += 0.0024;
    result[5] += 0.068;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    result[0] += 0.31007137192704204;
    result[1] += 0.14036478984932593;
    result[2] += 0.028813111287338093;
    result[3] += 0.09119746233148295;
    result[4] += 0.133756278086175;
    result[5] += 0.295796986518636;
  } else {
    result[0] += 0.014381591562799617;
    result[1] += 0.0028763183125599234;
    result[2] += 0.8101629913710451;
    result[3] += 0.12080536912751678;
    result[4] += 0.007670182166826462;
    result[5] += 0.04410354745925216;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.3003741314804917;
    result[1] += 0.14297167290219134;
    result[2] += 0.029128808123997863;
    result[3] += 0.08845537145911278;
    result[4] += 0.13468733297701763;
    result[5] += 0.3043826830571887;
  } else {
    result[0] += 0.011070110701107012;
    result[1] += 0.011992619926199264;
    result[2] += 0.7924354243542436;
    result[3] += 0.11623616236162362;
    result[4] += 0.0064575645756457575;
    result[5] += 0.06180811808118082;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    result[0] += 0.31888297872340426;
    result[1] += 0.1372340425531915;
    result[2] += 0.03563829787234043;
    result[3] += 0.09840425531914894;
    result[4] += 0.1324468085106383;
    result[5] += 0.2773936170212766;
  } else {
    result[0] += 0.016885553470919325;
    result[1] += 0.012195121951219513;
    result[2] += 0.7917448405253283;
    result[3] += 0.0975609756097561;
    result[4] += 0.005628517823639775;
    result[5] += 0.07598499061913697;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    result[0] += 0.32250646737568267;
    result[1] += 0.1371083644725496;
    result[2] += 0.015809140557631503;
    result[3] += 0.07530899683817188;
    result[4] += 0.15033055475711413;
    result[5] += 0.29893647599885026;
  } else {
    result[0] += 0.019302152932442463;
    result[1] += 0.008166295471417966;
    result[2] += 0.7126948775055679;
    result[3] += 0.16109873793615442;
    result[4] += 0.009651076466221232;
    result[5] += 0.08908685968819599;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    result[0] += 0.3198999444135631;
    result[1] += 0.13451917732073376;
    result[2] += 0.03362979433018344;
    result[3] += 0.08727070594774876;
    result[4] += 0.1389660922734853;
    result[5] += 0.28571428571428575;
  } else {
    result[0] += 0.03745928338762215;
    result[1] += 0.006514657980456026;
    result[2] += 0.737785016286645;
    result[3] += 0.12296416938110749;
    result[4] += 0.014657980456026058;
    result[5] += 0.08061889250814332;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.30700568028130915;
    result[1] += 0.1384906681092778;
    result[2] += 0.03462266702731945;
    result[3] += 0.08980254260210982;
    result[4] += 0.14200703272923992;
    result[5] += 0.28807140925074387;
  } else {
    result[0] += 0.011514614703277236;
    result[1] += 0.010628875110717449;
    result[2] += 0.7883082373782108;
    result[3] += 0.12577502214348982;
    result[4] += 0.007971656333038087;
    result[5] += 0.05580159433126661;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    result[0] += 0.3218511701288456;
    result[1] += 0.13673415724428084;
    result[2] += 0.032342887194320276;
    result[3] += 0.0875624506968183;
    result[4] += 0.13804890875624506;
    result[5] += 0.2834604259794899;
  } else {
    result[0] += 0.010752688172043013;
    result[1] += 0.0058651026392961885;
    result[2] += 0.809384164222874;
    result[3] += 0.1133919843597263;
    result[4] += 0.0029325513196480943;
    result[5] += 0.057673509286412517;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    result[0] += 0.30546623794212224;
    result[1] += 0.14281886387995715;
    result[2] += 0.033494105037513405;
    result[3] += 0.08654876741693464;
    result[4] += 0.1363879957127546;
    result[5] += 0.2952840300107182;
  } else {
    result[0] += 0.010054844606946984;
    result[1] += 0.005484460694698354;
    result[2] += 0.8089579524680073;
    result[3] += 0.10694698354661791;
    result[4] += 0.006398537477148081;
    result[5] += 0.062157221206581355;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.3037941098434598;
    result[1] += 0.14274343327142477;
    result[2] += 0.0222870788007429;
    result[3] += 0.0912708941363757;
    result[4] += 0.14274343327142477;
    result[5] += 0.29716105067657206;
  } else {
    result[0] += 0.011352885525070956;
    result[1] += 0;
    result[2] += 0.8136234626300851;
    result[3] += 0.13245033112582782;
    result[4] += 0.000946073793755913;
    result[5] += 0.041627246925260174;
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
