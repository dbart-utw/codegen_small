
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
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7981817024404076;
    result[1] += 0.20181829755959235;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 9.940357852882704e-05;
    result[1] += 0.9999005964214712;
  } else {
    result[0] += 0.7811097256857855;
    result[1] += 0.21889027431421446;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05594673931812513;
    result[1] += 0.9440532606818749;
  } else {
    result[0] += 0.9355921877055366;
    result[1] += 0.0644078122944634;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4714418503912137;
    result[1] += 0.5285581496087863;
  } else {
    result[0] += 0.9983673659782393;
    result[1] += 0.0016326340217606792;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.0582725527831094;
    result[1] += 0.9417274472168906;
  } else {
    result[0] += 0.9351169874013567;
    result[1] += 0.06488301259864322;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005415919752850986;
    result[1] += 0.9945840802471491;
  } else {
    result[0] += 0.8122471982670056;
    result[1] += 0.1877528017329944;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.0048330404217926184;
    result[1] += 0.9951669595782073;
  } else {
    result[0] += 0.7670460836636623;
    result[1] += 0.23295391633633766;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8053234022216783;
    result[1] += 0.19467659777832175;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8080394773812869;
    result[1] += 0.19196052261871313;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05642307692307692;
    result[1] += 0.9435769230769231;
  } else {
    result[0] += 0.936317100166021;
    result[1] += 0.06368289983397897;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8077076419751639;
    result[1] += 0.19229235802483613;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8099816715757174;
    result[1] += 0.19001832842428254;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4709883699865947;
    result[1] += 0.5290116300134053;
  } else {
    result[0] += 0.998200937833697;
    result[1] += 0.0017990621663029852;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.802922123154082;
    result[1] += 0.19707787684591807;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.061218705715635334;
    result[1] += 0.9387812942843646;
  } else {
    result[0] += 0.9381696661677168;
    result[1] += 0.061830333832283216;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_3/test_data.csv", "r");
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
