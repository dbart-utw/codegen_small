
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8e3886))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.16666666666666666;
    result[1] += 0.8333333333333334;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    result[0] += 0.7333333333333333;
    result[1] += 0.26666666666666666;
  } else {
    result[0] += 0.1791907514450867;
    result[1] += 0.8208092485549133;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 0.6886792452830188;
    result[1] += 0.3113207547169811;
  } else {
    result[0] += 0.19745222929936307;
    result[1] += 0.802547770700637;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
    result[0] += 0.9310344827586207;
    result[1] += 0.06896551724137931;
  } else {
    result[0] += 0.2606837606837607;
    result[1] += 0.7393162393162394;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.26359832635983266;
    result[1] += 0.7364016736401674;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2672413793103448;
    result[1] += 0.7327586206896551;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20187793427230047;
    result[1] += 0.7981220657276995;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23809523809523808;
    result[1] += 0.7619047619047619;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.2358974358974359;
    result[1] += 0.764102564102564;
  } else {
    result[0] += 0.8676470588235294;
    result[1] += 0.1323529411764706;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df4341a))) ) ) {
    result[0] += 0.6987951807228916;
    result[1] += 0.30120481927710846;
  } else {
    result[0] += 0.25;
    result[1] += 0.75;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 0.20833333333333334;
    result[1] += 0.7916666666666666;
  } else {
    result[0] += 0.8309859154929577;
    result[1] += 0.16901408450704225;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 0.7078651685393258;
    result[1] += 0.29213483146067415;
  } else {
    result[0] += 0.22413793103448276;
    result[1] += 0.7758620689655172;
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7d35a8))) ) ) {
    result[0] += 0.31223628691983124;
    result[1] += 0.6877637130801688;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d530164))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2604166666666667;
    result[1] += 0.7395833333333334;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
    result[0] += 0.6428571428571429;
    result[1] += 0.35714285714285715;
  } else {
    result[0] += 0.18994413407821228;
    result[1] += 0.8100558659217877;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    result[0] += 0.9642857142857143;
    result[1] += 0.03571428571428571;
  } else {
    result[0] += 0.21739130434782608;
    result[1] += 0.782608695652174;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3dbfa97e))) ) ) {
    result[0] += 0.6444444444444445;
    result[1] += 0.35555555555555557;
  } else {
    result[0] += 0.23121387283236994;
    result[1] += 0.7687861271676301;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 0.6363636363636364;
    result[1] += 0.36363636363636365;
  } else {
    result[0] += 0.1895424836601307;
    result[1] += 0.8104575163398693;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e049f94))) ) ) {
    result[0] += 0.6559139784946236;
    result[1] += 0.34408602150537637;
  } else {
    result[0] += 0.17647058823529413;
    result[1] += 0.8235294117647058;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24;
    result[1] += 0.76;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 0.8507462686567164;
    result[1] += 0.14925373134328357;
  } else {
    result[0] += 0.1836734693877551;
    result[1] += 0.8163265306122449;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9107142857142857;
    result[1] += 0.08928571428571429;
  } else {
    result[0] += 0.15458937198067632;
    result[1] += 0.8454106280193237;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28879310344827586;
    result[1] += 0.7112068965517241;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.20212765957446807;
    result[1] += 0.7978723404255319;
  } else {
    result[0] += 0.8533333333333334;
    result[1] += 0.14666666666666667;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 0.9795918367346939;
    result[1] += 0.02040816326530612;
  } else {
    result[0] += 0.2102803738317757;
    result[1] += 0.7897196261682243;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1625615763546798;
    result[1] += 0.8374384236453202;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.32916666666666666;
    result[1] += 0.6708333333333333;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3dab923a))) ) ) {
    result[0] += 0.7142857142857143;
    result[1] += 0.2857142857142857;
  } else {
    result[0] += 0.25;
    result[1] += 0.75;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0ee4e2))) ) ) {
    result[0] += 0.7272727272727273;
    result[1] += 0.2727272727272727;
  } else {
    result[0] += 0.25268817204301075;
    result[1] += 0.7473118279569892;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f70850a))) ) ) {
    result[0] += 0.9705882352941176;
    result[1] += 0.029411764705882353;
  } else {
    result[0] += 0.3624454148471616;
    result[1] += 0.6375545851528385;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.2205128205128205;
    result[1] += 0.7794871794871795;
  } else {
    result[0] += 0.9117647058823529;
    result[1] += 0.08823529411764706;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20574162679425836;
    result[1] += 0.7942583732057417;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24311926605504589;
    result[1] += 0.7568807339449541;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    result[0] += 0.9491525423728814;
    result[1] += 0.05084745762711865;
  } else {
    result[0] += 0.20098039215686275;
    result[1] += 0.7990196078431373;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f761f9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.319672131147541;
    result[1] += 0.680327868852459;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
    result[0] += 0.7804878048780488;
    result[1] += 0.21951219512195122;
  } else {
    result[0] += 0.27624309392265195;
    result[1] += 0.7237569060773481;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.2074468085106383;
    result[1] += 0.7925531914893617;
  } else {
    result[0] += 0.9066666666666666;
    result[1] += 0.09333333333333334;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.20418848167539266;
    result[1] += 0.7958115183246073;
  } else {
    result[0] += 0.8472222222222222;
    result[1] += 0.1527777777777778;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 0.6829268292682927;
    result[1] += 0.3170731707317073;
  } else {
    result[0] += 0.2265193370165746;
    result[1] += 0.7734806629834254;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21030042918454936;
    result[1] += 0.7896995708154506;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b90ea))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23444976076555024;
    result[1] += 0.7655502392344498;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9558823529411765;
    result[1] += 0.04411764705882353;
  } else {
    result[0] += 0.20512820512820512;
    result[1] += 0.7948717948717948;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ee883ba))) ) ) {
    result[0] += 0.6638655462184874;
    result[1] += 0.33613445378151263;
  } else {
    result[0] += 0.2361111111111111;
    result[1] += 0.7638888888888888;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 0.9295774647887324;
    result[1] += 0.07042253521126761;
  } else {
    result[0] += 0.18229166666666666;
    result[1] += 0.8177083333333334;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.15789473684210525;
    result[1] += 0.8421052631578947;
  } else {
    result[0] += 0.863013698630137;
    result[1] += 0.136986301369863;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.17801047120418848;
    result[1] += 0.8219895287958116;
  } else {
    result[0] += 0.8611111111111112;
    result[1] += 0.1388888888888889;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29385964912280704;
    result[1] += 0.706140350877193;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2956521739130435;
    result[1] += 0.7043478260869566;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1951219512195122;
    result[1] += 0.8048780487804879;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
