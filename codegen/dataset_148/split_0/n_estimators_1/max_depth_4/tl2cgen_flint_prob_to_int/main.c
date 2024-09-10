
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 4275878551;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19088743;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4254516079;
          result[4] += 23794832;
          result[5] += 16656382;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 4135427942;
          result[1] += 0;
          result[2] += 16793616;
          result[3] += 138547332;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4198404;
        } else {
          result[0] += 4285353001;
          result[1] += 2622080;
          result[2] += 3146496;
          result[3] += 3321301;
          result[4] += 0;
          result[5] += 0;
          result[6] += 524416;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 1148995524;
          result[1] += 0;
          result[2] += 29367297;
          result[3] += 2099761788;
          result[4] += 1016842684;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 15561475;
          result[1] += 15561475;
          result[2] += 0;
          result[3] += 1104864775;
          result[4] += 3158979568;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 832091260;
          result[1] += 28153463;
          result[2] += 109485692;
          result[3] += 1304443817;
          result[4] += 2020793060;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 776935140;
          result[1] += 14549347;
          result[2] += 0;
          result[3] += 1850676964;
          result[4] += 1652805842;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 709074789;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3585892505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1554609730;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2740357564;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 3643078370;
          result[1] += 0;
          result[2] += 0;
          result[3] += 651888924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4294967295;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 4035174151;
          result[1] += 0;
          result[2] += 192749751;
          result[3] += 0;
          result[4] += 25141271;
          result[5] += 12570635;
          result[6] += 29331483;
        } else {
          result[0] += 4267017399;
          result[1] += 0;
          result[2] += 16769937;
          result[3] += 1863326;
          result[4] += 3726652;
          result[5] += 0;
          result[6] += 5589979;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4294967295;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
