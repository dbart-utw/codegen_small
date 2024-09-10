
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    result[0] += 141204404;
    result[1] += 73543960;
  } else {
    result[0] += 36168145;
    result[1] += 178580219;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e3ece9a))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 33197814;
    result[1] += 181550549;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
    result[0] += 208037478;
    result[1] += 6710886;
  } else {
    result[0] += 62286322;
    result[1] += 152462042;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 208432236;
    result[1] += 6316128;
  } else {
    result[0] += 48456041;
    result[1] += 166292323;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1c110a))) ) ) {
    result[0] += 209097091;
    result[1] += 5651272;
  } else {
    result[0] += 69673913;
    result[1] += 145074450;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 42534700;
    result[1] += 172213664;
  } else {
    result[0] += 195574403;
    result[1] += 19173961;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 58404366;
    result[1] += 156343997;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 47385789;
    result[1] += 167362575;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 50038453;
    result[1] += 164709910;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f3d3fd0))) ) ) {
    result[0] += 62258979;
    result[1] += 152489385;
  } else {
    result[0] += 214748364;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 206488812;
    result[1] += 8259552;
  } else {
    result[0] += 35621766;
    result[1] += 179126598;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cebc409))) ) ) {
    result[0] += 209976178;
    result[1] += 4772185;
  } else {
    result[0] += 37433201;
    result[1] += 177315163;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 34118899;
    result[1] += 180629465;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eaca6ca))) ) ) {
    result[0] += 187216523;
    result[1] += 27531841;
  } else {
    result[0] += 49914484;
    result[1] += 164833879;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 135630546;
    result[1] += 79117818;
  } else {
    result[0] += 43638705;
    result[1] += 171109659;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    result[0] += 57134886;
    result[1] += 157613478;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d8b3bb8))) ) ) {
    result[0] += 138312506;
    result[1] += 76435858;
  } else {
    result[0] += 46318274;
    result[1] += 168430090;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 210274440;
    result[1] += 4473924;
  } else {
    result[0] += 41950843;
    result[1] += 172797521;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 192533016;
    result[1] += 22215348;
  } else {
    result[0] += 43997225;
    result[1] += 170751138;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3e92a3))) ) ) {
    result[0] += 64965891;
    result[1] += 149782472;
  } else {
    result[0] += 206158430;
    result[1] += 8589934;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
