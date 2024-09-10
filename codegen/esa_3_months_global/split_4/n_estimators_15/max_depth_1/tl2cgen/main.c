
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
  if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9927334785461425781) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7385626143205294;
    result[1] += 0.26143738567947056;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.46714605902129247;
    result[1] += 0.5328539409787075;
  } else {
    result[0] += 0.982778274474743;
    result[1] += 0.01722172552525704;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8080785016305716;
    result[1] += 0.1919214983694284;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005119913769873349;
    result[1] += 0.9948800862301267;
  } else {
    result[0] += 0.8113235199287151;
    result[1] += 0.18867648007128496;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8025601151239439;
    result[1] += 0.19743988487605607;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.056341000211014985;
    result[1] += 0.943658999788985;
  } else {
    result[0] += 0.9350208750199057;
    result[1] += 0.0649791249800943;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.0034218876376532073;
    result[1] += 0.9965781123623468;
  } else {
    result[0] += 0.765517738119643;
    result[1] += 0.23448226188035703;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05595557257755649;
    result[1] += 0.9440444274224435;
  } else {
    result[0] += 0.9353124566994596;
    result[1] += 0.06468754330054038;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8083520241741381;
    result[1] += 0.19164797582586188;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7976839551807786;
    result[1] += 0.20231604481922144;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0.0003006162633398467;
    result[1] += 0.9996993837366601;
  } else {
    result[0] += 0.7810488049331544;
    result[1] += 0.2189511950668456;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.471617895251358;
    result[1] += 0.528382104748642;
  } else {
    result[0] += 0.9905252527544849;
    result[1] += 0.009474747245515096;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004597079502433748;
    result[1] += 0.9954029204975663;
  } else {
    result[0] += 0.8111545988258317;
    result[1] += 0.1888454011741683;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06294208873926693;
    result[1] += 0.937057911260733;
  } else {
    result[0] += 0.9382890469495985;
    result[1] += 0.06171095305040157;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004303778184034126;
    result[1] += 0.9956962218159658;
  } else {
    result[0] += 0.8095112269823375;
    result[1] += 0.19048877301766254;
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  
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
