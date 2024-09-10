
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9990872442382293;
    result[1] += 0;
    result[2] += 0.0007606298014756218;
    result[3] += 0;
    result[4] += 0.00011409447022134328;
    result[5] += 0;
    result[6] += 3.803149007378109e-05;
  } else {
    result[0] += 0.4624549575729397;
    result[1] += 0.0027316052539811692;
    result[2] += 0.006160641636638382;
    result[3] += 0.38312216668603977;
    result[4] += 0.14471695920027897;
    result[5] += 0.000290596303615018;
    result[6] += 0.0005230733465070325;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9994297011634097;
    result[1] += 0;
    result[2] += 0.00045623906927229867;
    result[3] += 0;
    result[4] += 0.00011405976731807467;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.4669147575299454;
    result[1] += 0.0022677055471566464;
    result[2] += 0.005989068496336784;
    result[3] += 0.38440516339109204;
    result[4] += 0.139725549482498;
    result[5] += 0.00034887777648563793;
    result[6] += 0.00034887777648563793;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8442141623488774;
    result[1] += 0.0004934616333580064;
    result[2] += 0.0024179620034542313;
    result[3] += 0.1290895632864545;
    result[4] += 0.023365408339501605;
    result[5] += 0.00019738465334320256;
    result[6] += 0.00022205773501110288;
  } else {
    result[0] += 0.08080808080808081;
    result[1] += 0.010101010101010102;
    result[2] += 0.005050505050505051;
    result[3] += 0.41144781144781145;
    result[4] += 0.4925925925925926;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993490331227264;
    result[1] += 0;
    result[2] += 0.0004977982002680452;
    result[3] += 0;
    result[4] += 7.658433850277618e-05;
    result[5] += 0;
    result[6] += 7.658433850277618e-05;
  } else {
    result[0] += 0.4701179177451825;
    result[1] += 0.0017256255392579807;
    result[2] += 0.006039689387402932;
    result[3] += 0.37819959735404074;
    result[4] += 0.1426517112453264;
    result[5] += 0.00034512510785159614;
    result[6] += 0.0009203336209375896;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8433877105519337;
    result[1] += 0.0012979733915454734;
    result[2] += 0.0020649576683677982;
    result[3] += 0.10091743119266056;
    result[4] += 0.052036933242868524;
    result[5] += 0.0001474969763119856;
    result[6] += 0.0001474969763119856;
  } else {
    result[0] += 0.5962920529111551;
    result[1] += 0;
    result[2] += 0.004999479220914488;
    result[3] += 0.32632017498177274;
    result[4] += 0.07176335798354339;
    result[5] += 0.00010415581710238516;
    result[6] += 0.0005207790855119259;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    result[0] += 0.7707110686501977;
    result[1] += 0.00075064828715709;
    result[2] += 0.0034120376688958638;
    result[3] += 0.18343114507984165;
    result[4] += 0.04135389654701787;
    result[5] += 0.00020472226013375182;
    result[6] += 0.00013648150675583457;
  } else {
    result[0] += 0.8014629411356862;
    result[1] += 0.0008666712889135409;
    result[2] += 0.002426679608957915;
    result[3] += 0.13187270332108442;
    result[4] += 0.06309366983290579;
    result[5] += 0.00013866740622616656;
    result[6] += 0.00013866740622616656;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.19951975551189696;
    result[1] += 0.003929273084479371;
    result[2] += 0.007421960270683257;
    result[3] += 0.42305173542894564;
    result[4] += 0.3660772757039948;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8594773760887998;
    result[1] += 0.00020555512731570697;
    result[2] += 0.002415272745959557;
    result[3] += 0.11747475526092654;
    result[4] += 0.01996454174053804;
    result[5] += 0.00012847195457231687;
    result[6] += 0.00033402708188802385;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11858678955453149;
    result[1] += 0.0015360983102918587;
    result[2] += 0.0027649769585253456;
    result[3] += 0.498310291858679;
    result[4] += 0.37849462365591396;
    result[5] += 0.00030721966205837174;
    result[6] += 0;
  } else {
    result[0] += 0.9044606650446066;
    result[1] += 0.00072992700729927;
    result[2] += 0.0031359826980264936;
    result[3] += 0.0914301162476345;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00024330900243309004;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8388274075818226;
    result[1] += 0.0011773016246762423;
    result[2] += 0.0019425476807157997;
    result[3] += 0.104014598540146;
    result[4] += 0.0539498469507888;
    result[5] += 8.829762185071816e-05;
    result[6] += 0;
  } else {
    result[0] += 0.5956530869382612;
    result[1] += 0;
    result[2] += 0.00503989920201596;
    result[3] += 0.3268584628307434;
    result[4] += 0.07055858882822344;
    result[5] += 0.0009449811003779924;
    result[6] += 0.0009449811003779924;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11771091811414391;
    result[1] += 0.0032568238213399503;
    result[2] += 0.004497518610421836;
    result[3] += 0.49503722084367247;
    result[4] += 0.37872208436724564;
    result[5] += 0.0007754342431761787;
    result[6] += 0;
  } else {
    result[0] += 0.9038918277016086;
    result[1] += 0.0007287056029364136;
    result[2] += 0.0025099859656698693;
    result[3] += 0.09249163338011443;
    result[4] += 0;
    result[5] += 5.397819281010472e-05;
    result[6] += 0.0003238691568606283;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993154852449042;
    result[1] += 0;
    result[2] += 0.000494371767569212;
    result[3] += 0;
    result[4] += 7.6057195010648e-05;
    result[5] += 0;
    result[6] += 0.00011408579251597201;
  } else {
    result[0] += 0.47215763775866076;
    result[1] += 0.0020344106021855384;
    result[2] += 0.005521971634503604;
    result[3] += 0.3778191118344571;
    result[4] += 0.14153685189490817;
    result[5] += 0.00040688212043710767;
    result[6] += 0.0005231341548477098;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11441213653603034;
    result[1] += 0.002686472819216182;
    result[2] += 0.004740834386852086;
    result[3] += 0.49873577749683945;
    result[4] += 0.37926675094816686;
    result[5] += 0.00015802781289506955;
    result[6] += 0;
  } else {
    result[0] += 0.903502636392984;
    result[1] += 0.0005649413537070914;
    result[2] += 0.002770902830087162;
    result[3] += 0.09278489185408371;
    result[4] += 0;
    result[5] += 8.070590767244162e-05;
    result[6] += 0.0002959216614656193;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8430785487847832;
    result[1] += 0.0011154162263707877;
    result[2] += 0.0025830691558060346;
    result[3] += 0.10258893976752374;
    result[4] += 0.0505753199483386;
    result[5] += 0;
    result[6] += 5.8706117177409875e-05;
  } else {
    result[0] += 0.6016751484308737;
    result[1] += 0;
    result[2] += 0.004134860050890585;
    result[3] += 0.32135284139100934;
    result[4] += 0.07124681933842239;
    result[5] += 0.0005301102629346904;
    result[6] += 0.0010602205258693808;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8415114297467239;
    result[1] += 0.0010577657636481165;
    result[2] += 0.0019098548510313217;
    result[3] += 0.10222130810366105;
    result[4] += 0.05315272962331786;
    result[5] += 2.9382382323558796e-05;
    result[6] += 0.00011752952929423518;
  } else {
    result[0] += 0.5905345446862456;
    result[1] += 0;
    result[2] += 0.0036974434819353474;
    result[3] += 0.329917599830974;
    result[4] += 0.07489964081977604;
    result[5] += 0.0005282062117050497;
    result[6] += 0.0004225649693640397;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    result[0] += 0.9056216097748069;
    result[1] += 0.0004657279053202564;
    result[2] += 0.00183551586214454;
    result[3] += 0.08909100871185141;
    result[4] += 0.002739575913648567;
    result[5] += 2.7395759136485672e-05;
    result[6] += 0.00021916607309188538;
  } else {
    result[0] += 0.1791940554444127;
    result[1] += 0.002572163475278651;
    result[2] += 0.007859388396684767;
    result[3] += 0.46541869105458705;
    result[4] += 0.3443841097456416;
    result[5] += 0.0005715918833952558;
    result[6] += 0;
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  result[6] /= 15;
  
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
