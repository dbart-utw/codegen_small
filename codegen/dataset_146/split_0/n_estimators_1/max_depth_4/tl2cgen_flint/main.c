
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0.004081632653061225;
          result[2] += 0;
          result[3] += 0.00816326530612245;
          result[4] += 0.9428571428571428;
          result[5] += 0.044897959183673466;
        } else {
          result[0] += 0;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0.36363636363636365;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.025404157043879907;
          result[1] += 0.003464203233256351;
          result[2] += 0;
          result[3] += 0.042725173210161664;
          result[4] += 0.08429561200923788;
          result[5] += 0.8441108545034642;
        } else {
          result[0] += 0.09198813056379822;
          result[1] += 0.017804154302670624;
          result[2] += 0.032640949554896145;
          result[3] += 0.47181008902077154;
          result[4] += 0.05934718100890208;
          result[5] += 0.3264094955489614;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9951573849878934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004842615012106538;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7329234972677596;
          result[1] += 0.038934426229508205;
          result[2] += 0.008196721311475412;
          result[3] += 0.039617486338797823;
          result[4] += 0.11680327868852461;
          result[5] += 0.06352459016393444;
        } else {
          result[0] += 0.12129380053908358;
          result[1] += 0.021563342318059304;
          result[2] += 0.25876010781671166;
          result[3] += 0.26415094339622647;
          result[4] += 0.09433962264150945;
          result[5] += 0.23989218328840972;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14035087719298245;
          result[3] += 0.7017543859649122;
          result[4] += 0;
          result[5] += 0.15789473684210525;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0.09803921568627451;
          result[2] += 0.43137254901960786;
          result[3] += 0.29411764705882354;
          result[4] += 0.0196078431372549;
          result[5] += 0.09803921568627451;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.36363636363636365;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0.09090909090909091;
          result[4] += 0.030303030303030304;
          result[5] += 0.06060606060606061;
        } else {
          result[0] += 0.005488474204171241;
          result[1] += 0;
          result[2] += 0.9143798024149287;
          result[3] += 0.07135016465422613;
          result[4] += 0;
          result[5] += 0.008781558726673985;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ee0000))) ) ) {
          result[0] += 0.6896551724137931;
          result[1] += 0;
          result[2] += 0.3103448275862069;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 1;
  result[1] /= 1;
  result[2] /= 1;
  result[3] /= 1;
  result[4] /= 1;
  result[5] /= 1;
  
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
