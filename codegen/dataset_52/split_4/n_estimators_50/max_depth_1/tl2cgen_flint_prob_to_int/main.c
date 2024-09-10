
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8e3886))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 14316557;
    result[1] += 71582788;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    result[0] += 62992853;
    result[1] += 22906492;
  } else {
    result[0] += 15392368;
    result[1] += 70506977;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 59157096;
    result[1] += 26742249;
  } else {
    result[0] += 16961017;
    result[1] += 68938328;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
    result[0] += 79975253;
    result[1] += 5924092;
  } else {
    result[0] += 22392564;
    result[1] += 63506781;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 22642923;
    result[1] += 63256422;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 22955859;
    result[1] += 62943486;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 17341182;
    result[1] += 68558163;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20452225;
    result[1] += 65447120;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 20263435;
    result[1] += 65635910;
  } else {
    result[0] += 74530314;
    result[1] += 11369031;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df4341a))) ) ) {
    result[0] += 60026048;
    result[1] += 25873296;
  } else {
    result[0] += 21474836;
    result[1] += 64424509;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 17895697;
    result[1] += 68003648;
  } else {
    result[0] += 71381146;
    result[1] += 14518199;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 60805154;
    result[1] += 25094190;
  } else {
    result[0] += 19253301;
    result[1] += 66646044;
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7d35a8))) ) ) {
    result[0] += 26820892;
    result[1] += 59078453;
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d530164))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 22369621;
    result[1] += 63529724;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
    result[0] += 55221008;
    result[1] += 30678337;
  } else {
    result[0] += 16316076;
    result[1] += 69583269;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 17179869;
    result[1] += 68719476;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    result[0] += 82831512;
    result[1] += 3067833;
  } else {
    result[0] += 18673770;
    result[1] += 67225575;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3dbfa97e))) ) ) {
    result[0] += 55357356;
    result[1] += 30541989;
  } else {
    result[0] += 19861120;
    result[1] += 66038225;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 54663220;
    result[1] += 31236125;
  } else {
    result[0] += 16281575;
    result[1] += 69617770;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e049f94))) ) ) {
    result[0] += 56342581;
    result[1] += 29556764;
  } else {
    result[0] += 15158708;
    result[1] += 70740637;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20615843;
    result[1] += 65283502;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 73078548;
    result[1] += 12820797;
  } else {
    result[0] += 15777430;
    result[1] += 70121915;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 78229761;
    result[1] += 7669584;
  } else {
    result[0] += 13279125;
    result[1] += 72620219;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 24807138;
    result[1] += 61092207;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 17362633;
    result[1] += 68536712;
  } else {
    result[0] += 73300775;
    result[1] += 12598570;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 84146298;
    result[1] += 1753047;
  } else {
    result[0] += 18062946;
    result[1] += 67836399;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 13963933;
    result[1] += 71935412;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 28275201;
    result[1] += 57624144;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3dab923a))) ) ) {
    result[0] += 61356675;
    result[1] += 24542670;
  } else {
    result[0] += 21474836;
    result[1] += 64424509;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0ee4e2))) ) ) {
    result[0] += 62472251;
    result[1] += 23427094;
  } else {
    result[0] += 21705748;
    result[1] += 64193597;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f70850a))) ) ) {
    result[0] += 83372894;
    result[1] += 2526451;
  } else {
    result[0] += 31133824;
    result[1] += 54765521;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 18941907;
    result[1] += 66957438;
  } else {
    result[0] += 78319991;
    result[1] += 7579354;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 17673071;
    result[1] += 68226274;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20883785;
    result[1] += 65015559;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    result[0] += 81531582;
    result[1] += 4367763;
  } else {
    result[0] += 17264084;
    result[1] += 68635261;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f761f9f))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 27459626;
    result[1] += 58439718;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
    result[0] += 67043391;
    result[1] += 18855953;
  } else {
    result[0] += 23729101;
    result[1] += 62170244;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 17819545;
    result[1] += 68079800;
  } else {
    result[0] += 77882073;
    result[1] += 8017272;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 17539657;
    result[1] += 68359688;
  } else {
    result[0] += 72775834;
    result[1] += 13123511;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 58662967;
    result[1] += 27236377;
  } else {
    result[0] += 19457862;
    result[1] += 66441483;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 18064669;
    result[1] += 67834676;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b90ea))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 20139081;
    result[1] += 65760264;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 82109668;
    result[1] += 3789677;
  } else {
    result[0] += 17620378;
    result[1] += 68278967;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ee883ba))) ) ) {
    result[0] += 57025616;
    result[1] += 28873729;
  } else {
    result[0] += 20281790;
    result[1] += 65617555;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 79850096;
    result[1] += 6049249;
  } else {
    result[0] += 15658734;
    result[1] += 70240610;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 13563054;
    result[1] += 72336291;
  } else {
    result[0] += 74132312;
    result[1] += 11767033;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 15290983;
    result[1] += 70608362;
  } else {
    result[0] += 73968881;
    result[1] += 11930464;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25242351;
    result[1] += 60656994;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 25396328;
    result[1] += 60503017;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    result[0] += 16760847;
    result[1] += 69138497;
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
