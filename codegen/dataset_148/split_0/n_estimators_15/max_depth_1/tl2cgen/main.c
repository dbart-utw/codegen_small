
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11958511287370348;
    result[1] += 0.0010677242220866383;
    result[2] += 0.0050335570469798654;
    result[3] += 0.49725442342892007;
    result[4] += 0.37553386211104334;
    result[5] += 0.001525320317266626;
    result[6] += 0;
  } else {
    result[0] += 0.8995506712862711;
    result[1] += 0.0008391078388912949;
    result[2] += 0.0027067994802944997;
    result[3] += 0.09657860545690775;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00032481593763534;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.840344563101068;
    result[1] += 0.0013275119476075287;
    result[2] += 0.0019765177886600983;
    result[3] += 0.10490294412649716;
    result[4] += 0.051094459850138656;
    result[5] += 8.850079650716858e-05;
    result[6] += 0.00026550238952150574;
  } else {
    result[0] += 0.5826911060195793;
    result[1] += 0;
    result[2] += 0.00416579879191835;
    result[3] += 0.34117892105811287;
    result[4] += 0.07113101437200584;
    result[5] += 0.00041657987919183504;
    result[6] += 0.00041657987919183504;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8373955518087823;
    result[1] += 0.0002975378740918896;
    result[2] += 0.002826609803872951;
    result[3] += 0.1355780912945377;
    result[4] += 0.02350549205325928;
    result[5] += 0.0001487689370459448;
    result[6] += 0.000247948228409908;
  } else {
    result[0] += 0.09277374566109182;
    result[1] += 0.007257810034711265;
    result[2] += 0.002840012622278321;
    result[3] += 0.4203218680971915;
    result[4] += 0.47680656358472706;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9995011894712609;
    result[1] += 0;
    result[2] += 0.000345330366050188;
    result[3] += 0;
    result[4] += 0.00011511012201672934;
    result[5] += 0;
    result[6] += 3.8370040672243114e-05;
  } else {
    result[0] += 0.46083266429636427;
    result[1] += 0.0021791489849753414;
    result[2] += 0.006537446954926023;
    result[3] += 0.39431127422869594;
    result[4] += 0.13510723706847116;
    result[5] += 0.00045876820736322975;
    result[6] += 0.0005734602592040372;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8405192625681779;
    result[1] += 0.0004935955971272736;
    result[2] += 0.0022952195266418224;
    result[3] += 0.13309805276536935;
    result[4] += 0.023174313285125498;
    result[5] += 0.00014807867913818208;
    result[6] += 0.0002714775784200005;
  } else {
    result[0] += 0.0872190540087219;
    result[1] += 0.004025494800402549;
    result[2] += 0.0030191211003019122;
    result[3] += 0.4287151962428715;
    result[4] += 0.4770211338477021;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.23343786750294002;
    result[1] += 0.004508036064288515;
    result[2] += 0.0031360250882007056;
    result[3] += 0.4276754214033712;
    result[4] += 0.3312426499411995;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8598885358612426;
    result[1] += 0.00031251627688942126;
    result[2] += 0.0021094848690035935;
    result[3] += 0.11873014219490596;
    result[4] += 0.018568675451846445;
    result[5] += 0.0001302151153705922;
    result[6] += 0.0002604302307411844;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8413385437277404;
    result[1] += 0.00032152750296794615;
    result[2] += 0.0024238227146814403;
    result[3] += 0.13113375544123468;
    result[4] += 0.024213494261970715;
    result[5] += 0.00034626038781163435;
    result[6] += 0.0002225959635931935;
  } else {
    result[0] += 0.0909387222946545;
    result[1] += 0.007496740547588005;
    result[2] += 0.0022816166883963492;
    result[3] += 0.4136245110821382;
    result[4] += 0.48565840938722293;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.844322451855331;
    result[1] += 0.0008513386566463126;
    result[2] += 0.001996242367308595;
    result[3] += 0.10195514325974633;
    result[4] += 0.050493189290746816;
    result[5] += 0.0002348520432127759;
    result[6] += 0.00014678252700798495;
  } else {
    result[0] += 0.5881729546417974;
    result[1] += 0;
    result[2] += 0.00582874099194574;
    result[3] += 0.3367952522255193;
    result[4] += 0.06846121237812633;
    result[5] += 0.000317931326833404;
    result[6] += 0.000423908435777872;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9989020973726055;
    result[1] += 0;
    result[2] += 0.000908609070947225;
    result[3] += 0;
    result[4] += 0.0001514348451578708;
    result[5] += 0;
    result[6] += 3.78587112894677e-05;
  } else {
    result[0] += 0.4679854851925553;
    result[1] += 0.002575207772445277;
    result[2] += 0.005852744937375629;
    result[3] += 0.38107222287252723;
    result[4] += 0.14175348238323773;
    result[5] += 0.0005852744937375629;
    result[6] += 0.00017558234812126887;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8390352504638219;
    result[1] += 0.00039579468150896725;
    result[2] += 0.0024489795918367346;
    result[3] += 0.13407544836116264;
    result[4] += 0.023747680890538032;
    result[5] += 9.894867037724181e-05;
    result[6] += 0.00019789734075448362;
  } else {
    result[0] += 0.09983739837398374;
    result[1] += 0.0045528455284552845;
    result[2] += 0.0022764227642276423;
    result[3] += 0.42341463414634145;
    result[4] += 0.46991869918699186;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8392622849362544;
    result[1] += 0.0003713330857779428;
    result[2] += 0.0023022651318232454;
    result[3] += 0.13432355489540784;
    result[4] += 0.023195940091595493;
    result[5] += 0.0002723109295704914;
    result[6] += 0.0002723109295704914;
  } else {
    result[0] += 0.08405797101449275;
    result[1] += 0.00676328502415459;
    result[2] += 0.004830917874396135;
    result[3] += 0.43059581320450885;
    result[4] += 0.47375201288244767;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8454459650778667;
    result[1] += 0.0011503067484662575;
    result[2] += 0.0017991977347805565;
    result[3] += 0.09957527135441244;
    result[4] += 0.05161632845681924;
    result[5] += 0.0002949504483246814;
    result[6] += 0.00011798017932987256;
  } else {
    result[0] += 0.6024385160483535;
    result[1] += 0;
    result[2] += 0.004689453939141309;
    result[3] += 0.324822842851188;
    result[4] += 0.06700708628595248;
    result[5] += 0.00020842017507294707;
    result[6] += 0.0008336807002917883;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8388433830060199;
    result[1] += 0.0003700779630908911;
    result[2] += 0.002245139642751406;
    result[3] += 0.13394355077469652;
    result[4] += 0.024104411329320043;
    result[5] += 0.00027139050626665353;
    result[6] += 0.00022204677785453468;
  } else {
    result[0] += 0.09366576819407008;
    result[1] += 0.007075471698113208;
    result[2] += 0.0026954177897574125;
    result[3] += 0.4134097035040431;
    result[4] += 0.4831536388140162;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.1918716577540107;
    result[1] += 0.0042780748663101605;
    result[2] += 0.0053475935828877;
    result[3] += 0.4532620320855615;
    result[4] += 0.3452406417112299;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8580553766902769;
    result[1] += 0.000386349001931745;
    result[2] += 0.002395363811976819;
    result[3] += 0.11830006439150033;
    result[4] += 0.02050225370251127;
    result[5] += 0.00025756600128783;
    result[6] += 0.000103026400515132;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    result[0] += 0.03702989392478303;
    result[1] += 0.0021215043394406945;
    result[2] += 0.0017357762777242044;
    result[3] += 0.4871745419479267;
    result[4] += 0.47116682738669236;
    result[5] += 0.0007714561234329798;
    result[6] += 0;
  } else {
    result[0] += 0.8904084562181913;
    result[1] += 0.0006002870938274827;
    result[2] += 0.0021401539866892864;
    result[3] += 0.1064335116794989;
    result[4] += 0;
    result[5] += 5.219887772412893e-05;
    result[6] += 0.0003653921440689025;
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  result[6] /= 15;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
