
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.31844919786096254;
    result[1] += 0.13288770053475935;
    result[2] += 0.03796791443850268;
    result[3] += 0.09171122994652406;
    result[4] += 0.14144385026737968;
    result[5] += 0.27754010695187165;
  } else {
    result[0] += 0.014732965009208105;
    result[1] += 0.005524861878453039;
    result[2] += 0.8130755064456723;
    result[3] += 0.10681399631675877;
    result[4] += 0.015653775322283615;
    result[5] += 0.044198895027624314;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.315450643776824;
    result[1] += 0.1440450643776824;
    result[2] += 0.038090128755364806;
    result[3] += 0.08986051502145923;
    result[4] += 0.1392167381974249;
    result[5] += 0.27333690987124465;
  } else {
    result[0] += 0.0273224043715847;
    result[1] += 0.010018214936247723;
    result[2] += 0.7896174863387978;
    result[3] += 0.11839708561020036;
    result[4] += 0.004553734061930784;
    result[5] += 0.05009107468123861;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.3226703755215577;
    result[1] += 0.1368567454798331;
    result[2] += 0.022253129346314324;
    result[3] += 0.09123783031988873;
    result[4] += 0.14214186369958276;
    result[5] += 0.2848400556328234;
  } else {
    result[0] += 0.04305442729488221;
    result[1] += 0.00974817221770918;
    result[2] += 0.7384240454914703;
    result[3] += 0.12835093419983754;
    result[4] += 0.012997562956945572;
    result[5] += 0.06742485783915515;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.31696302568444823;
    result[1] += 0.1425345752187412;
    result[2] += 0.017499294383290995;
    result[3] += 0.07902907140841095;
    result[4] += 0.15156646909398813;
    result[5] += 0.2924075642111205;
  } else {
    result[0] += 0.02026500389711613;
    result[1] += 0.010132501948558066;
    result[2] += 0.7435697583787996;
    result[3] += 0.14497272018706156;
    result[4] += 0.01247077162899454;
    result[5] += 0.06858924395946998;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.31487695749440714;
    result[1] += 0.13338926174496643;
    result[2] += 0.021252796420581657;
    result[3] += 0.08976510067114093;
    result[4] += 0.14457494407158836;
    result[5] += 0.2961409395973154;
  } else {
    result[0] += 0.024;
    result[1] += 0.0104;
    result[2] += 0.7288;
    result[3] += 0.1512;
    result[4] += 0.0104;
    result[5] += 0.0752;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.30711920529801323;
    result[1] += 0.1423841059602649;
    result[2] += 0.025386313465783666;
    result[3] += 0.08747240618101546;
    result[4] += 0.1545253863134658;
    result[5] += 0.28311258278145696;
  } else {
    result[0] += 0.014143094841930116;
    result[1] += 0.0074875207986688855;
    result[2] += 0.7504159733777038;
    result[3] += 0.14725457570715475;
    result[4] += 0.015806988352745424;
    result[5] += 0.064891846921797;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 0.03443619176232275;
    result[1] += 0.01012829169480081;
    result[2] += 0.0006752194463200541;
    result[3] += 0.13099257258609048;
    result[4] += 0.19918973666441595;
    result[5] += 0.62457798784605;
  } else {
    result[0] += 0.3411061285500747;
    result[1] += 0.16233183856502242;
    result[2] += 0.29476831091180866;
    result[3] += 0.07982062780269059;
    result[4] += 0.07503736920777279;
    result[5] += 0.04693572496263079;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.30695951309870334;
    result[1] += 0.13045779306694893;
    result[2] += 0.03545911616829849;
    result[3] += 0.09552791743847579;
    result[4] += 0.14501190791214608;
    result[5] += 0.2865837523154274;
  } else {
    result[0] += 0.00859598853868195;
    result[1] += 0.0009551098376313277;
    result[2] += 0.8233046800382045;
    result[3] += 0.113658070678128;
    result[4] += 0.0019102196752626554;
    result[5] += 0.0515759312320917;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 0.334485738980121;
    result[1] += 0.15326995102276;
    result[2] += 0.010947853644482858;
    result[3] += 0.06683952751368481;
    result[4] += 0.1411696917314895;
    result[5] += 0.29328723710746185;
  } else {
    result[0] += 0.03025830258302583;
    result[1] += 0.002214022140221402;
    result[2] += 0.6988929889298893;
    result[3] += 0.16531365313653137;
    result[4] += 0.014760147601476014;
    result[5] += 0.08856088560885608;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.3223684210526316;
    result[1] += 0.14830043859649122;
    result[2] += 0.02987938596491228;
    result[3] += 0.08991228070175439;
    result[4] += 0.13267543859649122;
    result[5] += 0.2768640350877193;
  } else {
    result[0] += 0.017826825127334467;
    result[1] += 0.004244482173174873;
    result[2] += 0.7682512733446519;
    result[3] += 0.1298811544991511;
    result[4] += 0.014431239388794566;
    result[5] += 0.06536502546689305;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
