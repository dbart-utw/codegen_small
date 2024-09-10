
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
    result[0] += 0.8102474118266363;
    result[1] += 0.18975258817336374;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005716864751015496;
    result[1] += 0.9942831352489845;
  } else {
    result[0] += 0.8115571976560846;
    result[1] += 0.18844280234391547;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.00391277921288558;
    result[1] += 0.9960872207871144;
  } else {
    result[0] += 0.8102457764515144;
    result[1] += 0.18975422354848565;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8075363436638152;
    result[1] += 0.19246365633618473;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8102737201724571;
    result[1] += 0.18972627982754284;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0.0001001001001001001;
    result[1] += 0.9998998998998999;
  } else {
    result[0] += 0.7849983010533469;
    result[1] += 0.21500169894665308;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.055811166099597895;
    result[1] += 0.9441888339004021;
  } else {
    result[0] += 0.9354010163499779;
    result[1] += 0.06459898365002209;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06174862346866843;
    result[1] += 0.9382513765313316;
  } else {
    result[0] += 0.9378509505597856;
    result[1] += 0.062149049440214335;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9387529200847504;
    result[1] += 0.061247079915249636;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05676197836166924;
    result[1] += 0.9432380216383307;
  } else {
    result[0] += 0.9352693370165746;
    result[1] += 0.06473066298342542;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8032655526007131;
    result[1] += 0.19673444739928697;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05575725149998089;
    result[1] += 0.9442427485000191;
  } else {
    result[0] += 0.9346858402784519;
    result[1] += 0.06531415972154812;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.8001178598046069;
    result[1] += 0.19988214019539308;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
    result[0] += 0.7209975797556756;
    result[1] += 0.2790024202443244;
  } else {
    result[0] += 0.035571618793988964;
    result[1] += 0.964428381206011;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.8007796910156227;
    result[1] += 0.19922030898437726;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7999062087492184;
    result[1] += 0.20009379125078158;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9403884114203539;
    result[1] += 0.059611588579646047;
  }
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    result[0] += 0.009299307958477509;
    result[1] += 0.9907006920415224;
  } else {
    result[0] += 0.7582216675424768;
    result[1] += 0.2417783324575232;
  }
  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
    result[0] += 0.71820164053577;
    result[1] += 0.2817983594642301;
  } else {
    result[0] += 0.0007614213197969543;
    result[1] += 0.999238578680203;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8063494475057411;
    result[1] += 0.19365055249425886;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9395808819028315;
    result[1] += 0.06041911809716847;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4761607498281041;
    result[1] += 0.5238392501718959;
  } else {
    result[0] += 0.9984423676012462;
    result[1] += 0.001557632398753894;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05736626151583185;
    result[1] += 0.9426337384841682;
  } else {
    result[0] += 0.9362076581177705;
    result[1] += 0.06379234188222953;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.057611105755326325;
    result[1] += 0.9423888942446736;
  } else {
    result[0] += 0.9358996509900135;
    result[1] += 0.06410034900998653;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5019243451812625;
    result[1] += 0.4980756548187375;
  } else {
    result[0] += 0.92158328682595;
    result[1] += 0.07841671317404993;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.799264170777068;
    result[1] += 0.20073582922293198;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8004337642057777;
    result[1] += 0.19956623579422225;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8084090855981119;
    result[1] += 0.19159091440188816;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06278239738770551;
    result[1] += 0.9372176026122945;
  } else {
    result[0] += 0.9379300279387849;
    result[1] += 0.06206997206121513;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.80078125;
    result[1] += 0.19921875;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.93940750690247;
    result[1] += 0.06059249309753004;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7995583381025881;
    result[1] += 0.2004416618974119;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8038356991845363;
    result[1] += 0.1961643008154636;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.809199169031805;
    result[1] += 0.19080083096819497;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05577157448784168;
    result[1] += 0.9442284255121584;
  } else {
    result[0] += 0.9357272532736924;
    result[1] += 0.06427274672630758;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7991561083746693;
    result[1] += 0.20084389162533064;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9407479194339776;
    result[1] += 0.059252080566022394;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8124421750383548;
    result[1] += 0.18755782496164522;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8065334564884425;
    result[1] += 0.19346654351155748;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.47085601739162747;
    result[1] += 0.5291439826083725;
  } else {
    result[0] += 0.9819279818267695;
    result[1] += 0.01807201817323047;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.057117513209148055;
    result[1] += 0.942882486790852;
  } else {
    result[0] += 0.9358129120537381;
    result[1] += 0.06418708794626198;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8016566370036479;
    result[1] += 0.19834336299635213;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.4712645827101406;
    result[1] += 0.5287354172898594;
  } else {
    result[0] += 0.9826419896410074;
    result[1] += 0.017358010358992676;
  }
  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7570895888529094;
    result[1] += 0.24291041114709058;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7794433632201235;
    result[1] += 0.22055663677987647;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7792520702331158;
    result[1] += 0.22074792976688415;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47309048178613394;
    result[1] += 0.526909518213866;
  } else {
    result[0] += 0.9984755033166531;
    result[1] += 0.0015244966833469103;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.060850453893932156;
    result[1] += 0.9391495461060678;
  } else {
    result[0] += 0.9381703470031546;
    result[1] += 0.061829652996845424;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.05945430261400496;
    result[1] += 0.940545697385995;
  } else {
    result[0] += 0.9389802289281998;
    result[1] += 0.061019771071800205;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06211653519301856;
    result[1] += 0.9378834648069815;
  } else {
    result[0] += 0.9379641583031414;
    result[1] += 0.06203584169685865;
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
