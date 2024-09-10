
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11962674009484472;
    result[1] += 0.0019886798225485698;
    result[2] += 0.004589261128958238;
    result[3] += 0.48753250726633013;
    result[4] += 0.38458008260670035;
    result[5] += 0.0016827290806180205;
    result[6] += 0;
  } else {
    result[0] += 0.9011714417119823;
    result[1] += 0.0004869734599464329;
    result[2] += 0.0029218407596785976;
    result[3] += 0.09525741958174391;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00016232448664881097;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11627906976744186;
    result[1] += 0.0017402309761113748;
    result[2] += 0.004113273216263249;
    result[3] += 0.4921689606074988;
    result[4] += 0.3849074513526341;
    result[5] += 0.0007910140800506249;
    result[6] += 0;
  } else {
    result[0] += 0.9034401140428736;
    result[1] += 0.0007800102208235832;
    result[2] += 0.002770381129132037;
    result[3] += 0.09271362866134109;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.000295865945829635;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.1119368323269856;
    result[1] += 0.0015482272797646694;
    result[2] += 0.004335036383341075;
    result[3] += 0.501006347731847;
    result[4] += 0.3802446199102028;
    result[5] += 0.0009289363678588017;
    result[6] += 0;
  } else {
    result[0] += 0.9011365783861127;
    result[1] += 0.0005129451148727086;
    result[2] += 0.003347641802327151;
    result[3] += 0.09478685780621474;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00021597689047271943;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 0.7599531615925058;
    result[1] += 0.00041328006612481057;
    result[2] += 0.004270560683289709;
    result[3] += 0.18818019010883041;
    result[4] += 0.046356247416999584;
    result[5] += 0.00034440005510400884;
    result[6] += 0.00048216007714561236;
  } else {
    result[0] += 0.8027051273204059;
    result[1] += 0.0007590918501138639;
    result[2] += 0.0024843006003726453;
    result[3] += 0.13259954454488995;
    result[4] += 0.061175902284176395;
    result[5] += 0.0002070250500310538;
    result[6] += 6.900835001035127e-05;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 0.9991677385185745;
    result[1] += 0;
    result[2] += 0.0006052810774003178;
    result[3] += 0;
    result[4] += 0.0001891503366875993;
    result[5] += 0;
    result[6] += 3.783006733751986e-05;
  } else {
    result[0] += 0.4617367865932262;
    result[1] += 0.0022266494784952532;
    result[2] += 0.00662135239657799;
    result[3] += 0.3904254072424703;
    result[4] += 0.1380522676667057;
    result[5] += 0.00035157623344661895;
    result[6] += 0.0005859603890776983;
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  result[6] /= 5;
  
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
