
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.306404464522987;
    result[1] += 0.13659314376827;
    result[2] += 0.037470103640712196;
    result[3] += 0.09168216848259368;
    result[4] += 0.13951634334307733;
    result[5] += 0.28833377624235984;
  } else {
    result[0] += 0.010348071495766699;
    result[1] += 0.008466603951081843;
    result[2] += 0.8109125117591721;
    result[3] += 0.10724365004703669;
    result[4] += 0.012229539040451553;
    result[5] += 0.05079962370649106;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    result[0] += 0.3125659978880676;
    result[1] += 0.14149947201689547;
    result[2] += 0.02719112988384372;
    result[3] += 0.08315733896515312;
    result[4] += 0.14545934530095037;
    result[5] += 0.29012671594508976;
  } else {
    result[0] += 0.008670520231213874;
    result[1] += 0.0028901734104046246;
    result[2] += 0.7996146435452794;
    result[3] += 0.13294797687861273;
    result[4] += 0.006743737957610791;
    result[5] += 0.04913294797687862;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.32456140350877194;
    result[1] += 0.14008506113769273;
    result[2] += 0.03349282296650718;
    result[3] += 0.08851674641148326;
    result[4] += 0.1406166932482722;
    result[5] += 0.2727272727272727;
  } else {
    result[0] += 0.012218045112781954;
    result[1] += 0.008458646616541353;
    result[2] += 0.8035714285714286;
    result[3] += 0.11654135338345864;
    result[4] += 0.021616541353383457;
    result[5] += 0.03759398496240601;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    result[0] += 0.3108395324123273;
    result[1] += 0.12035069075451647;
    result[2] += 0.03002125398512221;
    result[3] += 0.10069075451647184;
    result[4] += 0.14558979808714134;
    result[5] += 0.2925079702444208;
  } else {
    result[0] += 0.007532956685499058;
    result[1] += 0.007532956685499058;
    result[2] += 0.8314500941619586;
    result[3] += 0.10828625235404897;
    result[4] += 0.005649717514124294;
    result[5] += 0.03954802259887006;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    result[0] += 0.29176595181360876;
    result[1] += 0.13423351866560765;
    result[2] += 0.033359809372517875;
    result[3] += 0.10087370929308977;
    result[4] += 0.1559438707969288;
    result[5] += 0.2838231400582473;
  } else {
    result[0] += 0.020972354623450904;
    result[1] += 0.00667302192564347;
    result[2] += 0.8064823641563393;
    result[3] += 0.1124880838894185;
    result[4] += 0.004766444232602479;
    result[5] += 0.04861773117254528;
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  
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
