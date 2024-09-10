
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
    result[0] += 0.11693113541827145;
    result[1] += 0.0012324757356339548;
    result[2] += 0.004313665074718842;
    result[3] += 0.4882144507780003;
    result[4] += 0.387767678323833;
    result[5] += 0.0015405946695424434;
    result[6] += 0;
  } else {
    result[0] += 0.906941554756951;
    result[1] += 0.0004863681807127996;
    result[2] += 0.002702045448404442;
    result[3] += 0.08946472479667109;
    result[4] += 0;
    result[5] += 5.4040908968088844e-05;
    result[6] += 0.00035126590829257745;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2022544981573813;
    result[1] += 0.00520268805549534;
    result[2] += 0.007153696076306092;
    result[3] += 0.42857142857142855;
    result[4] += 0.35681768913938866;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8567644714171831;
    result[1] += 0.00041144855607272353;
    result[2] += 0.0023915447321727055;
    result[3] += 0.11885720163550802;
    result[4] += 0.021215316172499808;
    result[5] += 7.714660426363567e-05;
    result[6] += 0.00028287088229999745;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993906386868264;
    result[1] += 0;
    result[2] += 0.00045702098488022245;
    result[3] += 0;
    result[4] += 0.0001523403282934075;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.4666241373310909;
    result[1] += 0.002435771037522473;
    result[2] += 0.0062054166908310626;
    result[3] += 0.3853157803166503;
    result[4] += 0.1382590036536566;
    result[5] += 0.0008699182276865976;
    result[6] += 0.0002899727425621992;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.1967720539464957;
    result[1] += 0.00574839708158302;
    result[2] += 0.0035374751271280125;
    result[3] += 0.431793057705063;
    result[4] += 0.3621490161397303;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8579931754624522;
    result[1] += 0.0003335300305308259;
    result[2] += 0.0024886471508838545;
    result[3] += 0.11763347615260282;
    result[4] += 0.020884111142468634;
    result[5] += 0.00023090540575211021;
    result[6] += 0.0004361546553095415;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.1154639175257732;
    result[1] += 0.0012688342585249802;
    result[2] += 0.0034892942109436957;
    result[3] += 0.4904044409199048;
    result[4] += 0.38842188739095956;
    result[5] += 0.0009516256938937351;
    result[6] += 0;
  } else {
    result[0] += 0.9033472240892594;
    result[1] += 0.0008065600215082674;
    result[2] += 0.0029305014114800383;
    result[3] += 0.0925930904691491;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00032262400860330696;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    result[0] += 0.03582317073170732;
    result[1] += 0.0013338414634146345;
    result[2] += 0.0043826219512195135;
    result[3] += 0.4887576219512196;
    result[4] += 0.46855945121951226;
    result[5] += 0.0011432926829268294;
    result[6] += 0;
  } else {
    result[0] += 0.8914043710132804;
    result[1] += 0.0006797030220642057;
    result[2] += 0.002431245425075813;
    result[3] += 0.10485726236536652;
    result[4] += 0;
    result[5] += 0.00013071211962773188;
    result[6] += 0.0004967060545853811;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9995427003544073;
    result[1] += 0;
    result[2] += 0.0003048664303951832;
    result[3] += 0;
    result[4] += 0.00011432491139819368;
    result[5] += 0;
    result[6] += 3.81083037993979e-05;
  } else {
    result[0] += 0.4628889275160786;
    result[1] += 0.0022017498116924505;
    result[2] += 0.006141723158931572;
    result[3] += 0.3800336056550206;
    result[4] += 0.14827046758213105;
    result[5] += 0.0002317631380728895;
    result[6] += 0.0002317631380728895;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9988268240993037;
    result[1] += 0;
    result[2] += 0.0008325764456554647;
    result[3] += 0;
    result[4] += 0.00018922191946715107;
    result[5] += 0;
    result[6] += 0.00015137753557372085;
  } else {
    result[0] += 0.4660927617709065;
    result[1] += 0.001991098617943312;
    result[2] += 0.006558913094401499;
    result[3] += 0.3807683298196299;
    result[4] += 0.14382759428437572;
    result[5] += 0.00017568517217146873;
    result[6] += 0.0005856172405715624;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9992334227673438;
    result[1] += 0;
    result[2] += 0.0005749329244921426;
    result[3] += 0;
    result[4] += 0.00011498658489842852;
    result[5] += 0;
    result[6] += 7.665772326561901e-05;
  } else {
    result[0] += 0.4659391154508903;
    result[1] += 0.002010338885697875;
    result[2] += 0.006260769672601953;
    result[3] += 0.386042504307869;
    result[4] += 0.13900057438253877;
    result[5] += 0.00022975301550832856;
    result[6] += 0.0005169442848937392;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    result[0] += 0.04102564102564103;
    result[1] += 0.0018993352326685663;
    result[2] += 0.004748338081671416;
    result[3] += 0.4833808167141501;
    result[4] += 0.4678062678062679;
    result[5] += 0.0011396011396011397;
    result[6] += 0;
  } else {
    result[0] += 0.8911730090231463;
    result[1] += 0.0006800052308094678;
    result[2] += 0.0023538642604943117;
    result[3] += 0.10521773244409573;
    result[4] += 0;
    result[5] += 5.230809467765137e-05;
    result[6] += 0.0005230809467765136;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8384635934578052;
    result[1] += 0.0010389147793048177;
    result[2] += 0.0024637121909228533;
    result[3] += 0.10392116120989046;
    result[4] += 0.05378610228858084;
    result[5] += 0.0001187331176348363;
    result[6] += 0.0002077829558609635;
  } else {
    result[0] += 0.5987157272449292;
    result[1] += 0;
    result[2] += 0.005605952502293344;
    result[3] += 0.3230047905412292;
    result[4] += 0.07206197125675262;
    result[5] += 0.0002038528182652125;
    result[6] += 0.000407705636530425;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.1105238613399658;
    result[1] += 0.001865381625990984;
    result[2] += 0.002953520907819058;
    result[3] += 0.5020985543292399;
    result[4] += 0.3816259909839888;
    result[5] += 0.000932690812995492;
    result[6] += 0;
  } else {
    result[0] += 0.9026897240132733;
    result[1] += 0.0008093452397010818;
    result[2] += 0.0028327083389537862;
    result[3] += 0.09315563708959451;
    result[4] += 0;
    result[5] += 5.3956349313405454e-05;
    result[6] += 0.00045862896916394635;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9991205597828166;
    result[1] += 0;
    result[2] += 0.0005735479677283677;
    result[3] += 0;
    result[4] += 0.00022941918709134707;
    result[5] += 0;
    result[6] += 7.647306236378236e-05;
  } else {
    result[0] += 0.46532541649853004;
    result[1] += 0.0021905805038335163;
    result[2] += 0.006571741511500548;
    result[3] += 0.38139159508848797;
    result[4] += 0.14365596356718743;
    result[5] += 0.0001729405660921197;
    result[6] += 0.0006917622643684788;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11131668208448967;
    result[1] += 0.0012334258402713536;
    result[2] += 0.004933703361085414;
    result[3] += 0.49784150477952516;
    result[4] += 0.38359543632439097;
    result[5] += 0.0010792476102374346;
    result[6] += 0;
  } else {
    result[0] += 0.9033608904738748;
    result[1] += 0.0005673528934997568;
    result[2] += 0.0029988652942130006;
    result[3] += 0.09274868968498406;
    result[4] += 0;
    result[5] += 8.105041335710812e-05;
    result[6] += 0.00024315124007132436;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8404752801388196;
    result[1] += 0.001323490485573954;
    result[2] += 0.0026175700714684866;
    result[3] += 0.1034969559718832;
    result[4] += 0.05191023793417841;
    result[5] += 0.00011764359871768479;
    result[6] += 5.8821799358842395e-05;
  } else {
    result[0] += 0.6023791978102958;
    result[1] += 0;
    result[2] += 0.004316243815138436;
    result[3] += 0.3245604800505316;
    result[4] += 0.06821770712706601;
    result[5] += 0.00042109695757448155;
    result[6] += 0.00010527423939362039;
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
