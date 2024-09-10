
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.03529411764705883;
        result[1] += 0.011764705882352943;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9137254901960785;
        result[5] += 0.03921568627450981;
      } else {
        result[0] += 0.04742765273311897;
        result[1] += 0.012057877813504822;
        result[2] += 0.002411575562700965;
        result[3] += 0.17363344051446947;
        result[4] += 0.05707395498392283;
        result[5] += 0.707395498392283;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        result[0] += 0.0099601593625498;
        result[1] += 0.9083665338645418;
        result[2] += 0.013944223107569721;
        result[3] += 0;
        result[4] += 0.06772908366533864;
        result[5] += 0;
      } else {
        result[0] += 0.6726084373143197;
        result[1] += 0.029708853238265005;
        result[2] += 0.052287581699346414;
        result[3] += 0.07130124777183602;
        result[4] += 0.08734402852049912;
        result[5] += 0.08674985145573383;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.037267080745341616;
        result[2] += 0.16149068322981366;
        result[3] += 0.2981366459627329;
        result[4] += 0.11180124223602485;
        result[5] += 0.391304347826087;
      } else {
        result[0] += 0.07777777777777778;
        result[1] += 0.07777777777777778;
        result[2] += 0.7555555555555555;
        result[3] += 0.022222222222222223;
        result[4] += 0.03333333333333333;
        result[5] += 0.03333333333333333;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.43859649122807015;
        result[3] += 0.43859649122807015;
        result[4] += 0;
        result[5] += 0.12280701754385964;
      } else {
        result[0] += 0.009592326139088728;
        result[1] += 0;
        result[2] += 0.9304556354916067;
        result[3] += 0.05635491606714628;
        result[4] += 0;
        result[5] += 0.0035971223021582736;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
        result[0] += 0.003355704697986577;
        result[1] += 0.006711409395973154;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9630872483221476;
        result[5] += 0.026845637583892617;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.5;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        result[0] += 0.020070838252656435;
        result[1] += 0;
        result[2] += 0.0011806375442739079;
        result[3] += 0.05548996458087367;
        result[4] += 0.0743801652892562;
        result[5] += 0.8488783943329398;
      } else {
        result[0] += 0.061124694376528114;
        result[1] += 0.007334963325183374;
        result[2] += 0.007334963325183374;
        result[3] += 0.43765281173594134;
        result[4] += 0.05378973105134474;
        result[5] += 0.43276283618581907;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
        result[0] += 0.0367816091954023;
        result[1] += 0.9494252873563218;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.013793103448275862;
        result[5] += 0;
      } else {
        result[0] += 0.6683480453972257;
        result[1] += 0.08638083228247162;
        result[2] += 0.025220680958385876;
        result[3] += 0.06116015132408575;
        result[4] += 0.11097099621689786;
        result[5] += 0.04791929382093316;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
        result[0] += 0.054945054945054944;
        result[1] += 0.024725274725274724;
        result[2] += 0.40934065934065933;
        result[3] += 0.29395604395604397;
        result[4] += 0.057692307692307696;
        result[5] += 0.15934065934065933;
      } else {
        result[0] += 0.003412969283276451;
        result[1] += 0.001137656427758817;
        result[2] += 0.9032992036405006;
        result[3] += 0.07167235494880547;
        result[4] += 0;
        result[5] += 0.020477815699658706;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.012048192771084338;
        result[2] += 0.01606425702811245;
        result[3] += 0.0321285140562249;
        result[4] += 0.8634538152610441;
        result[5] += 0.07630522088353414;
      } else {
        result[0] += 0.03609515996718622;
        result[1] += 0.002461033634126333;
        result[2] += 0.003281378178835111;
        result[3] += 0.1320754716981132;
        result[4] += 0.08613617719442165;
        result[5] += 0.7399507793273175;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8585858585858586;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1414141414141414;
        result[5] += 0;
      } else {
        result[0] += 0.6810551558752999;
        result[1] += 0.01678657074340528;
        result[2] += 0.061151079136690656;
        result[3] += 0.0947242206235012;
        result[4] += 0.07853717026378898;
        result[5] += 0.06774580335731416;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06382978723404255;
        result[3] += 0.06382978723404255;
        result[4] += 0.14893617021276595;
        result[5] += 0.723404255319149;
      } else {
        result[0] += 0;
        result[1] += 0.028301886792452834;
        result[2] += 0.4811320754716982;
        result[3] += 0.34905660377358494;
        result[4] += 0.028301886792452834;
        result[5] += 0.11320754716981134;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3888888888888889;
        result[3] += 0.2222222222222222;
        result[4] += 0;
        result[5] += 0.3888888888888889;
      } else {
        result[0] += 0.016216216216216217;
        result[1] += 0.001081081081081081;
        result[2] += 0.9275675675675675;
        result[3] += 0.04540540540540541;
        result[4] += 0;
        result[5] += 0.00972972972972973;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.06779661016949153;
        result[2] += 0;
        result[3] += 0.00423728813559322;
        result[4] += 0.8516949152542372;
        result[5] += 0.07627118644067797;
      } else {
        result[0] += 0.028820960698689956;
        result[1] += 0.0026200873362445414;
        result[2] += 0.020087336244541485;
        result[3] += 0.14148471615720523;
        result[4] += 0.05502183406113537;
        result[5] += 0.7519650655021834;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9470338983050848;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05296610169491525;
        result[5] += 0;
      } else {
        result[0] += 0.5766578249336869;
        result[1] += 0.0312997347480106;
        result[2] += 0.0742705570291777;
        result[3] += 0.10663129973474798;
        result[4] += 0.1326259946949602;
        result[5] += 0.07851458885941644;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.018518518518518517;
        result[3] += 0.18518518518518517;
        result[4] += 0.05555555555555555;
        result[5] += 0.7407407407407407;
      } else {
        result[0] += 0.08558558558558559;
        result[1] += 0.06756756756756757;
        result[2] += 0.5315315315315315;
        result[3] += 0.17567567567567569;
        result[4] += 0.04054054054054054;
        result[5] += 0.0990990990990991;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0.0012391573729863693;
        result[1] += 0;
        result[2] += 0.9306071871127634;
        result[3] += 0.06319702602230483;
        result[4] += 0;
        result[5] += 0.004956629491945477;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.00906344410876133;
        result[1] += 0.03625377643504532;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8398791540785498;
        result[5] += 0.1148036253776435;
      } else {
        result[0] += 0.051622418879056046;
        result[1] += 0.008849557522123894;
        result[2] += 0.018436578171091445;
        result[3] += 0.17920353982300885;
        result[4] += 0.05088495575221239;
        result[5] += 0.6910029498525073;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6651524983776768;
        result[1] += 0.04412719013627514;
        result[2] += 0.05775470473718363;
        result[3] += 0.051914341336794276;
        result[4] += 0.12329656067488641;
        result[5] += 0.05775470473718363;
      } else {
        result[0] += 0.01072961373390558;
        result[1] += 0.9849785407725322;
        result[2] += 0.002145922746781116;
        result[3] += 0;
        result[4] += 0.002145922746781116;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)47) ) ) {
        result[0] += 0;
        result[1] += 0.9;
        result[2] += 0;
        result[3] += 0.1;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0410958904109589;
        result[1] += 0;
        result[2] += 0.2054794520547945;
        result[3] += 0.273972602739726;
        result[4] += 0.03424657534246575;
        result[5] += 0.4452054794520548;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.08181818181818183;
        result[1] += 0;
        result[2] += 0.5272727272727273;
        result[3] += 0.24545454545454548;
        result[4] += 0.009090909090909092;
        result[5] += 0.13636363636363638;
      } else {
        result[0] += 0.010392609699769052;
        result[1] += 0;
        result[2] += 0.9157043879907621;
        result[3] += 0.07043879907621248;
        result[4] += 0;
        result[5] += 0.003464203233256351;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
