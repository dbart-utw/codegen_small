
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.30313496280552604;
    result[1] += 0.13841657810839533;
    result[2] += 0.03400637619553666;
    result[3] += 0.09378320935175345;
    result[4] += 0.14505844845908608;
    result[5] += 0.28560042507970246;
  } else {
    result[0] += 0.010357815442561206;
    result[1] += 0.00847457627118644;
    result[2] += 0.8116760828625236;
    result[3] += 0.11299435028248588;
    result[4] += 0.00847457627118644;
    result[5] += 0.0480225988700565;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    result[0] += 0.3130878796022575;
    result[1] += 0.12819134641225477;
    result[2] += 0.03278688524590164;
    result[3] += 0.09406073636119323;
    result[4] += 0.1402848696586939;
    result[5] += 0.291588282719699;
  } else {
    result[0] += 0.004524886877828056;
    result[1] += 0.006334841628959277;
    result[2] += 0.8262443438914028;
    result[3] += 0.0986425339366516;
    result[4] += 0.006334841628959277;
    result[5] += 0.057918552036199104;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.29580514208389713;
    result[1] += 0.13721244925575102;
    result[2] += 0.03382949932341001;
    result[3] += 0.0939106901217862;
    result[4] += 0.1358592692828146;
    result[5] += 0.303382949932341;
  } else {
    result[0] += 0.015915119363395226;
    result[1] += 0.015915119363395226;
    result[2] += 0.8037135278514589;
    result[3] += 0.10963748894783377;
    result[4] += 0.007957559681697613;
    result[5] += 0.046861184792219276;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    result[0] += 0.31595264937993234;
    result[1] += 0.14684329199549043;
    result[2] += 0.017474633596392335;
    result[3] += 0.07891770011273957;
    result[4] += 0.14120631341600903;
    result[5] += 0.2996054114994363;
  } else {
    result[0] += 0.010172143974960877;
    result[1] += 0.0023474178403755873;
    result[2] += 0.7198748043818467;
    result[3] += 0.16666666666666669;
    result[4] += 0.013302034428794993;
    result[5] += 0.08763693270735526;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.2992900054614965;
    result[1] += 0.1348989623156745;
    result[2] += 0.036865101037684325;
    result[3] += 0.09120699071545603;
    result[4] += 0.14227198252321135;
    result[5] += 0.2954669579464773;
  } else {
    result[0] += 0.012027491408934709;
    result[1] += 0.014604810996563574;
    result[2] += 0.8101374570446735;
    result[3] += 0.10395189003436427;
    result[4] += 0.011168384879725086;
    result[5] += 0.048109965635738834;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    result[0] += 0.30689655172413793;
    result[1] += 0.13050397877984085;
    result[2] += 0.04270557029177719;
    result[3] += 0.09787798408488063;
    result[4] += 0.13978779840848807;
    result[5] += 0.28222811671087533;
  } else {
    result[0] += 0.008522727272727274;
    result[1] += 0.010416666666666668;
    result[2] += 0.8361742424242425;
    result[3] += 0.08522727272727273;
    result[4] += 0.0028409090909090914;
    result[5] += 0.05681818181818182;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    result[0] += 0.31217838765008576;
    result[1] += 0.1509433962264151;
    result[2] += 0.02058319039451115;
    result[3] += 0.07175528873642081;
    result[4] += 0.14865637507146942;
    result[5] += 0.29588336192109777;
  } else {
    result[0] += 0.009789156626506024;
    result[1] += 0.0037650602409638554;
    result[2] += 0.6882530120481928;
    result[3] += 0.17921686746987953;
    result[4] += 0.018072289156626505;
    result[5] += 0.10090361445783133;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.29746328437917224;
    result[1] += 0.14072096128170894;
    result[2] += 0.020293724966622163;
    result[3] += 0.09986648865153538;
    result[4] += 0.1431241655540721;
    result[5] += 0.2985313751668892;
  } else {
    result[0] += 0.017576318223866794;
    result[1] += 0;
    result[2] += 0.8538390379278447;
    result[3] += 0.10360777058279372;
    result[4] += 0.0009250693802035154;
    result[5] += 0.0240518038852914;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    result[0] += 0.30183169631006107;
    result[1] += 0.13538624900451288;
    result[2] += 0.036899389434563314;
    result[3] += 0.09317759490310593;
    result[4] += 0.14149190337138307;
    result[5] += 0.2912131669763738;
  } else {
    result[0] += 0.0084985835694051;
    result[1] += 0.004721435316336166;
    result[2] += 0.8253068932955618;
    result[3] += 0.10198300283286119;
    result[4] += 0.0056657223796034;
    result[5] += 0.053824362606232294;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.3076303062869425;
    result[1] += 0.13353036002149382;
    result[2] += 0.03519613111230521;
    result[3] += 0.09511015583019881;
    result[4] += 0.14105319720580334;
    result[5] += 0.28747984954325634;
  } else {
    result[0] += 0.015398550724637682;
    result[1] += 0.012681159420289856;
    result[2] += 0.8188405797101449;
    result[3] += 0.09420289855072464;
    result[4] += 0.012681159420289856;
    result[5] += 0.04619565217391304;
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  
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
