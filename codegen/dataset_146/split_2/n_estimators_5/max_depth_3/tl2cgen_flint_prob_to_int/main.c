
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 36945955;
        result[2] += 0;
        result[3] += 36945955;
        result[4] += 748155593;
        result[5] += 36945955;
      } else {
        result[0] += 35843797;
        result[1] += 4401869;
        result[2] += 6288385;
        result[3] += 154065444;
        result[4] += 56595469;
        result[5] += 601798492;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 541572058;
        result[1] += 59673217;
        result[2] += 56163028;
        result[3] += 60174673;
        result[4] += 85247453;
        result[5] += 56163028;
      } else {
        result[0] += 10764329;
        result[1] += 837464800;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10764329;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 8027976;
        result[1] += 24083928;
        result[2] += 144503572;
        result[3] += 345202978;
        result[4] += 88307738;
        result[5] += 248867263;
      } else {
        result[0] += 0;
        result[1] += 15761347;
        result[2] += 583169871;
        result[3] += 173374826;
        result[4] += 15761347;
        result[5] += 70926065;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 601295421;
        result[1] += 257698037;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2037944;
        result[1] += 0;
        result[2] += 792760274;
        result[3] += 56043464;
        result[4] += 0;
        result[5] += 8151776;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 16647160;
        result[2] += 0;
        result[3] += 6658864;
        result[4] += 722486746;
        result[5] += 113200688;
      } else {
        result[0] += 12687131;
        result[1] += 6716716;
        result[2] += 4477811;
        result[3] += 91048828;
        result[4] += 32837282;
        result[5] += 711225687;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 18611524;
        result[1] += 629928536;
        result[2] += 1431655;
        result[3] += 8589934;
        result[4] += 197568495;
        result[5] += 2863311;
      } else {
        result[0] += 535444218;
        result[1] += 25804540;
        result[2] += 47142910;
        result[3] += 97263268;
        result[4] += 59548939;
        result[5] += 93789580;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 14559211;
        result[2] += 152871717;
        result[3] += 422217123;
        result[4] += 7279605;
        result[5] += 262065801;
      } else {
        result[0] += 6710886;
        result[1] += 0;
        result[2] += 577136230;
        result[3] += 208037478;
        result[4] += 6710886;
        result[5] += 60397977;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 343597383;
        result[1] += 214748364;
        result[2] += 128849018;
        result[3] += 171798691;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 11523082;
        result[1] += 0;
        result[2] += 802425597;
        result[3] += 40854566;
        result[4] += 0;
        result[5] += 4190211;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 11012736;
        result[1] += 0;
        result[2] += 7341824;
        result[3] += 3670912;
        result[4] += 807600687;
        result[5] += 29367297;
      } else {
        result[0] += 30654537;
        result[1] += 7330432;
        result[2] += 3998417;
        result[3] += 134613404;
        result[4] += 51313030;
        result[5] += 631083635;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 728099217;
        result[2] += 0;
        result[3] += 0;
        result[4] += 127621885;
        result[5] += 3272356;
      } else {
        result[0] += 637335921;
        result[1] += 12972324;
        result[2] += 42865070;
        result[3] += 62605563;
        result[4] += 48505211;
        result[5] += 54709366;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 31814572;
        result[2] += 47721858;
        result[3] += 63629145;
        result[4] += 254516580;
        result[5] += 461311302;
      } else {
        result[0] += 7279605;
        result[1] += 7279605;
        result[2] += 265705603;
        result[3] += 447695743;
        result[4] += 0;
        result[5] += 131032900;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 211444543;
        result[1] += 0;
        result[2] += 449319655;
        result[3] += 105722271;
        result[4] += 26430567;
        result[5] += 66076419;
      } else {
        result[0] += 4772185;
        result[1] += 0;
        result[2] += 791228419;
        result[3] += 55357356;
        result[4] += 0;
        result[5] += 7635497;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 3046076;
        result[1] += 3046076;
        result[2] += 0;
        result[3] += 0;
        result[4] += 816348393;
        result[5] += 36552913;
      } else {
        result[0] += 0;
        result[1] += 751619276;
        result[2] += 0;
        result[3] += 0;
        result[4] += 107374182;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
        result[0] += 767611176;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 73105826;
        result[5] += 18276456;
      } else {
        result[0] += 7485781;
        result[1] += 11228672;
        result[2] += 4366706;
        result[3] += 167806274;
        result[4] += 49905211;
        result[5] += 618200811;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 11977996;
        result[1] += 746058063;
        result[2] += 1711142;
        result[3] += 0;
        result[4] += 90690544;
        result[5] += 8555711;
      } else {
        result[0] += 650922013;
        result[1] += 45962050;
        result[2] += 13043284;
        result[3] += 42235397;
        result[4] += 67079749;
        result[5] += 39750962;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 13854733;
        result[1] += 0;
        result[2] += 487686608;
        result[3] += 235530464;
        result[4] += 0;
        result[5] += 121921652;
      } else {
        result[0] += 17772278;
        result[1] += 987348;
        result[2] += 790866391;
        result[3] += 43443347;
        result[4] += 0;
        result[5] += 5924092;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 11767033;
        result[2] += 0;
        result[3] += 15689378;
        result[4] += 772701878;
        result[5] += 58835168;
      } else {
        result[0] += 18152862;
        result[1] += 0;
        result[2] += 726114;
        result[3] += 103834374;
        result[4] += 66802534;
        result[5] += 669477573;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 10873334;
        result[1] += 683466766;
        result[2] += 7766667;
        result[3] += 0;
        result[4] += 149120021;
        result[5] += 7766667;
      } else {
        result[0] += 568779277;
        result[1] += 26843545;
        result[2] += 38999113;
        result[3] += 76985262;
        result[4] += 69388032;
        result[5] += 77998226;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 13854733;
        result[1] += 27709466;
        result[2] += 90055765;
        result[3] += 436424096;
        result[4] += 34636833;
        result[5] += 256312564;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 487313596;
        result[3] += 305603442;
        result[4] += 0;
        result[5] += 66076419;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 644245094;
        result[1] += 53687091;
        result[2] += 161061273;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 9226567;
        result[1] += 922656;
        result[2] += 775954349;
        result[3] += 68276601;
        result[4] += 922656;
        result[5] += 3690627;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
