
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.47009646302250807;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.11189710610932477;
        result[4] += 0.41607717041800646;
        result[5] += 0.0019292604501607719;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0007000350017500875;
        result[2] += 0.00840042002100105;
        result[3] += 0.9663983199159958;
        result[4] += 0.023101155057752887;
        result[5] += 0.001400070003500175;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1974459724950884;
        result[4] += 0.8025540275049116;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.013590033975084938;
        result[2] += 0;
        result[3] += 0.0022650056625141564;
        result[4] += 0.984144960362401;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.3787878787878788;
        result[1] += 0.017316017316017316;
        result[2] += 0;
        result[3] += 0.6038961038961039;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9967313140117674;
        result[1] += 0.0006174184644439603;
        result[2] += 0.0024333551245732553;
        result[3] += 0.0001089561996077577;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001089561996077577;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.1869111280875987;
        result[1] += 0;
        result[2] += 0.004329004329004329;
        result[3] += 0.808759867583397;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9935410334346505;
        result[1] += 0;
        result[2] += 0.003799392097264438;
        result[3] += 0.0011398176291793312;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001519756838905775;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9865900383141762;
        result[1] += 0;
        result[2] += 0.009578544061302681;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0038314176245210726;
      } else {
        result[0] += 0.998671096345515;
        result[1] += 0;
        result[2] += 0.00132890365448505;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9974905897114178;
        result[1] += 0;
        result[2] += 0.002509410288582183;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997800554260327;
        result[1] += 0;
        result[2] += 0.00021994457396736023;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.014853323431117713;
        result[1] += 0.005755662829558114;
        result[2] += 0.005755662829558114;
        result[3] += 0.6407352395098403;
        result[4] += 0.331229112513925;
        result[5] += 0.0016709988860007428;
        result[6] += 0;
      } else {
        result[0] += 0.9798932605188035;
        result[1] += 0;
        result[2] += 0.005833436763063175;
        result[3] += 0.013032145960034752;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001241156758098548;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.004690117252931323;
        result[3] += 0.9953098827470687;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009749303621169917;
        result[3] += 0;
        result[4] += 0.9846796657381616;
        result[5] += 0.005571030640668524;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.45081967213114754;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12168978562421186;
        result[4] += 0.42686002522068095;
        result[5] += 0.0006305170239596469;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.007991660875608061;
        result[3] += 0.9694232105628909;
        result[4] += 0.01980542043085476;
        result[5] += 0.002779708130646282;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1657088122605364;
        result[4] += 0.8342911877394636;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.009879253567508232;
        result[2] += 0;
        result[3] += 0.0010976948408342481;
        result[4] += 0.9890230515916575;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9982210927573062;
        result[1] += 0;
        result[2] += 0.0017789072426937739;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999943760193465;
        result[1] += 0;
        result[2] += 5.623980653506552e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.913214533672761;
        result[1] += 0.0023142791020597086;
        result[2] += 0.006248553575561213;
        result[3] += 0.07683406618838232;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001388567461235825;
      } else {
        result[0] += 0;
        result[1] += 0.0003586800573888092;
        result[2] += 0.005738880918220947;
        result[3] += 0.9939024390243902;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0007894736842105263;
        result[2] += 0.006842105263157895;
        result[3] += 0.8034210526315789;
        result[4] += 0.18763157894736843;
        result[5] += 0.0013157894736842105;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006881948120698782;
        result[2] += 0;
        result[3] += 0.08152461619904712;
        result[4] += 0.9115934356802541;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0.9353438428147133;
        result[1] += 0.001256568425862463;
        result[2] += 0.003198537811286269;
        result[3] += 0.06008681745487777;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001142334932602239;
      } else {
        result[0] += 0.7513091802928289;
        result[1] += 0;
        result[2] += 0.0017099497702254996;
        result[3] += 0.2467671262156674;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021374372127818745;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 0.9882914629987496;
        result[1] += 0;
        result[2] += 0.003410253495509833;
        result[3] += 0.008070933272706604;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022735023303398886;
      } else {
        result[0] += 0.9722607489597781;
        result[1] += 0;
        result[2] += 0.0034674063800277394;
        result[3] += 0.024271844660194174;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0.0023228803716608595;
        result[1] += 0.011614401858304297;
        result[2] += 0;
        result[3] += 0.08013937282229965;
        result[4] += 0.9059233449477352;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.29515738498789346;
        result[1] += 0.0014527845036319612;
        result[2] += 0.007990314769975786;
        result[3] += 0.44794188861985473;
        result[4] += 0.24745762711864408;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.1248477466504263;
        result[1] += 0.0006090133982947625;
        result[2] += 0.006699147381242387;
        result[3] += 0.841047503045067;
        result[4] += 0.024969549330085262;
        result[5] += 0.0018270401948842874;
        result[6] += 0;
      } else {
        result[0] += 0.9942890400494707;
        result[1] += 0.0005456331162926049;
        result[2] += 0.0012003928558437307;
        result[3] += 0.003710305190789713;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025462878760321557;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.42643587726199844;
        result[1] += 0;
        result[2] += 0.011014948859166011;
        result[3] += 0.03068450039339103;
        result[4] += 0.5318646734854445;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.01608325449385052;
        result[1] += 0;
        result[2] += 0.005991800693787449;
        result[3] += 0.9747713654998423;
        result[4] += 0.002522863450015768;
        result[5] += 0.000630715862503942;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0.9975676497415628;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.002432350258437215;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9866261398176293;
        result[1] += 0;
        result[2] += 0.010334346504559272;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0030395136778115506;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
