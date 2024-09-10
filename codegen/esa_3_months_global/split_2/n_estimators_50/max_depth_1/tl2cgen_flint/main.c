
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8071420222092344;
    result[1] += 0.19285797779076563;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401213884225622;
    result[1] += 0.05987861157743779;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.49893824101928863;
    result[1] += 0.5010617589807114;
  } else {
    result[0] += 0.919603129415238;
    result[1] += 0.08039687058476203;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9405011718537091;
    result[1] += 0.05949882814629095;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8101761596150131;
    result[1] += 0.18982384038498692;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.006949524506217996;
    result[1] += 0.993050475493782;
  } else {
    result[0] += 0.7671462510268878;
    result[1] += 0.2328537489731122;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9406942679055731;
    result[1] += 0.05930573209442696;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 0.00992681689732628;
    result[1] += 0.9900731831026737;
  } else {
    result[0] += 0.7573252206457685;
    result[1] += 0.24267477935423154;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8046852752642805;
    result[1] += 0.19531472473571956;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9404996019243724;
    result[1] += 0.05950039807562756;
  }
  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
    result[0] += 0.0014832011349713032;
    result[1] += 0.9985167988650286;
  } else {
    result[0] += 0.7622022280768614;
    result[1] += 0.23779777192313853;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47144988471449883;
    result[1] += 0.5285501152855011;
  } else {
    result[0] += 0.9984877566451463;
    result[1] += 0.0015122433548537195;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7994174622621882;
    result[1] += 0.2005825377378118;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8100116428057407;
    result[1] += 0.18998835719425933;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4734832721153672;
    result[1] += 0.5265167278846328;
  } else {
    result[0] += 0.9982098435356752;
    result[1] += 0.001790156464324739;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47228054298642536;
    result[1] += 0.5277194570135747;
  } else {
    result[0] += 0.9981524517778294;
    result[1] += 0.0018475482221705787;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.061797001814188866;
    result[1] += 0.9382029981858111;
  } else {
    result[0] += 0.9383543118693436;
    result[1] += 0.0616456881306564;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7993518160128019;
    result[1] += 0.20064818398719808;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47381782700612546;
    result[1] += 0.5261821729938746;
  } else {
    result[0] += 0.9981135151501036;
    result[1] += 0.0018864848498963598;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8070187735838036;
    result[1] += 0.19298122641619644;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06166442902255923;
    result[1] += 0.9383355709774408;
  } else {
    result[0] += 0.9377283768452849;
    result[1] += 0.06227162315471509;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9406311516167045;
    result[1] += 0.05936884838329553;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8027573241422529;
    result[1] += 0.19724267585774713;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 0.009353173398117219;
    result[1] += 0.9906468266018827;
  } else {
    result[0] += 0.7662511452289069;
    result[1] += 0.23374885477109303;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06311085757748622;
    result[1] += 0.9368891424225138;
  } else {
    result[0] += 0.9365909564492603;
    result[1] += 0.06340904355073974;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.004723502304147465;
    result[1] += 0.9952764976958526;
  } else {
    result[0] += 0.8109312690593479;
    result[1] += 0.18906873094065213;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0.00025075225677031093;
    result[1] += 0.9997492477432297;
  } else {
    result[0] += 0.7829973955384442;
    result[1] += 0.2170026044615559;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 0.004321254398419656;
    result[1] += 0.9956787456015803;
  } else {
    result[0] += 0.7645388969899257;
    result[1] += 0.23546110301007425;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7784877050102365;
    result[1] += 0.22151229498976355;
  }
  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
    result[0] += 0.04257028112449799;
    result[1] += 0.957429718875502;
  } else {
    result[0] += 0.7567283338839335;
    result[1] += 0.24327166611606652;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397790130336101;
    result[1] += 0.06022098696638987;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.008721107519668233;
    result[1] += 0.9912788924803317;
  } else {
    result[0] += 0.7655289931895006;
    result[1] += 0.23447100681049937;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8065364145740265;
    result[1] += 0.19346358542597353;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 5.00776203114828e-05;
    result[1] += 0.9999499223796885;
  } else {
    result[0] += 0.7853344734442865;
    result[1] += 0.2146655265557135;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8104746911376551;
    result[1] += 0.18952530886234484;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8073886480209603;
    result[1] += 0.19261135197903964;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05862997883394266;
    result[1] += 0.9413700211660574;
  } else {
    result[0] += 0.9358323535514212;
    result[1] += 0.06416764644857874;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8095285545975158;
    result[1] += 0.19047144540248412;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 0.00901752599810923;
    result[1] += 0.9909824740018908;
  } else {
    result[0] += 0.7558325902991647;
    result[1] += 0.2441674097008353;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.807517742924735;
    result[1] += 0.19248225707526506;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.0026208130912810023;
    result[1] += 0.997379186908719;
  } else {
    result[0] += 0.7639346437020496;
    result[1] += 0.23606535629795042;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7787931820355979;
    result[1] += 0.22120681796440209;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7994335260115607;
    result[1] += 0.2005664739884393;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 0.00839615125329411;
    result[1] += 0.9916038487467059;
  } else {
    result[0] += 0.7677690673146808;
    result[1] += 0.23223093268531927;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06313529534702562;
    result[1] += 0.9368647046529743;
  } else {
    result[0] += 0.9378643340026541;
    result[1] += 0.06213566599734588;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7996596454060813;
    result[1] += 0.20034035459391877;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8033818279082208;
    result[1] += 0.19661817209177918;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47095236368909515;
    result[1] += 0.5290476363109049;
  } else {
    result[0] += 0.9982835405455558;
    result[1] += 0.0017164594544442384;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.06042615328453129;
    result[1] += 0.9395738467154687;
  } else {
    result[0] += 0.9357704843162898;
    result[1] += 0.06422951568371012;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005829681844160792;
    result[1] += 0.9941703181558392;
  } else {
    result[0] += 0.8117077180518452;
    result[1] += 0.1882922819481549;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_2/test_data.csv", "r");
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
