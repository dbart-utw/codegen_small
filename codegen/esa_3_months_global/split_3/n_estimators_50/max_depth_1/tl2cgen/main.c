
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.056488255679630346;
    result[1] += 0.9435117443203697;
  } else {
    result[0] += 0.9366546812335776;
    result[1] += 0.06334531876642235;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005037687966364911;
    result[1] += 0.994962312033635;
  } else {
    result[0] += 0.8102069241121539;
    result[1] += 0.18979307588784608;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.001234487687609642;
    result[1] += 0.9987655123123904;
  } else {
    result[0] += 0.7624869596895716;
    result[1] += 0.23751304031042839;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0050187725078538045;
    result[1] += 0.9949812274921462;
  } else {
    result[0] += 0.8089265390888078;
    result[1] += 0.1910734609111922;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4724132329850019;
    result[1] += 0.5275867670149981;
  } else {
    result[0] += 0.9984255825344622;
    result[1] += 0.001574417465537751;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7772260803553857;
    result[1] += 0.22277391964461438;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7769865510200638;
    result[1] += 0.22301344897993622;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.776290598675616;
    result[1] += 0.223709401324384;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06114514385419235;
    result[1] += 0.9388548561458077;
  } else {
    result[0] += 0.936794755028401;
    result[1] += 0.063205244971599;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.46986177520528666;
    result[1] += 0.5301382247947134;
  } else {
    result[0] += 0.9828051662914048;
    result[1] += 0.017194833708595175;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.008353365384615384;
    result[1] += 0.9916466346153846;
  } else {
    result[0] += 0.7647009782125389;
    result[1] += 0.2352990217874611;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9402619326381136;
    result[1] += 0.05973806736188635;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8091703516529796;
    result[1] += 0.19082964834702043;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.010101010101010102;
    result[1] += 0.98989898989899;
  } else {
    result[0] += 0.7666577839956475;
    result[1] += 0.2333422160043525;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8060862708448936;
    result[1] += 0.19391372915510646;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.0033900433172201643;
    result[1] += 0.9966099566827799;
  } else {
    result[0] += 0.763390558652723;
    result[1] += 0.23660944134727704;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397522215559069;
    result[1] += 0.06024777844409311;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7999803505689667;
    result[1] += 0.2000196494310334;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06098417943896834;
    result[1] += 0.9390158205610316;
  } else {
    result[0] += 0.938335174800392;
    result[1] += 0.06166482519960808;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7778065489425658;
    result[1] += 0.22219345105743413;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 4.9304802287742826e-05;
    result[1] += 0.9999506951977123;
  } else {
    result[0] += 0.7832457822303407;
    result[1] += 0.21675421776965928;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7978432449622712;
    result[1] += 0.20215675503772876;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7974002533798441;
    result[1] += 0.20259974662015584;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05700904082768681;
    result[1] += 0.9429909591723132;
  } else {
    result[0] += 0.9344053494666454;
    result[1] += 0.06559465053335456;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.77503609692516;
    result[1] += 0.22496390307484002;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7984965099616327;
    result[1] += 0.20150349003836732;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9396483791201327;
    result[1] += 0.060351620879867396;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.058815617554377066;
    result[1] += 0.941184382445623;
  } else {
    result[0] += 0.936090121509037;
    result[1] += 0.06390987849096294;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.05933752141633352;
    result[1] += 0.9406624785836665;
  } else {
    result[0] += 0.938130944942026;
    result[1] += 0.061869055057974034;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8091742797318954;
    result[1] += 0.19082572026810468;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005634335413121573;
    result[1] += 0.9943656645868785;
  } else {
    result[0] += 0.8092701995708785;
    result[1] += 0.19072980042912147;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397728201356542;
    result[1] += 0.06022717986434584;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.777078823953824;
    result[1] += 0.22292117604617603;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4729006598571816;
    result[1] += 0.5270993401428185;
  } else {
    result[0] += 0.9984755033166531;
    result[1] += 0.0015244966833469103;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8017307513483355;
    result[1] += 0.1982692486516645;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4704202779747815;
    result[1] += 0.5295797220252185;
  } else {
    result[0] += 0.9905556376365228;
    result[1] += 0.009444362363477253;
  }
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    result[0] += 0.01069364161849711;
    result[1] += 0.9893063583815029;
  } else {
    result[0] += 0.754547942206655;
    result[1] += 0.245452057793345;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47269971034893477;
    result[1] += 0.5273002896510652;
  } else {
    result[0] += 0.9984020901127868;
    result[1] += 0.0015979098872132217;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.009064002959674435;
    result[1] += 0.9909359970403255;
  } else {
    result[0] += 0.7664714819620498;
    result[1] += 0.2335285180379501;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7984183091991461;
    result[1] += 0.2015816908008539;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.939482368342106;
    result[1] += 0.06051763165789402;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7989772628781093;
    result[1] += 0.20102273712189062;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.009614799488833444;
    result[1] += 0.9903852005111665;
  } else {
    result[0] += 0.7659262631365648;
    result[1] += 0.23407373686343524;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8010247304715152;
    result[1] += 0.1989752695284847;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8057135515819717;
    result[1] += 0.19428644841802828;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.008839779005524863;
    result[1] += 0.9911602209944751;
  } else {
    result[0] += 0.7667443279525157;
    result[1] += 0.23325567204748432;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.0008947973923047424;
    result[1] += 0.9991052026076953;
  } else {
    result[0] += 0.7620471605293123;
    result[1] += 0.23795283947068774;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.798329086717626;
    result[1] += 0.20167091328237394;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05682675383454865;
    result[1] += 0.9431732461654514;
  } else {
    result[0] += 0.9348193760829496;
    result[1] += 0.06518062391705037;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.006163565622712739;
    result[1] += 0.9938364343772873;
  } else {
    result[0] += 0.8100421451222443;
    result[1] += 0.1899578548777557;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_3/test_data.csv", "r");
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
