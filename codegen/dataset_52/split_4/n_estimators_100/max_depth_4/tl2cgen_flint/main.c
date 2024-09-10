
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3d533094))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ef19999))) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ebab218))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3eac52e7))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f51d0fa))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e49930c))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3d8ba494))) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3effe718))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08552631578947369;
          result[1] += 0.9144736842105263;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f289cf6))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f68ad58))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06521739130434782;
          result[1] += 0.9347826086956522;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7cc3f4))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f6e656b))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.054878048780487805;
          result[1] += 0.9451219512195121;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3be0f3cb))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f31d053))) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f5b6ddb))) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e924b34))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ecf97cc))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f3b89b5))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eca6bf8))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f58154d))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7ba637))) ) ) {
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d5d92b8))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f0beb5b))) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.9166666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f742d38))) ) ) {
          result[0] += 0.046875;
          result[1] += 0.953125;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e19bf9c))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dfcd0bc))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e1861a6))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3eb60610))) ) ) {
          result[0] += 0.05263157894736842;
          result[1] += 0.9473684210526315;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f4d9c8d))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f1abf88))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.625;
          result[1] += 0.375;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec6eac8))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3de9003f))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08823529411764706;
          result[1] += 0.9117647058823529;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d8eca))) ) ) {
          result[0] += 0.9375;
          result[1] += 0.0625;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e5b0dd8))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dea4010))) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        } else {
          result[0] += 0.010416666666666666;
          result[1] += 0.9895833333333334;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f65ad97))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f57e61d))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d53111f))) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0.8461538461538461;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e909b52))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4d2f1a))) ) ) {
          result[0] += 0.1896551724137931;
          result[1] += 0.8103448275862069;
        } else {
          result[0] += 0.027522935779816515;
          result[1] += 0.9724770642201835;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e9e7968))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4c7a3a))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e937026))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e92f05a))) ) ) {
          result[0] += 0.21428571428571427;
          result[1] += 0.7857142857142857;
        } else {
          result[0] += 0.02142857142857143;
          result[1] += 0.9785714285714285;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f733333))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e578c01))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f0ed331))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0.7777777777777778;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e219264))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d99bbae))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f5c06e2))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f4fbd27))) ) ) {
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e02f987))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef31ee2))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3eb060fe))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e0d0529))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3de0afa4))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
          result[0] += 0.04411764705882353;
          result[1] += 0.9558823529411765;
        } else {
          result[0] += 0.5333333333333333;
          result[1] += 0.4666666666666667;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d60bf5d))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3b85b186))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e5d3c36))) ) ) {
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07096774193548387;
          result[1] += 0.9290322580645162;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f5c28f6))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5294117647058824;
          result[1] += 0.47058823529411764;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e9b3333))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76e632))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3efc7cd9))) ) ) {
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
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4a9542))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eeec17e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d3d1244))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f721576))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3d43d46b))) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        } else {
          result[0] += 0.07407407407407407;
          result[1] += 0.9259259259259259;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f6e9835))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e01b328))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0658682634730539;
          result[1] += 0.9341317365269461;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ea7d36f))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d9b9b67))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3dc91538))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e57d2c8))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09659090909090909;
          result[1] += 0.9034090909090909;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7f3b64))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ef6c030))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
          result[0] += 0.13872832369942195;
          result[1] += 0.861271676300578;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea4bdba))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c1ae925))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3ef83ba3))) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e30f12c))) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.9523809523809523;
          result[1] += 0.047619047619047616;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e9aa1b6))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e06848c))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee712c2))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0.6;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f67775c))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ec6aa8e))) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.08441558441558442;
          result[1] += 0.9155844155844156;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e8ba1f4))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e8548aa))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e98d4fe))) ) ) {
          result[0] += 0.23076923076923078;
          result[1] += 0.7692307692307693;
        } else {
          result[0] += 0.012658227848101266;
          result[1] += 0.9873417721518988;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f740dc3))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e595182))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.21428571428571427;
          result[1] += 0.7857142857142857;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e580dc4))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0ea2b2))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f772df5))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        } else {
          result[0] += 0.059880239520958084;
          result[1] += 0.9401197604790419;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f418b82))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ed82d38))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3ee85a71))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07051282051282051;
          result[1] += 0.9294871794871795;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3eb060fe))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f1e685e))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3d2137f0))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09142857142857143;
          result[1] += 0.9085714285714286;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f79ba0a))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.16230366492146597;
          result[1] += 0.837696335078534;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e987f24))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e2d0e))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c88a4))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3ec41bda))) ) ) {
          result[0] += 0.029411764705882353;
          result[1] += 0.9705882352941176;
        } else {
          result[0] += 0.6274509803921569;
          result[1] += 0.37254901960784315;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7ff046))) ) ) {
          result[0] += 0.011235955056179775;
          result[1] += 0.9887640449438202;
        } else {
          result[0] += 0.15;
          result[1] += 0.85;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f00f180))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3eb3f67f))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3125;
          result[1] += 0.6875;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3e07d178))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e4902de))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d6963dc))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3deb4b73))) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
        } else {
          result[0] += 0.9814814814814815;
          result[1] += 0.018518518518518517;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f048c3f))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f37c558))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f3e99d8))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04580152671755725;
          result[1] += 0.9541984732824428;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3f62af25))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e42656a))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eff0a3e))) ) ) {
          result[0] += 0.8695652173913043;
          result[1] += 0.13043478260869565;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e6a1a0d))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 0.022556390977443608;
          result[1] += 0.9774436090225563;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3d1eb852))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3ed7daa5))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e124895))) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3db691a7))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef73eab))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3ed96a))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08163265306122448;
          result[1] += 0.9183673469387755;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e38255b))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3eb93fd1))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f4c115e))) ) ) {
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
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f77d4bf))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ee883ba))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3ec5c91e))) ) ) {
          result[0] += 0.041666666666666664;
          result[1] += 0.9583333333333334;
        } else {
          result[0] += 0.8148148148148148;
          result[1] += 0.18518518518518517;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3dacd9e8))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4c8606))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e0baf10))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e3d6388))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e695aaf))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e21e3a8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f772baa))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7f3b64))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f2138ef))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f0cdcdb))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05172413793103448;
          result[1] += 0.9482758620689655;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f5baa26))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e3be76d))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f457c70))) ) ) {
          result[0] += 0.35294117647058826;
          result[1] += 0.6470588235294118;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7d35a8))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3df0d5a6))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e4bf9c6))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3d5b57))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 0.07042253521126761;
          result[1] += 0.9295774647887324;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e227525))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f537272))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e937bf2))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e3a58f8))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ddb6ed6))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ecf19f8))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3eb5a07b))) ) ) {
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
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3edb9b67))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 0.08426966292134831;
          result[1] += 0.9157303370786517;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3df0d5a6))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e4f7a4e))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e4bf9c6))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3dbf822c))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3b0a47ed))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3d122531))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3db8cd21))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3e4cf180))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ed68294))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08;
          result[1] += 0.92;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edb851e))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ed3dd98))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e641b32))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d23fbc0))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3c467dfe))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9c4c5a))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d35696e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08074534161490683;
          result[1] += 0.9192546583850931;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ea52bd4))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.375;
          result[1] += 0.625;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7b9043))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dcabde4))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0.9310344827586207;
          result[1] += 0.06896551724137931;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e0cf80e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.11475409836065574;
          result[1] += 0.8852459016393442;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3ed0572a))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f0dd92c))) ) ) {
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
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eddbdf9))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ce7d567))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e9f53a4))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d939432))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ea73d5c))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f20b3e6))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e1fd4bf))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0.975609756097561;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.017094017094017096;
          result[1] += 0.9829059829059829;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f7515e0))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3076923076923077;
          result[1] += 0.6923076923076923;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3f64d2b2))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f27f67f))) ) ) {
          result[0] += 0.11428571428571428;
          result[1] += 0.8857142857142857;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7c5436))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f742d38))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3df7d6b6))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.022058823529411766;
          result[1] += 0.9779411764705882;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7b44e5))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e8e0c9e))) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3ed1743f))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6ed384))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e12dcb1))) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
          result[0] += 0.4782608695652174;
          result[1] += 0.5217391304347826;
        } else {
          result[0] += 0.08843537414965986;
          result[1] += 0.9115646258503401;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e69e44f))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3c116873))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f3422bc))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f1b92e2))) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.9583333333333334;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e01b328))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e5e1da8))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3cfac1d3))) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.9642857142857143;
        } else {
          result[0] += 0.6538461538461539;
          result[1] += 0.34615384615384615;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f072b02))) ) ) {
          result[0] += 0.2222222222222222;
          result[1] += 0.7777777777777778;
        } else {
          result[0] += 0.02197802197802198;
          result[1] += 0.978021978021978;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f740dc3))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e7d35a8))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f3a2eb2))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e83e6c4))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e8bedfa))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f79ba0a))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f289cf6))) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.07926829268292683;
          result[1] += 0.9207317073170732;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e0e392e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e71c2e4))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e37ceda))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eee8f08))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.7857142857142857;
          result[1] += 0.21428571428571427;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3ead696e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3d830a91))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0.972972972972973;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3d638da4))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ef5fa44))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ef040e2))) ) ) {
          result[0] += 0.02830188679245283;
          result[1] += 0.9716981132075472;
        } else {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eabcdde))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3df05a70))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e84b1ee))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3d8670e3))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9333333333333333;
          result[1] += 0.06666666666666667;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f4a046c))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3c3328b7))) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.022222222222222223;
          result[1] += 0.9777777777777777;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f25930c))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f75ec81))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.047244094488188976;
          result[1] += 0.952755905511811;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e84b1ee))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e7fb7e9))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3dfcd899))) ) ) {
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f7c2460))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x00000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e89ce07))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 0.04794520547945205;
          result[1] += 0.952054794520548;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f6d6e05))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f09ec80))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3cd44135))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4166666666666667;
          result[1] += 0.5833333333333334;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e4a86d8))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ee46499))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3c3328b7))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7d35a8))) ) ) {
          result[0] += 0.022222222222222223;
          result[1] += 0.9777777777777777;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e770111))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f1f2cfa))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f19bb5a))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07317073170731707;
          result[1] += 0.926829268292683;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
          result[0] += 0.6153846153846154;
          result[1] += 0.38461538461538464;
        } else {
          result[0] += 0.07954545454545454;
          result[1] += 0.9204545454545454;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f5fc5ac))) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7fdee8))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5227d0))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f7047c3))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0ae9cc))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3de602c9))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9705882352941176;
          result[1] += 0.029411764705882353;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
          result[0] += 0.03205128205128205;
          result[1] += 0.967948717948718;
        } else {
          result[0] += 0.7;
          result[1] += 0.3;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ecbedfa))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e81d92c))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e811926))) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f4269ae))) ) ) {
          result[0] += 0.875;
          result[1] += 0.125;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0.7777777777777778;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f09b8bb))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f0e3982))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
          result[0] += 0.875;
          result[1] += 0.125;
        } else {
          result[0] += 0.043209876543209874;
          result[1] += 0.9567901234567902;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f713554))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3eb3c6a8))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e9525ee))) ) ) {
          result[0] += 0.2727272727272727;
          result[1] += 0.7272727272727273;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f6fc409))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e3e8e60))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3da6809d))) ) ) {
          result[0] += 0.29411764705882354;
          result[1] += 0.7058823529411765;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eca6bf8))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x39c49ba6))) ) ) {
          result[0] += 0.16129032258064516;
          result[1] += 0.8387096774193549;
        } else {
          result[0] += 0.00980392156862745;
          result[1] += 0.9901960784313726;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7fdee8))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.9583333333333334;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f1979d1))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f12ea21))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f1ab756))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f5462a2))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e9bda52))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e9667b6))) ) ) {
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
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f7147ae))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08982035928143713;
          result[1] += 0.9101796407185628;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f72b7fe))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3c4c4ef9))) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f22e8d1))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3abeb5b3))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3d148a9c))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3dfce5b4))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e2617c2))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f46ebc4))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f682c90))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06626506024096386;
          result[1] += 0.9337349397590361;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5262cc))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3da014f9))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3edefe72))) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
        } else {
          result[0] += 0.038461538461538464;
          result[1] += 0.9615384615384616;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e058794))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3e688ce7))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f2aaa8f))) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f772df5))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e00abb4))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0.9047619047619048;
          result[1] += 0.09523809523809523;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eca6bf8))) ) ) {
          result[0] += 0.9230769230769231;
          result[1] += 0.07692307692307693;
        } else {
          result[0] += 0.03184713375796178;
          result[1] += 0.9681528662420382;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3c8b2421))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d7a82e8))) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
        } else {
          result[0] += 0.014814814814814815;
          result[1] += 0.9851851851851852;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4381d8))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.631578947368421;
          result[1] += 0.3684210526315789;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d9dd97f))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e99b5c8))) ) ) {
          result[0] += 0.9230769230769231;
          result[1] += 0.07692307692307693;
        } else {
          result[0] += 0.21052631578947367;
          result[1] += 0.7894736842105263;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3b001f75))) ) ) {
          result[0] += 0.23728813559322035;
          result[1] += 0.7627118644067796;
        } else {
          result[0] += 0.01020408163265306;
          result[1] += 0.9897959183673469;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d172474))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f563f68))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ee15422))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3deff434))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f26f838))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e6a0a52))) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e049f94))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ee46499))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3c16bb99))) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e9782d4))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.13793103448275862;
          result[1] += 0.8620689655172413;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f01e300))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03546099290780142;
          result[1] += 0.9645390070921985;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e049f94))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f32cf42))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d3e8145))) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.9642857142857143;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f6e656b))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e345e0c))) ) ) {
          result[0] += 0.2608695652173913;
          result[1] += 0.7391304347826086;
        } else {
          result[0] += 0.03;
          result[1] += 0.97;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3dba2f06))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e3d7b20))) ) ) {
          result[0] += 0.875;
          result[1] += 0.125;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e65a1cb))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e7a31a5))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3eb119ce))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3baa3ad0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.44;
          result[1] += 0.56;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f32afcd))) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0.9523809523809523;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d1782d4))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d0c2507))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f043127))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3deb3919))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e56f694))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ec7ff58))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e532df5))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f79ba0a))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.11046511627906977;
          result[1] += 0.8895348837209303;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3ed0572a))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ece0b4e))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdae3e7))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee3e575))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e837804))) ) ) {
          result[0] += 0.8666666666666667;
          result[1] += 0.13333333333333333;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f0732df))) ) ) {
          result[0] += 0.2;
          result[1] += 0.8;
        } else {
          result[0] += 0.011235955056179775;
          result[1] += 0.9887640449438202;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f05b131))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4381d8))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f7fac71))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.625;
          result[1] += 0.375;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d8eca))) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 0.025;
          result[1] += 0.975;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e199c38))) ) ) {
          result[0] += 0.15;
          result[1] += 0.85;
        } else {
          result[0] += 0.02830188679245283;
          result[1] += 0.9716981132075472;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3cf0ed3e))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3d3aebc4))) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ecedbb6))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3eb096bc))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3d33b646))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f22a5a4))) ) ) {
          result[0] += 0.9;
          result[1] += 0.1;
        } else {
          result[0] += 0.375;
          result[1] += 0.625;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e07d6b6))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6dc67e))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f44d5a6))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f3447c3))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05185185185185185;
          result[1] += 0.9481481481481482;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ec6aa8e))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3efa3593))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6fbc2c))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e40fe48))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f59096c))) ) ) {
          result[0] += 0.18604651162790697;
          result[1] += 0.813953488372093;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f7e9889))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3d7a78))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.048;
          result[1] += 0.952;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f64d456))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e451d69))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3dcc2ce4))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f76368f))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0784313725490196;
          result[1] += 0.9215686274509803;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1583a5))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f13290a))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e79ed7c))) ) ) {
          result[0] += 0.5333333333333333;
          result[1] += 0.4666666666666667;
        } else {
          result[0] += 0.03418803418803419;
          result[1] += 0.9658119658119658;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ef670e3))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3dbfa97e))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3db6e829))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3cfc3b4f))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0.9565217391304348;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f02378b))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9782608695652174;
          result[1] += 0.021739130434782608;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e775b82))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f3679bc))) ) ) {
          result[0] += 0.875;
          result[1] += 0.125;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e666666))) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 0.06060606060606061;
          result[1] += 0.9393939393939394;
        }
      }
    }
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3cb866e4))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eda1a0e))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3a9df11a))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7a97e1))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3df91149))) ) ) {
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
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f5ca772))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ca1b5c8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f68f0))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.030534351145038167;
          result[1] += 0.9694656488549618;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ec22142))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ec5729b))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f485c68))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0.9411764705882353;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed11149))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f5d9ddc))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3da28241))) ) ) {
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f72bf88))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc2edbb))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0.9166666666666666;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ecb5936))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f240ad0))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f3447c3))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.050724637681159424;
          result[1] += 0.9492753623188406;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e952f1b))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d6f73c0))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ae9f6a9))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3a7cf80c))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e675f70))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d89c23c))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9444444444444444;
          result[1] += 0.05555555555555555;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ee1667b))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7d35a8))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f32afcd))) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
        } else {
          result[0] += 0.023255813953488372;
          result[1] += 0.9767441860465116;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3d5b57))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebca969))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e350dae))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e451d69))) ) ) {
          result[0] += 0.96;
          result[1] += 0.04;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f530b39))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ea816f0))) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.029197080291970802;
          result[1] += 0.9708029197080292;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e69e44f))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3cea7efa))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eba3982))) ) ) {
          result[0] += 0.2727272727272727;
          result[1] += 0.7272727272727273;
        } else {
          result[0] += 0.037383177570093455;
          result[1] += 0.9626168224299065;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f068eb4))) ) ) {
          result[0] += 0.43478260869565216;
          result[1] += 0.5652173913043478;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4cce70))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3cff0ed4))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dc31f8a))) ) ) {
          result[0] += 0.08571428571428572;
          result[1] += 0.9142857142857143;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5bdf9))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.02727272727272727;
          result[1] += 0.9727272727272728;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4c7a3a))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.36363636363636365;
          result[1] += 0.6363636363636364;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ee60fe4))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ec5729b))) ) ) {
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
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f076652))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3db9bbae))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.38461538461538464;
          result[1] += 0.6153846153846154;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06521739130434782;
          result[1] += 0.9347826086956522;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3c609fe8))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e332b56))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ceb1c43))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e227525))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f389aaa))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d3a2f06))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e68bac7))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e70afa3))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3df5696e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0.9642857142857143;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3edf6a94))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.035211267605633804;
          result[1] += 0.9647887323943662;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f5f37ca))) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d93e2d6))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e1c6e6e))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ee04ff4))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f421dfc))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e20a138))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76017a))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e6d46b2))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e27e133))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f68ad58))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.9333333333333333;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7bc99b))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e7fb7e9))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04419889502762431;
          result[1] += 0.9558011049723757;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f608af0))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4381d8))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.8888888888888888;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ed38f9b))) ) ) {
          result[0] += 0.14035087719298245;
          result[1] += 0.8596491228070176;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f38e8a8))) ) ) {
          result[0] += 0.5384615384615384;
          result[1] += 0.46153846153846156;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4dce08))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3e33775c))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3ec91490))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d766a55))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e4af102))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3f479abf))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.056179775280898875;
          result[1] += 0.9438202247191011;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f13e868))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ef924f2))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f6e656b))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07017543859649122;
          result[1] += 0.9298245614035088;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3ae3e7))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3c4bbc2c))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e9e8534))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.19607843137254902;
          result[1] += 0.803921568627451;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0.018691588785046728;
          result[1] += 0.9813084112149533;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f37e37e))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f22abde))) ) ) {
          result[0] += 0.3076923076923077;
          result[1] += 0.6923076923076923;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e9924f2))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f6bf8ca))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ee86984))) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0.9565217391304348;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f1abf88))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6;
          result[1] += 0.4;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3f067818))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f418fc5))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.017699115044247787;
          result[1] += 0.9823008849557522;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3cd44135))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e01b478))) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f200000))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f416e04))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10810810810810811;
          result[1] += 0.8918918918918919;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e216b12))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3efcf56f))) ) ) {
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
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f607b35))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f0c31ce))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f67b4a2))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdd590c))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f7e9889))) ) ) {
          result[0] += 0.06321839080459771;
          result[1] += 0.9367816091954023;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f7209fe))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f1ed2dc))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e927e52))) ) ) {
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
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ecfb4a2))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f35a31a))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e74c598))) ) ) {
          result[0] += 0.9583333333333334;
          result[1] += 0.041666666666666664;
        } else {
          result[0] += 0.7;
          result[1] += 0.3;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e847a3a))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f240ad0))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0873015873015873;
          result[1] += 0.9126984126984127;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f22a5a4))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dcaa10e))) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e216873))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7f3b64))) ) ) {
          result[0] += 0.038461538461538464;
          result[1] += 0.9615384615384616;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f60a2dc))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f457c70))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3edc4da9))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0ee4e2))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3c8533b1))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3b309e99))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1bf488))) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f23c504))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f628534))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4b8130))) ) ) {
          result[0] += 0.09523809523809523;
          result[1] += 0.9047619047619048;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x00000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3b170f7c))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3de23e18))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e1bf338))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eca6bf8))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f551cc1))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f77cd8a))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        } else {
          result[0] += 0.07432432432432433;
          result[1] += 0.9256756756756757;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3c947065))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f5327bb))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3eb510f5))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d7074a7))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ddf6fd2))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f0245a2))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ef2949a))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4bf823))) ) ) {
          result[0] += 0.06870229007633588;
          result[1] += 0.9312977099236641;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e90aefb))) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d9367a1))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3cfa2489))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f04e2c1))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3eaa0cf2))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f60e8a7))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f78f90a))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f7ac226))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f2255b0))) ) ) {
          result[0] += 0.07741935483870968;
          result[1] += 0.9225806451612903;
        } else {
          result[0] += 0.9;
          result[1] += 0.1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3c253b8e))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e8ba1f4))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e1be0df))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f36dea8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f34cc79))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08875739644970414;
          result[1] += 0.9112426035502958;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5b5200))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f1b57e6))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ea00fba))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3abeb5b3))) ) ) {
          result[0] += 0.6842105263157895;
          result[1] += 0.3157894736842105;
        } else {
          result[0] += 0.9803921568627451;
          result[1] += 0.0196078431372549;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f02ae7e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3e76833c))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f3b6a40))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f41042e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7ecb00))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3e6cec42))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e900736))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ea9ed7c))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3c943bf7))) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        } else {
          result[0] += 0.5625;
          result[1] += 0.4375;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1ab368))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3d67daa5))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e40956c))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f30f0d8))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
          result[0] += 0.39622641509433965;
          result[1] += 0.6037735849056604;
        } else {
          result[0] += 0.1048951048951049;
          result[1] += 0.8951048951048951;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3eef9b13))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e57d2c8))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f777fe0))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3dc45240))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.7;
          result[1] += 0.3;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f125365))) ) ) {
          result[0] += 0.07792207792207792;
          result[1] += 0.922077922077922;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7485b2))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3cf0ed3e))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f2d2d23))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f241f21))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f5921ab))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
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
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f040ebf))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e227d03))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ef9a36e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.12953367875647667;
          result[1] += 0.8704663212435233;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f75ec81))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
          result[0] += 0.7741935483870968;
          result[1] += 0.22580645161290322;
        } else {
          result[0] += 0.11627906976744186;
          result[1] += 0.8837209302325582;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da0663d))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f7e147b))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3eaa0cf2))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d932618))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edfb54a))) ) ) {
          result[0] += 0.46153846153846156;
          result[1] += 0.5384615384615384;
        } else {
          result[0] += 0.05223880597014925;
          result[1] += 0.9477611940298507;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d0c2507))) ) ) {
          result[0] += 0.9642857142857143;
          result[1] += 0.03571428571428571;
        } else {
          result[0] += 0.46153846153846156;
          result[1] += 0.5384615384615384;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ed1374c))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e1861a6))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e6edd06))) ) ) {
          result[0] += 0.9375;
          result[1] += 0.0625;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e5f6d33))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3f67f2e4))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e82bbed))) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
        } else {
          result[0] += 0.9777777777777777;
          result[1] += 0.022222222222222223;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f484428))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e7b83cf))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e8d38ef))) ) ) {
          result[0] += 0.2727272727272727;
          result[1] += 0.7272727272727273;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0.9411764705882353;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ed85532))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e4ff435))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f75ec81))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e979485))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7eaed1))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7b9043))) ) ) {
          result[0] += 0.08860759493670886;
          result[1] += 0.9113924050632911;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e90fc50))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5333333333333333;
          result[1] += 0.4666666666666667;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d614cec))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f08ef34))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3dc44285))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6923076923076923;
          result[1] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f780c74))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eaece9a))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e4a5e36))) ) ) {
          result[0] += 0.0625;
          result[1] += 0.9375;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f5d67cb))) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0.9722222222222222;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f021b5c))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7b44e5))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3c4c4ef9))) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f09ec80))) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d727bb2))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3de0aa65))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f7ab2c0))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3dc2f2fa))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3d82fad6))) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7daee6))) ) ) {
          result[0] += 0.075;
          result[1] += 0.925;
        } else {
          result[0] += 0.48;
          result[1] += 0.52;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f1b9faa))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3ddacc50))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e9a9f16))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0.6;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f7147ae))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08465608465608465;
          result[1] += 0.9153439153439153;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e45edd0))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e1f3e04))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e1290ac))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e127d02))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eb0cf18))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3c14317b))) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 0.8823529411764706;
          result[1] += 0.11764705882352941;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d966cf4))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07432432432432433;
          result[1] += 0.9256756756756757;
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4cbe0e))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f1d096c))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7bc99b))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.025157232704402517;
          result[1] += 0.9748427672955975;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f27bc2c))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.43478260869565216;
          result[1] += 0.5652173913043478;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3f119e84))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
