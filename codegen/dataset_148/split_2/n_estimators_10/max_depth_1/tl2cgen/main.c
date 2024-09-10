
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8390833044597337;
    result[1] += 0.00044547839429787654;
    result[2] += 0.002969855961985844;
    result[3] += 0.1335445230906301;
    result[4] += 0.02361035489778746;
    result[5] += 0.0001237439984160768;
    result[6] += 0.00022273919714893827;
  } else {
    result[0] += 0.09276018099547512;
    result[1] += 0.008726567550096962;
    result[2] += 0.004201680672268907;
    result[3] += 0.4156431803490627;
    result[4] += 0.47866839043309634;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993127672571778;
    result[1] += 0;
    result[2] += 0.0005726939523518632;
    result[3] += 0;
    result[4] += 0.00011453879047037264;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.46856944765426395;
    result[1] += 0.002253293274786226;
    result[2] += 0.006413219320545413;
    result[3] += 0.3823665357060319;
    result[4] += 0.13947307603420384;
    result[5] += 0.00046221400508435407;
    result[6] += 0.00046221400508435407;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.20193548387096774;
    result[1] += 0.004946236559139785;
    result[2] += 0.005376344086021506;
    result[3] += 0.43827956989247313;
    result[4] += 0.34946236559139787;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8586357786357787;
    result[1] += 0.00043758043758043756;
    result[2] += 0.0027799227799227798;
    result[3] += 0.11714285714285715;
    result[4] += 0.020334620334620336;
    result[5] += 0.0002574002574002574;
    result[6] += 0.00041184041184041183;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.1204345088161209;
    result[1] += 0.0020465994962216624;
    result[2] += 0.0034634760705289673;
    result[3] += 0.4869332493702771;
    result[4] += 0.38633501259445846;
    result[5] += 0.0007871536523929471;
    result[6] += 0;
  } else {
    result[0] += 0.9031441800366103;
    result[1] += 0.0005114676429417465;
    result[2] += 0.0024765801658231936;
    result[3] += 0.09362549800796813;
    result[4] += 0;
    result[5] += 2.6919349628512974e-05;
    result[6] += 0.0002153547970281038;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.12424289485945023;
    result[1] += 0.0024848578971890046;
    result[2] += 0.003727286845783507;
    result[3] += 0.49417611430346325;
    result[4] += 0.3747476316198167;
    result[5] += 0.0006212144742972511;
    result[6] += 0;
  } else {
    result[0] += 0.9026469873991527;
    result[1] += 0.0007015460996735112;
    result[2] += 0.002806184398694045;
    result[3] += 0.09352149159493807;
    result[4] += 0;
    result[5] += 2.6982542295135047e-05;
    result[6] += 0.0002968079652464855;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8457968630676144;
    result[1] += 0.0012336250954590848;
    result[2] += 0.0019385537214357046;
    result[3] += 0.09945368031486812;
    result[4] += 0.05125418551371674;
    result[5] += 0.0001468601304117958;
    result[6] += 0.00017623215649415497;
  } else {
    result[0] += 0.5954093505394542;
    result[1] += 0;
    result[2] += 0.0050772159932303785;
    result[3] += 0.32980748889359;
    result[4] += 0.06928284324095621;
    result[5] += 0;
    result[6] += 0.0004231013327691982;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    result[0] += 0.0659654127295418;
    result[1] += 0.003922267783918702;
    result[2] += 0.004278837582456766;
    result[3] += 0.4792298092351578;
    result[4] += 0.4448208236762346;
    result[5] += 0.0017828489926903191;
    result[6] += 0;
  } else {
    result[0] += 0.8942229025362223;
    result[1] += 0.0005806128104299174;
    result[2] += 0.0030614130004486552;
    result[3] += 0.10179198226491779;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0003430893879813148;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11027214094698758;
    result[1] += 0.0023596035865974517;
    result[2] += 0.0033034450212364322;
    result[3] += 0.4934717634104137;
    result[4] += 0.39012112631744533;
    result[5] += 0.00047192071731949034;
    result[6] += 0;
  } else {
    result[0] += 0.9036965242441375;
    result[1] += 0.0005923054142099453;
    result[2] += 0.002584605443825216;
    result[3] += 0.09293810408421506;
    result[4] += 0;
    result[5] += 5.384594674635867e-05;
    result[6] += 0.00013461486686589666;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.24009415457041977;
    result[1] += 0.005688505296194586;
    result[2] += 0.004903883876029816;
    result[3] += 0.4021184778344449;
    result[4] += 0.34719497842291097;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8593042029060987;
    result[1] += 0.0004426852768084996;
    result[2] += 0.0018488620384354982;
    result[3] += 0.11817092859746889;
    result[4] += 0.01976459559397948;
    result[5] += 0.00026040310400499974;
    result[6] += 0.0002083224832039998;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993532925019972;
    result[1] += 0;
    result[2] += 0.0004564994103549283;
    result[3] += 0;
    result[4] += 0.00015216647011830943;
    result[5] += 0;
    result[6] += 3.804161752957736e-05;
  } else {
    result[0] += 0.46888979259861735;
    result[1] += 0.0019752512635798523;
    result[2] += 0.006390518793934817;
    result[3] += 0.37982919886132577;
    result[4] += 0.14181142159995352;
    result[5] += 0.00040666937779585197;
    result[6] += 0.0006971475047928891;
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  result[6] /= 10;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
