
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
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    result[0] += 0.6575342465753424;
    result[1] += 0.3424657534246575;
  } else {
    result[0] += 0.16842105263157894;
    result[1] += 0.8315789473684211;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e3ece9a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.15458937198067632;
    result[1] += 0.8454106280193237;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
    result[0] += 0.96875;
    result[1] += 0.03125;
  } else {
    result[0] += 0.29004329004329005;
    result[1] += 0.70995670995671;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 0.9705882352941176;
    result[1] += 0.029411764705882353;
  } else {
    result[0] += 0.22564102564102564;
    result[1] += 0.7743589743589744;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1c110a))) ) ) {
    result[0] += 0.9736842105263158;
    result[1] += 0.02631578947368421;
  } else {
    result[0] += 0.3244444444444444;
    result[1] += 0.6755555555555556;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.19806763285024154;
    result[1] += 0.8019323671497585;
  } else {
    result[0] += 0.9107142857142857;
    result[1] += 0.08928571428571429;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2719665271966527;
    result[1] += 0.7280334728033473;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22065727699530516;
    result[1] += 0.7793427230046949;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23300970873786409;
    result[1] += 0.7669902912621359;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f3d3fd0))) ) ) {
    result[0] += 0.28991596638655465;
    result[1] += 0.7100840336134454;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.16587677725118483;
    result[1] += 0.8341232227488151;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cebc409))) ) ) {
    result[0] += 0.9777777777777777;
    result[1] += 0.022222222222222223;
  } else {
    result[0] += 0.1743119266055046;
    result[1] += 0.8256880733944955;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1588785046728972;
    result[1] += 0.8411214953271028;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eaca6ca))) ) ) {
    result[0] += 0.8717948717948718;
    result[1] += 0.1282051282051282;
  } else {
    result[0] += 0.23243243243243245;
    result[1] += 0.7675675675675676;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.631578947368421;
    result[1] += 0.3684210526315789;
  } else {
    result[0] += 0.20320855614973263;
    result[1] += 0.7967914438502673;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.26605504587155965;
    result[1] += 0.7339449541284404;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d8b3bb8))) ) ) {
    result[0] += 0.6440677966101694;
    result[1] += 0.3559322033898305;
  } else {
    result[0] += 0.21568627450980393;
    result[1] += 0.7843137254901961;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 0.9791666666666666;
    result[1] += 0.020833333333333332;
  } else {
    result[0] += 0.19534883720930232;
    result[1] += 0.8046511627906977;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.896551724137931;
    result[1] += 0.10344827586206896;
  } else {
    result[0] += 0.2048780487804878;
    result[1] += 0.7951219512195122;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3e92a3))) ) ) {
    result[0] += 0.3025210084033613;
    result[1] += 0.6974789915966386;
  } else {
    result[0] += 0.96;
    result[1] += 0.04;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
