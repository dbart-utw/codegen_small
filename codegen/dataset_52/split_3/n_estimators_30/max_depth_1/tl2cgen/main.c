
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.995559990406036377) ) ) {
    result[0] += 0.28054298642533937;
    result[1] += 0.7194570135746606;
  } else {
    result[0] += 0.9047619047619048;
    result[1] += 0.09523809523809523;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    result[0] += 0.7714285714285715;
    result[1] += 0.22857142857142856;
  } else {
    result[0] += 0.24050632911392406;
    result[1] += 0.759493670886076;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 0.9736842105263158;
    result[1] += 0.02631578947368421;
  } else {
    result[0] += 0.27111111111111114;
    result[1] += 0.7288888888888889;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 0.9777777777777777;
    result[1] += 0.022222222222222223;
  } else {
    result[0] += 0.21559633027522937;
    result[1] += 0.7844036697247706;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.26244343891402716;
    result[1] += 0.7375565610859729;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.33183856502242154;
    result[1] += 0.6681614349775785;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.16847826086956522;
    result[1] += 0.8315217391304348;
  } else {
    result[0] += 0.8607594936708861;
    result[1] += 0.13924050632911392;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23333333333333334;
    result[1] += 0.7666666666666667;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 0.96875;
    result[1] += 0.03125;
  } else {
    result[0] += 0.2987012987012987;
    result[1] += 0.7012987012987013;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9833333333333333;
    result[1] += 0.016666666666666666;
  } else {
    result[0] += 0.15763546798029557;
    result[1] += 0.8423645320197044;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.2;
    result[1] += 0.8;
  } else {
    result[0] += 0.8493150684931506;
    result[1] += 0.1506849315068493;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0594349987804889679) ) ) {
    result[0] += 0.6565656565656566;
    result[1] += 0.3434343434343434;
  } else {
    result[0] += 0.18292682926829268;
    result[1] += 0.8170731707317073;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    result[0] += 0.9523809523809523;
    result[1] += 0.047619047619047616;
  } else {
    result[0] += 0.17;
    result[1] += 0.83;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.23696682464454977;
    result[1] += 0.7630331753554502;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30493273542600896;
    result[1] += 0.695067264573991;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2399550005793571472) ) ) {
    result[0] += 0.6043956043956044;
    result[1] += 0.3956043956043956;
  } else {
    result[0] += 0.16279069767441862;
    result[1] += 0.8372093023255814;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 0.9791666666666666;
    result[1] += 0.020833333333333332;
  } else {
    result[0] += 0.2651162790697674;
    result[1] += 0.7348837209302326;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3050847457627119;
    result[1] += 0.6949152542372882;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22535211267605634;
    result[1] += 0.7746478873239436;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25;
    result[1] += 0.75;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.04328999947756528854) ) ) {
    result[0] += 0.6125;
    result[1] += 0.3875;
  } else {
    result[0] += 0.24043715846994534;
    result[1] += 0.7595628415300546;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    result[0] += 0.9285714285714286;
    result[1] += 0.07142857142857142;
  } else {
    result[0] += 0.3076923076923077;
    result[1] += 0.6923076923076923;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
    result[0] += 0.9516129032258065;
    result[1] += 0.04838709677419355;
  } else {
    result[0] += 0.2835820895522388;
    result[1] += 0.7164179104477612;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.36909871244635195;
    result[1] += 0.630901287553648;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
    result[0] += 0.275;
    result[1] += 0.725;
  } else {
    result[0] += 0.7936507936507936;
    result[1] += 0.20634920634920634;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25116279069767444;
    result[1] += 0.7488372093023256;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
    result[0] += 0.33047210300429186;
    result[1] += 0.6695278969957081;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.17258883248730963;
    result[1] += 0.8274111675126904;
  } else {
    result[0] += 0.8787878787878788;
    result[1] += 0.12121212121212122;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3034188034188034;
    result[1] += 0.6965811965811965;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.2222222222222222;
    result[1] += 0.7777777777777778;
  } else {
    result[0] += 0.8554216867469879;
    result[1] += 0.14457831325301204;
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
