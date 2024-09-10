
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06385526140747638;
    result[1] += 0.9361447385925236;
  } else {
    result[0] += 0.9368213365198241;
    result[1] += 0.06317866348017591;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8023321247280638;
    result[1] += 0.1976678752719362;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47401811050662424;
    result[1] += 0.5259818894933758;
  } else {
    result[0] += 0.9981840616487789;
    result[1] += 0.0018159383512211021;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4733532634869288;
    result[1] += 0.5266467365130713;
  } else {
    result[0] += 0.9981736004346369;
    result[1] += 0.0018263995653631413;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8094097248662993;
    result[1] += 0.1905902751337008;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 9.98003992015968e-05;
    result[1] += 0.9999001996007985;
  } else {
    result[0] += 0.7832200317244505;
    result[1] += 0.21677996827554952;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8081107467101609;
    result[1] += 0.19188925328983905;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05705618672231239;
    result[1] += 0.9429438132776876;
  } else {
    result[0] += 0.9358719372393027;
    result[1] += 0.06412806276069721;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9392944981180276;
    result[1] += 0.06070550188197247;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7775501589892225;
    result[1] += 0.2224498410107775;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8044241205796563;
    result[1] += 0.19557587942034374;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9404941698300611;
    result[1] += 0.059505830169938906;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5028909110541764;
    result[1] += 0.4971090889458236;
  } else {
    result[0] += 0.9217332530705784;
    result[1] += 0.07826674692942158;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47394725841920654;
    result[1] += 0.5260527415807935;
  } else {
    result[0] += 0.9983239706868252;
    result[1] += 0.0016760293131747462;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4681802703871746;
    result[1] += 0.5318197296128254;
  } else {
    result[0] += 0.990773711334342;
    result[1] += 0.009226288665657957;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9391912559391504;
    result[1] += 0.060808744060849525;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47370560393106187;
    result[1] += 0.5262943960689381;
  } else {
    result[0] += 0.9984857662023017;
    result[1] += 0.0015142337976983646;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06083323795353096;
    result[1] += 0.9391667620464691;
  } else {
    result[0] += 0.9371505085404266;
    result[1] += 0.06284949145957347;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 5.0266411983512615e-05;
    result[1] += 0.9999497335880165;
  } else {
    result[0] += 0.7824765376473118;
    result[1] += 0.21752346235268813;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8000822016139303;
    result[1] += 0.1999177983860697;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8036625480920112;
    result[1] += 0.1963374519079888;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.47052754723238055;
    result[1] += 0.5294724527676195;
  } else {
    result[0] += 0.9914432790536472;
    result[1] += 0.008556720946352882;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06170871058975381;
    result[1] += 0.9382912894102462;
  } else {
    result[0] += 0.9371199010265713;
    result[1] += 0.0628800989734287;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7991358067538958;
    result[1] += 0.2008641932461042;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.057695636286708846;
    result[1] += 0.9423043637132912;
  } else {
    result[0] += 0.9359656343601059;
    result[1] += 0.06403436563989402;
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    result[0] += 0.004601033656876339;
    result[1] += 0.9953989663431236;
  } else {
    result[0] += 0.7655539198866592;
    result[1] += 0.23444608011334078;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8034146341463415;
    result[1] += 0.19658536585365854;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.009224190592547343;
    result[1] += 0.9907758094074527;
  } else {
    result[0] += 0.7666463177756813;
    result[1] += 0.23335368222431876;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06271849825201399;
    result[1] += 0.937281501747986;
  } else {
    result[0] += 0.9382816408204102;
    result[1] += 0.061718359179589795;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8014963083736608;
    result[1] += 0.19850369162633918;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
