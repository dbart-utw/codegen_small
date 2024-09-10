
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64625746;
    result[1] += 29955528;
    result[2] += 7302019;
    result[3] += 19203735;
    result[4] += 31680414;
    result[5] += 61980920;
  } else {
    result[0] += 1181017;
    result[1] += 984181;
    result[2] += 177349474;
    result[3] += 23029842;
    result[4] += 1377853;
    result[5] += 10825994;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65639849;
    result[1] += 29294291;
    result[2] += 7165922;
    result[3] += 21612422;
    result[4] += 30842130;
    result[5] += 60193748;
  } else {
    result[0] += 2982616;
    result[1] += 4175662;
    result[2] += 168020711;
    result[3] += 25252816;
    result[4] += 2783775;
    result[5] += 11532782;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 69741035;
    result[1] += 30880053;
    result[2] += 3437938;
    result[3] += 17987784;
    result[4] += 30143352;
    result[5] += 62558200;
  } else {
    result[0] += 2102205;
    result[1] += 646832;
    result[2] += 152329035;
    result[3] += 35252367;
    result[4] += 3395870;
    result[5] += 21022053;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64703554;
    result[1] += 27323154;
    result[2] += 5348362;
    result[3] += 19184342;
    result[4] += 31508828;
    result[5] += 66680123;
  } else {
    result[0] += 5880918;
    result[1] += 2276484;
    result[2] += 173961352;
    result[3] += 22575137;
    result[4] += 379414;
    result[5] += 9675058;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 64841896;
    result[1] += 30921883;
    result[2] += 5232029;
    result[3] += 20046316;
    result[4] += 31450964;
    result[5] += 62255274;
  } else {
    result[0] += 5492285;
    result[1] += 2196914;
    result[2] += 166965480;
    result[3] += 27278351;
    result[4] += 732304;
    result[5] += 12083028;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 60760336;
    result[1] += 30554100;
    result[2] += 7015267;
    result[3] += 20987826;
    result[4] += 29684439;
    result[5] += 65746394;
  } else {
    result[0] += 3827956;
    result[1] += 1913978;
    result[2] += 182593529;
    result[3] += 18756987;
    result[4] += 1722580;
    result[5] += 5933332;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 63631289;
    result[1] += 29065429;
    result[2] += 6716314;
    result[3] += 20727935;
    result[4] += 31612997;
    result[5] += 62994397;
  } else {
    result[0] += 576763;
    result[1] += 1153527;
    result[2] += 180719304;
    result[3] += 21148003;
    result[4] += 576763;
    result[5] += 10574001;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64063097;
    result[1] += 29845592;
    result[2] += 8044319;
    result[3] += 22733947;
    result[4] += 29612423;
    result[5] += 60448983;
  } else {
    result[0] += 3008733;
    result[1] += 2068504;
    result[2] += 170745635;
    result[3] += 24822052;
    result[4] += 2068504;
    result[5] += 12034934;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 62943486;
    result[1] += 29392614;
    result[2] += 5468393;
    result[3] += 19936850;
    result[4] += 31101487;
    result[5] += 65905532;
  } else {
    result[0] += 2643682;
    result[1] += 0;
    result[2] += 184854416;
    result[3] += 20742739;
    result[4] += 0;
    result[5] += 6507526;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 67476892;
    result[1] += 30463743;
    result[2] += 1982847;
    result[3] += 19467954;
    result[4] += 33468057;
    result[5] += 61888868;
  } else {
    result[0] += 3773533;
    result[1] += 343048;
    result[2] += 166893098;
    result[3] += 30531317;
    result[4] += 1029145;
    result[5] += 12178221;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65251141;
    result[1] += 31365103;
    result[2] += 6917910;
    result[3] += 19053567;
    result[4] += 31189224;
    result[5] += 60971416;
  } else {
    result[0] += 5170209;
    result[1] += 2031153;
    result[2] += 174679237;
    result[3] += 20496189;
    result[4] += 738601;
    result[5] += 11632972;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64579500;
    result[1] += 31457392;
    result[2] += 6658864;
    result[3] += 20263612;
    result[4] += 29850080;
    result[5] += 61938916;
  } else {
    result[0] += 2573021;
    result[1] += 3958495;
    result[2] += 169027745;
    result[3] += 24542670;
    result[4] += 3562645;
    result[5] += 11083786;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65833166;
    result[1] += 29035588;
    result[2] += 8624432;
    result[3] += 19261232;
    result[4] += 28863100;
    result[5] += 63130844;
  } else {
    result[0] += 3149380;
    result[1] += 2952543;
    result[2] += 172625404;
    result[3] += 24998205;
    result[4] += 1574690;
    result[5] += 9448140;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64024357;
    result[1] += 28996538;
    result[2] += 8466989;
    result[3] += 20703528;
    result[4] += 32766088;
    result[5] += 59790862;
  } else {
    result[0] += 4015775;
    result[1] += 2677183;
    result[2] += 173060792;
    result[3] += 19887649;
    result[4] += 764909;
    result[5] += 14342054;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 7513460;
    result[1] += 3825034;
    result[2] += 3278600;
    result[3] += 30736884;
    result[4] += 38660169;
    result[5] += 130734214;
  } else {
    result[0] += 71208815;
    result[1] += 33525559;
    result[2] += 64807281;
    result[3] += 17620717;
    result[4] += 16630789;
    result[5] += 10955202;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 65080493;
    result[1] += 29461726;
    result[2] += 7653143;
    result[3] += 20715276;
    result[4] += 27677910;
    result[5] += 64159814;
  } else {
    result[0] += 2355557;
    result[1] += 981482;
    result[2] += 173329804;
    result[3] += 21985207;
    result[4] += 3925929;
    result[5] += 12170382;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 9003842;
    result[1] += 940699;
    result[2] += 268771;
    result[3] += 25802056;
    result[4] += 44616055;
    result[5] += 134116938;
  } else {
    result[0] += 70119199;
    result[1] += 33729064;
    result[2] += 67724236;
    result[3] += 17363483;
    result[4] += 15700314;
    result[5] += 10112066;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 64165776;
    result[1] += 30358001;
    result[2] += 6784553;
    result[3] += 21388592;
    result[4] += 30358001;
    result[5] += 61693439;
  } else {
    result[0] += 1377853;
    result[1] += 1574690;
    result[2] += 178530492;
    result[3] += 21848825;
    result[4] += 393672;
    result[5] += 11022830;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 63377250;
    result[1] += 31899280;
    result[2] += 3430677;
    result[3] += 19440504;
    result[4] += 31959467;
    result[5] += 64641183;
  } else {
    result[0] += 2560592;
    result[1] += 1024237;
    result[2] += 163024394;
    result[3] += 29361461;
    result[4] += 853530;
    result[5] += 17924148;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 63300960;
    result[1] += 31042374;
    result[2] += 5328168;
    result[3] += 19343568;
    result[4] += 29478672;
    result[5] += 66254619;
  } else {
    result[0] += 1536660;
    result[1] += 0;
    result[2] += 182862650;
    result[3] += 23241996;
    result[4] += 192082;
    result[5] += 6914974;
  }
  
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
