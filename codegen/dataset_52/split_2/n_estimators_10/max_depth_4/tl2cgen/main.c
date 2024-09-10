
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04958000034093856812) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.3029199987649917603) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.5190849993377923965) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006755000111297704279) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9580449759960174561) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
          result[0] += 0.06790123456790123;
          result[1] += 0.9320987654320988;
        } else {
          result[0] += 0.45;
          result[1] += 0.55;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.01856000721454620361) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8032549917697906494) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4084399938583374023) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0002350000049773370847) ) ) {
          result[0] += 0.631578947368421;
          result[1] += 0.3684210526315789;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2029150016605854034) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.174754999577999115) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09032258064516129;
          result[1] += 0.9096774193548387;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8900200128555297852) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09377000108361244202) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.4843100011348724365) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.166665002703666687) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        } else {
          result[0] += 0.1242603550295858;
          result[1] += 0.8757396449704142;
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8166249990463256836) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.5224250108003616333) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2102600038051605225) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8025600016117095947) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          result[0] += 0.06179775280898876;
          result[1] += 0.9382022471910112;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.166665002703666687) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4159100055694580078) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.07161499932408332825) ) ) {
          result[0] += 0.9736842105263158;
          result[1] += 0.02631578947368421;
        } else {
          result[0] += 0.5454545454545454;
          result[1] += 0.45454545454545453;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2346950024366378784) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7620150148868560791) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1154799964278936386) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03731343283582089;
          result[1] += 0.9626865671641791;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1797549985349178314) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.08565500006079673767) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.139164995402097702) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
          result[0] += 0.03289473684210526;
          result[1] += 0.9671052631578947;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9924199879169464111) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7938599884510040283) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.04757000133395195007) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.8765549957752227783) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3;
          result[1] += 0.7;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6396899819374084473) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1510850004851818085) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1255449969321489334) ) ) {
          result[0] += 0.9736842105263158;
          result[1] += 0.02631578947368421;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1224500015377998352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2476099953055381775) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8004899919033050537) ) ) {
          result[0] += 0.09375;
          result[1] += 0.90625;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8314950168132781982) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.02074500918388366699) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5919400006532669067) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06779661016949153;
          result[1] += 0.9322033898305084;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08610999956727027893) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.08206000179052352905) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4578500092029571533) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2200100049376487732) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.0500650014728307724) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
          result[0] += 0.09815950920245399;
          result[1] += 0.901840490797546;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.02491500135511159897) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.00887500029057264328) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.02250000089406967163) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05921052631578947;
          result[1] += 0.9407894736842105;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6000000014901161194) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.02869999967515468597) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1679600030183792114) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7468699812889099121) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.487885013222694397) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.002614999888464808464) ) ) {
          result[0] += 0.9285714285714286;
          result[1] += 0.07142857142857142;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6448850035667419434) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.7278999984264373779) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.02011499926447868347) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.5555555555555556;
          result[1] += 0.4444444444444444;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8314950168132781982) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.937370002269744873) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07936507936507936;
          result[1] += 0.9206349206349206;
        }
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
