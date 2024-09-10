
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5024632963920821;
    result[1] += 0.49753670360791796;
  } else {
    result[0] += 0.9217852361727471;
    result[1] += 0.0782147638272529;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.797547712237193;
    result[1] += 0.20245228776280697;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004685819634352435;
    result[1] += 0.9953141803656476;
  } else {
    result[0] += 0.8087893786211912;
    result[1] += 0.19121062137880884;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.0574781186880831;
    result[1] += 0.9425218813119169;
  } else {
    result[0] += 0.9356735258516341;
    result[1] += 0.0643264741483659;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0050435580009170105;
    result[1] += 0.994956441999083;
  } else {
    result[0] += 0.8087834824048642;
    result[1] += 0.1912165175951358;
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    result[0] += 0.00457021223314343;
    result[1] += 0.9954297877668565;
  } else {
    result[0] += 0.7647837330483368;
    result[1] += 0.2352162669516632;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8062604120999561;
    result[1] += 0.19373958790004384;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.47197631957508024;
    result[1] += 0.5280236804249198;
  } else {
    result[0] += 0.9902514866766535;
    result[1] += 0.009748513323346497;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7967625379390085;
    result[1] += 0.20323746206099147;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8054854411378939;
    result[1] += 0.19451455886210614;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.940272852037558;
    result[1] += 0.05972714796244208;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005226414374546981;
    result[1] += 0.994773585625453;
  } else {
    result[0] += 0.8099467557397547;
    result[1] += 0.19005324426024525;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7791941968678832;
    result[1] += 0.22080580313211684;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.00990952175786299;
    result[1] += 0.990090478242137;
  } else {
    result[0] += 0.7649642565982486;
    result[1] += 0.2350357434017514;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.061884964528186745;
    result[1] += 0.9381150354718133;
  } else {
    result[0] += 0.9373525575199134;
    result[1] += 0.0626474424800866;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4705491401512005;
    result[1] += 0.5294508598487996;
  } else {
    result[0] += 0.9901844106679362;
    result[1] += 0.009815589332063881;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9394884931394858;
    result[1] += 0.06051150686051423;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7975680658379134;
    result[1] += 0.20243193416208657;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9403431289281468;
    result[1] += 0.05965687107185324;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8073974233300658;
    result[1] += 0.1926025766699342;
  }
  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7522895769733973;
    result[1] += 0.2477104230266027;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8071769804651271;
    result[1] += 0.19282301953487288;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8025186696971103;
    result[1] += 0.19748133030288975;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.941820284334399;
    result[1] += 0.05817971566560098;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05598440843778661;
    result[1] += 0.9440155915622134;
  } else {
    result[0] += 0.9355585755491458;
    result[1] += 0.06444142445085423;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8009932149559694;
    result[1] += 0.1990067850440306;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.47247786552906673;
    result[1] += 0.5275221344709333;
  } else {
    result[0] += 0.9901700591163305;
    result[1] += 0.009829940883669541;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05823467128693811;
    result[1] += 0.9417653287130618;
  } else {
    result[0] += 0.9361822770805242;
    result[1] += 0.06381772291947585;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.508157217120925;
    result[1] += 0.49184278287907496;
  } else {
    result[0] += 0.9180522184847029;
    result[1] += 0.08194778151529714;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9414499402758172;
    result[1] += 0.05855005972418287;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.77736243598896;
    result[1] += 0.22263756401103998;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8022406263067416;
    result[1] += 0.19775937369325838;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9414621868175974;
    result[1] += 0.0585378131824026;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06338699832137952;
    result[1] += 0.9366130016786205;
  } else {
    result[0] += 0.9379266803574402;
    result[1] += 0.062073319642559806;
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
    result[0] += 0.7198519921728631;
    result[1] += 0.28014800782713684;
  } else {
    result[0] += 0.020871143375680582;
    result[1] += 0.9791288566243194;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7974522513979079;
    result[1] += 0.2025477486020921;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8103060634551709;
    result[1] += 0.18969393654482916;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8083131817622915;
    result[1] += 0.19168681823770853;
  }
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    result[0] += 0.0004562043795620438;
    result[1] += 0.9995437956204379;
  } else {
    result[0] += 0.7636963623521101;
    result[1] += 0.2363036376478898;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0.00014841933409192104;
    result[1] += 0.9998515806659081;
  } else {
    result[0] += 0.7835460767690973;
    result[1] += 0.2164539232309027;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0045231524072370435;
    result[1] += 0.995476847592763;
  } else {
    result[0] += 0.8104322117415177;
    result[1] += 0.18956778825848233;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4733930834691291;
    result[1] += 0.5266069165308709;
  } else {
    result[0] += 0.998281068524971;
    result[1] += 0.001718931475029036;
  }
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    result[0] += 0.010619977037887486;
    result[1] += 0.9893800229621125;
  } else {
    result[0] += 0.7537454003854915;
    result[1] += 0.2462545996145085;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7768106984323201;
    result[1] += 0.22318930156767994;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8085830982948494;
    result[1] += 0.19141690170515055;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7978893711458773;
    result[1] += 0.20211062885412273;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.055963496232673174;
    result[1] += 0.9440365037673268;
  } else {
    result[0] += 0.9357068164347893;
    result[1] += 0.06429318356521077;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7999122118005821;
    result[1] += 0.20008778819941783;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8018473629446198;
    result[1] += 0.1981526370553802;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9406957279148577;
    result[1] += 0.05930427208514229;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_4/test_data.csv", "r");
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
