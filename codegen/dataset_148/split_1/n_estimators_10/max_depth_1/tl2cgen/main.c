
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11624253848570532;
    result[1] += 0.00235626767200754;
    result[2] += 0.0034558592522777255;
    result[3] += 0.4984291548853283;
    result[4] += 0.3784165881244109;
    result[5] += 0.0010995915802701854;
    result[6] += 0;
  } else {
    result[0] += 0.9029730166424301;
    result[1] += 0.00045780147573652177;
    result[2] += 0.0023159368772553454;
    result[3] += 0.09406473851456885;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00018850649000915604;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.19840919133893062;
    result[1] += 0.0015466195315952276;
    result[2] += 0.003977021652673442;
    result[3] += 0.4383561643835616;
    result[4] += 0.35771100309323905;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8552881408118232;
    result[1] += 0.00038487196592600195;
    result[2] += 0.002822394416790681;
    result[3] += 0.1189254374711346;
    result[4] += 0.022168625237337713;
    result[5] += 0.00017960691743213424;
    result[6] += 0.00023092317955560117;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9989685995874399;
    result[1] += 0;
    result[2] += 0.0008786003514401405;
    result[3] += 0;
    result[4] += 7.640003056001223e-05;
    result[5] += 0;
    result[6] += 7.640003056001223e-05;
  } else {
    result[0] += 0.4605126428818843;
    result[1] += 0.0016164415194550282;
    result[2] += 0.006350305969287611;
    result[3] += 0.3833275603279067;
    result[4] += 0.14698071816187508;
    result[5] += 0.0005195704883962591;
    result[6] += 0.0006927606511950121;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.20154705629565964;
    result[1] += 0.0040825096691018475;
    result[2] += 0.006231198968629136;
    result[3] += 0.43553932101418136;
    result[4] += 0.352599914052428;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8588786490243524;
    result[1] += 0.00038614014312927963;
    result[2] += 0.002677238325696339;
    result[3] += 0.11609946970087008;
    result[4] += 0.021520877310405185;
    result[5] += 0.00018019873346033051;
    result[6] += 0.0002574267620861864;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8420573375631536;
    result[1] += 0.001292445071084479;
    result[2] += 0.0022617788743978383;
    result[3] += 0.10160380683820938;
    result[4] += 0.0526083891434614;
    result[5] += 5.8747503231112676e-05;
    result[6] += 0.00011749500646222535;
  } else {
    result[0] += 0.5940143824027072;
    result[1] += 0;
    result[2] += 0.005181895093062605;
    result[3] += 0.32571912013536375;
    result[4] += 0.07360406091370557;
    result[5] += 0.000740270727580372;
    result[6] += 0.000740270727580372;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8381474227059729;
    result[1] += 0.0003966974933677138;
    result[2] += 0.0028512632335804433;
    result[3] += 0.1343564822849776;
    result[4] += 0.023752262415391866;
    result[5] += 0.00022314234001933903;
    result[6] += 0.0002727295266903033;
  } else {
    result[0] += 0.1000947268708557;
    result[1] += 0.005999368487527629;
    result[2] += 0.0034733185980423114;
    result[3] += 0.3943795389958952;
    result[4] += 0.4960530470476792;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.18927103612372917;
    result[1] += 0.005191434133679429;
    result[2] += 0.006489292667099286;
    result[3] += 0.44386761842959116;
    result[4] += 0.35518061864590095;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.85829667927052;
    result[1] += 0.00028294364277079;
    result[2] += 0.002212104843480722;
    result[3] += 0.11770455539264862;
    result[4] += 0.021040718162409655;
    result[5] += 0.00012861074671399544;
    result[6] += 0.00033438794145638817;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993880985161389;
    result[1] += 0;
    result[2] += 0.0005354137983784611;
    result[3] += 0;
    result[4] += 7.64876854826373e-05;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.47003227293683725;
    result[1] += 0.001959428307976026;
    result[2] += 0.006108805901337022;
    result[3] += 0.38266482249884737;
    result[4] += 0.13837021668971877;
    result[5] += 0.0002881512217611803;
    result[6] += 0.0005763024435223605;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8435759720812811;
    result[1] += 0.00032175828527584587;
    result[2] += 0.0028710739301537015;
    result[3] += 0.1296933396034948;
    result[4] += 0.023092344627874167;
    result[5] += 0.00017325446130237853;
    result[6] += 0.0002722570106180234;
  } else {
    result[0] += 0.10461737164998386;
    result[1] += 0.004843396835647401;
    result[2] += 0.003551824346141427;
    result[3] += 0.4026477236034873;
    result[4] += 0.48433968356474005;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8414525471557998;
    result[1] += 0.00034655180949551956;
    result[2] += 0.002673399673251151;
    result[3] += 0.13156591910490617;
    result[4] += 0.02359027674637358;
    result[5] += 0.0001485222040695084;
    result[6] += 0.0002227833061042626;
  } else {
    result[0] += 0.08994197292069632;
    result[1] += 0.0051579626047711154;
    result[2] += 0.003223726627981947;
    result[3] += 0.402321083172147;
    result[4] += 0.4993552546744036;
    result[5] += 0;
    result[6] += 0;
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  result[6] /= 10;
  
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
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
