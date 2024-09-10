
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
    result[0] += 0.11964754985314577;
    result[1] += 0.002318750966146236;
    result[2] += 0.00448291853454939;
    result[3] += 0.49373937239140514;
    result[4] += 0.3785747410728088;
    result[5] += 0.001236667181944659;
    result[6] += 0;
  } else {
    result[0] += 0.9016769733466555;
    result[1] += 0.0008911452566768383;
    result[2] += 0.0022953741459857957;
    result[3] += 0.09473144122491967;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0004050660257621992;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8380600896638843;
    result[1] += 0.00037153543209570756;
    result[2] += 0.0028236692839273777;
    result[3] += 0.13402521487132493;
    result[4] += 0.024100265028608233;
    result[5] += 0.00029722834567656606;
    result[6] += 0.0003219973744829466;
  } else {
    result[0] += 0.08410617204988807;
    result[1] += 0.007035497281739686;
    result[2] += 0.002878157978893508;
    result[3] += 0.4211704509114167;
    result[4] += 0.48480972177806203;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.999464237878382;
    result[1] += 0;
    result[2] += 0.0004592246756725728;
    result[3] += 0;
    result[4] += 3.8268722972714404e-05;
    result[5] += 0;
    result[6] += 3.8268722972714404e-05;
  } else {
    result[0] += 0.4655420576889861;
    result[1] += 0.0025908227301514194;
    result[2] += 0.005699810006333122;
    result[3] += 0.38712648972306984;
    result[4] += 0.13811963843629455;
    result[5] += 0.0005181645460302838;
    result[6] += 0.0004030168691346652;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993128459629701;
    result[1] += 0;
    result[2] += 0.0005726283641916398;
    result[3] += 0;
    result[4] += 7.635044855888529e-05;
    result[5] += 0;
    result[6] += 3.8175224279442646e-05;
  } else {
    result[0] += 0.4651834729846865;
    result[1] += 0.0018491765385726668;
    result[2] += 0.006125397284021959;
    result[3] += 0.38699797746316095;
    result[4] += 0.1390349609939324;
    result[5] += 0.0005778676683039584;
    result[6] += 0.00023114706732158335;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9994283972258212;
    result[1] += 0;
    result[2] += 0.00038106851611919825;
    result[3] += 0;
    result[4] += 7.621370322383964e-05;
    result[5] += 0;
    result[6] += 0.00011432055483575947;
  } else {
    result[0] += 0.4661026770193533;
    result[1] += 0.0022018773901958514;
    result[2] += 0.006084134893962221;
    result[3] += 0.383995828021787;
    result[4] += 0.1411519295399235;
    result[5] += 0.00023177656738903696;
    result[6] += 0.00023177656738903696;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.22717703349282298;
    result[1] += 0.0036363636363636364;
    result[2] += 0.005933014354066985;
    result[3] += 0.4296650717703349;
    result[4] += 0.3335885167464115;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8596734160679296;
    result[1] += 0.000209013716525147;
    result[2] += 0.0023252775963422605;
    result[3] += 0.11814500326583934;
    result[4] += 0.01912475506205095;
    result[5] += 0.00018288700195950362;
    result[6] += 0.00033964728935336386;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.840779190481745;
    result[1] += 0.000845678292313076;
    result[2] += 0.0017788405458999184;
    result[3] += 0.10422255919748047;
    result[4] += 0.052023795637466466;
    result[5] += 0.00020412924297212178;
    result[6] += 0.00014580660212294412;
  } else {
    result[0] += 0.5919852302345787;
    result[1] += 0;
    result[2] += 0.004561251086012164;
    result[3] += 0.3292788879235448;
    result[4] += 0.07330582102519549;
    result[5] += 0.0002172024326672459;
    result[6] += 0.0006516072980017378;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.21088861076345433;
    result[1] += 0.00458906967042136;
    result[2] += 0.003963287442636629;
    result[3] += 0.43450146015853147;
    result[4] += 0.3460575719649562;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8526585025577431;
    result[1] += 0.0004133726037306878;
    result[2] += 0.002686921924249471;
    result[3] += 0.12191908231281973;
    result[4] += 0.02193458378545962;
    result[5] += 0.00012917893866583994;
    result[6] += 0.0002583578773316799;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2033275713050994;
    result[1] += 0.004753673292999135;
    result[2] += 0.0038893690579083835;
    result[3] += 0.4403630077787381;
    result[4] += 0.34766637856525495;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8536993208479112;
    result[1] += 0.0004630582424367154;
    result[2] += 0.002341016670096728;
    result[3] += 0.12075529944433012;
    result[4] += 0.02214961926322289;
    result[5] += 0.00028298003704465945;
    result[6] += 0.0003087054949578103;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.24424778761061947;
    result[1] += 0.00471976401179941;
    result[2] += 0.005309734513274336;
    result[3] += 0.41297935103244837;
    result[4] += 0.3327433628318584;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8558635949498894;
    result[1] += 0.0005466614603670441;
    result[2] += 0.0023688663282571912;
    result[3] += 0.12229597813354158;
    result[4] += 0.018456332161915917;
    result[5] += 0.00015618898867629833;
    result[6] += 0.00031237797735259666;
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
