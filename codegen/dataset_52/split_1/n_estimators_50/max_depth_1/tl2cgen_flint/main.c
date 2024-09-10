
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25663716814159293;
    result[1] += 0.7433628318584071;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2037914691943128;
    result[1] += 0.7962085308056872;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f15a21e))) ) ) {
    result[0] += 0.9285714285714286;
    result[1] += 0.07142857142857142;
  } else {
    result[0] += 0.251063829787234;
    result[1] += 0.7489361702127659;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e0317ad))) ) ) {
    result[0] += 0.65;
    result[1] += 0.35;
  } else {
    result[0] += 0.17177914110429449;
    result[1] += 0.8282208588957055;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2956521739130435;
    result[1] += 0.7043478260869566;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d134acb))) ) ) {
    result[0] += 0.7714285714285715;
    result[1] += 0.22857142857142856;
  } else {
    result[0] += 0.2694300518134715;
    result[1] += 0.7305699481865285;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17209302325581396;
    result[1] += 0.827906976744186;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e77a787))) ) ) {
    result[0] += 0.6956521739130435;
    result[1] += 0.30434782608695654;
  } else {
    result[0] += 0.1871345029239766;
    result[1] += 0.8128654970760234;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24180327868852458;
    result[1] += 0.7581967213114754;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22429906542056074;
    result[1] += 0.7757009345794392;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22026431718061673;
    result[1] += 0.7797356828193832;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3ea1b6))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23706896551724138;
    result[1] += 0.7629310344827587;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c02d384))) ) ) {
    result[0] += 0.72;
    result[1] += 0.28;
  } else {
    result[0] += 0.2553191489361702;
    result[1] += 0.7446808510638298;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f158106))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28512396694214875;
    result[1] += 0.7148760330578512;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2747747747747748;
    result[1] += 0.7252252252252253;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1625615763546798;
    result[1] += 0.8374384236453202;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3bd0917d))) ) ) {
    result[0] += 0.5081967213114754;
    result[1] += 0.4918032786885246;
  } else {
    result[0] += 0.16312056737588654;
    result[1] += 0.8368794326241135;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20087336244541484;
    result[1] += 0.7991266375545851;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2669491525423729;
    result[1] += 0.7330508474576272;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3c6d1e))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24770642201834864;
    result[1] += 0.7522935779816514;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17117117117117117;
    result[1] += 0.8288288288288288;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f17d370))) ) ) {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
  } else {
    result[0] += 0.3029045643153527;
    result[1] += 0.6970954356846473;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.2132701421800948;
    result[1] += 0.7867298578199052;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2727272727272727;
    result[1] += 0.7272727272727273;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2600896860986547;
    result[1] += 0.7399103139013453;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.20603015075376885;
    result[1] += 0.7939698492462312;
  } else {
    result[0] += 0.84375;
    result[1] += 0.15625;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20276497695852536;
    result[1] += 0.7972350230414746;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
    result[0] += 0.648936170212766;
    result[1] += 0.35106382978723405;
  } else {
    result[0] += 0.14201183431952663;
    result[1] += 0.8579881656804734;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.18407960199004975;
    result[1] += 0.8159203980099502;
  } else {
    result[0] += 0.9032258064516129;
    result[1] += 0.0967741935483871;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 0.925;
    result[1] += 0.075;
  } else {
    result[0] += 0.26905829596412556;
    result[1] += 0.7309417040358744;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3df3c8a0))) ) ) {
    result[0] += 0.6534653465346535;
    result[1] += 0.3465346534653465;
  } else {
    result[0] += 0.19135802469135801;
    result[1] += 0.808641975308642;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9807692307692307;
    result[1] += 0.019230769230769232;
  } else {
    result[0] += 0.26066350710900477;
    result[1] += 0.7393364928909952;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25;
    result[1] += 0.75;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18433179723502305;
    result[1] += 0.815668202764977;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.2828282828282828;
    result[1] += 0.7171717171717171;
  } else {
    result[0] += 0.8153846153846154;
    result[1] += 0.18461538461538463;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d540cc8))) ) ) {
    result[0] += 0.6938775510204082;
    result[1] += 0.30612244897959184;
  } else {
    result[0] += 0.20606060606060606;
    result[1] += 0.793939393939394;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
  } else {
    result[0] += 0.1963470319634703;
    result[1] += 0.8036529680365296;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 0.6666666666666666;
    result[1] += 0.3333333333333333;
  } else {
    result[0] += 0.24431818181818182;
    result[1] += 0.7556818181818182;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e7408d9))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22272727272727272;
    result[1] += 0.7772727272727272;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2948717948717949;
    result[1] += 0.7051282051282052;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3c6d1e))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20614035087719298;
    result[1] += 0.793859649122807;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
    result[0] += 0.27615062761506276;
    result[1] += 0.7238493723849372;
  } else {
    result[0] += 0.9583333333333334;
    result[1] += 0.041666666666666664;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9791666666666666;
    result[1] += 0.020833333333333332;
  } else {
    result[0] += 0.2372093023255814;
    result[1] += 0.7627906976744186;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7bcb92))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3076923076923077;
    result[1] += 0.6923076923076923;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2328767123287671;
    result[1] += 0.7671232876712328;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2832618025751073;
    result[1] += 0.7167381974248928;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.21428571428571427;
    result[1] += 0.7857142857142857;
  } else {
    result[0] += 0.7761194029850746;
    result[1] += 0.22388059701492538;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2146341463414634;
    result[1] += 0.7853658536585366;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 0.7313432835820896;
    result[1] += 0.26865671641791045;
  } else {
    result[0] += 0.27040816326530615;
    result[1] += 0.7295918367346939;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b3c60))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.16071428571428573;
    result[1] += 0.8392857142857143;
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
