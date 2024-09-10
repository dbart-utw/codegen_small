
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
  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
    result[0] += 0.016927083333333332;
    result[1] += 0.9830729166666666;
  } else {
    result[0] += 0.7563205936432886;
    result[1] += 0.24367940635671131;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9390779661016949;
    result[1] += 0.060922033898305084;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7981768501562617;
    result[1] += 0.20182314984373825;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8059825314754768;
    result[1] += 0.19401746852452312;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8103614528241241;
    result[1] += 0.18963854717587586;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.0044451198662664795;
    result[1] += 0.9955548801337335;
  } else {
    result[0] += 0.8104312172886354;
    result[1] += 0.1895687827113646;
  }
  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
    result[0] += 0.018361784535934587;
    result[1] += 0.9816382154640654;
  } else {
    result[0] += 0.7575759235124686;
    result[1] += 0.24242407648753134;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7990343855758458;
    result[1] += 0.20096561442415423;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0.00019832416084089444;
    result[1] += 0.9998016758391591;
  } else {
    result[0] += 0.7834186551468045;
    result[1] += 0.21658134485319547;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8089945480496993;
    result[1] += 0.19100545195030066;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.806351321341328;
    result[1] += 0.193648678658672;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06223509330469305;
    result[1] += 0.937764906695307;
  } else {
    result[0] += 0.9368157929358325;
    result[1] += 0.06318420706416746;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05627297396124016;
    result[1] += 0.9437270260387598;
  } else {
    result[0] += 0.9347160077178956;
    result[1] += 0.0652839922821043;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.00865426222414539;
    result[1] += 0.9913457377758547;
  } else {
    result[0] += 0.765670822638497;
    result[1] += 0.23432917736150302;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8027401236538853;
    result[1] += 0.19725987634611478;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9394876745482481;
    result[1] += 0.06051232545175194;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05604193065315056;
    result[1] += 0.9439580693468494;
  } else {
    result[0] += 0.9353586112380082;
    result[1] += 0.06464138876199178;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8089926477049708;
    result[1] += 0.19100735229502916;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.004973982246709519;
    result[1] += 0.9950260177532905;
  } else {
    result[0] += 0.8118750880157725;
    result[1] += 0.18812491198422757;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05679852381501557;
    result[1] += 0.9432014761849844;
  } else {
    result[0] += 0.9359666237701856;
    result[1] += 0.06403337622981443;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.0032869785082174463;
    result[1] += 0.9967130214917825;
  } else {
    result[0] += 0.7651211685293792;
    result[1] += 0.23487883147062077;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05733024691358025;
    result[1] += 0.9426697530864198;
  } else {
    result[0] += 0.9343007186290768;
    result[1] += 0.06569928137092317;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401289989329382;
    result[1] += 0.05987100106706177;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9408910184524416;
    result[1] += 0.059108981547558365;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8032762143586886;
    result[1] += 0.1967237856413114;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.004739935536876698;
    result[1] += 0.9952600644631233;
  } else {
    result[0] += 0.7659029418436734;
    result[1] += 0.2340970581563266;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06391591911205717;
    result[1] += 0.9360840808879428;
  } else {
    result[0] += 0.9372394820207859;
    result[1] += 0.06276051797921414;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.802632113644148;
    result[1] += 0.197367886355852;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.47370969844847177;
    result[1] += 0.5262903015515282;
  } else {
    result[0] += 0.9816779170684667;
    result[1] += 0.01832208293153327;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8027375622107238;
    result[1] += 0.19726243778927624;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 0.008167526406288381;
    result[1] += 0.9918324735937116;
  } else {
    result[0] += 0.7654651756196055;
    result[1] += 0.2345348243803945;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06103045829775121;
    result[1] += 0.9389695417022488;
  } else {
    result[0] += 0.9383102213881069;
    result[1] += 0.06168977861189309;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8003187784778327;
    result[1] += 0.19968122152216722;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7986936107052307;
    result[1] += 0.20130638929476924;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05770931887235106;
    result[1] += 0.9422906811276489;
  } else {
    result[0] += 0.9366413481094094;
    result[1] += 0.06335865189059063;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005500634688617918;
    result[1] += 0.994499365311382;
  } else {
    result[0] += 0.8096890884892972;
    result[1] += 0.19031091151070278;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8100332454966667;
    result[1] += 0.1899667545033333;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7998646483459912;
    result[1] += 0.20013535165400878;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8001203745500423;
    result[1] += 0.19987962544995774;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8073725087754079;
    result[1] += 0.19262749122459213;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 0.47261025513356014;
    result[1] += 0.5273897448664399;
  } else {
    result[0] += 0.9905342367802785;
    result[1] += 0.009465763219721476;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.061707442649835055;
    result[1] += 0.9382925573501649;
  } else {
    result[0] += 0.9370103872494259;
    result[1] += 0.06298961275057417;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.8009943935583601;
    result[1] += 0.19900560644163995;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.0552048354600403;
    result[1] += 0.9447951645399597;
  } else {
    result[0] += 0.93566409359964;
    result[1] += 0.06433590640036;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8065421651590312;
    result[1] += 0.1934578348409688;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8046037113210397;
    result[1] += 0.19539628867896028;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8070383112717943;
    result[1] += 0.19296168872820574;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8030586295388832;
    result[1] += 0.19694137046111684;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 0.01120162932790224;
    result[1] += 0.9887983706720977;
  } else {
    result[0] += 0.7576253200008752;
    result[1] += 0.2423746799991248;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8042526506485815;
    result[1] += 0.19574734935141852;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8057163193391053;
    result[1] += 0.19428368066089474;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06126452104361074;
    result[1] += 0.9387354789563893;
  } else {
    result[0] += 0.9376397084345713;
    result[1] += 0.06236029156542867;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 9.976057462090982e-05;
    result[1] += 0.9999002394253791;
  } else {
    result[0] += 0.7839863578680203;
    result[1] += 0.21601364213197968;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06207132407424999;
    result[1] += 0.93792867592575;
  } else {
    result[0] += 0.9372251210683193;
    result[1] += 0.06277487893168064;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7976278510849721;
    result[1] += 0.20237214891502783;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05592548400754398;
    result[1] += 0.9440745159924561;
  } else {
    result[0] += 0.9367142007496646;
    result[1] += 0.06328579925033541;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.0614835458501947;
    result[1] += 0.9385164541498053;
  } else {
    result[0] += 0.9373803512471215;
    result[1] += 0.06261964875287851;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7997401472498917;
    result[1] += 0.20025985275010827;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8099961355146207;
    result[1] += 0.19000386448537937;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005184331797235023;
    result[1] += 0.994815668202765;
  } else {
    result[0] += 0.8113945578231293;
    result[1] += 0.18860544217687075;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05663882929819185;
    result[1] += 0.9433611707018081;
  } else {
    result[0] += 0.9358651075149634;
    result[1] += 0.06413489248503658;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8062411775982155;
    result[1] += 0.19375882240178452;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8004500735697181;
    result[1] += 0.19954992643028188;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7996727604907437;
    result[1] += 0.20032723950925638;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36f7fc))) ) ) {
    result[0] += 0.06238125395820139;
    result[1] += 0.9376187460417986;
  } else {
    result[0] += 0.7585937932179012;
    result[1] += 0.2414062067820988;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.006050394424446657;
    result[1] += 0.9939496055755533;
  } else {
    result[0] += 0.8104795653755441;
    result[1] += 0.18952043462445584;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005210528332247806;
    result[1] += 0.9947894716677522;
  } else {
    result[0] += 0.8092444517449944;
    result[1] += 0.1907555482550056;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005603648168186736;
    result[1] += 0.9943963518318133;
  } else {
    result[0] += 0.8101286588080898;
    result[1] += 0.1898713411919102;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7982403981041559;
    result[1] += 0.20175960189584405;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 0.471742790017944;
    result[1] += 0.5282572099820559;
  } else {
    result[0] += 0.9905931302715781;
    result[1] += 0.009406869728421863;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8034132466477042;
    result[1] += 0.1965867533522958;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8064350574746161;
    result[1] += 0.1935649425253839;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8019540043164466;
    result[1] += 0.1980459956835534;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9383130822333227;
    result[1] += 0.06168691776667734;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.004227804028848545;
    result[1] += 0.9957721959711514;
  } else {
    result[0] += 0.7660132095126222;
    result[1] += 0.23398679048737783;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8097518986748801;
    result[1] += 0.1902481013251199;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06319075985978892;
    result[1] += 0.936809240140211;
  } else {
    result[0] += 0.9370362929762457;
    result[1] += 0.06296370702375427;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06116488173644121;
    result[1] += 0.9388351182635588;
  } else {
    result[0] += 0.9376114081996435;
    result[1] += 0.062388591800356503;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0.00019924287706714485;
    result[1] += 0.9998007571229328;
  } else {
    result[0] += 0.7821842206658961;
    result[1] += 0.21781577933410395;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8093439805450655;
    result[1] += 0.19065601945493446;
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
