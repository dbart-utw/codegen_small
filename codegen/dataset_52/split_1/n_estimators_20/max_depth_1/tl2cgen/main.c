
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9642857142857143;
    result[1] += 0.03571428571428571;
  } else {
    result[0] += 0.1932367149758454;
    result[1] += 0.8067632850241546;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.1836734693877551;
    result[1] += 0.8163265306122449;
  } else {
    result[0] += 0.8208955223880597;
    result[1] += 0.1791044776119403;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
    result[0] += 0.31063829787234043;
    result[1] += 0.6893617021276596;
  } else {
    result[0] += 0.9285714285714286;
    result[1] += 0.07142857142857142;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9347826086956522;
    result[1] += 0.06521739130434782;
  } else {
    result[0] += 0.2350230414746544;
    result[1] += 0.7649769585253456;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9846153846153847;
    result[1] += 0.015384615384615385;
  } else {
    result[0] += 0.16666666666666666;
    result[1] += 0.8333333333333334;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19158878504672897;
    result[1] += 0.8084112149532711;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2951499968767166138) ) ) {
    result[0] += 0.6020408163265306;
    result[1] += 0.3979591836734694;
  } else {
    result[0] += 0.18181818181818182;
    result[1] += 0.8181818181818182;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21800947867298578;
    result[1] += 0.7819905213270142;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2675438596491228;
    result[1] += 0.7324561403508771;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
    result[0] += 0.9491525423728814;
    result[1] += 0.05084745762711865;
  } else {
    result[0] += 0.21568627450980393;
    result[1] += 0.7843137254901961;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    result[0] += 0.22842639593908629;
    result[1] += 0.7715736040609137;
  } else {
    result[0] += 0.7878787878787878;
    result[1] += 0.21212121212121213;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28;
    result[1] += 0.72;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21008403361344538;
    result[1] += 0.7899159663865546;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1951219512195122;
    result[1] += 0.8048780487804879;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.1834862385321101;
    result[1] += 0.8165137614678899;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    result[0] += 0.9827586206896551;
    result[1] += 0.017241379310344827;
  } else {
    result[0] += 0.18048780487804877;
    result[1] += 0.8195121951219512;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2727272727272727;
    result[1] += 0.7272727272727273;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1745650023221969604) ) ) {
    result[0] += 0.6170212765957447;
    result[1] += 0.3829787234042553;
  } else {
    result[0] += 0.1834319526627219;
    result[1] += 0.8165680473372781;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09377000108361244202) ) ) {
    result[0] += 0.9772727272727273;
    result[1] += 0.022727272727272728;
  } else {
    result[0] += 0.182648401826484;
    result[1] += 0.817351598173516;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0568700004369020462) ) ) {
    result[0] += 0.7575757575757576;
    result[1] += 0.24242424242424243;
  } else {
    result[0] += 0.233502538071066;
    result[1] += 0.766497461928934;
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
