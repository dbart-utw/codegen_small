
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 33481026;
    result[1] += 352896;
    result[2] += 1235136;
    result[3] += 139791006;
    result[4] += 111029966;
    result[5] += 441120;
    result[6] += 0;
  } else {
    result[0] += 259685621;
    result[1] += 139262;
    result[2] += 773679;
    result[3] += 25616537;
    result[4] += 0;
    result[5] += 15473;
    result[6] += 100578;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 57911763;
    result[1] += 1489691;
    result[2] += 2048326;
    result[3] += 122713351;
    result[4] += 102168020;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 245318358;
    result[1] += 117810;
    result[2] += 684773;
    result[3] += 34032519;
    result[4] += 6074605;
    result[5] += 22089;
    result[6] += 80994;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286156673;
    result[1] += 0;
    result[2] += 130859;
    result[3] += 0;
    result[4] += 43619;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 133609027;
    result[1] += 697437;
    result[2] += 1776804;
    result[3] += 110327911;
    result[4] += 39587859;
    result[5] += 249084;
    result[6] += 83028;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 56341969;
    result[1] += 1645945;
    result[2] += 1012889;
    result[3] += 123635804;
    result[4] += 103694545;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 245670175;
    result[1] += 95500;
    result[2] += 712577;
    result[3] += 33682128;
    result[4] += 5979771;
    result[5] += 66115;
    result[6] += 124884;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 33060916;
    result[1] += 363306;
    result[2] += 999093;
    result[3] += 140418069;
    result[4] += 111217286;
    result[5] += 272480;
    result[6] += 0;
  } else {
    result[0] += 258656452;
    result[1] += 230943;
    result[2] += 839093;
    result[3] += 26512286;
    result[4] += 0;
    result[5] += 0;
    result[6] += 92377;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 10257289;
    result[1] += 381920;
    result[2] += 1254881;
    result[3] += 139946533;
    result[4] += 134163167;
    result[5] += 327360;
    result[6] += 0;
  } else {
    result[0] += 255236841;
    result[1] += 194620;
    result[2] += 696141;
    result[3] += 30023900;
    result[4] += 0;
    result[5] += 37426;
    result[6] += 142222;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286200213;
    result[1] += 0;
    result[2] += 87292;
    result[3] += 0;
    result[4] += 32734;
    result[5] += 0;
    result[6] += 10911;
  } else {
    result[0] += 132539520;
    result[1] += 630429;
    result[2] += 1758566;
    result[3] += 108815460;
    result[4] += 42454453;
    result[5] += 66361;
    result[6] += 66361;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 285995236;
    result[1] += 0;
    result[2] += 238392;
    result[3] += 0;
    result[4] += 54180;
    result[5] += 0;
    result[6] += 43344;
  } else {
    result[0] += 133456877;
    result[1] += 570113;
    result[2] += 1878021;
    result[3] += 109025834;
    result[4] += 41182320;
    result[5] += 50304;
    result[6] += 167680;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286111658;
    result[1] += 0;
    result[2] += 164621;
    result[3] += 0;
    result[4] += 32924;
    result[5] += 0;
    result[6] += 21949;
  } else {
    result[0] += 133412884;
    result[1] += 575622;
    result[2] += 1792653;
    result[3] += 110535995;
    result[4] += 39800194;
    result[5] += 65785;
    result[6] += 148017;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 11746919;
    result[1] += 543838;
    result[2] += 1359597;
    result[3] += 138406986;
    result[4] += 133947508;
    result[5] += 326303;
    result[6] += 0;
  } else {
    result[0] += 255170595;
    result[1] += 194706;
    result[2] += 673984;
    result[3] += 30127114;
    result[4] += 0;
    result[5] += 14977;
    result[6] += 149774;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 240078247;
    result[1] += 297473;
    result[2] += 705437;
    result[3] += 29755865;
    result[4] += 15400636;
    result[5] += 33996;
    result[6] += 59494;
  } else {
    result[0] += 171430964;
    result[1] += 0;
    result[2] += 1605158;
    result[3] += 92486334;
    result[4] += 20633587;
    result[5] += 58369;
    result[6] += 116738;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 31646424;
    result[1] += 534116;
    result[2] += 845685;
    result[3] += 143766457;
    result[4] += 109271410;
    result[5] += 267058;
    result[6] += 0;
  } else {
    result[0] += 258468189;
    result[1] += 231740;
    result[2] += 811092;
    result[3] += 26673360;
    result[4] += 0;
    result[5] += 15449;
    result[6] += 131319;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 286079341;
    result[1] += 0;
    result[2] += 164224;
    result[3] += 0;
    result[4] += 65689;
    result[5] += 0;
    result[6] += 21896;
  } else {
    result[0] += 133237163;
    result[1] += 627231;
    result[2] += 1881694;
    result[3] += 109204295;
    result[4] += 41133177;
    result[5] += 49518;
    result[6] += 198073;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 31873433;
    result[1] += 353168;
    result[2] += 1412672;
    result[3] += 142547532;
    result[4] += 109835323;
    result[5] += 309022;
    result[6] += 0;
  } else {
    result[0] += 258660365;
    result[1] += 162450;
    result[2] += 858668;
    result[3] += 26556839;
    result[4] += 0;
    result[5] += 23207;
    result[6] += 69621;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 240654256;
    result[1] += 378956;
    result[2] += 749491;
    result[3] += 29634402;
    result[4] += 14863518;
    result[5] += 33685;
    result[6] += 16842;
  } else {
    result[0] += 172479930;
    result[1] += 0;
    result[2] += 1235875;
    result[3] += 92931776;
    result[4] += 19532854;
    result[5] += 120573;
    result[6] += 30143;
  }
  
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
