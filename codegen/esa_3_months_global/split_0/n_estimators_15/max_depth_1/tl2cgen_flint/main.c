
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397012535952678;
    result[1] += 0.060298746404732186;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.004310180417286494;
    result[1] += 0.9956898195827135;
  } else {
    result[0] += 0.8114157904932988;
    result[1] += 0.18858420950670118;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8083578706300243;
    result[1] += 0.19164212936997568;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8036501273300232;
    result[1] += 0.19634987266997686;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.8007261644317966;
    result[1] += 0.19927383556820347;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
    result[0] += 0.7175458888087841;
    result[1] += 0.2824541111912159;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4752695564078443;
    result[1] += 0.5247304435921557;
  } else {
    result[0] += 0.9984768858710817;
    result[1] += 0.0015231141289182401;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.058304941194587206;
    result[1] += 0.9416950588054128;
  } else {
    result[0] += 0.9356194980948627;
    result[1] += 0.0643805019051373;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06181145884954065;
    result[1] += 0.9381885411504594;
  } else {
    result[0] += 0.9377420295085153;
    result[1] += 0.062257970491484724;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7783494731165884;
    result[1] += 0.2216505268834116;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 0.010922152177100132;
    result[1] += 0.9890778478228999;
  } else {
    result[0] += 0.7558195475568288;
    result[1] += 0.24418045244317127;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9399488637136368;
    result[1] += 0.0600511362863632;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 0.0039887815518853224;
    result[1] += 0.9960112184481147;
  } else {
    result[0] += 0.7673988311220674;
    result[1] += 0.23260116887793258;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.807642947977553;
    result[1] += 0.19235705202244702;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.004871180119496137;
    result[1] += 0.9951288198805038;
  } else {
    result[0] += 0.8101806991889972;
    result[1] += 0.18981930081100287;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_0/test_data.csv", "r");
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
