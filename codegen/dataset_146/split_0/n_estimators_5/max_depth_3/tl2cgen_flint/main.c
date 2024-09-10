
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0;
        result[1] += 0.0625;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.875;
        result[5] += 0.0625;
      } else {
        result[0] += 0.00477326968973747;
        result[1] += 0.9904534606205251;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002386634844868735;
        result[5] += 0.002386634844868735;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0.036399735274652546;
        result[1] += 0.001985440105890139;
        result[2] += 0.020516214427531435;
        result[3] += 0.13633355393778954;
        result[4] += 0.19788219722038386;
        result[5] += 0.6068828590337525;
      } else {
        result[0] += 0.5907813378302417;
        result[1] += 0.056211354693648116;
        result[2] += 0.05789769533445756;
        result[3] += 0.1045531197301855;
        result[4] += 0.10061832490163013;
        result[5] += 0.08993816750983699;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0.031007751937984496;
        result[2] += 0.17829457364341086;
        result[3] += 0.32558139534883723;
        result[4] += 0.06976744186046512;
        result[5] += 0.3953488372093023;
      } else {
        result[0] += 0.14468085106382977;
        result[1] += 0;
        result[2] += 0.6638297872340425;
        result[3] += 0.16595744680851063;
        result[4] += 0.00425531914893617;
        result[5] += 0.02127659574468085;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0.004065040650406505;
        result[1] += 0;
        result[2] += 0.8252032520325204;
        result[3] += 0.1544715447154472;
        result[4] += 0;
        result[5] += 0.01626016260162602;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9775967413441955;
        result[3] += 0.02240325865580448;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0.008032128514056224;
        result[1] += 0.012048192771084338;
        result[2] += 0.040160642570281124;
        result[3] += 0;
        result[4] += 0.927710843373494;
        result[5] += 0.012048192771084338;
      } else {
        result[0] += 0.03590944574551132;
        result[1] += 0.00624512099921936;
        result[2] += 0.00156128024980484;
        result[3] += 0.14676034348165495;
        result[4] += 0.0585480093676815;
        result[5] += 0.750975800156128;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.884469696969697;
        result[2] += 0;
        result[3] += 0.001893939393939394;
        result[4] += 0.11363636363636363;
        result[5] += 0;
      } else {
        result[0] += 0.6354285714285715;
        result[1] += 0.036571428571428574;
        result[2] += 0.05542857142857143;
        result[3] += 0.088;
        result[4] += 0.10685714285714286;
        result[5] += 0.07771428571428571;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13559322033898305;
        result[3] += 0.6779661016949152;
        result[4] += 0;
        result[5] += 0.1864406779661017;
      } else {
        result[0] += 0.05263157894736843;
        result[1] += 0;
        result[2] += 0.6315789473684211;
        result[3] += 0.05263157894736843;
        result[4] += 0;
        result[5] += 0.26315789473684215;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0.006410256410256411;
        result[1] += 0;
        result[2] += 0.7115384615384617;
        result[3] += 0.2371794871794872;
        result[4] += 0;
        result[5] += 0.04487179487179488;
      } else {
        result[0] += 0.013071895424836602;
        result[1] += 0;
        result[2] += 0.934640522875817;
        result[3] += 0.04967320261437908;
        result[4] += 0;
        result[5] += 0.00261437908496732;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0.12732919254658384;
        result[1] += 0.003105590062111801;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7391304347826086;
        result[5] += 0.13043478260869565;
      } else {
        result[0] += 0;
        result[1] += 0.015315315315315315;
        result[2] += 0.0036036036036036037;
        result[3] += 0.16396396396396395;
        result[4] += 0.047747747747747746;
        result[5] += 0.7693693693693694;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 0.8579335793357934;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14206642066420663;
        result[5] += 0;
      } else {
        result[0] += 0.6464702612562535;
        result[1] += 0.013340744858254585;
        result[2] += 0.05614230127848805;
        result[3] += 0.08949416342412451;
        result[4] += 0.10061145080600334;
        result[5] += 0.09394107837687604;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2;
        result[3] += 0.03333333333333333;
        result[4] += 0.03333333333333333;
        result[5] += 0.7333333333333333;
      } else {
        result[0] += 0;
        result[1] += 0.04201680672268908;
        result[2] += 0.33613445378151263;
        result[3] += 0.4957983193277311;
        result[4] += 0.025210084033613446;
        result[5] += 0.10084033613445378;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.017937219730941704;
        result[1] += 0;
        result[2] += 0.9192825112107623;
        result[3] += 0.05605381165919283;
        result[4] += 0;
        result[5] += 0.006726457399103139;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0.17119565217391308;
        result[1] += 0.03532608695652174;
        result[2] += 0;
        result[3] += 0.005434782608695653;
        result[4] += 0.6956521739130436;
        result[5] += 0.0923913043478261;
      } else {
        result[0] += 0.0018365472910927456;
        result[1] += 0.013774104683195593;
        result[2] += 0.006427915518824609;
        result[3] += 0.12396694214876033;
        result[4] += 0.08080808080808081;
        result[5] += 0.7731864095500459;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 0.6853281853281854;
        result[1] += 0.04890604890604891;
        result[2] += 0.02187902187902188;
        result[3] += 0.05984555984555985;
        result[4] += 0.10489060489060491;
        result[5] += 0.07915057915057916;
      } else {
        result[0] += 0.004524886877828055;
        result[1] += 0.995475113122172;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0.009302325581395349;
        result[2] += 0.08837209302325581;
        result[3] += 0.6;
        result[4] += 0.023255813953488372;
        result[5] += 0.27906976744186046;
      } else {
        result[0] += 0.06060606060606061;
        result[1] += 0.015151515151515152;
        result[2] += 0.36363636363636365;
        result[3] += 0.14393939393939395;
        result[4] += 0.14393939393939395;
        result[5] += 0.2727272727272727;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.02564102564102564;
        result[1] += 0;
        result[2] += 0.8141025641025641;
        result[3] += 0.1346153846153846;
        result[4] += 0;
        result[5] += 0.02564102564102564;
      } else {
        result[0] += 0.005376344086021506;
        result[1] += 0;
        result[2] += 0.96415770609319;
        result[3] += 0.025089605734767026;
        result[4] += 0;
        result[5] += 0.005376344086021506;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0.05244755244755245;
        result[2] += 0;
        result[3] += 0.024475524475524476;
        result[4] += 0.8426573426573427;
        result[5] += 0.08041958041958042;
      } else {
        result[0] += 0.06856309263311451;
        result[1] += 0.0029175784099197666;
        result[2] += 0.01823486506199854;
        result[3] += 0.16703136396790663;
        result[4] += 0.07658643326039387;
        result[5] += 0.6666666666666666;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0.005836575875486381;
        result[1] += 0.9202334630350194;
        result[2] += 0.009727626459143969;
        result[3] += 0.017509727626459144;
        result[4] += 0.04669260700389105;
        result[5] += 0;
      } else {
        result[0] += 0.6658400495970243;
        result[1] += 0.03533787972721637;
        result[2] += 0.060756354618722884;
        result[3] += 0.06757594544327342;
        result[4] += 0.09175449473031619;
        result[5] += 0.078735275883447;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13432835820895522;
        result[3] += 0.2835820895522388;
        result[4] += 0.029850746268656716;
        result[5] += 0.5522388059701493;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6956521739130435;
        result[3] += 0.13043478260869565;
        result[4] += 0;
        result[5] += 0.17391304347826086;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.00423728813559322;
        result[1] += 0;
        result[2] += 0.8983050847457628;
        result[3] += 0.08898305084745763;
        result[4] += 0.001059322033898305;
        result[5] += 0.007415254237288136;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
