
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.3150395778364116;
    result[1] += 0.14406332453825857;
    result[2] += 0.02928759894459103;
    result[3] += 0.09894459102902374;
    result[4] += 0.14432717678100263;
    result[5] += 0.2683377308707124;
  } else {
    result[0] += 0.010617760617760617;
    result[1] += 0.008687258687258687;
    result[2] += 0.8542471042471043;
    result[3] += 0.06563706563706563;
    result[4] += 0;
    result[5] += 0.060810810810810814;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 0.026498422712933754;
    result[1] += 0.0056782334384858045;
    result[2] += 0.0031545741324921135;
    result[3] += 0.13186119873817034;
    result[4] += 0.19116719242902208;
    result[5] += 0.6416403785488959;
  } else {
    result[0] += 0.33816723233569884;
    result[1] += 0.1527306386917618;
    result[2] += 0.3023758099352052;
    result[3] += 0.08454180808392471;
    result[4] += 0.07837087318728787;
    result[5] += 0.043813637766121565;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3235294117647059;
    result[1] += 0.14820102798400914;
    result[2] += 0.020559680182752713;
    result[3] += 0.08023986293546545;
    result[4] += 0.14762992575671044;
    result[5] += 0.27984009137635635;
  } else {
    result[0] += 0.01812688821752266;
    result[1] += 0.005287009063444109;
    result[2] += 0.7749244712990937;
    result[3] += 0.13141993957703926;
    result[4] += 0.0075528700906344415;
    result[5] += 0.06268882175226587;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.31001589825119236;
    result[1] += 0.14811870694223636;
    result[2] += 0.0246422893481717;
    result[3] += 0.0940646528881823;
    result[4] += 0.13910969793322733;
    result[5] += 0.2840487546369899;
  } else {
    result[0] += 0.032319391634980994;
    result[1] += 0.009505703422053233;
    result[2] += 0.817490494296578;
    result[3] += 0.10741444866920154;
    result[4] += 0.0019011406844106466;
    result[5] += 0.03136882129277567;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.3092105263157895;
    result[1] += 0.14;
    result[2] += 0.03236842105263158;
    result[3] += 0.0968421052631579;
    result[4] += 0.12947368421052632;
    result[5] += 0.29210526315789476;
  } else {
    result[0] += 0.007797270955165692;
    result[1] += 0.003898635477582846;
    result[2] += 0.8304093567251462;
    result[3] += 0.10623781676413255;
    result[4] += 0.0029239766081871343;
    result[5] += 0.04873294346978557;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.301498127340824;
    result[1] += 0.1420545746388443;
    result[2] += 0.03451043338683788;
    result[3] += 0.09550561797752809;
    result[4] += 0.14740502942750133;
    result[5] += 0.27902621722846443;
  } else {
    result[0] += 0.008272058823529412;
    result[1] += 0.003676470588235294;
    result[2] += 0.8602941176470589;
    result[3] += 0.07720588235294118;
    result[4] += 0.001838235294117647;
    result[5] += 0.04871323529411765;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 0.025198938992042442;
    result[1] += 0.002652519893899204;
    result[2] += 0.005305039787798408;
    result[3] += 0.1359416445623342;
    result[4] += 0.1989389920424403;
    result[5] += 0.6319628647214854;
  } else {
    result[0] += 0.3411693791440627;
    result[1] += 0.16606389391199516;
    result[2] += 0.29294755877034356;
    result[3] += 0.07926461723930078;
    result[4] += 0.06781193490054249;
    result[5] += 0.052742616033755275;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.3211800723629279;
    result[1] += 0.14222098524909546;
    result[2] += 0.01586418035068188;
    result[3] += 0.0793209017534094;
    result[4] += 0.15585861397161146;
    result[5] += 0.28555524631227386;
  } else {
    result[0] += 0.025141930251419302;
    result[1] += 0.0072992700729927005;
    result[2] += 0.7704785077047851;
    result[3] += 0.1321978913219789;
    result[4] += 0.008110300081103;
    result[5] += 0.05677210056772101;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.32002115842369744;
    result[1] += 0.14017455699550382;
    result[2] += 0.04046548532134356;
    result[3] += 0.0949484263422375;
    result[4] += 0.12800846336947896;
    result[5] += 0.27638190954773867;
  } else {
    result[0] += 0.007655502392344498;
    result[1] += 0.004784688995215311;
    result[2] += 0.8497607655502393;
    result[3] += 0.08708133971291866;
    result[4] += 0.0019138755980861245;
    result[5] += 0.04880382775119617;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.3088741721854305;
    result[1] += 0.14569536423841062;
    result[2] += 0.03364238410596027;
    result[3] += 0.08609271523178809;
    result[4] += 0.14649006622516558;
    result[5] += 0.27920529801324506;
  } else {
    result[0] += 0.011417697431018078;
    result[1] += 0.006660323501427212;
    result[2] += 0.8049476688867745;
    result[3] += 0.11417697431018078;
    result[4] += 0.008563273073263558;
    result[5] += 0.05423406279733587;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.3181941065152744;
    result[1] += 0.1467964314679643;
    result[2] += 0.03027845363611787;
    result[3] += 0.08461746417950798;
    result[4] += 0.1438226547715599;
    result[5] += 0.2762908894295756;
  } else {
    result[0] += 0.01064773735581189;
    result[1] += 0.0044365572315882874;
    result[2] += 0.7648624667258208;
    result[3] += 0.11978704525288376;
    result[4] += 0.01774622892635315;
    result[5] += 0.08251996450754215;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.314625380149295;
    result[1] += 0.155100912358308;
    result[2] += 0.016864805087088746;
    result[3] += 0.09040641415537738;
    result[4] += 0.1407243572021012;
    result[5] += 0.2822781310478297;
  } else {
    result[0] += 0.028949545078577336;
    result[1] += 0.009925558312655087;
    result[2] += 0.7799834574028123;
    result[3] += 0.12489660876757651;
    result[4] += 0.007444168734491315;
    result[5] += 0.04880066170388751;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 0.030104712041884817;
    result[1] += 0.0032722513089005235;
    result[2] += 0.008507853403141362;
    result[3] += 0.13285340314136126;
    result[4] += 0.19829842931937172;
    result[5] += 0.6269633507853403;
  } else {
    result[0] += 0.33292904790782296;
    result[1] += 0.16191631291691938;
    result[2] += 0.3150394178289873;
    result[3] += 0.077319587628866;
    result[4] += 0.06913280776228019;
    result[5] += 0.04366282595512432;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.3033033033033033;
    result[1] += 0.15642915642915642;
    result[2] += 0.01638001638001638;
    result[3] += 0.082992082992083;
    result[4] += 0.14223314223314223;
    result[5] += 0.29866229866229865;
  } else {
    result[0] += 0.013757523645743768;
    result[1] += 0;
    result[2] += 0.8202923473774721;
    result[3] += 0.12123817712811695;
    result[4] += 0.004299226139294928;
    result[5] += 0.04041272570937232;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 0.03741280913126189;
    result[1] += 0.0063411540900443885;
    result[2] += 0.0019023462270133164;
    result[3] += 0.12492073557387444;
    result[4] += 0.2010145846544071;
    result[5] += 0.6284083703233989;
  } else {
    result[0] += 0.3373345644813789;
    result[1] += 0.17143736534318252;
    result[2] += 0.3096337334564481;
    result[3] += 0.07048322560787934;
    result[4] += 0.07048322560787934;
    result[5] += 0.040627885503231764;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3227222832052689;
    result[1] += 0.15422612513721184;
    result[2] += 0.023600439077936335;
    result[3] += 0.07848518111964874;
    result[4] += 0.13419319429198684;
    result[5] += 0.2867727771679473;
  } else {
    result[0] += 0.010998307952622674;
    result[1] += 0.004230118443316413;
    result[2] += 0.7529610829103215;
    result[3] += 0.1311336717428088;
    result[4] += 0.02030456852791878;
    result[5] += 0.08037225042301184;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.31195795006570304;
    result[1] += 0.1348226018396846;
    result[2] += 0.03758212877792379;
    result[3] += 0.09093298291721419;
    result[4] += 0.14559789750328514;
    result[5] += 0.27910643889618925;
  } else {
    result[0] += 0.01665034280117532;
    result[1] += 0.011753183153770812;
    result[2] += 0.7943192948090108;
    result[3] += 0.11459353574926542;
    result[4] += 0.010773751224289911;
    result[5] += 0.05190989226248776;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.32148670645686384;
    result[1] += 0.14785675529028758;
    result[2] += 0.0198046663049376;
    result[3] += 0.08735756918068367;
    result[4] += 0.14351600651112317;
    result[5] += 0.27997829625610415;
  } else {
    result[0] += 0.016666666666666666;
    result[1] += 0.005263157894736842;
    result[2] += 0.8043859649122806;
    result[3] += 0.11052631578947368;
    result[4] += 0.010526315789473684;
    result[5] += 0.05263157894736842;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.3051325437112239;
    result[1] += 0.15369430344049634;
    result[2] += 0.01889452904681331;
    result[3] += 0.09165256627185561;
    result[4] += 0.1353637901861252;
    result[5] += 0.2952622673434856;
  } else {
    result[0] += 0.03046875;
    result[1] += 0.01328125;
    result[2] += 0.7734375;
    result[3] += 0.12265625;
    result[4] += 0.00703125;
    result[5] += 0.053125;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3334257975034674;
    result[1] += 0.14951456310679612;
    result[2] += 0.021081830790568655;
    result[3] += 0.07434119278779473;
    result[4] += 0.14313453536754508;
    result[5] += 0.278502080443828;
  } else {
    result[0] += 0.015561015561015563;
    result[1] += 0.0016380016380016383;
    result[2] += 0.7436527436527438;
    result[3] += 0.1277641277641278;
    result[4] += 0.015561015561015563;
    result[5] += 0.09582309582309584;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.3041168658698539;
    result[1] += 0.14289508632138115;
    result[2] += 0.031341301460823374;
    result[3] += 0.09349269588313414;
    result[4] += 0.14262948207171314;
    result[5] += 0.2855245683930943;
  } else {
    result[0] += 0.009425070688030161;
    result[1] += 0.0028275212064090486;
    result[2] += 0.8407163053722904;
    result[3] += 0.10179076343072574;
    result[4] += 0.0018850141376060322;
    result[5] += 0.04335532516493874;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    result[0] += 0.04330017554125219;
    result[1] += 0.0052662375658279695;
    result[2] += 0.00994733762434172;
    result[3] += 0.14628437682855472;
    result[4] += 0.20011702750146285;
    result[5] += 0.5950848449385605;
  } else {
    result[0] += 0.35867821623355794;
    result[1] += 0.17163939685595125;
    result[2] += 0.29579724093679827;
    result[3] += 0.07507218479307028;
    result[4] += 0.05550208533846649;
    result[5] += 0.04331087584215593;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.31038192576654117;
    result[1] += 0.15626681011296395;
    result[2] += 0.018827326519634213;
    result[3] += 0.08821947283485745;
    result[4] += 0.13797740720817644;
    result[5] += 0.2883270575578268;
  } else {
    result[0] += 0.016245487364620937;
    result[1] += 0;
    result[2] += 0.8673285198555957;
    result[3] += 0.08483754512635379;
    result[4] += 0.002707581227436823;
    result[5] += 0.02888086642599278;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.30461293743372214;
    result[1] += 0.14342523860021208;
    result[2] += 0.033934252386002124;
    result[3] += 0.09544008483563096;
    result[4] += 0.14846235418875928;
    result[5] += 0.2741251325556734;
  } else {
    result[0] += 0.012333965844402278;
    result[1] += 0.0028462998102466793;
    result[2] += 0.8453510436432637;
    result[3] += 0.09297912713472485;
    result[4] += 0.0018975332068311196;
    result[5] += 0.04459203036053131;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    result[0] += 0.03795180722891566;
    result[1] += 0.009036144578313253;
    result[2] += 0.015060240963855422;
    result[3] += 0.14819277108433734;
    result[4] += 0.20662650602409638;
    result[5] += 0.5831325301204819;
  } else {
    result[0] += 0.3528111181301327;
    result[1] += 0.15761212886923565;
    result[2] += 0.3114339861023374;
    result[3] += 0.07296272899557803;
    result[4] += 0.052432090966519275;
    result[5] += 0.0527479469361971;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.30168204015192623;
    result[1] += 0.14785675529028758;
    result[2] += 0.011937059142702116;
    result[3] += 0.08410200759631037;
    result[4] += 0.15545306565382527;
    result[5] += 0.29896907216494845;
  } else {
    result[0] += 0.015789473684210527;
    result[1] += 0;
    result[2] += 0.8280701754385965;
    result[3] += 0.10877192982456141;
    result[4] += 0.0035087719298245615;
    result[5] += 0.043859649122807015;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 0.3175601750547046;
    result[1] += 0.14578774617067833;
    result[2] += 0.015043763676148797;
    result[3] += 0.07904814004376368;
    result[4] += 0.15919037199124728;
    result[5] += 0.2833698030634573;
  } else {
    result[0] += 0.011965811965811967;
    result[1] += 0;
    result[2] += 0.7982905982905983;
    result[3] += 0.13931623931623932;
    result[4] += 0.002564102564102564;
    result[5] += 0.04786324786324787;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 0.32352161230442855;
    result[1] += 0.147175815433572;
    result[2] += 0.022010076902678335;
    result[3] += 0.08459294616812517;
    result[4] += 0.14187218244497482;
    result[5] += 0.28082736674622116;
  } else {
    result[0] += 0.014218009478672985;
    result[1] += 0;
    result[2] += 0.8417061611374408;
    result[3] += 0.10900473933649289;
    result[4] += 0;
    result[5] += 0.035071090047393366;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 0.3244358833241607;
    result[1] += 0.1441937259218492;
    result[2] += 0.015134837644468905;
    result[3] += 0.08117776554760595;
    result[4] += 0.15492570170610898;
    result[5] += 0.2801320858558063;
  } else {
    result[0] += 0.01929530201342282;
    result[1] += 0.009228187919463088;
    result[2] += 0.7575503355704698;
    result[3] += 0.1417785234899329;
    result[4] += 0.008389261744966443;
    result[5] += 0.06375838926174497;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 0.027061044682190057;
    result[1] += 0.003775959723096287;
    result[2] += 0.007551919446192574;
    result[3] += 0.1290119572057898;
    result[4] += 0.20516047828823158;
    result[5] += 0.6274386406544997;
  } else {
    result[0] += 0.3348779734321903;
    result[1] += 0.15508186592523943;
    result[2] += 0.31078158789002164;
    result[3] += 0.08155699721964782;
    result[4] += 0.06611059623107816;
    result[5] += 0.05159097930182267;
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
