
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.14492753623188406;
    result[1] += 0.855072463768116;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2815126050420168;
    result[1] += 0.7184873949579832;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    result[0] += 0.7582417582417582;
    result[1] += 0.24175824175824176;
  } else {
    result[0] += 0.23837209302325582;
    result[1] += 0.7616279069767442;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7027399837970733643) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2863070539419087;
    result[1] += 0.7136929460580913;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.3034188034188034;
    result[1] += 0.6965811965811965;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9692307692307692;
    result[1] += 0.03076923076923077;
  } else {
    result[0] += 0.18181818181818182;
    result[1] += 0.8181818181818182;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.22167487684729065;
    result[1] += 0.7783251231527094;
  } else {
    result[0] += 0.8;
    result[1] += 0.2;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.31223628691983124;
    result[1] += 0.6877637130801688;
  }
  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9001149833202362061) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.33476394849785407;
    result[1] += 0.6652360515021459;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2534562211981567;
    result[1] += 0.7465437788018433;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 0.9411764705882353;
    result[1] += 0.058823529411764705;
  } else {
    result[0] += 0.2794759825327511;
    result[1] += 0.7205240174672489;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1814199984073638916) ) ) {
    result[0] += 0.7078651685393258;
    result[1] += 0.29213483146067415;
  } else {
    result[0] += 0.2471264367816092;
    result[1] += 0.7528735632183908;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2692307692307692;
    result[1] += 0.7307692307692307;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7028900086879730225) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2863247863247863;
    result[1] += 0.7136752136752137;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9306100010871887207) ) ) {
    result[0] += 0.9310344827586207;
    result[1] += 0.06896551724137931;
  } else {
    result[0] += 0.2905982905982906;
    result[1] += 0.7094017094017094;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.301255230125523;
    result[1] += 0.698744769874477;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
    result[0] += 0.9814814814814815;
    result[1] += 0.018518518518518517;
  } else {
    result[0] += 0.22966507177033493;
    result[1] += 0.7703349282296651;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
    result[0] += 0.9591836734693877;
    result[1] += 0.04081632653061224;
  } else {
    result[0] += 0.2523364485981308;
    result[1] += 0.7476635514018691;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
    result[0] += 0.64;
    result[1] += 0.36;
  } else {
    result[0] += 0.22085889570552147;
    result[1] += 0.7791411042944786;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
    result[0] += 0.2892561983471074;
    result[1] += 0.7107438016528925;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.8846153846153846;
    result[1] += 0.11538461538461539;
  } else {
    result[0] += 0.1895734597156398;
    result[1] += 0.8104265402843602;
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001139999949373304844) ) ) {
    result[0] += 0.5967741935483871;
    result[1] += 0.4032258064516129;
  } else {
    result[0] += 0.2014388489208633;
    result[1] += 0.7985611510791367;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9629629629629629;
    result[1] += 0.037037037037037035;
  } else {
    result[0] += 0.23444976076555024;
    result[1] += 0.7655502392344498;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1261682242990654;
    result[1] += 0.8738317757009346;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17209302325581396;
    result[1] += 0.827906976744186;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 0.9393939393939394;
    result[1] += 0.06060606060606061;
  } else {
    result[0] += 0.27391304347826084;
    result[1] += 0.7260869565217392;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1133700013160705566) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27488151658767773;
    result[1] += 0.7251184834123223;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22325581395348837;
    result[1] += 0.7767441860465116;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.06798500008881092072) ) ) {
    result[0] += 0.7592592592592593;
    result[1] += 0.24074074074074073;
  } else {
    result[0] += 0.2966507177033493;
    result[1] += 0.7033492822966507;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24880382775119617;
    result[1] += 0.7511961722488039;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1175950020551681519) ) ) {
    result[0] += 0.9242424242424242;
    result[1] += 0.07575757575757576;
  } else {
    result[0] += 0.2182741116751269;
    result[1] += 0.7817258883248731;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22065727699530516;
    result[1] += 0.7793427230046949;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 0.9838709677419355;
    result[1] += 0.016129032258064516;
  } else {
    result[0] += 0.22388059701492538;
    result[1] += 0.7761194029850746;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2943850010633468628) ) ) {
    result[0] += 0.5963302752293578;
    result[1] += 0.4036697247706422;
  } else {
    result[0] += 0.17532467532467533;
    result[1] += 0.8246753246753247;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06778999976813793182) ) ) {
    result[0] += 0.7564102564102564;
    result[1] += 0.24358974358974358;
  } else {
    result[0] += 0.21081081081081082;
    result[1] += 0.7891891891891892;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1227300018072128296) ) ) {
    result[0] += 0.8771929824561403;
    result[1] += 0.12280701754385964;
  } else {
    result[0] += 0.21359223300970873;
    result[1] += 0.7864077669902912;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
    result[0] += 0.9761904761904762;
    result[1] += 0.023809523809523808;
  } else {
    result[0] += 0.2171945701357466;
    result[1] += 0.7828054298642534;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
    result[0] += 0.6847826086956522;
    result[1] += 0.31521739130434784;
  } else {
    result[0] += 0.25146198830409355;
    result[1] += 0.7485380116959064;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8274700045585632324) ) ) {
    result[0] += 0.31950207468879666;
    result[1] += 0.6804979253112033;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 0.9607843137254902;
    result[1] += 0.0392156862745098;
  } else {
    result[0] += 0.19339622641509435;
    result[1] += 0.8066037735849056;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02878000028431415558) ) ) {
    result[0] += 0.9464285714285714;
    result[1] += 0.05357142857142857;
  } else {
    result[0] += 0.15458937198067632;
    result[1] += 0.8454106280193237;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9280749857425689697) ) ) {
    result[0] += 0.2716049382716049;
    result[1] += 0.7283950617283951;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2608695652173913;
    result[1] += 0.7391304347826086;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.24352331606217617;
    result[1] += 0.7564766839378239;
  } else {
    result[0] += 0.9;
    result[1] += 0.1;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
    result[0] += 0.9512195121951219;
    result[1] += 0.04878048780487805;
  } else {
    result[0] += 0.30180180180180183;
    result[1] += 0.6981981981981982;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.2097560975609756;
    result[1] += 0.7902439024390244;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4828200042247772217) ) ) {
    result[0] += 0.8888888888888888;
    result[1] += 0.1111111111111111;
  } else {
    result[0] += 0.29515418502202645;
    result[1] += 0.7048458149779736;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7134000062942504883) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.2616033755274262;
    result[1] += 0.7383966244725738;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1133700013160705566) ) ) {
    result[0] += 0.9772727272727273;
    result[1] += 0.022727272727272728;
  } else {
    result[0] += 0.1735159817351598;
    result[1] += 0.8264840182648402;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9701492537313433;
    result[1] += 0.029850746268656716;
  } else {
    result[0] += 0.15306122448979592;
    result[1] += 0.8469387755102041;
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
