
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 90611124;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4168111720;
            result[5] += 36244449;
          } else {
            result[0] += 0;
            result[1] += 3579139412;
            result[2] += 0;
            result[3] += 0;
            result[4] += 715827882;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42580000))) ) ) {
            result[0] += 3237744576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 925069878;
            result[5] += 132152839;
          } else {
            result[0] += 165191049;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 743359724;
            result[5] += 3386416521;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 357913941;
            result[2] += 0;
            result[3] += 536870911;
            result[4] += 2505397588;
            result[5] += 894784853;
          } else {
            result[0] += 0;
            result[1] += 50070862;
            result[2] += 0;
            result[3] += 194720019;
            result[4] += 100141724;
            result[5] += 3950034688;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 53353630;
            result[1] += 293444970;
            result[2] += 240091339;
            result[3] += 720274018;
            result[4] += 480182678;
            result[5] += 2507620656;
          } else {
            result[0] += 56886984;
            result[1] += 113773968;
            result[2] += 56886984;
            result[3] += 2986566662;
            result[4] += 56886984;
            result[5] += 1023965712;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4151801718;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3799394145;
            result[2] += 0;
            result[3] += 0;
            result[4] += 495573149;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967295;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4294967295;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 390451572;
            result[1] += 0;
            result[2] += 0;
            result[3] += 195225786;
            result[4] += 1236429978;
            result[5] += 2472859957;
          } else {
            result[0] += 3581505785;
            result[1] += 81639874;
            result[2] += 3549559;
            result[3] += 42594716;
            result[4] += 504037484;
            result[5] += 81639874;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 47988461;
            result[1] += 47988461;
            result[2] += 431896152;
            result[3] += 2015515378;
            result[4] += 23994230;
            result[5] += 1727584610;
          } else {
            result[0] += 3221225471;
            result[1] += 35791394;
            result[2] += 572662306;
            result[3] += 71582788;
            result[4] += 357913941;
            result[5] += 35791394;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967295;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4294967295;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 138547332;
            result[4] += 0;
            result[5] += 4156419962;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2863311530;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1431655765;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 296204641;
            result[3] += 1036716243;
            result[4] += 592409282;
            result[5] += 2369637128;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 184070026;
            result[3] += 4110897268;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 3865470565;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 78090314;
            result[1] += 0;
            result[2] += 2186528804;
            result[3] += 1366580502;
            result[4] += 39045157;
            result[5] += 624722515;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 2938661833;
            result[1] += 452101820;
            result[2] += 226050910;
            result[3] += 0;
            result[4] += 452101820;
            result[5] += 226050910;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820996;
            result[3] += 0;
            result[4] += 0;
            result[5] += 991146298;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2938661833;
            result[3] += 1152859642;
            result[4] += 0;
            result[5] += 203445819;
          } else {
            result[0] += 58835168;
            result[1] += 0;
            result[2] += 3883121116;
            result[3] += 274564119;
            result[4] += 0;
            result[5] += 78446891;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 4294967295;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354559;
            result[3] += 1610612735;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 48348599;
            result[1] += 0;
            result[2] += 4157979595;
            result[3] += 88639099;
            result[4] += 0;
            result[5] += 0;
          }
        }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
