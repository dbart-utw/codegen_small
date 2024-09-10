
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
    result[0] += 0.28667023554603854;
    result[1] += 0.1383832976445396;
    result[2] += 0.029443254817987152;
    result[3] += 0.1006423982869379;
    result[4] += 0.14855460385438973;
    result[5] += 0.2963062098501071;
  } else {
    result[0] += 0.01743119266055046;
    result[1] += 0.005504587155963303;
    result[2] += 0.8146788990825689;
    result[3] += 0.11100917431192661;
    result[4] += 0.003669724770642202;
    result[5] += 0.047706422018348627;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.3126504412944638;
    result[1] += 0.13987697245252742;
    result[2] += 0.025942765445306232;
    result[3] += 0.09708478202728002;
    result[4] += 0.12489970580369082;
    result[5] += 0.29954533297673175;
  } else {
    result[0] += 0.00827966881324747;
    result[1] += 0;
    result[2] += 0.8380864765409384;
    result[3] += 0.13155473781048757;
    result[4] += 0;
    result[5] += 0.02207911683532659;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    result[0] += 0.29392080312325713;
    result[1] += 0.14138315672058002;
    result[2] += 0.02426101505856107;
    result[3] += 0.09676519799219185;
    result[4] += 0.1464026770775237;
    result[5] += 0.29726715002788623;
  } else {
    result[0] += 0.028225806451612902;
    result[1] += 0.004838709677419355;
    result[2] += 0.7540322580645161;
    result[3] += 0.125;
    result[4] += 0.013709677419354839;
    result[5] += 0.07419354838709677;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    result[0] += 0.31938444924406045;
    result[1] += 0.13201943844492442;
    result[2] += 0.034287257019438445;
    result[3] += 0.09449244060475162;
    result[4] += 0.13525917926565875;
    result[5] += 0.2845572354211663;
  } else {
    result[0] += 0.011586452762923354;
    result[1] += 0.013368983957219253;
    result[2] += 0.8110516934046347;
    result[3] += 0.09893048128342248;
    result[4] += 0.0062388591800356516;
    result[5] += 0.05882352941176471;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    result[0] += 0.31576158940397353;
    result[1] += 0.13165562913907286;
    result[2] += 0.036556291390728475;
    result[3] += 0.09562913907284769;
    result[4] += 0.13774834437086092;
    result[5] += 0.2826490066225166;
  } else {
    result[0] += 0.019029495718363463;
    result[1] += 0.013320647002854425;
    result[2] += 0.8001902949571836;
    result[3] += 0.09990485252140818;
    result[4] += 0.004757373929590866;
    result[5] += 0.06279733587059944;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    result[0] += 0.3105774419859687;
    result[1] += 0.13140852671343767;
    result[2] += 0.032379924446842956;
    result[3] += 0.09821910415542363;
    result[4] += 0.14355099838100377;
    result[5] += 0.2838640043173233;
  } else {
    result[0] += 0.015178571428571428;
    result[1] += 0.00625;
    result[2] += 0.80625;
    result[3] += 0.12946428571428573;
    result[4] += 0.004464285714285714;
    result[5] += 0.038392857142857145;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    result[0] += 0.30560369728480646;
    result[1] += 0.14182553437319467;
    result[2] += 0.016175621028307337;
    result[3] += 0.07221259387637204;
    result[4] += 0.14904679376083188;
    result[5] += 0.3151357596764876;
  } else {
    result[0] += 0.03152492668621701;
    result[1] += 0.005131964809384164;
    result[2] += 0.718475073313783;
    result[3] += 0.1436950146627566;
    result[4] += 0.008064516129032258;
    result[5] += 0.09310850439882698;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    result[0] += 0.30933544303797467;
    result[1] += 0.1373945147679325;
    result[2] += 0.032964135021097046;
    result[3] += 0.09889240506329114;
    result[4] += 0.14530590717299577;
    result[5] += 0.27610759493670883;
  } else {
    result[0] += 0.005802707930367505;
    result[1] += 0.005802707930367505;
    result[2] += 0.8249516441005803;
    result[3] += 0.09864603481624758;
    result[4] += 0.008704061895551257;
    result[5] += 0.05609284332688588;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3185393258426967;
    result[1] += 0.1410112359550562;
    result[2] += 0.027528089887640453;
    result[3] += 0.08483146067415731;
    result[4] += 0.13483146067415733;
    result[5] += 0.2932584269662922;
  } else {
    result[0] += 0.010268562401263823;
    result[1] += 0.0007898894154818325;
    result[2] += 0.7480252764612955;
    result[3] += 0.14139020537124802;
    result[4] += 0.018167456556082148;
    result[5] += 0.08135860979462875;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3184150513112885;
    result[1] += 0.12941847206385404;
    result[2] += 0.021094640820980615;
    result[3] += 0.08751425313568985;
    result[4] += 0.14481185860889395;
    result[5] += 0.29874572405929306;
  } else {
    result[0] += 0.013657056145675266;
    result[1] += 0.0037936267071320183;
    result[2] += 0.7283763277693475;
    result[3] += 0.1441578148710167;
    result[4] += 0.017450682852807285;
    result[5] += 0.09256449165402124;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    result[0] += 0.30444633248371566;
    result[1] += 0.15293118096856415;
    result[2] += 0.018691588785046728;
    result[3] += 0.08128009062588502;
    result[4] += 0.1447182101387709;
    result[5] += 0.29793259699801755;
  } else {
    result[0] += 0.010810810810810811;
    result[1] += 0.0023166023166023165;
    result[2] += 0.7567567567567568;
    result[3] += 0.14594594594594595;
    result[4] += 0.01698841698841699;
    result[5] += 0.06718146718146718;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.3234121711400479;
    result[1] += 0.1442997608291257;
    result[2] += 0.022854105766675528;
    result[3] += 0.09460536805740102;
    result[4] += 0.12835503587563118;
    result[5] += 0.2864735583311188;
  } else {
    result[0] += 0.007525870178739418;
    result[1] += 0;
    result[2] += 0.8485418626528693;
    result[3] += 0.12135465663217311;
    result[4] += 0;
    result[5] += 0.022577610536218255;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3123760974228264;
    result[1] += 0.13367318040215237;
    result[2] += 0.021240441801189464;
    result[3] += 0.0940243557065987;
    result[4] += 0.14641744548286603;
    result[5] += 0.29226847918436705;
  } else {
    result[0] += 0.02316602316602316;
    result[1] += 0.014671814671814668;
    result[2] += 0.7312741312741312;
    result[3] += 0.11814671814671812;
    result[4] += 0.01081081081081081;
    result[5] += 0.1019305019305019;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    result[0] += 0.3026525198938992;
    result[1] += 0.13687002652519895;
    result[2] += 0.03660477453580902;
    result[3] += 0.09681697612732096;
    result[4] += 0.13952254641909814;
    result[5] += 0.2875331564986737;
  } else {
    result[0] += 0.003787878787878788;
    result[1] += 0.005681818181818182;
    result[2] += 0.8276515151515151;
    result[3] += 0.11647727272727272;
    result[4] += 0.002840909090909091;
    result[5] += 0.043560606060606064;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    result[0] += 0.30215434960458143;
    result[1] += 0.14398691028088356;
    result[2] += 0.015544041450777202;
    result[3] += 0.08835560403599672;
    result[4] += 0.13526043086992093;
    result[5] += 0.31469866375784017;
  } else {
    result[0] += 0.010353753235547885;
    result[1] += 0;
    result[2] += 0.813632441760138;
    result[3] += 0.14408973252804141;
    result[4] += 0.0008628127696289905;
    result[5] += 0.031061259706643658;
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
