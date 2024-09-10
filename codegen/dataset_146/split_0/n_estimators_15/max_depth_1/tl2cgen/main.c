
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
    result[0] += 0.31166448230668414;
    result[1] += 0.12608125819134994;
    result[2] += 0.0309305373525557;
    result[3] += 0.09777195281782437;
    result[4] += 0.14626474442988205;
    result[5] += 0.2872870249017038;
  } else {
    result[0] += 0.008902077151335314;
    result[1] += 0.001978239366963403;
    result[2] += 0.818001978239367;
    result[3] += 0.11177052423343226;
    result[4] += 0.003956478733926806;
    result[5] += 0.05539070227497528;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    result[0] += 0.30588552915766737;
    result[1] += 0.1376889848812095;
    result[2] += 0.026727861771058316;
    result[3] += 0.09719222462203024;
    result[4] += 0.14794816414686826;
    result[5] += 0.2845572354211663;
  } else {
    result[0] += 0.008912655971479501;
    result[1] += 0.0053475935828877;
    result[2] += 0.803921568627451;
    result[3] += 0.10695187165775401;
    result[4] += 0.00980392156862745;
    result[5] += 0.06506238859180036;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    result[0] += 0.32246860806839434;
    result[1] += 0.13331552230830884;
    result[2] += 0.028319529788939354;
    result[3] += 0.08201977023777718;
    result[4] += 0.14106331819396206;
    result[5] += 0.2928132514026182;
  } else {
    result[0] += 0.0221606648199446;
    result[1] += 0.008310249307479225;
    result[2] += 0.7959372114496768;
    result[3] += 0.12280701754385964;
    result[4] += 0.0046168051708217915;
    result[5] += 0.046168051708217916;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    result[0] += 0.34006255331248225;
    result[1] += 0.13363662212112595;
    result[2] += 0.015638328120557293;
    result[3] += 0.07648564117145294;
    result[4] += 0.15353994882001706;
    result[5] += 0.2806369064543645;
  } else {
    result[0] += 0.016042780748663107;
    result[1] += 0.004583651642475173;
    result[2] += 0.7356760886172652;
    result[3] += 0.14973262032085563;
    result[4] += 0.016042780748663107;
    result[5] += 0.07792207792207793;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    result[0] += 0.3011093502377179;
    result[1] += 0.14368726888536715;
    result[2] += 0.034601162176439514;
    result[3] += 0.10353935552033809;
    result[4] += 0.13444268357105124;
    result[5] += 0.2826201796090861;
  } else {
    result[0] += 0.0125;
    result[1] += 0.006730769230769231;
    result[2] += 0.8259615384615384;
    result[3] += 0.10096153846153846;
    result[4] += 0.0028846153846153848;
    result[5] += 0.05096153846153846;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    result[0] += 0.026727509778357236;
    result[1] += 0.003259452411994785;
    result[2] += 0.009126466753585397;
    result[3] += 0.1290743155149935;
    result[4] += 0.19947848761408082;
    result[5] += 0.6323337679269883;
  } else {
    result[0] += 0.34386391251518833;
    result[1] += 0.15522478736330497;
    result[2] += 0.29981773997569866;
    result[3] += 0.08414337788578372;
    result[4] += 0.0692588092345079;
    result[5] += 0.047691373025516404;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.32689253573319216;
    result[1] += 0.12890418210693488;
    result[2] += 0.02514557967178401;
    result[3] += 0.08125992588671255;
    result[4] += 0.144785600847009;
    result[5] += 0.2930121757543674;
  } else {
    result[0] += 0.015267175572519083;
    result[1] += 0;
    result[2] += 0.8291984732824428;
    result[3] += 0.125;
    result[4] += 0.003816793893129771;
    result[5] += 0.026717557251908396;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    result[0] += 0.31568894952251025;
    result[1] += 0.15006821282401092;
    result[2] += 0.029740791268758525;
    result[3] += 0.09058663028649386;
    result[4] += 0.14679399727148704;
    result[5] += 0.26712141882673945;
  } else {
    result[0] += 0.01119724375538329;
    result[1] += 0.002583979328165375;
    result[2] += 0.7631352282515074;
    result[3] += 0.12489233419465978;
    result[4] += 0.02239448751076658;
    result[5] += 0.07579672695951765;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    result[0] += 0.02631578947368421;
    result[1] += 0.01349527665317139;
    result[2] += 0.014844804318488529;
    result[3] += 0.14642375168690958;
    result[4] += 0.1882591093117409;
    result[5] += 0.6106612685560054;
  } else {
    result[0] += 0.33881578947368424;
    result[1] += 0.14683014354066987;
    result[2] += 0.2972488038277512;
    result[3] += 0.08433014354066985;
    result[4] += 0.0735645933014354;
    result[5] += 0.05921052631578947;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3363888888888889;
    result[1] += 0.1475;
    result[2] += 0.009444444444444445;
    result[3] += 0.07666666666666666;
    result[4] += 0.14472222222222222;
    result[5] += 0.2852777777777778;
  } else {
    result[0] += 0.015497553017944535;
    result[1] += 0;
    result[2] += 0.7495921696574225;
    result[3] += 0.1729200652528548;
    result[4] += 0.0024469820554649264;
    result[5] += 0.05954323001631321;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.32262382864792505;
    result[1] += 0.13333333333333333;
    result[2] += 0.030254350736278447;
    result[3] += 0.09344042838018742;
    result[4] += 0.1386880856760375;
    result[5] += 0.2816599732262383;
  } else {
    result[0] += 0.011915673693858845;
    result[1] += 0.0018331805682859762;
    result[2] += 0.8267644362969753;
    result[3] += 0.1145737855178735;
    result[4] += 0.013748854262144821;
    result[5] += 0.031164069660861594;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    result[0] += 0.3187048434573187;
    result[1] += 0.13406475782713406;
    result[2] += 0.033181696548033185;
    result[3] += 0.09526358041209526;
    result[4] += 0.1418249933101418;
    result[5] += 0.27696012844527695;
  } else {
    result[0] += 0.011019283746556474;
    result[1] += 0.0036730945821854912;
    result[2] += 0.830119375573921;
    result[3] += 0.10927456382001836;
    result[4] += 0.0009182736455463728;
    result[5] += 0.04499540863177227;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.3048910154173312;
    result[1] += 0.13104731525784158;
    result[2] += 0.03561935140882509;
    result[3] += 0.09330143540669857;
    result[4] += 0.14035087719298245;
    result[5] += 0.2947900053163211;
  } else {
    result[0] += 0.007518796992481203;
    result[1] += 0.009398496240601503;
    result[2] += 0.8129699248120301;
    result[3] += 0.11090225563909774;
    result[4] += 0.011278195488721804;
    result[5] += 0.047932330827067667;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    result[0] += 0.33101336302895323;
    result[1] += 0.14643652561247217;
    result[2] += 0.021158129175946547;
    result[3] += 0.07210467706013363;
    result[4] += 0.1428173719376392;
    result[5] += 0.28646993318485525;
  } else {
    result[0] += 0.014586709886547812;
    result[1] += 0.005672609400324149;
    result[2] += 0.7260940032414911;
    result[3] += 0.15883306320907617;
    result[4] += 0.022690437601296597;
    result[5] += 0.07212317666126418;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    result[0] += 0.3065354115395133;
    result[1] += 0.14520098441345367;
    result[2] += 0.018594476346732298;
    result[3] += 0.09461307082307904;
    result[4] += 0.14137270987147937;
    result[5] += 0.29368334700574245;
  } else {
    result[0] += 0.013686911890504704;
    result[1] += 0;
    result[2] += 0.7972626176218991;
    result[3] += 0.14456800684345594;
    result[4] += 0.001710863986313088;
    result[5] += 0.0427715996578272;
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
