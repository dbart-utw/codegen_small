
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9836065573770492;
        result[1] += 0;
        result[2] += 0.01639344262295082;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995379995379996;
        result[1] += 0;
        result[2] += 0.00034650034650034656;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011550011550011551;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.01869775626924769;
        result[1] += 0.006599208095028597;
        result[2] += 0.015618125824901012;
        result[3] += 0.7925648922129345;
        result[4] += 0.16498020237571492;
        result[5] += 0.0015398152221733391;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.002881844380403458;
        result[2] += 0;
        result[3] += 0.14601344860710855;
        result[4] += 0.851104707012488;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9804118533400301;
        result[1] += 0;
        result[2] += 0.006278252134605726;
        result[3] += 0.011803114013058764;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0015067805123053742;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.002338269680436477;
        result[3] += 0.9976617303195635;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.0076520338300443014;
        result[1] += 0.004430124848973017;
        result[2] += 0.011679420056383408;
        result[3] += 0.6894885219492549;
        result[4] += 0.28674989931534434;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.74048688253368;
        result[1] += 0;
        result[2] += 0.006145119357125975;
        result[3] += 0.2517135428976601;
        result[4] += 0;
        result[5] += 0.0004727014890096904;
        result[6] += 0.001181753722524226;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.07180722891566266;
        result[1] += 0.00048192771084337347;
        result[2] += 0.004819277108433735;
        result[3] += 0.5807228915662651;
        result[4] += 0.3402409638554217;
        result[5] += 0.0019277108433734939;
        result[6] += 0;
      } else {
        result[0] += 0.9178015760759749;
        result[1] += 0.0007274196807435845;
        result[2] += 0.0027480299050313193;
        result[3] += 0.07856132552030713;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00016164881794301878;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15504807692307693;
        result[1] += 0.02283653846153846;
        result[2] += 0.010817307692307692;
        result[3] += 0.8112980769230769;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.18379237288135594;
        result[1] += 0.012711864406779662;
        result[2] += 0;
        result[3] += 0.8034957627118644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5031111111111111;
        result[1] += 0;
        result[2] += 0.029333333333333333;
        result[3] += 0.46755555555555556;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        result[0] += 0.9994308048419535;
        result[1] += 0;
        result[2] += 0.0004933024703069859;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.58926877395363e-05;
      } else {
        result[0] += 0.6;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.3599521817095039;
        result[1] += 0.0019127316198445906;
        result[2] += 0.005618649133293485;
        result[3] += 0.5392707710699343;
        result[4] += 0.09181111775254035;
        result[5] += 0.001315002988643156;
        result[6] += 0.00011954572624028691;
      } else {
        result[0] += 0.9665463297232251;
        result[1] += 0;
        result[2] += 0.004091456077015644;
        result[3] += 0.027677496991576414;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0016847172081829122;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)5.5) ) ) {
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0;
        result[1] += 0.000589622641509434;
        result[2] += 0;
        result[3] += 0.9380896226415095;
        result[4] += 0.060436320754716985;
        result[5] += 0.0008844339622641511;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004959422903516681;
        result[2] += 0.010369702434625788;
        result[3] += 0;
        result[4] += 0.9833183047790802;
        result[5] += 0.001352569882777277;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991932230738201;
        result[1] += 0;
        result[2] += 0.0006555062525211779;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015127067365873335;
      } else {
        result[0] += 0.7125506072874493;
        result[1] += 0.008097165991902834;
        result[2] += 0;
        result[3] += 0.2793522267206478;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993067590987869;
        result[1] += 0;
        result[2] += 0.0006932409012131716;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6953430501244223;
        result[1] += 0.001510842516885887;
        result[2] += 0.007998578030572343;
        result[3] += 0.2937255599004621;
        result[4] += 0;
        result[5] += 8.887308922858158e-05;
        result[6] += 0.0013330963384287238;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1574.5) ) ) {
        result[0] += 0.999694493240663;
        result[1] += 0;
        result[2] += 0.00022913006950278774;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.637668983426258e-05;
      } else {
        result[0] += 0.46153846153846156;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5384615384615384;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01811594202898551;
        result[1] += 0.004658385093167703;
        result[2] += 0.015269151138716358;
        result[3] += 0.6982401656314701;
        result[4] += 0.2631987577639752;
        result[5] += 0.0005175983436853004;
        result[6] += 0;
      } else {
        result[0] += 0.7375804746805035;
        result[1] += 0;
        result[2] += 0.0050927260497741905;
        result[3] += 0.2559815508792159;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013452483905063899;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.009933774834437087;
        result[1] += 0.023178807947019868;
        result[2] += 0;
        result[3] += 0.08940397350993377;
        result[4] += 0.8774834437086093;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15185504745470232;
        result[1] += 0.009490940465918895;
        result[2] += 0;
        result[3] += 0.8386540120793787;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2530487804878049;
        result[1] += 0;
        result[2] += 0.012195121951219513;
        result[3] += 0.7347560975609756;
        result[4] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
