
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.34763948497854075;
    result[1] += 0.6523605150214592;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e2eaf25))) ) ) {
    result[0] += 0.6697247706422018;
    result[1] += 0.3302752293577982;
  } else {
    result[0] += 0.22727272727272727;
    result[1] += 0.7727272727272727;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9318181818181818;
    result[1] += 0.06818181818181818;
  } else {
    result[0] += 0.2054794520547945;
    result[1] += 0.7945205479452054;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3347457627118644;
    result[1] += 0.6652542372881356;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23148148148148148;
    result[1] += 0.7685185185185185;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21568627450980393;
    result[1] += 0.7843137254901961;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3d1244))) ) ) {
    result[0] += 0.7941176470588235;
    result[1] += 0.20588235294117646;
  } else {
    result[0] += 0.3128205128205128;
    result[1] += 0.6871794871794872;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31221719457013575;
    result[1] += 0.6877828054298643;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df28b6e))) ) ) {
    result[0] += 0.6021505376344086;
    result[1] += 0.3978494623655914;
  } else {
    result[0] += 0.21176470588235294;
    result[1] += 0.788235294117647;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dfb59de))) ) ) {
    result[0] += 0.9692307692307692;
    result[1] += 0.03076923076923077;
  } else {
    result[0] += 0.16666666666666666;
    result[1] += 0.8333333333333334;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec100e6))) ) ) {
    result[0] += 0.9054054054054054;
    result[1] += 0.0945945945945946;
  } else {
    result[0] += 0.164021164021164;
    result[1] += 0.8359788359788359;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24074074074074073;
    result[1] += 0.7592592592592593;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d0801f7))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18627450980392157;
    result[1] += 0.8137254901960784;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f15a21e))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2813852813852814;
    result[1] += 0.7186147186147186;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f673238))) ) ) {
    result[0] += 0.3389121338912134;
    result[1] += 0.6610878661087866;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d5cfb))) ) ) {
    result[0] += 0.9242424242424242;
    result[1] += 0.07575757575757576;
  } else {
    result[0] += 0.18274111675126903;
    result[1] += 0.817258883248731;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3347107438016529;
    result[1] += 0.6652892561983471;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d0801f7))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17475728155339806;
    result[1] += 0.8252427184466019;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25806451612903225;
    result[1] += 0.7419354838709677;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    result[0] += 0.3624454148471616;
    result[1] += 0.6375545851528385;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 0.6475409836065574;
    result[1] += 0.3524590163934426;
  } else {
    result[0] += 0.18439716312056736;
    result[1] += 0.8156028368794326;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
    result[0] += 0.881578947368421;
    result[1] += 0.11842105263157894;
  } else {
    result[0] += 0.18181818181818182;
    result[1] += 0.8181818181818182;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1902439024390244;
    result[1] += 0.8097560975609757;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e29fa98))) ) ) {
    result[0] += 0.7064220183486238;
    result[1] += 0.29357798165137616;
  } else {
    result[0] += 0.18831168831168832;
    result[1] += 0.8116883116883117;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.22842639593908629;
    result[1] += 0.7715736040609137;
  } else {
    result[0] += 0.8333333333333334;
    result[1] += 0.16666666666666666;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2966101694915254;
    result[1] += 0.7033898305084746;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d73fa6e))) ) ) {
    result[0] += 0.9803921568627451;
    result[1] += 0.0196078431372549;
  } else {
    result[0] += 0.24528301886792453;
    result[1] += 0.7547169811320755;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3246753246753247;
    result[1] += 0.6753246753246753;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31092436974789917;
    result[1] += 0.6890756302521008;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9791666666666666;
    result[1] += 0.020833333333333332;
  } else {
    result[0] += 0.20465116279069767;
    result[1] += 0.7953488372093023;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 0.6730769230769231;
    result[1] += 0.3269230769230769;
  } else {
    result[0] += 0.18238993710691823;
    result[1] += 0.8176100628930818;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 0.9365079365079365;
    result[1] += 0.06349206349206349;
  } else {
    result[0] += 0.155;
    result[1] += 0.845;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23809523809523808;
    result[1] += 0.7619047619047619;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.22727272727272727;
    result[1] += 0.7727272727272727;
  } else {
    result[0] += 0.8769230769230769;
    result[1] += 0.12307692307692308;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23696682464454977;
    result[1] += 0.7630331753554502;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.25870646766169153;
    result[1] += 0.7412935323383084;
  } else {
    result[0] += 0.7903225806451613;
    result[1] += 0.20967741935483872;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
    result[0] += 0.3277310924369748;
    result[1] += 0.6722689075630253;
  } else {
    result[0] += 0.96;
    result[1] += 0.04;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e616096))) ) ) {
    result[0] += 0.6574074074074074;
    result[1] += 0.3425925925925926;
  } else {
    result[0] += 0.18064516129032257;
    result[1] += 0.8193548387096774;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3034188034188034;
    result[1] += 0.6965811965811965;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31932773109243695;
    result[1] += 0.680672268907563;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18461538461538463;
    result[1] += 0.8153846153846154;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3;
    result[1] += 0.7;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e0dd980))) ) ) {
    result[0] += 0.6185567010309279;
    result[1] += 0.38144329896907214;
  } else {
    result[0] += 0.20481927710843373;
    result[1] += 0.7951807228915663;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e09ff))) ) ) {
    result[0] += 0.6781609195402298;
    result[1] += 0.3218390804597701;
  } else {
    result[0] += 0.26704545454545453;
    result[1] += 0.7329545454545454;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.17733990147783252;
    result[1] += 0.8226600985221675;
  } else {
    result[0] += 0.8166666666666667;
    result[1] += 0.18333333333333332;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f4d77da))) ) ) {
    result[0] += 0.9090909090909091;
    result[1] += 0.09090909090909091;
  } else {
    result[0] += 0.2782608695652174;
    result[1] += 0.7217391304347827;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 0.7070707070707071;
    result[1] += 0.29292929292929293;
  } else {
    result[0] += 0.23170731707317074;
    result[1] += 0.7682926829268293;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    result[0] += 0.3148936170212766;
    result[1] += 0.6851063829787234;
  } else {
    result[0] += 0.9285714285714286;
    result[1] += 0.07142857142857142;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f03266c))) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.32051282051282054;
    result[1] += 0.6794871794871795;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3e92a3))) ) ) {
    result[0] += 0.2697095435684647;
    result[1] += 0.7302904564315352;
  } else {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
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
