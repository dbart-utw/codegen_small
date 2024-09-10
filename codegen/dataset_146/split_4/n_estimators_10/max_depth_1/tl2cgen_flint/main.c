
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.34338028169014084;
    result[1] += 0.13549295774647888;
    result[2] += 0.022816901408450704;
    result[3] += 0.07633802816901408;
    result[4] += 0.1352112676056338;
    result[5] += 0.28676056338028166;
  } else {
    result[0] += 0.01018808777429467;
    result[1] += 0.0023510971786833857;
    result[2] += 0.7852664576802508;
    result[3] += 0.109717868338558;
    result[4] += 0.0109717868338558;
    result[5] += 0.08150470219435736;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.3079056865464632;
    result[1] += 0.15117891816920942;
    result[2] += 0.026907073509015257;
    result[3] += 0.09375866851595006;
    result[4] += 0.1378640776699029;
    result[5] += 0.2823855755894591;
  } else {
    result[0] += 0.042588042588042586;
    result[1] += 0.004095004095004095;
    result[2] += 0.7526617526617526;
    result[3] += 0.11384111384111384;
    result[4] += 0.014742014742014743;
    result[5] += 0.07207207207207207;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3226430743710257;
    result[1] += 0.15399502350013825;
    result[2] += 0.017970693945258503;
    result[3] += 0.07464749792645839;
    result[4] += 0.1523361902128836;
    result[5] += 0.2784075200442356;
  } else {
    result[0] += 0.013234077750206782;
    result[1] += 0.006617038875103391;
    result[2] += 0.7452440033085195;
    result[3] += 0.1315136476426799;
    result[4] += 0.013234077750206782;
    result[5] += 0.09015715467328371;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.30905670518677775;
    result[1] += 0.14377855415210966;
    result[2] += 0.031980650362805695;
    result[3] += 0.09728567589357699;
    result[4] += 0.13571620532115022;
    result[5] += 0.28218220908357966;
  } else {
    result[0] += 0.028054298642533938;
    result[1] += 0.006334841628959276;
    result[2] += 0.7909502262443439;
    result[3] += 0.1076923076923077;
    result[4] += 0.006334841628959276;
    result[5] += 0.06063348416289593;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.3033137359700695;
    result[1] += 0.1456440406199893;
    result[2] += 0.036344200962052375;
    result[3] += 0.09299839657936933;
    result[4] += 0.14003206841261356;
    result[5] += 0.28166755745590594;
  } else {
    result[0] += 0.024907749077490774;
    result[1] += 0.0027675276752767526;
    result[2] += 0.8136531365313653;
    result[3] += 0.0959409594095941;
    result[4] += 0.008302583025830259;
    result[5] += 0.0544280442804428;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.30527437400106555;
    result[1] += 0.13638785295684602;
    result[2] += 0.03090037293553543;
    result[3] += 0.09163558870538092;
    result[4] += 0.14331379861481086;
    result[5] += 0.2924880127863612;
  } else {
    result[0] += 0.021455223880597014;
    result[1] += 0.002798507462686567;
    result[2] += 0.8134328358208955;
    result[3] += 0.10167910447761194;
    result[4] += 0.011194029850746268;
    result[5] += 0.049440298507462684;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.3156208277703605;
    result[1] += 0.14205607476635515;
    result[2] += 0.02349799732977303;
    result[3] += 0.0945260347129506;
    result[4] += 0.1383177570093458;
    result[5] += 0.28598130841121494;
  } else {
    result[0] += 0.014801110083256245;
    result[1] += 0;
    result[2] += 0.8418131359851989;
    result[3] += 0.11655874190564293;
    result[4] += 0.0009250693802035153;
    result[5] += 0.025901942645698426;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3148817802503477;
    result[1] += 0.15187760778859527;
    result[2] += 0.021974965229485395;
    result[3] += 0.07927677329624479;
    result[4] += 0.14909596662030597;
    result[5] += 0.2828929068150209;
  } else {
    result[0] += 0.012997562956945572;
    result[1] += 0.002437043054427295;
    result[2] += 0.7627944760357434;
    result[3] += 0.11454102355808286;
    result[4] += 0.01462225832656377;
    result[5] += 0.0926076360682372;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.3030628694250403;
    result[1] += 0.14266523374529821;
    result[2] += 0.034121440085975285;
    result[3] += 0.09725953788285868;
    result[4] += 0.1461579795808705;
    result[5] += 0.276732939279957;
  } else {
    result[0] += 0.028985507246376812;
    result[1] += 0.009057971014492754;
    result[2] += 0.7789855072463768;
    result[3] += 0.08514492753623189;
    result[4] += 0.019927536231884056;
    result[5] += 0.07789855072463768;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 0.03576158940397351;
    result[1] += 0.005960264900662252;
    result[2] += 0.0006622516556291391;
    result[3] += 0.14172185430463577;
    result[4] += 0.20794701986754968;
    result[5] += 0.6079470198675496;
  } else {
    result[0] += 0.3395657418576598;
    result[1] += 0.15621230398069963;
    result[2] += 0.3054885404101327;
    result[3] += 0.08232810615199035;
    result[4] += 0.06483715319662244;
    result[5] += 0.051568154402895056;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
