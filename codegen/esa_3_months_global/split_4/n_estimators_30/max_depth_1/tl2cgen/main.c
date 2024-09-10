
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
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7838182096092118;
    result[1] += 0.2161817903907882;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.057009811436455615;
    result[1] += 0.9429901885635443;
  } else {
    result[0] += 0.936256718568183;
    result[1] += 0.06374328143181693;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.062109791381148166;
    result[1] += 0.9378902086188519;
  } else {
    result[0] += 0.9370243848247515;
    result[1] += 0.06297561517524856;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
    result[0] += 0.7181588543152501;
    result[1] += 0.28184114568474994;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.806319498734;
    result[1] += 0.19368050126600003;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.009194982340762391;
    result[1] += 0.9908050176592376;
  } else {
    result[0] += 0.7670397139970467;
    result[1] += 0.2329602860029533;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0046777747709436735;
    result[1] += 0.9953222252290563;
  } else {
    result[0] += 0.8086096090642264;
    result[1] += 0.1913903909357736;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06090503747272555;
    result[1] += 0.9390949625272744;
  } else {
    result[0] += 0.9385075249383059;
    result[1] += 0.061492475061694064;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0.0002512941649494899;
    result[1] += 0.9997487058350505;
  } else {
    result[0] += 0.7839728749087245;
    result[1] += 0.21602712509127547;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4762388633848052;
    result[1] += 0.5237611366151947;
  } else {
    result[0] += 0.9984247955708958;
    result[1] += 0.0015752044291042183;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.805931961370564;
    result[1] += 0.194068038629436;
  }
  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7128912806510925293) ) ) {
    result[0] += 0.04367213114754098;
    result[1] += 0.956327868852459;
  } else {
    result[0] += 0.75737686834703;
    result[1] += 0.24262313165297006;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004365641634434956;
    result[1] += 0.995634358365565;
  } else {
    result[0] += 0.8111788415167178;
    result[1] += 0.18882115848328218;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05674692266006039;
    result[1] += 0.9432530773399396;
  } else {
    result[0] += 0.9353863567346713;
    result[1] += 0.06461364326532866;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.809160930363127;
    result[1] += 0.19083906963687297;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8061734369624918;
    result[1] += 0.19382656303750823;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.940815494393476;
    result[1] += 0.059184505606523954;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8088198255715198;
    result[1] += 0.19118017442848023;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5055256695123377;
    result[1] += 0.49447433048766226;
  } else {
    result[0] += 0.9176991527227828;
    result[1] += 0.08230084727721719;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7773185092706628;
    result[1] += 0.22268149072933713;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8002263789190407;
    result[1] += 0.19977362108095933;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4718579990779161;
    result[1] += 0.528142000922084;
  } else {
    result[0] += 0.9900919305413688;
    result[1] += 0.009908069458631256;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.47180224685524313;
    result[1] += 0.5281977531447569;
  } else {
    result[0] += 0.9822859505794785;
    result[1] += 0.017714049420521474;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8071004051703;
    result[1] += 0.19289959482970004;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.46961887477313974;
    result[1] += 0.5303811252268602;
  } else {
    result[0] += 0.9983209819360815;
    result[1] += 0.0016790180639184808;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06327822390174775;
    result[1] += 0.9367217760982522;
  } else {
    result[0] += 0.9377658648658057;
    result[1] += 0.06223413513419431;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004777922177203578;
    result[1] += 0.9952220778227964;
  } else {
    result[0] += 0.8119872298970645;
    result[1] += 0.1880127701029355;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8072230924665312;
    result[1] += 0.19277690753346882;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8064819410785716;
    result[1] += 0.19351805892142837;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8025862319472292;
    result[1] += 0.19741376805277075;
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
