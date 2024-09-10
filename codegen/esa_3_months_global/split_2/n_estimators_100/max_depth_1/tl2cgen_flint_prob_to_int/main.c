
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 356785;
    result[1] += 42592887;
  } else {
    result[0] += 32968599;
    result[1] += 9981073;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 20098016;
    result[1] += 22851656;
  } else {
    result[0] += 42519697;
    result[1] += 429975;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34377980;
    result[1] += 8571692;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 4243;
    result[1] += 42945429;
  } else {
    result[0] += 33667246;
    result[1] += 9282426;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 20185217;
    result[1] += 22764455;
  } else {
    result[0] += 42876919;
    result[1] += 72753;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34450836;
    result[1] += 8498836;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 2580929;
    result[1] += 40368743;
  } else {
    result[0] += 40165146;
    result[1] += 2784526;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 20281120;
    result[1] += 22668552;
  } else {
    result[0] += 42160748;
    result[1] += 788924;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 20119106;
    result[1] += 22830566;
  } else {
    result[0] += 42205928;
    result[1] += 743744;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40394979;
    result[1] += 2554693;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 20277724;
    result[1] += 22671948;
  } else {
    result[0] += 42877199;
    result[1] += 72473;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea463a6))) ) ) {
    result[0] += 30964848;
    result[1] += 11984824;
  } else {
    result[0] += 7624126;
    result[1] += 35325546;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 221105;
    result[1] += 42728567;
  } else {
    result[0] += 34842241;
    result[1] += 8107431;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40363929;
    result[1] += 2585743;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34806191;
    result[1] += 8143481;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34522615;
    result[1] += 8427057;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 2653851;
    result[1] += 40295821;
  } else {
    result[0] += 40307899;
    result[1] += 2641773;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40398374;
    result[1] += 2551298;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34828456;
    result[1] += 8121216;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 357421;
    result[1] += 42592251;
  } else {
    result[0] += 32485418;
    result[1] += 10464254;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 33616228;
    result[1] += 9333444;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40379469;
    result[1] += 2570203;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 2697077;
    result[1] += 40252595;
  } else {
    result[0] += 40251470;
    result[1] += 2698202;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 183468;
    result[1] += 42766204;
  } else {
    result[0] += 34796494;
    result[1] += 8153178;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40342542;
    result[1] += 2607130;
  }
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
    result[0] += 30841082;
    result[1] += 12108590;
  } else {
    result[0] += 32661;
    result[1] += 42917011;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 2572852;
    result[1] += 40376820;
  } else {
    result[0] += 40277499;
    result[1] += 2672173;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40346026;
    result[1] += 2603646;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34504630;
    result[1] += 8445042;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34340932;
    result[1] += 8608740;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34364308;
    result[1] += 8585364;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40347766;
    result[1] += 2601906;
  }
  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36bc04))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 32393432;
    result[1] += 10556240;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40380500;
    result[1] += 2569172;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34715144;
    result[1] += 8234528;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 245116;
    result[1] += 42704556;
  } else {
    result[0] += 34816922;
    result[1] += 8132750;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 21903807;
    result[1] += 21045865;
  } else {
    result[0] += 39428161;
    result[1] += 3521511;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 21817819;
    result[1] += 21131853;
  } else {
    result[0] += 39448595;
    result[1] += 3501077;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34829923;
    result[1] += 8119749;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 2497469;
    result[1] += 40452203;
  } else {
    result[0] += 40222210;
    result[1] += 2727462;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 2520476;
    result[1] += 40429196;
  } else {
    result[0] += 40176349;
    result[1] += 2773323;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 2663948;
    result[1] += 40285724;
  } else {
    result[0] += 40247257;
    result[1] += 2702415;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40345989;
    result[1] += 2603683;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 248489;
    result[1] += 42701183;
  } else {
    result[0] += 34815707;
    result[1] += 8133965;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34310138;
    result[1] += 8639534;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34498948;
    result[1] += 8450724;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40385840;
    result[1] += 2563832;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 2681045;
    result[1] += 40268627;
  } else {
    result[0] += 40278139;
    result[1] += 2671533;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40384534;
    result[1] += 2565138;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34827551;
    result[1] += 8122120;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40369607;
    result[1] += 2580065;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 198246;
    result[1] += 42751426;
  } else {
    result[0] += 34843136;
    result[1] += 8106536;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 2670327;
    result[1] += 40279345;
  } else {
    result[0] += 40253923;
    result[1] += 2695749;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34379616;
    result[1] += 8570056;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34765890;
    result[1] += 8183782;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 20275248;
    result[1] += 22674424;
  } else {
    result[0] += 42194322;
    result[1] += 755350;
  }
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
    result[0] += 30812128;
    result[1] += 12137543;
  } else {
    result[0] += 22014;
    result[1] += 42927658;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34783919;
    result[1] += 8165753;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 20303325;
    result[1] += 22646346;
  } else {
    result[0] += 42876482;
    result[1] += 73190;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40401105;
    result[1] += 2548567;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34580521;
    result[1] += 8369151;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34385730;
    result[1] += 8563942;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 2679547;
    result[1] += 40270125;
  } else {
    result[0] += 40255517;
    result[1] += 2694155;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 34444607;
    result[1] += 8505065;
  } else {
    result[0] += 0;
    result[1] += 42949672;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 2724187;
    result[1] += 40225485;
  } else {
    result[0] += 40270016;
    result[1] += 2679656;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 21647789;
    result[1] += 21301883;
  } else {
    result[0] += 39574680;
    result[1] += 3374992;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 20361797;
    result[1] += 22587875;
  } else {
    result[0] += 42872647;
    result[1] += 77025;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 249468;
    result[1] += 42700204;
  } else {
    result[0] += 34838965;
    result[1] += 8110707;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34479540;
    result[1] += 8470132;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34534407;
    result[1] += 8415264;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 2702258;
    result[1] += 40247414;
  } else {
    result[0] += 40284993;
    result[1] += 2664679;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 20326536;
    result[1] += 22623136;
  } else {
    result[0] += 42872827;
    result[1] += 76845;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 2501044;
    result[1] += 40448628;
  } else {
    result[0] += 40121073;
    result[1] += 2828599;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 2520633;
    result[1] += 40429039;
  } else {
    result[0] += 40194466;
    result[1] += 2755206;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 220415;
    result[1] += 42729257;
  } else {
    result[0] += 34822826;
    result[1] += 8126846;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 20248763;
    result[1] += 22700909;
  } else {
    result[0] += 42875808;
    result[1] += 73864;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34834061;
    result[1] += 8115611;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34789569;
    result[1] += 8160103;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 2545729;
    result[1] += 40403943;
  } else {
    result[0] += 40153538;
    result[1] += 2796134;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34868115;
    result[1] += 8081557;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34750995;
    result[1] += 8198677;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40392828;
    result[1] += 2556844;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 242635;
    result[1] += 42707037;
  } else {
    result[0] += 34834194;
    result[1] += 8115478;
  }
  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
    result[0] += 19344;
    result[1] += 42930328;
  } else {
    result[0] += 32809575;
    result[1] += 10140097;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 20175059;
    result[1] += 22774613;
  } else {
    result[0] += 42209805;
    result[1] += 739867;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34500364;
    result[1] += 8449308;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34633907;
    result[1] += 8315765;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 2498279;
    result[1] += 40451393;
  } else {
    result[0] += 40206077;
    result[1] += 2743595;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 34421920;
    result[1] += 8527752;
  } else {
    result[0] += 0;
    result[1] += 42949672;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 159634;
    result[1] += 42790038;
  } else {
    result[0] += 32863443;
    result[1] += 10086229;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 40387903;
    result[1] += 2561769;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34807514;
    result[1] += 8142158;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 20348140;
    result[1] += 22601532;
  } else {
    result[0] += 42873789;
    result[1] += 75883;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 20187393;
    result[1] += 22762279;
  } else {
    result[0] += 42537069;
    result[1] += 412603;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34409684;
    result[1] += 8539988;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34819334;
    result[1] += 8130337;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34325121;
    result[1] += 8624551;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34543907;
    result[1] += 8405765;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34664946;
    result[1] += 8284726;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 42949672;
  } else {
    result[0] += 34475553;
    result[1] += 8474119;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_2/test_data.csv", "r");
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
