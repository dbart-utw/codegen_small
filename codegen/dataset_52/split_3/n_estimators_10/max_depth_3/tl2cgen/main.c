
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9144749939441680908) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1507650017738342285) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.0641025641025641;
        result[1] += 0.9358974358974359;
      } else {
        result[0] += 0.6097560975609756;
        result[1] += 0.3902439024390244;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6317949891090393066) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 0.11170212765957446;
        result[1] += 0.8882978723404256;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7652249932289123535) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9826149940490722656) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.24074074074074073;
        result[1] += 0.7592592592592593;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.21091499924659729) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.075;
        result[1] += 0.925;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2920700013637542725) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.1398250013589859009) ) ) {
        result[0] += 0.11363636363636363;
        result[1] += 0.8863636363636364;
      } else {
        result[0] += 0.6923076923076923;
        result[1] += 0.3076923076923077;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.1022850126028060913) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.04504504504504504;
        result[1] += 0.954954954954955;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.04778499901294708252) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.03555500134825706482) ) ) {
        result[0] += 0.8666666666666667;
        result[1] += 0.13333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4444444444444444;
        result[1] += 0.5555555555555556;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4054549932479858398) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7366849929094314575) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2155900001525878906) ) ) {
        result[0] += 0.007751937984496124;
        result[1] += 0.9922480620155039;
      } else {
        result[0] += 0.2608695652173913;
        result[1] += 0.7391304347826086;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.48148148148148145;
        result[1] += 0.5185185185185185;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2192749977111816406) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01154499966651201248) ) ) {
        result[0] += 0.38095238095238093;
        result[1] += 0.6190476190476191;
      } else {
        result[0] += 0.03125;
        result[1] += 0.96875;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        result[0] += 0.6538461538461539;
        result[1] += 0.34615384615384615;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
        result[0] += 0.9;
        result[1] += 0.1;
      } else {
        result[0] += 0.07738095238095238;
        result[1] += 0.9226190476190477;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1586499959230422974) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8848800063133239746) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3333350121974945068) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5571700036525726318) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.2995100021362304688) ) ) {
        result[0] += 0.3488372093023256;
        result[1] += 0.6511627906976745;
      } else {
        result[0] += 0.9428571428571428;
        result[1] += 0.05714285714285714;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08695652173913043;
        result[1] += 0.9130434782608695;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.6875) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.666665002703666687) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.04037499893456697464) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.9680899977684020996) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13432835820895522;
        result[1] += 0.8656716417910447;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01111999992281198502) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
        result[0] += 0.65625;
        result[1] += 0.34375;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6332649886608123779) ) ) {
        result[0] += 0.06976744186046512;
        result[1] += 0.9302325581395349;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6929800212383270264) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.391304347826087;
        result[1] += 0.6086956521739131;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  
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
