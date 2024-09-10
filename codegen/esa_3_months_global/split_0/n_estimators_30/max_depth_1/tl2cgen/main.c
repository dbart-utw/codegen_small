
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8095327365609036;
    result[1] += 0.1904672634390964;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 9.944806324896822e-05;
    result[1] += 0.999900551936751;
  } else {
    result[0] += 0.7839545704424508;
    result[1] += 0.2160454295575492;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8028689238631744;
    result[1] += 0.1971310761368256;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05670023237800155;
    result[1] += 0.9432997676219984;
  } else {
    result[0] += 0.9367789125034501;
    result[1] += 0.06322108749654982;
  }
  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7128912806510925293) ) ) {
    result[0] += 0.04319467554076539;
    result[1] += 0.9568053244592346;
  } else {
    result[0] += 0.7582229322169278;
    result[1] += 0.24177706778307215;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4694453669877117;
    result[1] += 0.5305546330122882;
  } else {
    result[0] += 0.9899618892064789;
    result[1] += 0.010038110793521165;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7788661273706787;
    result[1] += 0.22113387262932127;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06153081320866556;
    result[1] += 0.9384691867913344;
  } else {
    result[0] += 0.9366703405632846;
    result[1] += 0.0633296594367154;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 9.858044164037855e-05;
    result[1] += 0.9999014195583596;
  } else {
    result[0] += 0.7862621403285831;
    result[1] += 0.2137378596714169;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.009341138373396438;
    result[1] += 0.9906588616266035;
  } else {
    result[0] += 0.7661743360184374;
    result[1] += 0.23382566398156254;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8074316047366272;
    result[1] += 0.1925683952633728;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7999780360786308;
    result[1] += 0.20002196392136917;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401319368879216;
    result[1] += 0.059868063112078346;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9400274299991852;
    result[1] += 0.059972570000814754;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9389216913365259;
    result[1] += 0.0610783086634741;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.799399951441157;
    result[1] += 0.20060004855884292;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.801849175532378;
    result[1] += 0.19815082446762203;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8002091325045062;
    result[1] += 0.19979086749549382;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7995591527865362;
    result[1] += 0.20044084721346378;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7790193650078812;
    result[1] += 0.2209806349921189;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005187718556661415;
    result[1] += 0.9948122814433386;
  } else {
    result[0] += 0.8112667632244029;
    result[1] += 0.18873323677559709;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47396714783474364;
    result[1] += 0.5260328521652563;
  } else {
    result[0] += 0.9984662754894557;
    result[1] += 0.001533724510544356;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7997885212085493;
    result[1] += 0.2002114787914507;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.0034116990261150054;
    result[1] += 0.996588300973885;
  } else {
    result[0] += 0.7668574975476476;
    result[1] += 0.23314250245235232;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8088577815751589;
    result[1] += 0.1911422184248411;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8032014956570208;
    result[1] += 0.19679850434297924;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.808321081005391;
    result[1] += 0.19167891899460898;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7993882027011427;
    result[1] += 0.2006117972988572;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9391245195741641;
    result[1] += 0.060875480425835855;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8100647546401643;
    result[1] += 0.18993524535983575;
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_0/test_data.csv", "r");
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
