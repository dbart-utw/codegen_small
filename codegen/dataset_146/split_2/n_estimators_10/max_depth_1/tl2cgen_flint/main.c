
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.3116485960522658;
    result[1] += 0.13733666944676118;
    result[2] += 0.02418682235195997;
    result[3] += 0.08201278843480678;
    result[4] += 0.1440088963024743;
    result[5] += 0.300806227411732;
  } else {
    result[0] += 0.01627339300244101;
    result[1] += 0.006509357200976403;
    result[2] += 0.7640358014646054;
    result[3] += 0.13913751017087062;
    result[4] += 0.004882017900732303;
    result[5] += 0.0691619202603743;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 0.022944550669216062;
    result[1] += 0.015296367112810707;
    result[2] += 0.012109623964308477;
    result[3] += 0.13065646908859146;
    result[4] += 0.19120458891013384;
    result[5] += 0.6277884002549394;
  } else {
    result[0] += 0.3386552041756217;
    result[1] += 0.14706785385323917;
    result[2] += 0.2959778937672705;
    result[3] += 0.0828983727356463;
    result[4] += 0.07061713233036537;
    result[5] += 0.06478354313785692;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.32476506357103374;
    result[1] += 0.1310116086235489;
    result[2] += 0.015201768933112217;
    result[3] += 0.09065782200110559;
    result[4] += 0.15146489773355445;
    result[5] += 0.28689883913764513;
  } else {
    result[0] += 0.012417218543046357;
    result[1] += 0;
    result[2] += 0.8170529801324503;
    result[3] += 0.13079470198675497;
    result[4] += 0;
    result[5] += 0.039735099337748346;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3207810320781032;
    result[1] += 0.1417015341701534;
    result[2] += 0.009483960948396096;
    result[3] += 0.08145048814504881;
    result[4] += 0.14532775453277547;
    result[5] += 0.301255230125523;
  } else {
    result[0] += 0.019339242546333606;
    result[1] += 0;
    result[2] += 0.7687348912167608;
    result[3] += 0.15874294923448834;
    result[4] += 0.0008058017727639002;
    result[5] += 0.05237711522965351;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.30785619174434087;
    result[1] += 0.1336884154460719;
    result[2] += 0.024500665778961386;
    result[3] += 0.09906790945406126;
    result[4] += 0.12862849533954726;
    result[5] += 0.3062583222370173;
  } else {
    result[0] += 0.017740429505135387;
    result[1] += 0;
    result[2] += 0.861811391223156;
    result[3] += 0.09897292250233426;
    result[4] += 0;
    result[5] += 0.021475256769374416;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.30951731660758114;
    result[1] += 0.13226070357240252;
    result[2] += 0.03517862012544314;
    result[3] += 0.0935369511862558;
    result[4] += 0.13771475320425416;
    result[5] += 0.29179165530406326;
  } else {
    result[0] += 0.005176876617773943;
    result[1] += 0.004314063848144953;
    result[2] += 0.8386540120793787;
    result[3] += 0.09232096635030199;
    result[4] += 0.006902502157031924;
    result[5] += 0.05263157894736842;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3195991091314031;
    result[1] += 0.13808463251670378;
    result[2] += 0.019766146993318485;
    result[3] += 0.08240534521158129;
    result[4] += 0.14170378619153676;
    result[5] += 0.2984409799554566;
  } else {
    result[0] += 0.017828200972447326;
    result[1] += 0.004051863857374392;
    result[2] += 0.7366288492706645;
    result[3] += 0.14181523500810372;
    result[4] += 0.02106969205834684;
    result[5] += 0.07860615883306321;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.2978432978432978;
    result[1] += 0.14196014196014195;
    result[2] += 0.03330603330603331;
    result[3] += 0.10101010101010101;
    result[4] += 0.14223314223314223;
    result[5] += 0.28364728364728364;
  } else {
    result[0] += 0.016337059329320724;
    result[1] += 0.0051590713671539135;
    result[2] += 0.8151332760103183;
    result[3] += 0.12209802235597594;
    result[4] += 0.006018916595012898;
    result[5] += 0.03525365434221841;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 0.30354830354830353;
    result[1] += 0.12276612276612277;
    result[2] += 0.04972804972804973;
    result[3] += 0.0947940947940948;
    result[4] += 0.12975912975912976;
    result[5] += 0.2994042994042994;
  } else {
    result[0] += 0.010362694300518135;
    result[1] += 0.007253886010362694;
    result[2] += 0.844559585492228;
    result[3] += 0.10673575129533679;
    result[4] += 0.0062176165803108805;
    result[5] += 0.024870466321243522;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 0.018354860639021073;
    result[1] += 0.013596193065941536;
    result[2] += 0.014276002719238613;
    result[3] += 0.13936097892590074;
    result[4] += 0.18150917743031952;
    result[5] += 0.6329027872195785;
  } else {
    result[0] += 0.3287630402384501;
    result[1] += 0.15469448584202683;
    result[2] += 0.29746646795827125;
    result[3] += 0.08464977645305514;
    result[4] += 0.07779433681073025;
    result[5] += 0.05663189269746647;
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
