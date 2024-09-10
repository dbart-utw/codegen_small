
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.20309477756286268;
    result[1] += 0.0038684719535783366;
    result[2] += 0.009241349666881582;
    result[3] += 0.43219428325811304;
    result[4] += 0.3516011175585644;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8533220068473756;
    result[1] += 0.0004890982572656834;
    result[2] += 0.0023167812186269208;
    result[3] += 0.12258346847890442;
    result[4] += 0.020953999021803487;
    result[5] += 0.00012871006770149562;
    result[6] += 0.00020593610832239298;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11993111006732425;
    result[1] += 0.002035384374510725;
    result[2] += 0.005479881008298106;
    result[3] += 0.49146704242993583;
    result[4] += 0.3803037419758885;
    result[5] += 0.0007828401440425865;
    result[6] += 0;
  } else {
    result[0] += 0.9026217228464417;
    result[1] += 0.0007813973540268907;
    result[2] += 0.0026136394255382206;
    result[3] += 0.09365990353784387;
    result[4] += 0;
    result[5] += 2.694473634575485e-05;
    result[6] += 0.00029639209980330335;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8386722032725293;
    result[1] += 0.00034603786642938353;
    result[2] += 0.002545850017301893;
    result[3] += 0.13542439072618515;
    result[4] += 0.022616046270206136;
    result[5] += 0.00014830194275545006;
    result[6] += 0.00024716990459241675;
  } else {
    result[0] += 0.09040105193951348;
    result[1] += 0.005259697567389875;
    result[2] += 0.001643655489809336;
    result[3] += 0.4095989480604865;
    result[4] += 0.4930966469428008;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993484343260128;
    result[1] += 0;
    result[2] += 0.0004982561036372695;
    result[3] += 0;
    result[4] += 3.832739258748227e-05;
    result[5] += 0;
    result[6] += 0.00011498217776244682;
  } else {
    result[0] += 0.45752197139410655;
    result[1] += 0.0021827790223447646;
    result[2] += 0.00735251881210868;
    result[3] += 0.3924981331495204;
    result[4] += 0.13964041587684534;
    result[5] += 0.00040209087253719345;
    result[6] += 0.00040209087253719345;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.12112328344391297;
    result[1] += 0.0009257830581700355;
    result[2] += 0.007869155994445301;
    result[3] += 0.4935966671809906;
    result[4] += 0.3754050300879494;
    result[5] += 0.001080080234531708;
    result[6] += 0;
  } else {
    result[0] += 0.9033199167994814;
    result[1] += 0.0006213025743537103;
    result[2] += 0.002242091898754694;
    result[3] += 0.09362759663956348;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00018909208784678142;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.999195494770716;
    result[1] += 0;
    result[2] += 0.0006512661379918018;
    result[3] += 0;
    result[4] += 0.00015323909129218863;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.4692188308329022;
    result[1] += 0.0016669540725412428;
    result[2] += 0.0071851468644019085;
    result[3] += 0.3837443237339771;
    result[4] += 0.13732252687244928;
    result[5] += 0.00028740587457607634;
    result[6] += 0.0005748117491521527;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11247058823529411;
    result[1] += 0.0018823529411764706;
    result[2] += 0.003607843137254902;
    result[3] += 0.5041568627450981;
    result[4] += 0.3764705882352941;
    result[5] += 0.001411764705882353;
    result[6] += 0;
  } else {
    result[0] += 0.9022222222222223;
    result[1] += 0.0006464646464646465;
    result[2] += 0.002585858585858586;
    result[3] += 0.09424915824915825;
    result[4] += 0;
    result[5] += 2.6936026936026937e-05;
    result[6] += 0.00026936026936026934;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11805111821086262;
    result[1] += 0.0012779552715654952;
    result[2] += 0.004153354632587859;
    result[3] += 0.5070287539936102;
    result[4] += 0.36773162939297127;
    result[5] += 0.001757188498402556;
    result[6] += 0;
  } else {
    result[0] += 0.9046455424274973;
    result[1] += 0.0004296455424274973;
    result[2] += 0.002819548872180451;
    result[3] += 0.09189044038668098;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00021482277121374866;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8384657209233355;
    result[1] += 0.0005437200336117839;
    result[2] += 0.003163462013741288;
    result[3] += 0.1330878354999753;
    result[4] += 0.024269685136671444;
    result[5] += 0.0001977163758588305;
    result[6] += 0.0002718600168058919;
  } else {
    result[0] += 0.09578670177748519;
    result[1] += 0.0069124423963133645;
    result[2] += 0.0029624753127057276;
    result[3] += 0.4117840684660961;
    result[4] += 0.4825543120473996;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2054493517908152;
    result[1] += 0.005053834322127005;
    result[2] += 0.0065919578114700065;
    result[3] += 0.4355086794111184;
    result[4] += 0.34739617666446937;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8546560887314182;
    result[1] += 0.0003594444016534443;
    result[2] += 0.0023877378109835945;
    result[3] += 0.12077331895555729;
    result[4] += 0.021463965698734246;
    result[5] += 0.00020539680094482533;
    result[6] += 0.00015404760070861898;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
