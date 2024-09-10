
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 30317416;
        result[1] += 10105805;
        result[2] += 0;
        result[3] += 0;
        result[4] += 784884219;
        result[5] += 33686018;
      } else {
        result[0] += 40740043;
        result[1] += 10357638;
        result[2] += 2071527;
        result[3] += 149149989;
        result[4] += 49026154;
        result[5] += 607648106;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        result[0] += 8555711;
        result[1] += 780280910;
        result[2] += 11977996;
        result[3] += 0;
        result[4] += 58178839;
        result[5] += 0;
      } else {
        result[0] += 577766248;
        result[1] += 25519710;
        result[2] += 44914690;
        result[3] += 61247305;
        result[4] += 75027949;
        result[5] += 74517554;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 32012178;
        result[2] += 138719440;
        result[3] += 256097428;
        result[4] += 96036535;
        result[5] += 336127875;
      } else {
        result[0] += 66810602;
        result[1] += 66810602;
        result[2] += 649017280;
        result[3] += 19088743;
        result[4] += 28633115;
        result[5] += 28633115;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 376751517;
        result[3] += 376751517;
        result[4] += 0;
        result[5] += 105490424;
      } else {
        result[0] += 8239745;
        result[1] += 0;
        result[2] += 799255304;
        result[3] += 48408504;
        result[4] += 0;
        result[5] += 3089904;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 2882528;
        result[1] += 5765056;
        result[2] += 0;
        result[3] += 0;
        result[4] += 827285646;
        result[5] += 23060227;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 429496729;
        result[3] += 0;
        result[4] += 0;
        result[5] += 429496729;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 17240718;
        result[1] += 0;
        result[2] += 1014159;
        result[3] += 47665516;
        result[4] += 63892075;
        result[5] += 729180988;
      } else {
        result[0] += 52505712;
        result[1] += 6300685;
        result[2] += 6300685;
        result[3] += 375940902;
        result[4] += 46205027;
        result[5] += 371740445;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
        result[0] += 31595161;
        result[1] += 815550111;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11848185;
        result[5] += 0;
      } else {
        result[0] += 574106599;
        result[1] += 74200569;
        result[2] += 21664399;
        result[3] += 52536169;
        result[4] += 95323359;
        result[5] += 41162359;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 47197442;
        result[1] += 21238849;
        result[2] += 351620948;
        result[3] += 252506318;
        result[4] += 49557314;
        result[5] += 136872584;
      } else {
        result[0] += 2931718;
        result[1] += 977239;
        result[2] += 775928107;
        result[3] += 61566084;
        result[4] += 0;
        result[5] += 17590309;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 10349318;
        result[2] += 13799091;
        result[3] += 27598183;
        result[4] += 741701179;
        result[5] += 65545685;
      } else {
        result[0] += 31005506;
        result[1] += 2114011;
        result[2] += 2818682;
        result[3] += 113451966;
        result[4] += 73990412;
        result[5] += 635612879;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 737519636;
        result[2] += 0;
        result[3] += 0;
        result[4] += 121473822;
        result[5] += 0;
      } else {
        result[0] += 585021924;
        result[1] += 14419554;
        result[2] += 52528376;
        result[3] += 81367485;
        result[4] += 67462915;
        result[5] += 58193201;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 54829369;
        result[3] += 54829369;
        result[4] += 127935196;
        result[5] += 621399523;
      } else {
        result[0] += 0;
        result[1] += 24311135;
        result[2] += 413289305;
        result[3] += 299837339;
        result[4] += 24311135;
        result[5] += 97244542;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 334053011;
        result[3] += 190887435;
        result[4] += 0;
        result[5] += 334053011;
      } else {
        result[0] += 13929623;
        result[1] += 928641;
        result[2] += 796774473;
        result[3] += 39002946;
        result[4] += 0;
        result[5] += 8357774;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 58236844;
        result[2] += 0;
        result[3] += 3639802;
        result[4] += 731600361;
        result[5] += 65516450;
      } else {
        result[0] += 24757016;
        result[1] += 2250637;
        result[2] += 17254890;
        result[3] += 121534445;
        result[4] += 47263395;
        result[5] += 645933072;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 813495924;
        result[2] += 0;
        result[3] += 0;
        result[4] += 45497534;
        result[5] += 0;
      } else {
        result[0] += 495345299;
        result[1] += 26886267;
        result[2] += 63797922;
        result[3] += 91595588;
        result[4] += 113924861;
        result[5] += 67443518;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15907286;
        result[3] += 159072862;
        result[4] += 47721858;
        result[5] += 636291451;
      } else {
        result[0] += 73517458;
        result[1] += 58040098;
        result[2] += 456582108;
        result[3] += 150904256;
        result[4] += 34824059;
        result[5] += 85125477;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bc0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 858993459;
      } else {
        result[0] += 1064428;
        result[1] += 0;
        result[2] += 799385486;
        result[3] += 54285831;
        result[4] += 0;
        result[5] += 4257712;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 7785439;
        result[1] += 31141756;
        result[2] += 0;
        result[3] += 0;
        result[4] += 721450699;
        result[5] += 98615563;
      } else {
        result[0] += 44343320;
        result[1] += 7601712;
        result[2] += 15836900;
        result[3] += 153934668;
        result[4] += 43709844;
        result[5] += 593567014;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 571361645;
        result[1] += 37904967;
        result[2] += 49610913;
        result[3] += 44594079;
        result[4] += 105910939;
        result[5] += 49610913;
      } else {
        result[0] += 9216668;
        result[1] += 846090123;
        result[2] += 1843333;
        result[3] += 0;
        result[4] += 1843333;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0;
        result[1] += 773094113;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 35301101;
        result[1] += 0;
        result[2] += 176505505;
        result[3] += 235340673;
        result[4] += 29417584;
        result[5] += 382428594;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 70281283;
        result[1] += 0;
        result[2] += 452923823;
        result[3] += 210843849;
        result[4] += 7809031;
        result[5] += 117135471;
      } else {
        result[0] += 8927183;
        result[1] += 0;
        result[2] += 786584079;
        result[3] += 60506467;
        result[4] += 0;
        result[5] += 2975727;
      }
    }
  }
  
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
