
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.133781512605042;
        result[1] += 0;
        result[2] += 0.002689075630252101;
        result[3] += 0.761344537815126;
        result[4] += 0.10016806722689076;
        result[5] += 0.0020168067226890756;
        result[6] += 0;
      } else {
        result[0] += 0.9913563120264648;
        result[1] += 0.0006402731832248428;
        result[2] += 0.002134243944082809;
        result[3] += 0.005584604987016684;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002845658592110412;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        result[0] += 0.40003444119166526;
        result[1] += 0;
        result[2] += 0.004649560874806269;
        result[3] += 0.48458756672980885;
        result[4] += 0.11072843120371965;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9260504201680673;
        result[1] += 0;
        result[2] += 0.0058823529411764705;
        result[3] += 0.06218487394957983;
        result[4] += 0.0036414565826330533;
        result[5] += 0.0008403361344537816;
        result[6] += 0.0014005602240896359;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.6076759061833689;
        result[1] += 0;
        result[2] += 0.023454157782515993;
        result[3] += 0.36886993603411516;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.002705139765554554;
        result[1] += 0.017132551848512173;
        result[2] += 0;
        result[3] += 0.9801623083859333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.24154589371980675;
        result[1] += 0.006642512077294686;
        result[2] += 0;
        result[3] += 0.7506038647342995;
        result[4] += 0.0012077294685990338;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.49316317228805834;
        result[1] += 0;
        result[2] += 0.01731996353691887;
        result[3] += 0.48951686417502277;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.005199306759098787;
        result[1] += 0.01559792027729636;
        result[2] += 0;
        result[3] += 0.23743500866551126;
        result[4] += 0.7417677642980935;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0007911392405063291;
        result[2] += 0;
        result[3] += 0.08623417721518987;
        result[4] += 0.9129746835443038;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.10834990059642147;
        result[1] += 0;
        result[2] += 0.010934393638170975;
        result[3] += 0.8066600397614314;
        result[4] += 0.07007952286282307;
        result[5] += 0.003976143141153081;
        result[6] += 0;
      } else {
        result[0] += 0.9105688812829501;
        result[1] += 0.00041403295702337905;
        result[2] += 0.002290982362196031;
        result[3] += 0.08647768362361644;
        result[4] += 0;
        result[5] += 8.280659140467581e-05;
        result[6] += 0.00016561318280935162;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.9993745024451268;
        result[1] += 0;
        result[2] += 0.0006254975548731946;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998840041758497;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011599582415033058;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6091366567070294;
        result[1] += 0.001808460449756251;
        result[2] += 0.005739896210095927;
        result[3] += 0.33448655448969966;
        result[4] += 0.04772763013052367;
        result[5] += 0.0005504010064475547;
        result[6] += 0.0005504010064475547;
      } else {
        result[0] += 0.008113590263691682;
        result[1] += 0;
        result[2] += 0.016227180527383363;
        result[3] += 0.8032454361054765;
        result[4] += 0.17106152805949965;
        result[5] += 0.0013522650439486137;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.13014354066985645;
        result[1] += 0.0066985645933014355;
        result[2] += 0.004784688995215311;
        result[3] += 0.5497607655502392;
        result[4] += 0.30861244019138756;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009950248756218905;
        result[1] += 0.014925373134328358;
        result[2] += 0;
        result[3] += 0.12437810945273632;
        result[4] += 0.8597014925373134;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        result[0] += 0.9989748846745259;
        result[1] += 0;
        result[2] += 0.0008200922603792927;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020502306509482317;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
        result[0] += 0.6861435726210351;
        result[1] += 0.0017978682419416978;
        result[2] += 0.0035957364838833956;
        result[3] += 0.30705021189161424;
        result[4] += 0.0006420958006934634;
        result[5] += 0.0002568383202773854;
        result[6] += 0.0005136766405547708;
      } else {
        result[0] += 0.3732111271908667;
        result[1] += 0;
        result[2] += 0.0120598166907863;
        result[3] += 0.4658305193761055;
        result[4] += 0.14793375140697862;
        result[5] += 0.00032159511175430133;
        result[6] += 0.0006431902235086027;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.20833333333333334;
        result[1] += 0.004032258064516129;
        result[2] += 0.012096774193548387;
        result[3] += 0.7755376344086021;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0024110910186859553;
        result[1] += 0.006027727546714889;
        result[2] += 0;
        result[3] += 0.09101868595539482;
        result[4] += 0.9005424954792043;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4715.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        result[0] += 0.9991213107975396;
        result[1] += 0;
        result[2] += 0.0007236264020261539;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015506280043417584;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-163.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.005506607929515419;
        result[1] += 0.005506607929515419;
        result[2] += 0;
        result[3] += 0.20594713656387664;
        result[4] += 0.7808370044052864;
        result[5] += 0.0022026431718061676;
        result[6] += 0;
      } else {
        result[0] += 0.5511691884456671;
        result[1] += 0.0017193947730398899;
        result[2] += 0.007427785419532325;
        result[3] += 0.4351444291609354;
        result[4] += 0.0038514442916093533;
        result[5] += 0.0002751031636863824;
        result[6] += 0.0004126547455295736;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.0019646365422396855;
        result[1] += 0.009823182711198428;
        result[2] += 0;
        result[3] += 0.5422396856581533;
        result[4] += 0.44597249508840864;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.023872679045092837;
        result[4] += 0.9761273209549072;
        result[5] += 0;
        result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
