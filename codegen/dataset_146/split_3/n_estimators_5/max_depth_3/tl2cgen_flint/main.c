
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0.007042253521126761;
        result[1] += 0.08098591549295775;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8309859154929577;
        result[5] += 0.08098591549295775;
      } else {
        result[0] += 0.05502392344497608;
        result[1] += 0.006379585326953748;
        result[2] += 0.008771929824561403;
        result[3] += 0.17464114832535885;
        result[4] += 0.07177033492822966;
        result[5] += 0.6834130781499203;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0.006198347107438015;
        result[1] += 0.9028925619834709;
        result[2] += 0.020661157024793386;
        result[3] += 0.0020661157024793385;
        result[4] += 0.06818181818181816;
        result[5] += 0;
      } else {
        result[0] += 0.6373563218390804;
        result[1] += 0.035632183908045977;
        result[2] += 0.06839080459770115;
        result[3] += 0.07528735632183908;
        result[4] += 0.0896551724137931;
        result[5] += 0.09367816091954023;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0.06896551724137931;
        result[2] += 0.1724137931034483;
        result[3] += 0.39655172413793105;
        result[4] += 0.0603448275862069;
        result[5] += 0.3017241379310345;
      } else {
        result[0] += 0.028409090909090908;
        result[1] += 0.022727272727272728;
        result[2] += 0.6875;
        result[3] += 0.20454545454545456;
        result[4] += 0.005681818181818182;
        result[5] += 0.05113636363636364;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7363636363636364;
        result[3] += 0.16363636363636366;
        result[4] += 0.018181818181818184;
        result[5] += 0.08181818181818183;
      } else {
        result[0] += 0.0015105740181268882;
        result[1] += 0;
        result[2] += 0.9622356495468278;
        result[3] += 0.03625377643504532;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0.0035460992907801418;
        result[1] += 0.028368794326241134;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8971631205673759;
        result[5] += 0.07092198581560284;
      } else {
        result[0] += 0.03396851698425849;
        result[1] += 0.004971002485501243;
        result[2] += 0.014084507042253521;
        result[3] += 0.17067108533554268;
        result[4] += 0.04722452361226181;
        result[5] += 0.7290803645401823;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0.0022471910112359557;
        result[1] += 0.9617977528089888;
        result[2] += 0;
        result[3] += 0.0022471910112359557;
        result[4] += 0.03370786516853933;
        result[5] += 0;
      } else {
        result[0] += 0.6711906230721777;
        result[1] += 0.04565083281924738;
        result[2] += 0.032078963602714373;
        result[3] += 0.06662553979025293;
        result[4] += 0.12893275755706354;
        result[5] += 0.055521283158544106;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06134969325153374;
        result[3] += 0.44171779141104295;
        result[4] += 0.049079754601226995;
        result[5] += 0.44785276073619634;
      } else {
        result[0] += 0.037037037037037035;
        result[1] += 0;
        result[2] += 0.6296296296296297;
        result[3] += 0.18518518518518517;
        result[4] += 0;
        result[5] += 0.14814814814814814;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.023076923076923078;
        result[1] += 0.009615384615384616;
        result[2] += 0.7403846153846154;
        result[3] += 0.16923076923076924;
        result[4] += 0.009615384615384616;
        result[5] += 0.04807692307692308;
      } else {
        result[0] += 0.0018726591760299626;
        result[1] += 0;
        result[2] += 0.9662921348314607;
        result[3] += 0.031835205992509365;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0.011363636363636366;
        result[1] += 0.011363636363636366;
        result[2] += 0.018939393939393943;
        result[3] += 0;
        result[4] += 0.9015151515151516;
        result[5] += 0.05681818181818182;
      } else {
        result[0] += 0.061052631578947365;
        result[1] += 0.007017543859649123;
        result[2] += 0.005614035087719298;
        result[3] += 0.17684210526315788;
        result[4] += 0.047017543859649125;
        result[5] += 0.7024561403508772;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0.013011152416356878;
        result[1] += 0.8940520446096655;
        result[2] += 0.0037174721189591076;
        result[3] += 0;
        result[4] += 0.08550185873605948;
        result[5] += 0.0037174721189591076;
      } else {
        result[0] += 0.7070773263433814;
        result[1] += 0.045216251638269984;
        result[2] += 0.057667103538663174;
        result[3] += 0.05504587155963303;
        result[4] += 0.0799475753604194;
        result[5] += 0.05504587155963303;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1518987341772152;
        result[3] += 0.5443037974683544;
        result[4] += 0.0379746835443038;
        result[5] += 0.26582278481012656;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9142857142857143;
        result[3] += 0.08571428571428572;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.10000000000000002;
        result[1] += 0;
        result[2] += 0.6333333333333334;
        result[3] += 0.23333333333333336;
        result[4] += 0;
        result[5] += 0.03333333333333334;
      } else {
        result[0] += 0.004767580452920143;
        result[1] += 0;
        result[2] += 0.9368295589988082;
        result[3] += 0.05363528009535161;
        result[4] += 0;
        result[5] += 0.004767580452920143;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9855072463768116;
        result[5] += 0.014492753623188406;
      } else {
        result[0] += 0;
        result[1] += 0.9;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0.043795620437956206;
        result[1] += 0.017726798748696558;
        result[2] += 0.0010427528675703858;
        result[3] += 0.03232533889468196;
        result[4] += 0.05213764337851929;
        result[5] += 0.8529718456725756;
      } else {
        result[0] += 0.017094017094017096;
        result[1] += 0.011396011396011397;
        result[2] += 0.022792022792022793;
        result[3] += 0.49572649572649574;
        result[4] += 0.02564102564102564;
        result[5] += 0.42735042735042733;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0.0017953321364452424;
        result[1] += 0.800718132854578;
        result[2] += 0;
        result[3] += 0.008976660682226212;
        result[4] += 0.17594254937163376;
        result[5] += 0.012567324955116697;
      } else {
        result[0] += 0.7017318794098781;
        result[1] += 0.01860166773572803;
        result[2] += 0.042976266837716486;
        result[3] += 0.09942270686337396;
        result[4] += 0.07633098139833226;
        result[5] += 0.06093649775497113;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0.032388663967611336;
        result[1] += 0.05668016194331984;
        result[2] += 0.2591093117408907;
        result[3] += 0.242914979757085;
        result[4] += 0.048582995951417005;
        result[5] += 0.3603238866396761;
      } else {
        result[0] += 0.02159827213822894;
        result[1] += 0;
        result[2] += 0.9049676025917927;
        result[3] += 0.07019438444924406;
        result[4] += 0;
        result[5] += 0.0032397408207343412;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0.0058823529411764705;
        result[1] += 0.0058823529411764705;
        result[2] += 0;
        result[3] += 0.014705882352941176;
        result[4] += 0.888235294117647;
        result[5] += 0.08529411764705883;
      } else {
        result[0] += 0.0790616854908775;
        result[1] += 0.004344048653344918;
        result[2] += 0.0008688097306689834;
        result[3] += 0.08601216333622937;
        result[4] += 0.08253692441355343;
        result[5] += 0.7471763683753258;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0.01825557809330629;
        result[1] += 0.9087221095334687;
        result[2] += 0.01622718052738337;
        result[3] += 0.01622718052738337;
        result[4] += 0.0385395537525355;
        result[5] += 0.0020283975659229213;
      } else {
        result[0] += 0.6021566401816119;
        result[1] += 0.02894438138479001;
        result[2] += 0.07150964812712826;
        result[3] += 0.14755959137343927;
        result[4] += 0.06242905788876277;
        result[5] += 0.08740068104426787;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03636363636363636;
        result[3] += 0.23636363636363636;
        result[4] += 0.10909090909090909;
        result[5] += 0.6181818181818182;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5666666666666667;
        result[3] += 0.2;
        result[4] += 0.03333333333333333;
        result[5] += 0.2;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.011178861788617886;
        result[1] += 0.0010162601626016261;
        result[2] += 0.8800813008130082;
        result[3] += 0.08130081300813008;
        result[4] += 0;
        result[5] += 0.026422764227642278;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
