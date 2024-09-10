
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9392768818852576;
    result[1] += 0.06072311811474237;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005172279691996577;
    result[1] += 0.9948277203080034;
  } else {
    result[0] += 0.8095887524437212;
    result[1] += 0.19041124755627875;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47141655587812353;
    result[1] += 0.5285834441218764;
  } else {
    result[0] += 0.9982207026480131;
    result[1] += 0.0017792973519868821;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.4999754966822508;
    result[1] += 0.5000245033177492;
  } else {
    result[0] += 0.9198798303238023;
    result[1] += 0.08012016967619773;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8060321653147572;
    result[1] += 0.19396783468524276;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7981654555746814;
    result[1] += 0.20183454442531856;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4733072208319733;
    result[1] += 0.5266927791680267;
  } else {
    result[0] += 0.9982264570872166;
    result[1] += 0.001773542912783419;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8044421885392236;
    result[1] += 0.19555781146077642;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.47030996323735236;
    result[1] += 0.5296900367626477;
  } else {
    result[0] += 0.9824133533215492;
    result[1] += 0.017586646678450765;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.46823375775383613;
    result[1] += 0.5317662422461639;
  } else {
    result[0] += 0.9827653740697219;
    result[1] += 0.017234625930278104;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.0052510540436949025;
    result[1] += 0.9947489459563051;
  } else {
    result[0] += 0.8113216401712912;
    result[1] += 0.18867835982870887;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47213534390294465;
    result[1] += 0.5278646560970554;
  } else {
    result[0] += 0.9982362491677665;
    result[1] += 0.0017637508322334225;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8060796584566393;
    result[1] += 0.1939203415433607;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8046136693964989;
    result[1] += 0.1953863306035011;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
    result[0] += 0.7160473340869727;
    result[1] += 0.28395266591302726;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7984097774382833;
    result[1] += 0.2015902225617166;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05780446627273425;
    result[1] += 0.9421955337272657;
  } else {
    result[0] += 0.9362901215763383;
    result[1] += 0.06370987842366169;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.47067093722649483;
    result[1] += 0.5293290627735051;
  } else {
    result[0] += 0.9831086385966487;
    result[1] += 0.016891361403351353;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.46901807704819;
    result[1] += 0.53098192295181;
  } else {
    result[0] += 0.982554937334907;
    result[1] += 0.017445062665093013;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8049236122057012;
    result[1] += 0.19507638779429878;
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  
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
