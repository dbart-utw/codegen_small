
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24421009;
    result[1] += 12567267;
    result[2] += 3590647;
    result[3] += 8470246;
    result[4] += 11324351;
    result[5] += 25525823;
  } else {
    result[0] += 863704;
    result[1] += 1413334;
    result[2] += 70666737;
    result[3] += 6674080;
    result[4] += 157037;
    result[5] += 6124450;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 23550182;
    result[1] += 11719600;
    result[2] += 3573590;
    result[3] += 9966099;
    result[4] += 11675208;
    result[5] += 25414664;
  } else {
    result[0] += 359411;
    result[1] += 269558;
    result[2] += 75566265;
    result[3] += 5840436;
    result[4] += 89852;
    result[5] += 3773820;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25906519;
    result[1] += 12258093;
    result[2] += 2711147;
    result[3] += 8805436;
    result[4] += 11933683;
    result[5] += 24284465;
  } else {
    result[0] += 1995873;
    result[1] += 844408;
    result[2] += 68857652;
    result[3] += 10056134;
    result[4] += 153528;
    result[5] += 3991747;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 25256275;
    result[1] += 12628137;
    result[2] += 2194168;
    result[3] += 8800014;
    result[4] += 12207977;
    result[5] += 24812773;
  } else {
    result[0] += 299823;
    result[1] += 149911;
    result[2] += 66335882;
    result[3] += 10793635;
    result[4] += 1424160;
    result[5] += 6895933;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26086569;
    result[1] += 11529331;
    result[2] += 3004613;
    result[3] += 8175344;
    result[4] += 13415949;
    result[5] += 23687536;
  } else {
    result[0] += 1358689;
    result[1] += 528379;
    result[2] += 71029248;
    result[3] += 8906962;
    result[4] += 301930;
    result[5] += 3774136;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26216345;
    result[1] += 12988134;
    result[2] += 1392443;
    result[3] += 7154277;
    result[4] += 13708364;
    result[5] += 24439780;
  } else {
    result[0] += 963614;
    result[1] += 688296;
    result[2] += 65594612;
    result[3] += 11907521;
    result[4] += 825955;
    result[5] += 5919345;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25567221;
    result[1] += 11852200;
    result[2] += 1746394;
    result[3] += 9104538;
    result[4] += 12876752;
    result[5] += 24752237;
  } else {
    result[0] += 1510982;
    result[1] += 0;
    result[2] += 74566978;
    result[3] += 8083755;
    result[4] += 0;
    result[5] += 1737629;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2620839;
    result[1] += 1497622;
    result[2] += 1337162;
    result[3] += 12034466;
    result[4] += 14815765;
    result[5] += 53593489;
  } else {
    result[0] += 27210351;
    result[1] += 14272096;
    result[2] += 26863553;
    result[3] += 6695880;
    result[4] += 5842222;
    result[5] += 5015241;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25673699;
    result[1] += 11235103;
    result[2] += 2837378;
    result[3] += 8237550;
    result[4] += 12104622;
    result[5] += 25810991;
  } else {
    result[0] += 1282079;
    result[1] += 1041689;
    result[2] += 68350878;
    result[3] += 9855988;
    result[4] += 801299;
    result[5] += 4567409;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24720563;
    result[1] += 11437872;
    result[2] += 2467444;
    result[3] += 7725176;
    result[4] += 12867606;
    result[5] += 26680682;
  } else {
    result[0] += 1560387;
    result[1] += 468116;
    result[2] += 70373487;
    result[3] += 7567880;
    result[4] += 468116;
    result[5] += 5461357;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24999354;
    result[1] += 11913215;
    result[2] += 3449772;
    result[3] += 8601433;
    result[4] += 12281191;
    result[5] += 24654377;
  } else {
    result[0] += 2125831;
    result[1] += 708610;
    result[2] += 68499020;
    result[3] += 9526875;
    result[4] += 393672;
    result[5] += 4645335;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25540833;
    result[1] += 11165262;
    result[2] += 3045071;
    result[3] += 8191006;
    result[4] += 12392733;
    result[5] += 25564438;
  } else {
    result[0] += 1447335;
    result[1] += 1374968;
    result[2] += 67228721;
    result[3] += 9697146;
    result[4] += 723667;
    result[5] += 5427507;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 25087536;
    result[1] += 11134222;
    result[2] += 1966256;
    result[3] += 9144276;
    result[4] += 13289998;
    result[5] += 25277055;
  } else {
    result[0] += 1216907;
    result[1] += 1073741;
    result[2] += 68719476;
    result[3] += 8589934;
    result[4] += 214748;
    result[5] += 6084537;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2821709;
    result[1] += 1356591;
    result[2] += 922481;
    result[3] += 11666683;
    result[4] += 16062038;
    result[5] += 53069842;
  } else {
    result[0] += 27547122;
    result[1] += 13508685;
    result[2] += 27361709;
    result[3] += 6568929;
    result[4] += 6171615;
    result[5] += 4741283;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 2208354;
    result[1] += 1189114;
    result[2] += 849367;
    result[3] += 11381521;
    result[4] += 17383717;
    result[5] += 52887270;
  } else {
    result[0] += 27880295;
    result[1] += 12174914;
    result[2] += 27257272;
    result[3] += 6619623;
    result[4] += 6463867;
    result[5] += 5503373;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25831144;
    result[1] += 11518373;
    result[2] += 3226053;
    result[3] += 8428631;
    result[4] += 11268467;
    result[5] += 25626676;
  } else {
    result[0] += 739802;
    result[1] += 328801;
    result[2] += 71185486;
    result[3] += 7562430;
    result[4] += 657602;
    result[5] += 5425221;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24779099;
    result[1] += 12182674;
    result[2] += 3378968;
    result[3] += 8183079;
    result[4] += 12090729;
    result[5] += 25284795;
  } else {
    result[0] += 631032;
    result[1] += 1577582;
    result[2] += 69176975;
    result[3] += 8913338;
    result[4] += 867670;
    result[5] += 4732746;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26386481;
    result[1] += 11920912;
    result[2] += 2728055;
    result[3] += 8138315;
    result[4] += 12012612;
    result[5] += 24712969;
  } else {
    result[0] += 636881;
    result[1] += 875711;
    result[2] += 71569519;
    result[3] += 9155166;
    result[4] += 477660;
    result[5] += 3184405;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 23945392;
    result[1] += 11335494;
    result[2] += 3867929;
    result[3] += 9323276;
    result[4] += 11693221;
    result[5] += 25734031;
  } else {
    result[0] += 261888;
    result[1] += 87296;
    result[2] += 76995145;
    result[3] += 5586949;
    result[4] += 174592;
    result[5] += 2793474;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24929633;
    result[1] += 12028663;
    result[2] += 3328542;
    result[3] += 8103278;
    result[4] += 13543723;
    result[5] += 23965504;
  } else {
    result[0] += 713186;
    result[1] += 1188644;
    result[2] += 70209243;
    result[3] += 8399751;
    result[4] += 158485;
    result[5] += 5230033;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25309014;
    result[1] += 11691664;
    result[2] += 3140701;
    result[3] += 8413413;
    result[4] += 11966762;
    result[5] += 25377789;
  } else {
    result[0] += 2308694;
    result[1] += 318440;
    result[2] += 71171469;
    result[3] += 7801794;
    result[4] += 159220;
    result[5] += 4139727;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27877688;
    result[1] += 12281778;
    result[2] += 1194061;
    result[3] += 6652630;
    result[4] += 13134680;
    result[5] += 24758506;
  } else {
    result[0] += 792307;
    result[1] += 924358;
    result[2] += 65497425;
    result[3] += 12412818;
    result[4] += 396153;
    result[5] += 5876281;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26648030;
    result[1] += 12327610;
    result[2] += 2919697;
    result[3] += 7785859;
    result[4] += 12675193;
    result[5] += 23542955;
  } else {
    result[0] += 2149402;
    result[1] += 997936;
    result[2] += 70776762;
    result[3] += 7446145;
    result[4] += 460586;
    result[5] += 4068512;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24680550;
    result[1] += 11375114;
    result[2] += 3240183;
    result[3] += 8824330;
    result[4] += 12271335;
    result[5] += 25507831;
  } else {
    result[0] += 2131693;
    result[1] += 868467;
    result[2] += 66635154;
    result[3] += 10263708;
    result[4] += 789516;
    result[5] += 5210805;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25110818;
    result[1] += 11884862;
    result[2] += 3190877;
    result[3] += 8647740;
    result[4] += 11977351;
    result[5] += 25087695;
  } else {
    result[0] += 2319514;
    result[1] += 463902;
    result[2] += 70126648;
    result[3] += 8272934;
    result[4] += 541220;
    result[5] += 4175125;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27974041;
    result[1] += 12278309;
    result[2] += 1611070;
    result[3] += 7493918;
    result[4] += 12253899;
    result[5] += 24288107;
  } else {
    result[0] += 985837;
    result[1] += 920115;
    result[2] += 63422240;
    result[3] += 12421558;
    result[4] += 1183005;
    result[5] += 6966588;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26159928;
    result[1] += 11823426;
    result[2] += 2201933;
    result[3] += 8352987;
    result[4] += 12158503;
    result[5] += 25202566;
  } else {
    result[0] += 1041625;
    result[1] += 1180508;
    result[2] += 65275169;
    result[3] += 10832900;
    result[4] += 1527716;
    result[5] += 6041425;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 7561861;
    result[1] += 1104541;
    result[2] += 1571847;
    result[3] += 12574780;
    result[4] += 17205358;
    result[5] += 45880956;
  } else {
    result[0] += 29072210;
    result[1] += 14888403;
    result[2] += 30695843;
    result[3] += 4227571;
    result[4] += 4564551;
    result[5] += 2450765;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26311099;
    result[1] += 11351229;
    result[2] += 2169752;
    result[3] += 8404934;
    result[4] += 12013575;
    result[5] += 25648754;
  } else {
    result[0] += 725909;
    result[1] += 0;
    result[2] += 71139176;
    result[3] += 11453246;
    result[4] += 80656;
    result[5] += 2500356;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26363556;
    result[1] += 11554115;
    result[2] += 2796829;
    result[3] += 8596812;
    result[4] += 13067154;
    result[5] += 23520877;
  } else {
    result[0] += 1671813;
    result[1] += 477660;
    result[2] += 69021995;
    result[3] += 10030878;
    result[4] += 318440;
    result[5] += 4378557;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25888727;
    result[1] += 12143917;
    result[2] += 3201786;
    result[3] += 8896391;
    result[4] += 12006697;
    result[5] += 23761826;
  } else {
    result[0] += 722517;
    result[1] += 321119;
    result[2] += 69682833;
    result[3] += 10837767;
    result[4] += 481678;
    result[5] += 3853428;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24748718;
    result[1] += 11630295;
    result[2] += 2083379;
    result[3] += 8608250;
    result[4] += 12385806;
    result[5] += 26442895;
  } else {
    result[0] += 1519634;
    result[1] += 0;
    result[2] += 72062672;
    result[3] += 9197788;
    result[4] += 159961;
    result[5] += 2959288;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
    result[0] += 4548448;
    result[1] += 1326630;
    result[2] += 1895186;
    result[3] += 12176575;
    result[4] += 17340960;
    result[5] += 48611543;
  } else {
    result[0] += 28424045;
    result[1] += 13228442;
    result[2] += 29336351;
    result[3] += 5815953;
    result[4] += 4732589;
    result[5] += 4361964;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24769917;
    result[1] += 11907740;
    result[2] += 3408704;
    result[3] += 8567209;
    result[4] += 12339509;
    result[5] += 24906265;
  } else {
    result[0] += 410608;
    result[1] += 164243;
    result[2] += 70378335;
    result[3] += 8704905;
    result[4] += 1478191;
    result[5] += 4763061;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26271621;
    result[1] += 11126270;
    result[2] += 3019987;
    result[3] += 8356055;
    result[4] += 12329723;
    result[5] += 24795687;
  } else {
    result[0] += 329431;
    result[1] += 741221;
    result[2] += 72310283;
    result[3] += 8235795;
    result[4] += 164715;
    result[5] += 4117897;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27144760;
    result[1] += 12143086;
    result[2] += 1157609;
    result[3] += 7370900;
    result[4] += 12379333;
    result[5] += 25703654;
  } else {
    result[0] += 1515870;
    result[1] += 0;
    result[2] += 69585688;
    result[3] += 10105805;
    result[4] += 360921;
    result[5] += 4331059;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25014770;
    result[1] += 11497614;
    result[2] += 2088389;
    result[3] += 9409225;
    result[4] += 12805726;
    result[5] += 25083618;
  } else {
    result[0] += 1031109;
    result[1] += 0;
    result[2] += 72574239;
    result[3] += 10390410;
    result[4] += 79316;
    result[5] += 1824270;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 25789249;
    result[1] += 12931084;
    result[2] += 2430654;
    result[3] += 7437804;
    result[4] += 12031741;
    result[5] += 25278811;
  } else {
    result[0] += 3590220;
    result[1] += 664855;
    result[2] += 63493711;
    result[3] += 11568487;
    result[4] += 930797;
    result[5] += 5651272;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24717604;
    result[1] += 12177388;
    result[2] += 2313023;
    result[3] += 8140935;
    result[4] += 11882591;
    result[5] += 26667801;
  } else {
    result[0] += 1158565;
    result[1] += 0;
    result[2] += 75058484;
    result[3] += 7365165;
    result[4] += 165509;
    result[5] += 2151621;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26306961;
    result[1] += 12327084;
    result[2] += 2272590;
    result[3] += 8723076;
    result[4] += 11936841;
    result[5] += 24332791;
  } else {
    result[0] += 2298045;
    result[1] += 713186;
    result[2] += 68386656;
    result[3] += 9667638;
    result[4] += 633943;
    result[5] += 4199875;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24772470;
    result[1] += 12064514;
    result[2] += 2527803;
    result[3] += 9214991;
    result[4] += 11719814;
    result[5] += 25599751;
  } else {
    result[0] += 1342177;
    result[1] += 947419;
    result[2] += 69714266;
    result[3] += 9079434;
    result[4] += 236854;
    result[5] += 4579193;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25515580;
    result[1] += 11824862;
    result[2] += 2682168;
    result[3] += 7999857;
    result[4] += 12081417;
    result[5] += 25795459;
  } else {
    result[0] += 1427898;
    result[1] += 1052135;
    result[2] += 68238500;
    result[3] += 9394066;
    result[4] += 676372;
    result[5] += 5110372;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27374516;
    result[1] += 11327386;
    result[2] += 2123884;
    result[3] += 8353947;
    result[4] += 12318532;
    result[5] += 24401077;
  } else {
    result[0] += 1520983;
    result[1] += 1520983;
    result[2] += 66416273;
    result[3] += 8111911;
    result[4] += 724277;
    result[5] += 7604916;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25269836;
    result[1] += 11786557;
    result[2] += 2330163;
    result[3] += 8302623;
    result[4] += 12352131;
    result[5] += 25858033;
  } else {
    result[0] += 1252177;
    result[1] += 0;
    result[2] += 71457570;
    result[3] += 10017416;
    result[4] += 166956;
    result[5] += 3005224;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    result[0] += 4121560;
    result[1] += 603155;
    result[2] += 201051;
    result[3] += 11711262;
    result[4] += 17592025;
    result[5] += 51670291;
  } else {
    result[0] += 29652773;
    result[1] += 14523245;
    result[2] += 27255198;
    result[3] += 6090393;
    result[4] += 4712476;
    result[5] += 3665259;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25994048;
    result[1] += 11921566;
    result[2] += 2722968;
    result[3] += 8008729;
    result[4] += 12310561;
    result[5] += 24941472;
  } else {
    result[0] += 320519;
    result[1] += 560909;
    result[2] += 74120237;
    result[3] += 7291828;
    result[4] += 400649;
    result[5] += 3205199;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    result[0] += 3401419;
    result[1] += 1133806;
    result[2] += 971834;
    result[3] += 11392056;
    result[4] += 17061089;
    result[5] += 51939139;
  } else {
    result[0] += 28757029;
    result[1] += 13090688;
    result[2] += 26367248;
    result[3] += 6425855;
    result[4] += 5894792;
    result[5] += 5363730;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 25271525;
    result[1] += 12349670;
    result[2] += 1907284;
    result[3] += 7629139;
    result[4] += 13827815;
    result[5] += 24913909;
  } else {
    result[0] += 2177334;
    result[1] += 842839;
    result[2] += 65671208;
    result[3] += 12712822;
    result[4] += 632129;
    result[5] += 3863012;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 24706070;
    result[1] += 13473958;
    result[2] += 2241847;
    result[3] += 8921636;
    result[4] += 11621003;
    result[5] += 24934830;
  } else {
    result[0] += 561433;
    result[1] += 481228;
    result[2] += 72505143;
    result[3] += 8501709;
    result[4] += 240614;
    result[5] += 3609216;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26230390;
    result[1] += 12297654;
    result[2] += 3016840;
    result[3] += 8037231;
    result[4] += 12090390;
    result[5] += 24226839;
  } else {
    result[0] += 1018879;
    result[1] += 391876;
    result[2] += 70224282;
    result[3] += 10032040;
    result[4] += 783753;
    result[5] += 3448513;
  }
  
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
