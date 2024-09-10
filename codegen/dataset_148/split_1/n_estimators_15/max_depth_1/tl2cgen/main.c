
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993922588977097;
    result[1] += 0;
    result[2] += 0.00045580582671781827;
    result[3] += 0;
    result[4] += 7.596763778630305e-05;
    result[5] += 0;
    result[6] += 7.596763778630305e-05;
  } else {
    result[0] += 0.4693996389681477;
    result[1] += 0.002562161532638444;
    result[2] += 0.006521865719443312;
    result[3] += 0.3842077680079194;
    result[4] += 0.13585279217376114;
    result[5] += 0.000524078495312409;
    result[6] += 0.000931695102777616;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993533417018525;
    result[1] += 0;
    result[2] += 0.0005325421278861882;
    result[3] += 0;
    result[4] += 3.803872342044201e-05;
    result[5] += 0;
    result[6] += 7.607744684088402e-05;
  } else {
    result[0] += 0.46609726337807217;
    result[1] += 0.0015687641624542443;
    result[2] += 0.0068560804136889196;
    result[3] += 0.37830457265702166;
    result[4] += 0.14606937423740632;
    result[5] += 0.0005229213874847481;
    result[6] += 0.0005810237638719423;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2033751622674167;
    result[1] += 0.003245348334054522;
    result[2] += 0.006057983556901774;
    result[3] += 0.4372565988749459;
    result[4] += 0.3500649069666811;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8587118678944391;
    result[1] += 0.00043726529142445607;
    result[2] += 0.002469262822161634;
    result[3] += 0.11723854107721592;
    result[4] += 0.020654354647872835;
    result[5] += 0.00020577190184680285;
    result[6] += 0.0002829363650393539;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8413326300984529;
    result[1] += 0.0011720581340834506;
    result[2] += 0.0023148148148148147;
    result[3] += 0.10164674167838725;
    result[4] += 0.05324074074074074;
    result[5] += 0.00014650726676043133;
    result[6] += 0.00014650726676043133;
  } else {
    result[0] += 0.5934699103713188;
    result[1] += 0;
    result[2] += 0.00458813486982501;
    result[3] += 0.33386683738796413;
    result[4] += 0.06722151088348272;
    result[5] += 0.0003201024327784891;
    result[6] += 0.0005335040546308152;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11568322981366459;
    result[1] += 0.0012422360248447205;
    result[2] += 0.004037267080745342;
    result[3] += 0.4993788819875776;
    result[4] += 0.37903726708074537;
    result[5] += 0.0006211180124223603;
    result[6] += 0;
  } else {
    result[0] += 0.904964921748516;
    result[1] += 0.00021586616297895306;
    result[2] += 0.0027522935779816515;
    result[3] += 0.09179708580679978;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0002698327037236913;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
    result[0] += 0.844624578427312;
    result[1] += 0.0005325128690610023;
    result[2] += 0.001745458848588841;
    result[3] += 0.09901780959706526;
    result[4] += 0.05384296787172357;
    result[5] += 8.875214484350039e-05;
    result[6] += 0.00014792024140583397;
  } else {
    result[0] += 0.6037327283976077;
    result[1] += 0;
    result[2] += 0.00464013198597649;
    result[3] += 0.32357187048876057;
    result[4] += 0.06743658486285832;
    result[5] += 0.00020622808826562179;
    result[6] += 0.00041245617653124357;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8393884758823384;
    result[1] += 0.00041986712440415916;
    result[2] += 0.002741485341697745;
    result[3] += 0.13302378423769418;
    result[4] += 0.024031218355602756;
    result[5] += 9.87922645656845e-05;
    result[6] += 0.0002963767936970535;
  } else {
    result[0] += 0.0900033211557622;
    result[1] += 0.0033211557622052474;
    result[2] += 0.005978080371969445;
    result[3] += 0.4201262039189638;
    result[4] += 0.4805712387910993;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.1110410094637224;
    result[1] += 0.002365930599369085;
    result[2] += 0.0037854889589905363;
    result[3] += 0.49258675078864356;
    result[4] += 0.38943217665615143;
    result[5] += 0.0007886435331230284;
    result[6] += 0;
  } else {
    result[0] += 0.9050861141011841;
    result[1] += 0.0008880516684607104;
    result[2] += 0.002906350914962325;
    result[3] += 0.09101184068891281;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00010764262648008612;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993507485487321;
    result[1] += 0;
    result[2] += 0.0006492514512679499;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.46454146454146455;
    result[1] += 0.0024255024255024253;
    result[2] += 0.006583506583506584;
    result[3] += 0.3846731346731347;
    result[4] += 0.14067914067914067;
    result[5] += 0.00028875028875028876;
    result[6] += 0.0008085008085008085;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8427946315820387;
    result[1] += 0.0007341928284044522;
    result[2] += 0.002466887903438959;
    result[3] += 0.10155355202490382;
    result[4] += 0.052098323103579924;
    result[5] += 0.0001762062788170685;
    result[6] += 0.0001762062788170685;
  } else {
    result[0] += 0.5926553074399408;
    result[1] += 0;
    result[2] += 0.005185733940099481;
    result[3] += 0.32638374431156736;
    result[4] += 0.07514022647899249;
    result[5] += 0.0004233252195999577;
    result[6] += 0.00021166260979997884;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8388654941788457;
    result[1] += 0.0004211047807778053;
    result[2] += 0.0027495665097844934;
    result[3] += 0.13512509289076047;
    result[4] += 0.02246717859796879;
    result[5] += 0.00014862521674510775;
    result[6] += 0.00022293782511766162;
  } else {
    result[0] += 0.0939297124600639;
    result[1] += 0.005431309904153354;
    result[2] += 0.002875399361022364;
    result[3] += 0.40766773162939296;
    result[4] += 0.49009584664536743;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.999318929963298;
    result[1] += 0;
    result[2] += 0.0006053955881796513;
    result[3] += 0;
    result[4] += 3.78372242612282e-05;
    result[5] += 0;
    result[6] += 3.78372242612282e-05;
  } else {
    result[0] += 0.4685724327807393;
    result[1] += 0.0015816296643430378;
    result[2] += 0.007029465174857946;
    result[3] += 0.3797668560717005;
    result[4] += 0.14228809091441627;
    result[5] += 0.00029289438228574774;
    result[6] += 0.00046863101165719643;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8386141806137702;
    result[1] += 0.0008793270217193774;
    result[2] += 0.0028431573702259873;
    result[3] += 0.10560717530849723;
    result[4] += 0.051557874373479494;
    result[5] += 0.0002931090072397925;
    result[6] += 0.00020517630506785474;
  } else {
    result[0] += 0.5919215602685709;
    result[1] += 0;
    result[2] += 0.006074816156879464;
    result[3] += 0.32931898113609726;
    result[4] += 0.0718320366620484;
    result[5] += 0.0001065757220505169;
    result[6] += 0.0007460300543536184;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11748977665932683;
    result[1] += 0.0014155394778232148;
    result[2] += 0.004403900597672224;
    result[3] += 0.48961937716262977;
    result[4] += 0.3862849952815351;
    result[5] += 0.0007864108210128972;
    result[6] += 0;
  } else {
    result[0] += 0.9038823972860912;
    result[1] += 0.0007807872489365139;
    result[2] += 0.0030693015992676754;
    result[3] += 0.09189058209035593;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0003769317753486619;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9992415623814941;
    result[1] += 0;
    result[2] += 0.000720515737580584;
    result[3] += 0;
    result[4] += 3.792188092529389e-05;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.4552831290134267;
    result[1] += 0.0018680677174547577;
    result[2] += 0.006129597197898424;
    result[3] += 0.39211908931698775;
    result[4] += 0.14389959136018682;
    result[5] += 0.0003502626970227671;
    result[6] += 0.0003502626970227671;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
