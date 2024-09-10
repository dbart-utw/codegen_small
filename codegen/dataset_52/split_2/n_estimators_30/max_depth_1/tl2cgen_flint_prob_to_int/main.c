
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 140514362;
    result[1] += 2651214;
  } else {
    result[0] += 34935140;
    result[1] += 108230435;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 133292088;
    result[1] += 9873488;
  } else {
    result[0] += 47721858;
    result[1] += 95443717;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e9428f6))) ) ) {
    result[0] += 115709164;
    result[1] += 27456411;
  } else {
    result[0] += 33907636;
    result[1] += 109257939;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ea1a8ac))) ) ) {
    result[0] += 103397360;
    result[1] += 39768215;
  } else {
    result[0] += 37869604;
    result[1] += 105295972;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 34279081;
    result[1] += 108886494;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 36608549;
    result[1] += 106557027;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 99917641;
    result[1] += 43247934;
  } else {
    result[0] += 34291156;
    result[1] += 108874420;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
    result[0] += 134984686;
    result[1] += 8180890;
  } else {
    result[0] += 39558909;
    result[1] += 103606667;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 44701488;
    result[1] += 98464088;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0906cd))) ) ) {
    result[0] += 108396793;
    result[1] += 34768782;
  } else {
    result[0] += 37831318;
    result[1] += 105334258;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 98335951;
    result[1] += 44829624;
  } else {
    result[0] += 27934746;
    result[1] += 115230829;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    result[0] += 134744072;
    result[1] += 8421504;
  } else {
    result[0] += 36466703;
    result[1] += 106698873;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 97244542;
    result[1] += 45921033;
  } else {
    result[0] += 35563423;
    result[1] += 107602153;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 105818034;
    result[1] += 37347541;
  } else {
    result[0] += 29302895;
    result[1] += 113862680;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e09ff))) ) ) {
    result[0] += 88722329;
    result[1] += 54443247;
  } else {
    result[0] += 25352237;
    result[1] += 117813338;
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
    result[0] += 54304184;
    result[1] += 88861392;
  } else {
    result[0] += 143165576;
    result[1] += 0;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 137438953;
    result[1] += 5726623;
  } else {
    result[0] += 44513666;
    result[1] += 98651909;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 37318041;
    result[1] += 105847535;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f69de16))) ) ) {
    result[0] += 136007297;
    result[1] += 7158278;
  } else {
    result[0] += 44186906;
    result[1] += 98978670;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 138052520;
    result[1] += 5113056;
  } else {
    result[0] += 45691141;
    result[1] += 97474435;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 28209965;
    result[1] += 114955610;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dfb59de))) ) ) {
    result[0] += 138393390;
    result[1] += 4772185;
  } else {
    result[0] += 31030962;
    result[1] += 112134614;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 107374182;
    result[1] += 35791394;
  } else {
    result[0] += 37632094;
    result[1] += 105533482;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    result[0] += 130480019;
    result[1] += 12685557;
  } else {
    result[0] += 31122951;
    result[1] += 112042625;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f1b3db0))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 44097413;
    result[1] += 99068162;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f567674))) ) ) {
    result[0] += 39431196;
    result[1] += 103734379;
  } else {
    result[0] += 132560718;
    result[1] += 10604857;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    result[0] += 40904450;
    result[1] += 102261126;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 140514362;
    result[1] += 2651214;
  } else {
    result[0] += 42470171;
    result[1] += 100695405;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f567674))) ) ) {
    result[0] += 43493339;
    result[1] += 99672236;
  } else {
    result[0] += 126646471;
    result[1] += 16519104;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3df6e04c))) ) ) {
    result[0] += 92705578;
    result[1] += 50459998;
  } else {
    result[0] += 30460760;
    result[1] += 112704815;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
