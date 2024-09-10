
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8380253766851705;
    result[1] += 0.0005947660586835844;
    result[2] += 0.0031225218080888186;
    result[3] += 0.134293219666931;
    result[4] += 0.023369349722442506;
    result[5] += 0.0002973830293417922;
    result[6] += 0.0002973830293417922;
  } else {
    result[0] += 0.09180432020330369;
    result[1] += 0.006035578144853875;
    result[2] += 0.0022236340533672173;
    result[3] += 0.4212198221092757;
    result[4] += 0.4787166454891995;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11992415863485542;
    result[1] += 0.0009480170643071576;
    result[2] += 0.0037920682572286303;
    result[3] += 0.4977089587612577;
    result[4] += 0.37652077737399275;
    result[5] += 0.0011060199083583505;
    result[6] += 0;
  } else {
    result[0] += 0.9043878292217051;
    result[1] += 0.0007263727099082618;
    result[2] += 0.002986198918511743;
    result[3] += 0.09152296144844099;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00037663770143391354;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9991999695226484;
    result[1] += 0;
    result[2] += 0.0005333536515676788;
    result[3] += 0;
    result[4] += 0.0001904834469884567;
    result[5] += 0;
    result[6] += 7.619337879538268e-05;
  } else {
    result[0] += 0.46600197090023776;
    result[1] += 0.002608544432206829;
    result[2] += 0.0063184742913454306;
    result[3] += 0.38113732537244227;
    result[4] += 0.14271636426873807;
    result[5] += 0.0008115471566865691;
    result[6] += 0.00040577357834328456;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11920323685029569;
    result[1] += 0.0021786492374727675;
    result[2] += 0.003423591658885777;
    result[3] += 0.502956738250856;
    result[4] += 0.3706816059757237;
    result[5] += 0.0015561780267662622;
    result[6] += 0;
  } else {
    result[0] += 0.901278524033015;
    result[1] += 0.0007822193450935966;
    result[2] += 0.0029670388951826077;
    result[3] += 0.09462156767545989;
    result[4] += 0;
    result[5] += 2.6973080865296434e-05;
    result[6] += 0.0003236769703835572;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8369374055633995;
    result[1] += 0.0003220133263976617;
    result[2] += 0.0026751876346882662;
    result[3] += 0.1340318545490575;
    result[4] += 0.025538133808922246;
    result[5] += 0.00017339179113720244;
    result[6] += 0.0003220133263976617;
  } else {
    result[0] += 0.0987535953978907;
    result[1] += 0.006711409395973154;
    result[2] += 0.0015979546180888463;
    result[3] += 0.4170661553211889;
    result[4] += 0.47587088526685845;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11765615337043908;
    result[1] += 0.0009276437847866419;
    result[2] += 0.005411255411255411;
    result[3] += 0.4992269635126778;
    result[4] += 0.37554112554112556;
    result[5] += 0.0012368583797155227;
    result[6] += 0;
  } else {
    result[0] += 0.9010585439619788;
    result[1] += 0.000729099157485418;
    result[2] += 0.0027273709224454527;
    result[3] += 0.09510693454309786;
    result[4] += 0;
    result[5] += 5.4007344998919854e-05;
    result[6] += 0.0003240440699935191;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.19391877524984052;
    result[1] += 0.00425260472039124;
    result[2] += 0.00744205826068467;
    result[3] += 0.4250478418031044;
    result[4] += 0.36933871996597917;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8582880119596876;
    result[1] += 0.0005670541536716756;
    result[2] += 0.0026032940691290566;
    result[3] += 0.11681315565636519;
    result[4] += 0.021135654818671547;
    result[5] += 0.0002835270768358378;
    result[6] += 0.0003093022656390958;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.99934890846419;
    result[1] += 0;
    result[2] += 0.00030639601685178094;
    result[3] += 0;
    result[4] += 0.0002297970126388357;
    result[5] += 0;
    result[6] += 0.00011489850631941785;
  } else {
    result[0] += 0.46463484761357104;
    result[1] += 0.0017826336975273146;
    result[2] += 0.005175388154111558;
    result[3] += 0.3817711328349626;
    result[4] += 0.14548591144335826;
    result[5] += 0.0006325474410580794;
    result[6] += 0.0005175388154111558;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8388796793428508;
    result[1] += 0.0004206150877106168;
    result[2] += 0.00311750006185516;
    result[3] += 0.13246901056486132;
    result[4] += 0.024568869535096616;
    result[5] += 0.00019793651186381968;
    result[6] += 0.00034638889576168444;
  } else {
    result[0] += 0.08660395718456049;
    result[1] += 0.007135906584495621;
    result[2] += 0.0025948751216347712;
    result[3] += 0.4200454103146286;
    result[4] += 0.4836198507946805;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993529478932746;
    result[1] += 0;
    result[2] += 0.00041868077494005255;
    result[3] += 0;
    result[4] += 0.00019030944315456935;
    result[5] += 0;
    result[6] += 3.8061888630913876e-05;
  } else {
    result[0] += 0.4715272537296105;
    result[1] += 0.0023219364950368606;
    result[2] += 0.006211180124223602;
    result[3] += 0.37505079236082894;
    result[4] += 0.14384396586753354;
    result[5] += 0.0005224357113832937;
    result[6] += 0.0005224357113832937;
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  result[6] /= 10;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
