
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    result[0] += 0.30121786197564276;
    result[1] += 0.14127198917456021;
    result[2] += 0.033288227334235455;
    result[3] += 0.09769959404600811;
    result[4] += 0.13125845737483086;
    result[5] += 0.2952638700947226;
  } else {
    result[0] += 0.01856763925729443;
    result[1] += 0.013262599469496022;
    result[2] += 0.8099027409372237;
    result[3] += 0.11405835543766578;
    result[4] += 0.004420866489832007;
    result[5] += 0.03978779840848806;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
    result[0] += 0.08205635195254572;
    result[1] += 0.012357884330202669;
    result[2] += 0.012852199703410776;
    result[3] += 0.1690558576371725;
    result[4] += 0.19278299555116163;
    result[5] += 0.5308947108255067;
  } else {
    result[0] += 0.3592579379236533;
    result[1] += 0.19122368890474495;
    result[2] += 0.31858722797003214;
    result[3] += 0.05458437388512309;
    result[4] += 0.05030324652158402;
    result[5] += 0.02604352479486265;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    result[0] += 0.31545741324921134;
    result[1] += 0.13958990536277602;
    result[2] += 0.03732912723449001;
    result[3] += 0.09779179810725552;
    result[4] += 0.13406940063091483;
    result[5] += 0.27576235541535227;
  } else {
    result[0] += 0.005870841487279843;
    result[1] += 0.011741682974559686;
    result[2] += 0.8111545988258317;
    result[3] += 0.11643835616438356;
    result[4] += 0.009784735812133072;
    result[5] += 0.04500978473581213;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    result[0] += 0.306090166095439;
    result[1] += 0.14236751911415765;
    result[2] += 0.04323754284207751;
    result[3] += 0.0975481149485895;
    result[4] += 0.13313999472712892;
    result[5] += 0.27761666227260745;
  } else {
    result[0] += 0.00968054211035818;
    result[1] += 0.005808325266214908;
    result[2] += 0.7986447241045499;
    result[3] += 0.10842207163601161;
    result[4] += 0.015488867376573089;
    result[5] += 0.061955469506292354;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    result[0] += 0.02514890800794176;
    result[1] += 0.021178027796161483;
    result[2] += 0.011912640635340834;
    result[3] += 0.13103904698874919;
    result[4] += 0.15949702183984116;
    result[5] += 0.6512243547319656;
  } else {
    result[0] += 0.33092006033182503;
    result[1] += 0.15957767722473604;
    result[2] += 0.2929110105580694;
    result[3] += 0.08295625942684766;
    result[4] += 0.07149321266968325;
    result[5] += 0.062141779788838614;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    result[0] += 0.31165741475019826;
    result[1] += 0.13825006608511764;
    result[2] += 0.0338355802273328;
    result[3] += 0.10652920962199312;
    result[4] += 0.13111287338091462;
    result[5] += 0.2786148559344436;
  } else {
    result[0] += 0.006711409395973154;
    result[1] += 0.007670182166826462;
    result[2] += 0.8427612655800575;
    result[3] += 0.0977948226270374;
    result[4] += 0.005752636625119847;
    result[5] += 0.039309683604985615;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
    result[0] += 0.3084136493878614;
    result[1] += 0.13831727012242773;
    result[2] += 0.03750976816879396;
    result[3] += 0.10028653295128939;
    result[4] += 0.12946079708257358;
    result[5] += 0.28601198228705393;
  } else {
    result[0] += 0.00911854103343465;
    result[1] += 0;
    result[2] += 0.8885511651469098;
    result[3] += 0.08206686930091185;
    result[4] += 0;
    result[5] += 0.020263424518743668;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3180809761508597;
    result[1] += 0.14004437049362173;
    result[2] += 0.0252357182473655;
    result[3] += 0.08430393788130892;
    result[4] += 0.1447587354409318;
    result[5] += 0.2875762617859124;
  } else {
    result[0] += 0.01557377049180328;
    result[1] += 0.018852459016393444;
    result[2] += 0.7221311475409836;
    result[3] += 0.1377049180327869;
    result[4] += 0.00819672131147541;
    result[5] += 0.09754098360655737;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3253655793025872;
    result[1] += 0.14116985376827895;
    result[2] += 0.01687289088863892;
    result[3] += 0.08098987626546682;
    result[4] += 0.1484814398200225;
    result[5] += 0.2871203599550056;
  } else {
    result[0] += 0.01889763779527559;
    result[1] += 0.007874015748031496;
    result[2] += 0.7299212598425197;
    result[3] += 0.16535433070866143;
    result[4] += 0.007874015748031496;
    result[5] += 0.07007874015748032;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    result[0] += 0.3085369201207796;
    result[1] += 0.15344496294262971;
    result[2] += 0.023606917375789186;
    result[3] += 0.0881141916003294;
    result[4] += 0.14054350809772165;
    result[5] += 0.2857534998627505;
  } else {
    result[0] += 0.02282333051563821;
    result[1] += 0.01098901098901099;
    result[2] += 0.7396449704142012;
    result[3] += 0.14539306846999156;
    result[4] += 0.011834319526627219;
    result[5] += 0.06931530008453085;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    result[0] += 0.031511254019292605;
    result[1] += 0.014790996784565916;
    result[2] += 0.01414790996784566;
    result[3] += 0.13569131832797426;
    result[4] += 0.2012861736334405;
    result[5] += 0.602572347266881;
  } else {
    result[0] += 0.34332008560073374;
    result[1] += 0.15836135738306328;
    result[2] += 0.311831244267808;
    result[3] += 0.07551207581779272;
    result[4] += 0.061449098135126876;
    result[5] += 0.04952613879547539;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    result[0] += 0.30719131614654005;
    result[1] += 0.14898236092265943;
    result[2] += 0.02659430122116689;
    result[3] += 0.08900949796472185;
    result[4] += 0.13622795115332428;
    result[5] += 0.2919945725915875;
  } else {
    result[0] += 0.013146362839614375;
    result[1] += 0.011393514460999125;
    result[2] += 0.7966695880806312;
    result[3] += 0.1253286590709904;
    result[4] += 0.006134969325153375;
    result[5] += 0.04732690622261175;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    result[0] += 0.3089366215857863;
    result[1] += 0.14187218244497482;
    result[2] += 0.03394325112702201;
    result[3] += 0.08459294616812517;
    result[4] += 0.1431980906921241;
    result[5] += 0.28745690798196766;
  } else {
    result[0] += 0.01990521327014218;
    result[1] += 0.005687203791469194;
    result[2] += 0.7829383886255924;
    result[3] += 0.12227488151658768;
    result[4] += 0.004739336492890996;
    result[5] += 0.06445497630331753;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    result[0] += 0.30067476383265856;
    result[1] += 0.13414304993252363;
    result[2] += 0.035897435897435895;
    result[3] += 0.10229419703103913;
    result[4] += 0.14601889338731444;
    result[5] += 0.28097165991902834;
  } else {
    result[0] += 0.020517395182872433;
    result[1] += 0.008920606601248883;
    result[2] += 0.790365744870651;
    result[3] += 0.11596788581623547;
    result[4] += 0.006244424620874218;
    result[5] += 0.05798394290811774;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    result[0] += 0.035783994795055306;
    result[1] += 0.01756668835393624;
    result[2] += 0.009108653220559532;
    result[3] += 0.12687052700065063;
    result[4] += 0.20689655172413793;
    result[5] += 0.6037735849056604;
  } else {
    result[0] += 0.3380966859227729;
    result[1] += 0.1416844025539678;
    result[2] += 0.3067801763453938;
    result[3] += 0.08300395256916998;
    result[4] += 0.0726664639708118;
    result[5] += 0.05776831863788386;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
