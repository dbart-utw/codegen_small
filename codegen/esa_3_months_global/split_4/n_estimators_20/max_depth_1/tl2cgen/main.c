
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.056280053856510866;
    result[1] += 0.9437199461434891;
  } else {
    result[0] += 0.9346544926333265;
    result[1] += 0.06534550736667358;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004317489688138468;
    result[1] += 0.9956825103118615;
  } else {
    result[0] += 0.8107889508202486;
    result[1] += 0.18921104917975137;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5027841885588019;
    result[1] += 0.49721581144119814;
  } else {
    result[0] += 0.9222884889428405;
    result[1] += 0.07771151105715944;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9400200069411837;
    result[1] += 0.05997999305881632;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.47043072591256657;
    result[1] += 0.5295692740874334;
  } else {
    result[0] += 0.9903508073233731;
    result[1] += 0.009649192676626879;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004364282403831299;
    result[1] += 0.9956357175961686;
  } else {
    result[0] += 0.8122260763587784;
    result[1] += 0.18777392364122156;
  }
  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3241925090551376343) ) ) {
    result[0] += 0.7151298704664555;
    result[1] += 0.28487012953354446;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05781860904065792;
    result[1] += 0.9421813909593421;
  } else {
    result[0] += 0.9359024882638846;
    result[1] += 0.06409751173611543;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401723352307891;
    result[1] += 0.05982766476921089;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8029475443902042;
    result[1] += 0.19705245560979573;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397660062480007;
    result[1] += 0.06023399375199929;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47538945897638296;
    result[1] += 0.524610541023617;
  } else {
    result[0] += 0.9984017233591606;
    result[1] += 0.0015982766408394427;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 4.948290365678658e-05;
    result[1] += 0.9999505170963432;
  } else {
    result[0] += 0.7833071544816871;
    result[1] += 0.21669284551831292;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8016146093668267;
    result[1] += 0.19838539063317331;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9407938205423373;
    result[1] += 0.059206179457662676;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8092473345297161;
    result[1] += 0.19075266547028397;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7978521210160542;
    result[1] += 0.2021478789839458;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8063994394651564;
    result[1] += 0.19360056053484367;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.0006458279514337381;
    result[1] += 0.9993541720485662;
  } else {
    result[0] += 0.7641708453908856;
    result[1] += 0.2358291546091144;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9399857351492715;
    result[1] += 0.06001426485072853;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_4/test_data.csv", "r");
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
