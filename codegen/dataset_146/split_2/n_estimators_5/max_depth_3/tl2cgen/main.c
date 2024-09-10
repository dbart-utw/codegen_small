
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.043010752688172046;
        result[2] += 0;
        result[3] += 0.043010752688172046;
        result[4] += 0.8709677419354839;
        result[5] += 0.043010752688172046;
      } else {
        result[0] += 0.04172767203513909;
        result[1] += 0.005124450951683748;
        result[2] += 0.007320644216691069;
        result[3] += 0.17935578330893118;
        result[4] += 0.06588579795021962;
        result[5] += 0.7005856515373353;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6304728546409807;
        result[1] += 0.0694687682428488;
        result[2] += 0.06538237011091652;
        result[3] += 0.07005253940455342;
        result[4] += 0.099241097489784;
        result[5] += 0.06538237011091652;
      } else {
        result[0] += 0.012531328320802004;
        result[1] += 0.974937343358396;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012531328320802004;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
        result[0] += 0.009345794392523364;
        result[1] += 0.028037383177570093;
        result[2] += 0.16822429906542055;
        result[3] += 0.40186915887850466;
        result[4] += 0.102803738317757;
        result[5] += 0.2897196261682243;
      } else {
        result[0] += 0;
        result[1] += 0.01834862385321101;
        result[2] += 0.6788990825688074;
        result[3] += 0.2018348623853211;
        result[4] += 0.01834862385321101;
        result[5] += 0.08256880733944955;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
        result[0] += 0.7;
        result[1] += 0.3;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.002372479240806643;
        result[1] += 0;
        result[2] += 0.9228944246737841;
        result[3] += 0.06524317912218268;
        result[4] += 0;
        result[5] += 0.009489916963226572;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.01937984496124031;
        result[2] += 0;
        result[3] += 0.007751937984496124;
        result[4] += 0.8410852713178295;
        result[5] += 0.13178294573643412;
      } else {
        result[0] += 0.014769765421372719;
        result[1] += 0.007819287576020852;
        result[2] += 0.005212858384013901;
        result[3] += 0.10599478714161599;
        result[4] += 0.038227628149435276;
        result[5] += 0.8279756733275413;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.02166666666666667;
        result[1] += 0.7333333333333334;
        result[2] += 0.001666666666666667;
        result[3] += 0.010000000000000002;
        result[4] += 0.23000000000000004;
        result[5] += 0.003333333333333334;
      } else {
        result[0] += 0.6233391103408434;
        result[1] += 0.03004043905257077;
        result[2] += 0.05488157134604275;
        result[3] += 0.11322934719815136;
        result[4] += 0.06932409012131716;
        result[5] += 0.10918544194107452;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.01694915254237288;
        result[2] += 0.17796610169491525;
        result[3] += 0.4915254237288136;
        result[4] += 0.00847457627118644;
        result[5] += 0.3050847457627119;
      } else {
        result[0] += 0.0078125;
        result[1] += 0;
        result[2] += 0.671875;
        result[3] += 0.2421875;
        result[4] += 0.0078125;
        result[5] += 0.0703125;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        result[0] += 0.4;
        result[1] += 0.25;
        result[2] += 0.15;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.013414634146341463;
        result[1] += 0;
        result[2] += 0.9341463414634147;
        result[3] += 0.0475609756097561;
        result[4] += 0;
        result[5] += 0.004878048780487805;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01282051282051282;
        result[1] += 0;
        result[2] += 0.008547008547008548;
        result[3] += 0.004273504273504274;
        result[4] += 0.9401709401709402;
        result[5] += 0.03418803418803419;
      } else {
        result[0] += 0.035686578743211794;
        result[1] += 0.008533747090768037;
        result[2] += 0.004654771140418929;
        result[3] += 0.15671062839410396;
        result[4] += 0.05973622963537626;
        result[5] += 0.734678044996121;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8476190476190476;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14857142857142858;
        result[5] += 0.0038095238095238095;
      } else {
        result[0] += 0.7419566644780039;
        result[1] += 0.015101772816808929;
        result[2] += 0.04990151017728168;
        result[3] += 0.07288246881155613;
        result[4] += 0.056467498358502954;
        result[5] += 0.06369008535784636;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.037037037037037035;
        result[2] += 0.05555555555555555;
        result[3] += 0.07407407407407407;
        result[4] += 0.2962962962962963;
        result[5] += 0.5370370370370371;
      } else {
        result[0] += 0.00847457627118644;
        result[1] += 0.00847457627118644;
        result[2] += 0.3093220338983051;
        result[3] += 0.5211864406779662;
        result[4] += 0;
        result[5] += 0.15254237288135594;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        result[0] += 0.24615384615384617;
        result[1] += 0;
        result[2] += 0.5230769230769231;
        result[3] += 0.12307692307692308;
        result[4] += 0.03076923076923077;
        result[5] += 0.07692307692307693;
      } else {
        result[0] += 0.005555555555555557;
        result[1] += 0;
        result[2] += 0.9211111111111112;
        result[3] += 0.06444444444444446;
        result[4] += 0;
        result[5] += 0.00888888888888889;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102) ) ) {
        result[0] += 0.0035460992907801418;
        result[1] += 0.0035460992907801418;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.950354609929078;
        result[5] += 0.0425531914893617;
      } else {
        result[0] += 0;
        result[1] += 0.875;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.125;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
        result[0] += 0.8936170212765957;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0851063829787234;
        result[5] += 0.02127659574468085;
      } else {
        result[0] += 0.008714596949891068;
        result[1] += 0.013071895424836602;
        result[2] += 0.005083514887436456;
        result[3] += 0.19535221496005808;
        result[4] += 0.05809731299927379;
        result[5] += 0.719680464778504;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        result[0] += 0.013944223107569721;
        result[1] += 0.8685258964143426;
        result[2] += 0.00199203187250996;
        result[3] += 0;
        result[4] += 0.10557768924302789;
        result[5] += 0.0099601593625498;
      } else {
        result[0] += 0.7577729573391179;
        result[1] += 0.05350686912509038;
        result[2] += 0.015184381778741865;
        result[3] += 0.049168474331164135;
        result[4] += 0.07809110629067245;
        result[5] += 0.046276211135213303;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        result[0] += 0.016129032258064516;
        result[1] += 0;
        result[2] += 0.567741935483871;
        result[3] += 0.27419354838709675;
        result[4] += 0;
        result[5] += 0.14193548387096774;
      } else {
        result[0] += 0.020689655172413793;
        result[1] += 0.0011494252873563218;
        result[2] += 0.9206896551724137;
        result[3] += 0.05057471264367816;
        result[4] += 0;
        result[5] += 0.006896551724137931;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.0136986301369863;
        result[2] += 0;
        result[3] += 0.0182648401826484;
        result[4] += 0.8995433789954338;
        result[5] += 0.0684931506849315;
      } else {
        result[0] += 0.021132713440405747;
        result[1] += 0;
        result[2] += 0.0008453085376162299;
        result[3] += 0.12087912087912088;
        result[4] += 0.07776838546069316;
        result[5] += 0.779374471682164;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        result[0] += 0.012658227848101267;
        result[1] += 0.7956600361663654;
        result[2] += 0.009041591320072335;
        result[3] += 0;
        result[4] += 0.17359855334538882;
        result[5] += 0.009041591320072335;
      } else {
        result[0] += 0.6621462264150944;
        result[1] += 0.03125;
        result[2] += 0.04540094339622641;
        result[3] += 0.08962264150943396;
        result[4] += 0.08077830188679246;
        result[5] += 0.09080188679245282;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        result[0] += 0.016129032258064516;
        result[1] += 0.03225806451612903;
        result[2] += 0.10483870967741936;
        result[3] += 0.5080645161290323;
        result[4] += 0.04032258064516129;
        result[5] += 0.29838709677419356;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5673076923076923;
        result[3] += 0.3557692307692308;
        result[4] += 0;
        result[5] += 0.07692307692307693;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        result[0] += 0.75;
        result[1] += 0.0625;
        result[2] += 0.1875;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.010741138560687433;
        result[1] += 0.0010741138560687433;
        result[2] += 0.9033297529538131;
        result[3] += 0.079484425349087;
        result[4] += 0.0010741138560687433;
        result[5] += 0.004296455424274973;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
