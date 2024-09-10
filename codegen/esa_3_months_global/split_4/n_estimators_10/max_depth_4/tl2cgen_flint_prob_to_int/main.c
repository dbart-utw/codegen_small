
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 429496729;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429097739;
          result[1] += 398990;
        }
      } else {
        result[0] += 0;
        result[1] += 429496729;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          result[0] += 399729629;
          result[1] += 29767100;
        } else {
          result[0] += 103375;
          result[1] += 429393353;
        }
      } else {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f402eb2))) ) ) {
          result[0] += 390145919;
          result[1] += 39350810;
        } else {
          result[0] += 427761092;
          result[1] += 1735637;
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 429496729;
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
          result[0] += 361404255;
          result[1] += 68092474;
        } else {
          result[0] += 426770667;
          result[1] += 2726061;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee3ce8c))) ) ) {
          result[0] += 44984;
          result[1] += 429451745;
        } else {
          result[0] += 429496729;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
          result[0] += 338284681;
          result[1] += 91212047;
        } else {
          result[0] += 428860943;
          result[1] += 635786;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
      result[0] += 429496729;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 429496729;
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
          result[0] += 429496729;
          result[1] += 0;
        } else {
          result[0] += 403876919;
          result[1] += 25619809;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          result[0] += 33851;
          result[1] += 429462877;
        } else {
          result[0] += 193766393;
          result[1] += 235730336;
        }
      }
    } else {
      if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f41f48b))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 420857822;
          result[1] += 8638906;
        }
      } else {
        result[0] += 0;
        result[1] += 429496729;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 328192150;
          result[1] += 101304578;
        } else {
          result[0] += 421761455;
          result[1] += 7735274;
        }
      }
    } else {
      if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36bc04))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
          result[0] += 2517002;
          result[1] += 426979727;
        } else {
          result[0] += 402276606;
          result[1] += 27220122;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429466807;
          result[1] += 29921;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      result[0] += 429496729;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eb6a79e))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429496729;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 423567106;
          result[1] += 5929622;
        }
      }
    }
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37ca16))) ) ) {
          result[0] += 429496729;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        result[0] += 429496729;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 426022138;
          result[1] += 3474591;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          result[0] += 15255546;
          result[1] += 414241182;
        } else {
          result[0] += 410435477;
          result[1] += 19061251;
        }
      }
    }
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      result[0] += 429496729;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a41))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429496729;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
          result[0] += 428070818;
          result[1] += 1425910;
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      } else {
        if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
          result[0] += 160049323;
          result[1] += 269447406;
        } else {
          result[0] += 367077486;
          result[1] += 62419243;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 429496729;
  } else {
    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        result[0] += 429496729;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          result[0] += 402546426;
          result[1] += 26950302;
        } else {
          result[0] += 95706751;
          result[1] += 333789977;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          result[0] += 1102687;
          result[1] += 428394042;
        } else {
          result[0] += 427718092;
          result[1] += 1778636;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
          result[0] += 424844410;
          result[1] += 4652319;
        } else {
          result[0] += 227003302;
          result[1] += 202493427;
        }
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 196850194;
          result[1] += 232646535;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1072de))) ) ) {
          result[0] += 429496729;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e853e30))) ) ) {
          result[0] += 16055952;
          result[1] += 413440776;
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      } else {
        if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f372d04))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 427719501;
          result[1] += 1777227;
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
      } else {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af03caf))) ) ) {
          result[0] += 40518559;
          result[1] += 388978170;
        } else {
          result[0] += 425201762;
          result[1] += 4294967;
        }
      }
    }
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 429496729;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          result[0] += 293421282;
          result[1] += 136075446;
        } else {
          result[0] += 422446381;
          result[1] += 7050347;
        }
      } else {
        result[0] += 0;
        result[1] += 429496729;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea2cada))) ) ) {
          result[0] += 429335785;
          result[1] += 160944;
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      }
    }
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_4/test_data.csv", "r");
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
