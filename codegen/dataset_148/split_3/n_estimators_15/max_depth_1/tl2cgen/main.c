
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    result[0] += 0.7599647505422994;
    result[1] += 0.0007456616052060737;
    result[2] += 0.0034571583514099785;
    result[3] += 0.1897369848156182;
    result[4] += 0.04528199566160521;
    result[5] += 0.00033893709327548807;
    result[6] += 0.00047451193058568327;
  } else {
    result[0] += 0.8019688326144427;
    result[1] += 0.000800055656045638;
    result[2] += 0.0030958675386113816;
    result[3] += 0.13416585501600112;
    result[4] += 0.05962153888966189;
    result[5] += 0.00010435508557117017;
    result[6] += 0.00024349519966606372;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.12328339575530588;
    result[1] += 0.0020287141073657934;
    result[2] += 0.0031210986267166045;
    result[3] += 0.49375780274656683;
    result[4] += 0.3764044943820225;
    result[5] += 0.001404494382022472;
    result[6] += 0;
  } else {
    result[0] += 0.9015151515151515;
    result[1] += 0.0006739997843200691;
    result[2] += 0.0028847190768898955;
    result[3] += 0.09446780977030088;
    result[4] += 0;
    result[5] += 0.00010783996549121104;
    result[6] += 0.0003504798878464359;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9994642788811082;
    result[1] += 0;
    result[2] += 0.0004974553246852639;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 3.8265794206558755e-05;
  } else {
    result[0] += 0.46928081994587434;
    result[1] += 0.002879023435250763;
    result[2] += 0.005009500777336327;
    result[3] += 0.38285253641964645;
    result[4] += 0.13905683192261184;
    result[5] += 0.0006333851557551679;
    result[6] += 0.0002879023435250763;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11819741150787463;
    result[1] += 0.0017152658662092624;
    result[2] += 0.004989864338063309;
    result[3] += 0.48276937470762515;
    result[4] += 0.39092468423514737;
    result[5] += 0.0014033993450803055;
    result[6] += 0;
  } else {
    result[0] += 0.9006660015638903;
    result[1] += 0.0007819451559845769;
    result[2] += 0.0031277806239383074;
    result[3] += 0.09507374551729716;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00035052713888963785;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.10921766072811774;
    result[1] += 0.0023237800154918666;
    result[2] += 0.00418280402788536;
    result[3] += 0.5075135553834237;
    result[4] += 0.3753679318357862;
    result[5] += 0.0013942680092951202;
    result[6] += 0;
  } else {
    result[0] += 0.9002564448643542;
    result[1] += 0.0007288432986907815;
    result[2] += 0.0022135240923201512;
    result[3] += 0.09647725738966122;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00032393035497368065;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9991974317817014;
    result[1] += 0;
    result[2] += 0.000649698081479783;
    result[3] += 0;
    result[4] += 0.00011465260261407934;
    result[5] += 0;
    result[6] += 3.821753420469311e-05;
  } else {
    result[0] += 0.4599053882542979;
    result[1] += 0.002596053997923157;
    result[2] += 0.00634590977270105;
    result[3] += 0.3858313141802238;
    result[4] += 0.14405215184031384;
    result[5] += 0.000634590977270105;
    result[6] += 0.000634590977270105;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2071578947368421;
    result[1] += 0.0046315789473684215;
    result[2] += 0.006105263157894737;
    result[3] += 0.43642105263157893;
    result[4] += 0.3456842105263158;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8543741935483871;
    result[1] += 0.00036129032258064514;
    result[2] += 0.0022451612903225805;
    result[3] += 0.12144516129032258;
    result[4] += 0.021083870967741936;
    result[5] += 0.00023225806451612904;
    result[6] += 0.00025806451612903227;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.12055398174378346;
    result[1] += 0.0017311929493232612;
    result[2] += 0.0061378659112370166;
    result[3] += 0.49622285174693115;
    result[4] += 0.3748819641170916;
    result[5] += 0.0004721435316336167;
    result[6] += 0;
  } else {
    result[0] += 0.9014698756259085;
    result[1] += 0.0006460991762235503;
    result[2] += 0.002934367092015291;
    result[3] += 0.09459968771873149;
    result[4] += 0;
    result[5] += 2.6920799009314596e-05;
    result[6] += 0.00032304958811177516;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2114335588042767;
    result[1] += 0.005018546803403885;
    result[2] += 0.006982325987344535;
    result[3] += 0.4335588042766747;
    result[4] += 0.3430067641283003;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8558984505486033;
    result[1] += 0.0002312614024719274;
    result[2] += 0.0027237454068915895;
    result[3] += 0.11981910219184415;
    result[4] += 0.020813526222473466;
    result[5] += 0.0002312614024719274;
    result[6] += 0.0002826528252434668;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9988936365023654;
    result[1] += 0;
    result[2] += 0.0010300625667633147;
    result[3] += 0;
    result[4] += 3.815046543567832e-05;
    result[5] += 0;
    result[6] += 3.815046543567832e-05;
  } else {
    result[0] += 0.46598796853308655;
    result[1] += 0.0024872744099953725;
    result[2] += 0.005842202683942619;
    result[3] += 0.3838500694123091;
    result[4] += 0.14073345673299398;
    result[5] += 0.00046274872744099955;
    result[6] += 0.0006362795002313743;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993139459541869;
    result[1] += 0;
    result[2] += 0.000533597591188017;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0001524564546251477;
  } else {
    result[0] += 0.467647569947286;
    result[1] += 0.001969530209117766;
    result[2] += 0.006024445345536695;
    result[3] += 0.3795979841279035;
    result[4] += 0.1436598505474135;
    result[5] += 0.000347564154550194;
    result[6] += 0.0007530556681920869;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9988548744178946;
    result[1] += 0;
    result[2] += 0.0008779296129475533;
    result[3] += 0;
    result[4] += 7.63417054737003e-05;
    result[5] += 0;
    result[6] += 0.00019085426368425074;
  } else {
    result[0] += 0.46324124378684545;
    result[1] += 0.002138481100450815;
    result[2] += 0.005490694717373714;
    result[3] += 0.3860247370246214;
    result[4] += 0.1418911108542365;
    result[5] += 0.0004623742919893654;
    result[6] += 0.0007513582244827188;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2118476106584453;
    result[1] += 0.0041841004184100415;
    result[2] += 0.004404316229905308;
    result[3] += 0.43074212728473904;
    result[4] += 0.3488218454085003;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.858851613234426;
    result[1] += 0.00043635616930619373;
    result[2] += 0.002720809055673914;
    result[3] += 0.11840652994173363;
    result[4] += 0.019302343489309277;
    result[5] += 0.00015400805975512722;
    result[6] += 0.00012834004979593935;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9990803188228081;
    result[1] += 0;
    result[2] += 0.0007280809319435929;
    result[3] += 0;
    result[4] += 3.832004904966278e-05;
    result[5] += 0;
    result[6] += 0.00015328019619865113;
  } else {
    result[0] += 0.46776603079751783;
    result[1] += 0.002068490002298322;
    result[2] += 0.005745805561939784;
    result[3] += 0.3820386118133762;
    result[4] += 0.14146173293495748;
    result[5] += 0.00028729027809698917;
    result[6] += 0.0006320386118133762;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    result[0] += 0.04100885637273778;
    result[1] += 0.002695417789757413;
    result[2] += 0.005968425105891414;
    result[3] += 0.4795918367346939;
    result[4] += 0.47015787447054297;
    result[5] += 0.0005775895263765885;
    result[6] += 0;
  } else {
    result[0] += 0.8897039628256671;
    result[1] += 0.0007570615569362503;
    result[2] += 0.0028455072312431476;
    result[3] += 0.10632799039314991;
    result[4] += 0;
    result[5] += 0.00010442228371534486;
    result[6] += 0.0002610557092883622;
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
