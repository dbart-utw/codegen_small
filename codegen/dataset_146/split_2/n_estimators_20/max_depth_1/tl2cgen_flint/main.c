
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.29584017515051997;
    result[1] += 0.1360153256704981;
    result[2] += 0.03667214012041598;
    result[3] += 0.10454296661193213;
    result[4] += 0.13519430760810072;
    result[5] += 0.2917350848385331;
  } else {
    result[0] += 0.031569965870307165;
    result[1] += 0.0008532423208191126;
    result[2] += 0.7841296928327645;
    result[3] += 0.11262798634812286;
    result[4] += 0.012798634812286689;
    result[5] += 0.05802047781569966;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.30385852090032156;
    result[1] += 0.1304930332261522;
    result[2] += 0.03510182207931404;
    result[3] += 0.09485530546623794;
    result[4] += 0.13665594855305466;
    result[5] += 0.2990353697749196;
  } else {
    result[0] += 0.01736745886654479;
    result[1] += 0.007312614259597806;
    result[2] += 0.8208409506398537;
    result[3] += 0.09689213893967093;
    result[4] += 0.006398537477148081;
    result[5] += 0.051188299817184646;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.32372634643377;
    result[1] += 0.1467248908296943;
    result[2] += 0.023289665211062592;
    result[3] += 0.07802037845705968;
    result[4] += 0.14468704512372635;
    result[5] += 0.28355167394468705;
  } else {
    result[0] += 0.037383177570093455;
    result[1] += 0.010783608914450037;
    result[2] += 0.7117181883537024;
    result[3] += 0.15384615384615385;
    result[4] += 0.014378145219266714;
    result[5] += 0.07189072609633357;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3152053274139845;
    result[1] += 0.1512208657047725;
    result[2] += 0.02663706992230855;
    result[3] += 0.08351831298557161;
    result[4] += 0.13485016648168704;
    result[5] += 0.288568257491676;
  } else {
    result[0] += 0.01800327332242226;
    result[1] += 0.0008183306055646482;
    result[2] += 0.7643207855973814;
    result[3] += 0.12929623567921442;
    result[4] += 0.013911620294599018;
    result[5] += 0.07364975450081833;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.31789137380191695;
    result[1] += 0.1336528221512247;
    result[2] += 0.0362087326943557;
    result[3] += 0.09078807241746539;
    result[4] += 0.12912673056443025;
    result[5] += 0.29233226837060705;
  } else {
    result[0] += 0.014953271028037386;
    result[1] += 0.010280373831775703;
    result[2] += 0.8037383177570094;
    result[3] += 0.10654205607476637;
    result[4] += 0.006542056074766356;
    result[5] += 0.05794392523364487;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.2898131087128192;
    result[1] += 0.1418794419584101;
    result[2] += 0.03132403264016847;
    result[3] += 0.08976046327981048;
    result[4] += 0.13977362463806264;
    result[5] += 0.3074493287707291;
  } else {
    result[0] += 0.005842259006815969;
    result[1] += 0.005842259006815969;
    result[2] += 0.8373904576436222;
    result[3] += 0.11002921129503408;
    result[4] += 0.004868549172346641;
    result[5] += 0.03602726387536514;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 0.03383214053350683;
    result[1] += 0.02342225113858165;
    result[2] += 0.011060507482108002;
    result[3] += 0.13337670787247885;
    result[4] += 0.16330513988288875;
    result[5] += 0.6350032530904359;
  } else {
    result[0] += 0.34083307996351475;
    result[1] += 0.14746123441775616;
    result[2] += 0.309212526603831;
    result[3] += 0.07783520826999088;
    result[4] += 0.07175433262389784;
    result[5] += 0.052903618121009424;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 0.32998853211009177;
    result[1] += 0.13618119266055045;
    result[2] += 0.017488532110091742;
    result[3] += 0.08027522935779817;
    result[4] += 0.14392201834862386;
    result[5] += 0.29214449541284404;
  } else {
    result[0] += 0.01046337817638266;
    result[1] += 0.0029895366218236174;
    result[2] += 0.70254110612855;
    result[3] += 0.17189835575485798;
    result[4] += 0.016442451420029897;
    result[5] += 0.09566517189835576;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
    result[0] += 0.017110266159695818;
    result[1] += 0.0038022813688212928;
    result[2] += 0.004435994930291508;
    result[3] += 0.114702154626109;
    result[4] += 0.20405576679340937;
    result[5] += 0.655893536121673;
  } else {
    result[0] += 0.3380541871921182;
    result[1] += 0.15301724137931033;
    result[2] += 0.3001847290640394;
    result[3] += 0.09359605911330049;
    result[4] += 0.0625;
    result[5] += 0.052647783251231525;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.31671715780776644;
    result[1] += 0.13302120627926192;
    result[2] += 0.019829248141007987;
    result[3] += 0.07931699256403195;
    result[4] += 0.1412833930046819;
    result[5] += 0.3098320022032498;
  } else {
    result[0] += 0.012552301255230125;
    result[1] += 0;
    result[2] += 0.8;
    result[3] += 0.1414225941422594;
    result[4] += 0;
    result[5] += 0.04602510460251046;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.30844155844155846;
    result[1] += 0.13852813852813853;
    result[2] += 0.029491341991341992;
    result[3] += 0.09767316017316018;
    result[4] += 0.13446969696969696;
    result[5] += 0.2913961038961039;
  } else {
    result[0] += 0.01327433628318584;
    result[1] += 0.004424778761061947;
    result[2] += 0.8079646017699115;
    result[3] += 0.11946902654867257;
    result[4] += 0.0035398230088495575;
    result[5] += 0.05132743362831858;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.2984873041599136;
    result[1] += 0.14100486223662886;
    result[2] += 0.03565640194489466;
    result[3] += 0.09913560237709348;
    result[4] += 0.13884386817936253;
    result[5] += 0.286871961102107;
  } else {
    result[0] += 0.019572953736654807;
    result[1] += 0.01512455516014235;
    result[2] += 0.7998220640569396;
    result[3] += 0.1023131672597865;
    result[4] += 0.004448398576512457;
    result[5] += 0.05871886120996442;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3125698324022346;
    result[1] += 0.14497206703910615;
    result[2] += 0.017039106145251396;
    result[3] += 0.08324022346368715;
    result[4] += 0.13743016759776536;
    result[5] += 0.3047486033519553;
  } else {
    result[0] += 0.012841091492776888;
    result[1] += 0.0008025682182985555;
    result[2] += 0.7303370786516855;
    result[3] += 0.1621187800963082;
    result[4] += 0.020866773675762444;
    result[5] += 0.07303370786516855;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.31105807478122516;
    result[1] += 0.13312118801378944;
    result[2] += 0.03553434102360117;
    result[3] += 0.09440466719702996;
    result[4] += 0.13842482100238662;
    result[5] += 0.28745690798196766;
  } else {
    result[0] += 0.005687203791469194;
    result[1] += 0.008530805687203791;
    result[2] += 0.8085308056872038;
    result[3] += 0.12796208530805686;
    result[4] += 0.005687203791469194;
    result[5] += 0.043601895734597156;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3202054794520548;
    result[1] += 0.1338470319634703;
    result[2] += 0.02026255707762557;
    result[3] += 0.07591324200913242;
    result[4] += 0.1461187214611872;
    result[5] += 0.3036529680365297;
  } else {
    result[0] += 0.023449319213313162;
    result[1] += 0.009833585476550681;
    result[2] += 0.7307110438729199;
    result[3] += 0.1459909228441755;
    result[4] += 0.01361573373676248;
    result[5] += 0.07639939485627836;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.31513303769401335;
    result[1] += 0.14634146341463417;
    result[2] += 0.017461197339246122;
    result[3] += 0.07677383592017739;
    result[4] += 0.14800443458980048;
    result[5] += 0.29628603104212864;
  } else {
    result[0] += 0.017241379310344827;
    result[1] += 0;
    result[2] += 0.8243021346469622;
    result[3] += 0.11822660098522167;
    result[4] += 0.0008210180623973727;
    result[5] += 0.03940886699507389;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    result[0] += 0.023870967741935485;
    result[1] += 0.01096774193548387;
    result[2] += 0.001935483870967742;
    result[3] += 0.12322580645161291;
    result[4] += 0.1896774193548387;
    result[5] += 0.6503225806451612;
  } else {
    result[0] += 0.3311965811965812;
    result[1] += 0.15506715506715507;
    result[2] += 0.31746031746031744;
    result[3] += 0.08333333333333333;
    result[4] += 0.05952380952380952;
    result[5] += 0.053418803418803416;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.3033137359700695;
    result[1] += 0.1378941742383752;
    result[2] += 0.036344200962052375;
    result[3] += 0.09727418492784608;
    result[4] += 0.13949759486905397;
    result[5] += 0.2856761090326029;
  } else {
    result[0] += 0.003690036900369004;
    result[1] += 0.007380073800738008;
    result[2] += 0.8357933579335795;
    result[3] += 0.10147601476014761;
    result[4] += 0;
    result[5] += 0.05166051660516606;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.2934115764203788;
    result[1] += 0.12670045345425446;
    result[2] += 0.038676980528140836;
    result[3] += 0.10349426513736996;
    result[4] += 0.1416377700720192;
    result[5] += 0.29607895438783677;
  } else {
    result[0] += 0.014856081708449397;
    result[1] += 0.009285051067780872;
    result[2] += 0.8022284122562674;
    result[3] += 0.10584958217270195;
    result[4] += 0.002785515320334262;
    result[5] += 0.06499535747446611;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3126410835214447;
    result[1] += 0.136568848758465;
    result[2] += 0.027934537246049662;
    result[3] += 0.08521444695259593;
    result[4] += 0.13797968397291197;
    result[5] += 0.2996613995485327;
  } else {
    result[0] += 0.0070202808112324495;
    result[1] += 0.00234009360374415;
    result[2] += 0.749609984399376;
    result[3] += 0.14040561622464898;
    result[4] += 0.0171606864274571;
    result[5] += 0.08346333853354135;
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  
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
