
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.3048327137546468;
    result[1] += 0.14020180562931492;
    result[2] += 0.03266064790228359;
    result[3] += 0.0969198088157196;
    result[4] += 0.1404673393520977;
    result[5] += 0.28491768454593736;
  } else {
    result[0] += 0.011320754716981131;
    result[1] += 0.009433962264150943;
    result[2] += 0.8254716981132075;
    result[3] += 0.09150943396226414;
    result[4] += 0.014150943396226415;
    result[5] += 0.048113207547169815;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    result[0] += 0.29021913415285944;
    result[1] += 0.1290753607696419;
    result[2] += 0.03019775521111705;
    result[3] += 0.10929983965793694;
    result[4] += 0.14029930518439337;
    result[5] += 0.3009086050240513;
  } else {
    result[0] += 0.0036900369003690036;
    result[1] += 0.0027675276752767526;
    result[2] += 0.8450184501845018;
    result[3] += 0.0996309963099631;
    result[4] += 0.0027675276752767526;
    result[5] += 0.046125461254612546;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    result[0] += 0.3080540858318636;
    result[1] += 0.15343915343915343;
    result[2] += 0.015873015873015872;
    result[3] += 0.082010582010582;
    result[4] += 0.15637860082304528;
    result[5] += 0.2842445620223398;
  } else {
    result[0] += 0.02949438202247191;
    result[1] += 0.009831460674157303;
    result[2] += 0.7169943820224719;
    result[3] += 0.14957865168539325;
    result[4] += 0.011938202247191011;
    result[5] += 0.08216292134831461;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    result[0] += 0.2878707627118644;
    result[1] += 0.13983050847457626;
    result[2] += 0.03866525423728814;
    result[3] += 0.09745762711864407;
    result[4] += 0.14221398305084745;
    result[5] += 0.2939618644067797;
  } else {
    result[0] += 0.008571428571428572;
    result[1] += 0.0038095238095238095;
    result[2] += 0.8380952380952381;
    result[3] += 0.09904761904761905;
    result[4] += 0.008571428571428572;
    result[5] += 0.0419047619047619;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.3072142664144826;
    result[1] += 0.13888138340988923;
    result[2] += 0.033504458254525804;
    result[3] += 0.10105376925155364;
    result[4] += 0.13780059443393677;
    result[5] += 0.281545528235612;
  } else {
    result[0] += 0.015111111111111113;
    result[1] += 0.011555555555555557;
    result[2] += 0.8106666666666668;
    result[3] += 0.10044444444444446;
    result[4] += 0.008000000000000002;
    result[5] += 0.05422222222222223;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.3082706766917293;
    result[1] += 0.13694951664876476;
    result[2] += 0.02309344790547798;
    result[3] += 0.09398496240601503;
    result[4] += 0.15091299677765843;
    result[5] += 0.28678839957035446;
  } else {
    result[0] += 0.011796733212341199;
    result[1] += 0;
    result[2] += 0.8647912885662432;
    result[3] += 0.08983666061705989;
    result[4] += 0;
    result[5] += 0.03357531760435572;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    result[0] += 0.28063135366506153;
    result[1] += 0.13188871054039594;
    result[2] += 0.03130016051364366;
    result[3] += 0.10486891385767791;
    result[4] += 0.15222043873729266;
    result[5] += 0.2990904226859283;
  } else {
    result[0] += 0.02665441176470588;
    result[1] += 0.0055147058823529415;
    result[2] += 0.8189338235294118;
    result[3] += 0.08639705882352941;
    result[4] += 0.0055147058823529415;
    result[5] += 0.05698529411764706;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    result[0] += 0.2988969599139091;
    result[1] += 0.14393327952649987;
    result[2] += 0.03120796341135324;
    result[3] += 0.08878127522195318;
    result[4] += 0.14393327952649987;
    result[5] += 0.2932472423997848;
  } else {
    result[0] += 0.017132551848512173;
    result[1] += 0.009918845807033363;
    result[2] += 0.7944093778178539;
    result[3] += 0.09377817853922453;
    result[4] += 0.005410279531109108;
    result[5] += 0.0793507664562669;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    result[0] += 0.2929079883996836;
    result[1] += 0.14474031109939361;
    result[2] += 0.03137358291589771;
    result[3] += 0.10493013445821249;
    result[4] += 0.15027682573161086;
    result[5] += 0.2757711573952017;
  } else {
    result[0] += 0.006776379477250726;
    result[1] += 0.00484027105517909;
    result[2] += 0.8393030009680542;
    result[3] += 0.1074540174249758;
    result[4] += 0.002904162633107454;
    result[5] += 0.03872216844143272;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    result[0] += 0.3074618736383442;
    result[1] += 0.14106753812636166;
    result[2] += 0.03867102396514161;
    result[3] += 0.09558823529411764;
    result[4] += 0.1315359477124183;
    result[5] += 0.2856753812636166;
  } else {
    result[0] += 0.029462738301559793;
    result[1] += 0.0017331022530329288;
    result[2] += 0.8024263431542461;
    result[3] += 0.10398613518197573;
    result[4] += 0.00779896013864818;
    result[5] += 0.05459272097053726;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.29354838709677417;
    result[1] += 0.14516129032258066;
    result[2] += 0.0228494623655914;
    result[3] += 0.10403225806451613;
    result[4] += 0.14677419354838708;
    result[5] += 0.28763440860215056;
  } else {
    result[0] += 0.014466546112115732;
    result[1] += 0;
    result[2] += 0.8291139240506329;
    result[3] += 0.12296564195298372;
    result[4] += 0.0027124773960217;
    result[5] += 0.03074141048824593;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    result[0] += 0.2901250998136811;
    result[1] += 0.14692573862124036;
    result[2] += 0.021559755123768964;
    result[3] += 0.09395794516901783;
    result[4] += 0.14293319137609795;
    result[5] += 0.3044982698961938;
  } else {
    result[0] += 0.014031805425631433;
    result[1] += 0;
    result[2] += 0.8400374181478018;
    result[3] += 0.11131898971000936;
    result[4] += 0.0009354536950420955;
    result[5] += 0.033676333021515445;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    result[0] += 0.3094850948509485;
    result[1] += 0.13224932249322494;
    result[2] += 0.03983739837398374;
    result[3] += 0.097289972899729;
    result[4] += 0.13306233062330625;
    result[5] += 0.2880758807588076;
  } else {
    result[0] += 0.01936619718309859;
    result[1] += 0.01056338028169014;
    result[2] += 0.7992957746478874;
    result[3] += 0.10299295774647887;
    result[4] += 0.013204225352112676;
    result[5] += 0.05457746478873239;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    result[0] += 0.2997589070452719;
    result[1] += 0.1347441735869274;
    result[2] += 0.0337530136619341;
    result[3] += 0.10125904098580231;
    result[4] += 0.13608357889097242;
    result[5] += 0.29440128582909186;
  } else {
    result[0] += 0.015553522415370542;
    result[1] += 0.004574565416285454;
    result[2] += 0.8225068618481245;
    result[3] += 0.09149130832570908;
    result[4] += 0.005489478499542544;
    result[5] += 0.060384263494967984;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    result[0] += 0.29728275490987355;
    result[1] += 0.128060263653484;
    result[2] += 0.03470540758676352;
    result[3] += 0.0893193435566317;
    result[4] += 0.1409739036857681;
    result[5] += 0.30965832660747916;
  } else {
    result[0] += 0.019837691614066726;
    result[1] += 0.010820559062218215;
    result[2] += 0.8016230838593328;
    result[3] += 0.10640216411181244;
    result[4] += 0.0036068530207394047;
    result[5] += 0.057709648331830475;
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
