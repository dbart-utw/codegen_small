
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 11848185;
        result[2] += 0;
        result[3] += 20734324;
        result[4] += 770132066;
        result[5] += 56278881;
      } else {
        result[0] += 27360532;
        result[1] += 13362120;
        result[2] += 11453246;
        result[3] += 171162400;
        result[4] += 57266230;
        result[5] += 578388929;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        result[0] += 1917396;
        result[1] += 839819497;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17256565;
        result[5] += 0;
      } else {
        result[0] += 526089358;
        result[1] += 33290410;
        result[2] += 49935615;
        result[3] += 79695224;
        result[4] += 101888830;
        result[5] += 68094020;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 176851594;
        result[3] += 0;
        result[4] += 0;
        result[5] += 682141864;
      } else {
        result[0] += 27709466;
        result[1] += 9236488;
        result[2] += 397169018;
        result[3] += 267858175;
        result[4] += 18472977;
        result[5] += 138547332;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 645909810;
        result[3] += 183118760;
        result[4] += 0;
        result[5] += 29964888;
      } else {
        result[0] += 2643056;
        result[1] += 0;
        result[2] += 823312192;
        result[3] += 31716681;
        result[4] += 0;
        result[5] += 1321528;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 2526451;
        result[1] += 22738062;
        result[2] += 0;
        result[3] += 15158708;
        result[4] += 699827023;
        result[5] += 118743213;
      } else {
        result[0] += 28704877;
        result[1] += 2870487;
        result[2] += 717621;
        result[3] += 124866217;
        result[4] += 33010609;
        result[5] += 668823645;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 495390819;
        result[1] += 59257275;
        result[2] += 43613354;
        result[3] += 73004962;
        result[4] += 119936724;
        result[5] += 67790322;
      } else {
        result[0] += 12300622;
        result[1] += 838492421;
        result[2] += 4100207;
        result[3] += 4100207;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 118937555;
        result[3] += 594687779;
        result[4] += 0;
        result[5] += 145368123;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 657501166;
        result[3] += 159072862;
        result[4] += 0;
        result[5] += 42419430;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 51967575;
        result[1] += 0;
        result[2] += 651123155;
        result[3] += 113105900;
        result[4] += 0;
        result[5] += 42796827;
      } else {
        result[0] += 2722641;
        result[1] += 0;
        result[2] += 839934967;
        result[3] += 10890566;
        result[4] += 0;
        result[5] += 5445283;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 11228672;
        result[1] += 61757699;
        result[2] += 0;
        result[3] += 0;
        result[4] += 766356909;
        result[5] += 19650177;
      } else {
        result[0] += 33220741;
        result[1] += 18305306;
        result[2] += 10169614;
        result[3] += 143730555;
        result[4] += 37288587;
        result[5] += 616278653;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
        result[0] += 10349318;
        result[1] += 813456456;
        result[2] += 6209591;
        result[3] += 8279455;
        result[4] += 20698637;
        result[5] += 0;
      } else {
        result[0] += 503464263;
        result[1] += 33952310;
        result[2] += 50443432;
        result[3] += 75665149;
        result[4] += 119318120;
        result[5] += 76150182;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 134217727;
        result[4] += 0;
        result[5] += 671088639;
      } else {
        result[0] += 6557201;
        result[1] += 0;
        result[2] += 478675744;
        result[3] += 236059271;
        result[4] += 0;
        result[5] += 137701241;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
        result[0] += 0;
        result[1] += 780903144;
        result[2] += 78090314;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 6733431;
        result[1] += 0;
        result[2] += 794544901;
        result[3] += 45210182;
        result[4] += 2885756;
        result[5] += 9619187;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 24196998;
        result[2] += 0;
        result[3] += 12098499;
        result[4] += 792451712;
        result[5] += 30246248;
      } else {
        result[0] += 29866741;
        result[1] += 9089877;
        result[2] += 14284093;
        result[3] += 156475754;
        result[4] += 68174084;
        result[5] += 581102906;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 5448161;
        result[1] += 799063682;
        result[2] += 0;
        result[3] += 5448161;
        result[4] += 45401345;
        result[5] += 3632107;
      } else {
        result[0] += 565804074;
        result[1] += 28290203;
        result[2] += 49893632;
        result[3] += 77155101;
        result[4] += 74068897;
        result[5] += 63781550;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 18084072;
        result[1] += 90420364;
        result[2] += 90420364;
        result[3] += 153714618;
        result[4] += 18084072;
        result[5] += 488269966;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 468541886;
        result[3] += 299346205;
        result[4] += 0;
        result[5] += 91105366;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 16330674;
        result[1] += 0;
        result[2] += 679356043;
        result[3] += 133911527;
        result[4] += 0;
        result[5] += 29395213;
      } else {
        result[0] += 9222322;
        result[1] += 0;
        result[2] += 827374067;
        result[3] += 19762119;
        result[4] += 0;
        result[5] += 2634949;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 16440066;
        result[2] += 4110016;
        result[3] += 4110016;
        result[4] += 805563243;
        result[5] += 28770115;
      } else {
        result[0] += 9236488;
        result[1] += 8466781;
        result[2] += 10006196;
        result[3] += 116225817;
        result[4] += 43103614;
        result[5] += 671954560;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 460130411;
        result[1] += 48763820;
        result[2] += 45429542;
        result[3] += 110031185;
        result[4] += 109614400;
        result[5] += 85024097;
      } else {
        result[0] += 13791179;
        result[1] += 815649752;
        result[2] += 1970168;
        result[3] += 7880673;
        result[4] += 19701684;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 162512276;
        result[3] += 139296236;
        result[4] += 0;
        result[5] += 557184946;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 400863614;
        result[3] += 343597383;
        result[4] += 0;
        result[5] += 114532461;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 24148410;
        result[1] += 10349318;
        result[2] += 669255947;
        result[3] += 127641598;
        result[4] += 0;
        result[5] += 27598183;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 840665006;
        result[3] += 15884658;
        result[4] += 0;
        result[5] += 2443793;
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
