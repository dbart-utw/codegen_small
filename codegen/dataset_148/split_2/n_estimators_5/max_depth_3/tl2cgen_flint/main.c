
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.0077034183919114105;
        result[1] += 0.0077034183919114105;
        result[2] += 0.0091478093403948;
        result[3] += 0.9754453538757824;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9894736842105263;
        result[1] += 0;
        result[2] += 0.010526315789473684;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.18984962406015038;
        result[1] += 0;
        result[2] += 0.0009398496240601503;
        result[3] += 0.16541353383458646;
        result[4] += 0.6428571428571429;
        result[5] += 0.0009398496240601503;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0013577732518669382;
        result[2] += 0.009504412763068567;
        result[3] += 0.8805159538357095;
        result[4] += 0.10658520027155464;
        result[5] += 0.002036659877800407;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9996537396121884;
        result[1] += 0;
        result[2] += 0.00034626038781163435;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.698323480957457;
        result[1] += 0.001744355073166004;
        result[2] += 0.006395968601608681;
        result[3] += 0.29227638337048156;
        result[4] += 0;
        result[5] += 0.00019381723035177822;
        result[6] += 0.0010659947669347802;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41840000))) ) ) {
        result[0] += 0.42857142857142855;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5714285714285714;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995975855130784;
        result[5] += 0.00040241448692152917;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0024798512089274642;
        result[2] += 0.005579665220086794;
        result[3] += 0.990700557966522;
        result[4] += 0;
        result[5] += 0.0012399256044637321;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9958172996486532;
        result[1] += 0;
        result[2] += 0.0005019240421616195;
        result[3] += 0.00368077630918521;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7780934343434344;
        result[1] += 0;
        result[2] += 0.004419191919191919;
        result[3] += 0.21654040404040403;
        result[4] += 0;
        result[5] += 0.0003156565656565657;
        result[6] += 0.0006313131313131314;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993771587112847;
        result[1] += 0;
        result[2] += 0.0005095974180397486;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011324387067549969;
      } else {
        result[0] += 0.6962025316455697;
        result[1] += 0.003555681979803726;
        result[2] += 0.006684682122031006;
        result[3] += 0.2931304224150192;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00042668183757644715;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0.05702917771883289;
        result[1] += 0;
        result[2] += 0.004641909814323607;
        result[3] += 0.763262599469496;
        result[4] += 0.17307692307692307;
        result[5] += 0.001989389920424403;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.030837004405286344;
        result[2] += 0;
        result[3] += 0.046255506607929514;
        result[4] += 0.9229074889867841;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9711587806630402;
        result[1] += 0;
        result[2] += 0.000821102329877861;
        result[3] += 0.027917479215847276;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010263779123473263;
      } else {
        result[0] += 0.5577195467422096;
        result[1] += 0;
        result[2] += 0.009206798866855524;
        result[3] += 0.43201133144475923;
        result[4] += 0;
        result[5] += 0.000708215297450425;
        result[6] += 0.0003541076487252125;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41100000))) ) ) {
        result[0] += 0.25633106856084004;
        result[1] += 0.005558987029030266;
        result[2] += 0.03150092649783817;
        result[3] += 0.33539221741815933;
        result[4] += 0.3712168004941322;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8941176470588236;
        result[1] += 0.0012087026591458502;
        result[2] += 0.0012892828364222402;
        result[3] += 0.08372280419016921;
        result[4] += 0.01958098307816277;
        result[5] += 8.058017727639001e-05;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0.8444444444444444;
        result[1] += 0;
        result[2] += 0.0005133846718005134;
        result[3] += 0.1312797946461313;
        result[4] += 0.023615694902823614;
        result[5] += 0;
        result[6] += 0.00014668133480014669;
      } else {
        result[0] += 0.11017597551644988;
        result[1] += 0.001530221882172915;
        result[2] += 0;
        result[3] += 0.3947972456006121;
        result[4] += 0.4934965570007651;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9989429175475687;
        result[5] += 0.0010570824524312897;
        result[6] += 0;
      } else {
        result[0] += 0.13040181956027297;
        result[1] += 0;
        result[2] += 0.011372251705837758;
        result[3] += 0.8551933282789993;
        result[4] += 0;
        result[5] += 0.0030326004548900686;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9949753646519343;
        result[1] += 9.756573491389824e-05;
        result[2] += 0.0005853944094833894;
        result[3] += 0.0043416752036684715;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8107712927988303;
        result[1] += 0.0010357012306567565;
        result[2] += 0.005056658949677105;
        result[3] += 0.18203972218837577;
        result[4] += 0;
        result[5] += 0.00012184720360667723;
        result[6] += 0.0009747776288534178;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.021377672209026127;
        result[2] += 0.003167062549485352;
        result[3] += 0.9754552652414885;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9703947368421053;
        result[1] += 0;
        result[2] += 0.029605263157894735;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.005982512655315232;
        result[1] += 0.008743672342383801;
        result[2] += 0.009664058904739991;
        result[3] += 0.975609756097561;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9872340425531915;
        result[1] += 0;
        result[2] += 0.01276595744680851;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9444310052873485;
        result[1] += 0.0006220409855893839;
        result[2] += 0.0015551024639734597;
        result[3] += 0.051905864464180815;
        result[4] += 0.0013477554687769985;
        result[5] += 3.455783253274355e-05;
        result[6] += 0.00010367349759823065;
      } else {
        result[0] += 0.6459016393442623;
        result[1] += 0;
        result[2] += 0.006783493499152063;
        result[3] += 0.3450537026568683;
        result[4] += 0.0014697569248162804;
        result[5] += 0.0003391746749576032;
        result[6] += 0.0004522328999434709;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        result[0] += 0.75;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
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
  result[6] /= 5;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
