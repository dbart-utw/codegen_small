
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.013793103448275862;
        result[2] += 0;
        result[3] += 0.02413793103448276;
        result[4] += 0.896551724137931;
        result[5] += 0.06551724137931035;
      } else {
        result[0] += 0.03185185185185185;
        result[1] += 0.015555555555555555;
        result[2] += 0.013333333333333334;
        result[3] += 0.19925925925925925;
        result[4] += 0.06666666666666667;
        result[5] += 0.6733333333333333;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        result[0] += 0.002232142857142857;
        result[1] += 0.9776785714285714;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.020089285714285716;
        result[5] += 0;
      } else {
        result[0] += 0.6124486200822079;
        result[1] += 0.038755137991779216;
        result[2] += 0.05813270698766882;
        result[3] += 0.09277745155607751;
        result[4] += 0.11861421021726365;
        result[5] += 0.07927187316500293;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.20588235294117646;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.7941176470588235;
      } else {
        result[0] += 0.03225806451612904;
        result[1] += 0.010752688172043013;
        result[2] += 0.4623655913978495;
        result[3] += 0.31182795698924737;
        result[4] += 0.021505376344086027;
        result[5] += 0.16129032258064518;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7519379844961241;
        result[3] += 0.21317829457364343;
        result[4] += 0;
        result[5] += 0.034883720930232565;
      } else {
        result[0] += 0.003076923076923077;
        result[1] += 0;
        result[2] += 0.9584615384615385;
        result[3] += 0.036923076923076927;
        result[4] += 0;
        result[5] += 0.0015384615384615385;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0029411764705882353;
        result[1] += 0.026470588235294117;
        result[2] += 0;
        result[3] += 0.01764705882352941;
        result[4] += 0.8147058823529412;
        result[5] += 0.13823529411764707;
      } else {
        result[0] += 0.03341687552213868;
        result[1] += 0.003341687552213868;
        result[2] += 0.000835421888053467;
        result[3] += 0.14536340852130325;
        result[4] += 0.03842940685045948;
        result[5] += 0.7786131996658312;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        result[0] += 0.576710816777042;
        result[1] += 0.06898454746136866;
        result[2] += 0.05077262693156733;
        result[3] += 0.08498896247240618;
        result[4] += 0.13962472406181015;
        result[5] += 0.07891832229580574;
      } else {
        result[0] += 0.014319809069212413;
        result[1] += 0.9761336515513127;
        result[2] += 0.004773269689737471;
        result[3] += 0.004773269689737471;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13846153846153847;
        result[3] += 0.6923076923076923;
        result[4] += 0;
        result[5] += 0.16923076923076924;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7654320987654321;
        result[3] += 0.18518518518518517;
        result[4] += 0;
        result[5] += 0.04938271604938271;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        result[0] += 0.060498220640569395;
        result[1] += 0;
        result[2] += 0.7580071174377224;
        result[3] += 0.13167259786476868;
        result[4] += 0;
        result[5] += 0.0498220640569395;
      } else {
        result[0] += 0.003169572107765452;
        result[1] += 0;
        result[2] += 0.9778129952456418;
        result[3] += 0.012678288431061807;
        result[4] += 0;
        result[5] += 0.006339144215530904;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.013071895424836602;
        result[1] += 0.0718954248366013;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8921568627450981;
        result[5] += 0.02287581699346405;
      } else {
        result[0] += 0.03867403314917127;
        result[1] += 0.021310181531176007;
        result[2] += 0.011838989739542225;
        result[3] += 0.16732438831886345;
        result[4] += 0.043409629044988164;
        result[5] += 0.7174427782162589;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)48.5) ) ) {
        result[0] += 0.012048192771084338;
        result[1] += 0.946987951807229;
        result[2] += 0.007228915662650603;
        result[3] += 0.00963855421686747;
        result[4] += 0.024096385542168676;
        result[5] += 0;
      } else {
        result[0] += 0.5861095426312818;
        result[1] += 0.039525691699604744;
        result[2] += 0.058723884810841336;
        result[3] += 0.088085827216262;
        result[4] += 0.13890457368718237;
        result[5] += 0.08865047995482778;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0625;
        result[3] += 0.15625;
        result[4] += 0;
        result[5] += 0.78125;
      } else {
        result[0] += 0.007633587786259542;
        result[1] += 0;
        result[2] += 0.5572519083969466;
        result[3] += 0.2748091603053435;
        result[4] += 0;
        result[5] += 0.16030534351145037;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
        result[0] += 0;
        result[1] += 0.9090909090909091;
        result[2] += 0.09090909090909091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.007838745800671893;
        result[1] += 0;
        result[2] += 0.9249720044792833;
        result[3] += 0.05263157894736842;
        result[4] += 0.0033594624860022394;
        result[5] += 0.011198208286674132;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.028169014084507043;
        result[2] += 0;
        result[3] += 0.014084507042253521;
        result[4] += 0.9225352112676056;
        result[5] += 0.035211267605633804;
      } else {
        result[0] += 0.03476946334089191;
        result[1] += 0.010582010582010581;
        result[2] += 0.016628873771730914;
        result[3] += 0.18216175359032502;
        result[4] += 0.07936507936507936;
        result[5] += 0.6764928193499622;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.006342494714587738;
        result[1] += 0.9302325581395349;
        result[2] += 0;
        result[3] += 0.006342494714587738;
        result[4] += 0.052854122621564484;
        result[5] += 0.004228329809725159;
      } else {
        result[0] += 0.6586826347305389;
        result[1] += 0.03293413173652695;
        result[2] += 0.05808383233532934;
        result[3] += 0.08982035928143713;
        result[4] += 0.08622754491017964;
        result[5] += 0.07425149700598803;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
        result[0] += 0.021052631578947368;
        result[1] += 0.10526315789473684;
        result[2] += 0.10526315789473684;
        result[3] += 0.17894736842105263;
        result[4] += 0.021052631578947368;
        result[5] += 0.5684210526315789;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5454545454545454;
        result[3] += 0.3484848484848485;
        result[4] += 0;
        result[5] += 0.10606060606060606;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        result[0] += 0.019011406844106463;
        result[1] += 0;
        result[2] += 0.7908745247148289;
        result[3] += 0.155893536121673;
        result[4] += 0;
        result[5] += 0.034220532319391636;
      } else {
        result[0] += 0.010736196319018405;
        result[1] += 0;
        result[2] += 0.9631901840490797;
        result[3] += 0.023006134969325152;
        result[4] += 0;
        result[5] += 0.003067484662576687;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.019138755980861243;
        result[2] += 0.004784688995215311;
        result[3] += 0.004784688995215311;
        result[4] += 0.937799043062201;
        result[5] += 0.03349282296650718;
      } else {
        result[0] += 0.010752688172043012;
        result[1] += 0.00985663082437276;
        result[2] += 0.011648745519713262;
        result[3] += 0.13530465949820789;
        result[4] += 0.05017921146953405;
        result[5] += 0.782258064516129;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5356622998544396;
        result[1] += 0.056768558951965066;
        result[2] += 0.052886948083454635;
        result[3] += 0.12809315866084425;
        result[4] += 0.12760795730228044;
        result[5] += 0.09898107714701601;
      } else {
        result[0] += 0.016055045871559634;
        result[1] += 0.9495412844036697;
        result[2] += 0.0022935779816513763;
        result[3] += 0.009174311926605505;
        result[4] += 0.022935779816513763;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1891891891891892;
        result[3] += 0.16216216216216217;
        result[4] += 0;
        result[5] += 0.6486486486486487;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4666666666666667;
        result[3] += 0.4;
        result[4] += 0;
        result[5] += 0.13333333333333333;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        result[0] += 0.02811244979919679;
        result[1] += 0.01204819277108434;
        result[2] += 0.779116465863454;
        result[3] += 0.14859437751004018;
        result[4] += 0;
        result[5] += 0.032128514056224904;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9786628733997155;
        result[3] += 0.01849217638691323;
        result[4] += 0;
        result[5] += 0.002844950213371266;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
