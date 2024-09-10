
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53666670;
    result[1] += 0;
    result[2] += 18378;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 2042;
  } else {
    result[0] += 25084131;
    result[1] += 127900;
    result[2] += 308833;
    result[3] += 20507782;
    result[4] += 7605411;
    result[5] += 24956;
    result[6] += 28075;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53650249;
    result[1] += 0;
    result[2] += 28654;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 8187;
  } else {
    result[0] += 24853983;
    result[1] += 124347;
    result[2] += 301543;
    result[3] += 20828228;
    result[4] += 7535466;
    result[5] += 18652;
    result[6] += 24869;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10806101;
    result[1] += 148812;
    result[2] += 331967;
    result[3] += 24050443;
    result[4] += 18349766;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45945968;
    result[1] += 16599;
    result[2] += 121733;
    result[3] += 6489207;
    result[4] += 1088681;
    result[5] += 13833;
    result[6] += 11066;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53644108;
    result[1] += 0;
    result[2] += 38888;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 4093;
  } else {
    result[0] += 24617722;
    result[1] += 152325;
    result[2] += 307760;
    result[3] += 21254119;
    result[4] += 7302314;
    result[5] += 27978;
    result[6] += 24869;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45225590;
    result[1] += 53804;
    result[2] += 91783;
    result[3] += 5541832;
    result[4] += 2759838;
    result[5] += 12659;
    result[6] += 1582;
  } else {
    result[0] += 31638037;
    result[1] += 0;
    result[2] += 297202;
    result[3] += 17792891;
    result[4] += 3919707;
    result[5] += 0;
    result[6] += 39253;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11089312;
    result[1] += 266236;
    result[2] += 358839;
    result[3] += 23579259;
    result[4] += 18393442;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45953563;
    result[1] += 13814;
    result[2] += 147818;
    result[3] += 6445987;
    result[4] += 1088606;
    result[5] += 20722;
    result[6] += 16577;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6271427;
    result[1] += 91858;
    result[2] += 225470;
    result[3] += 26755862;
    result[4] += 20284016;
    result[5] += 58455;
    result[6] += 0;
  } else {
    result[0] += 48186738;
    result[1] += 37653;
    result[2] += 154959;
    result[3] += 5290360;
    result[4] += 0;
    result[5] += 0;
    result[6] += 17378;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45115358;
    result[1] += 21227;
    result[2] += 151242;
    result[3] += 7121662;
    result[4] += 1253720;
    result[5] += 10613;
    result[6] += 13266;
  } else {
    result[0] += 5009379;
    result[1] += 336318;
    result[2] += 283215;
    result[3] += 21860717;
    result[4] += 26197459;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10821651;
    result[1] += 304176;
    result[2] += 245680;
    result[3] += 23620448;
    result[4] += 18695134;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45863961;
    result[1] += 19316;
    result[2] += 136594;
    result[3] += 6513755;
    result[4] += 1124488;
    result[5] += 13797;
    result[6] += 15177;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53644110;
    result[1] += 0;
    result[2] += 34793;
    result[3] += 0;
    result[4] += 4093;
    result[5] += 0;
    result[6] += 4093;
  } else {
    result[0] += 25259575;
    result[1] += 133681;
    result[2] += 341975;
    result[3] += 20475023;
    result[4] += 7423983;
    result[5] += 37306;
    result[6] += 15544;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45168469;
    result[1] += 63276;
    result[2] += 115479;
    result[3] += 5528799;
    result[4] += 2781009;
    result[5] += 14237;
    result[6] += 15819;
  } else {
    result[0] += 31627210;
    result[1] += 0;
    result[2] += 207741;
    result[3] += 18045420;
    result[4] += 3761802;
    result[5] += 22458;
    result[6] += 22458;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11786662;
    result[1] += 196444;
    result[2] += 277333;
    result[3] += 22926213;
    result[4] += 18500437;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45799977;
    result[1] += 20726;
    result[2] += 117450;
    result[3] += 6557855;
    result[4] += 1171736;
    result[5] += 12435;
    result[6] += 6908;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53646127;
    result[1] += 0;
    result[2] += 30722;
    result[3] += 0;
    result[4] += 8192;
    result[5] += 0;
    result[6] += 2048;
  } else {
    result[0] += 24539298;
    result[1] += 99374;
    result[2] += 329178;
    result[3] += 20999080;
    result[4] += 7676682;
    result[5] += 15527;
    result[6] += 27949;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6300664;
    result[1] += 118720;
    result[2] += 279841;
    result[3] += 26720585;
    result[4] += 20173999;
    result[5] += 93280;
    result[6] += 0;
  } else {
    result[0] += 48432345;
    result[1] += 33221;
    result[2] += 128552;
    result[3] += 5077083;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15888;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10547129;
    result[1] += 266869;
    result[2] += 301678;
    result[3] += 23890581;
    result[4] += 18680833;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45874268;
    result[1] += 30383;
    result[2] += 127060;
    result[3] += 6515980;
    result[4] += 1114539;
    result[5] += 9667;
    result[6] += 15191;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53652389;
    result[1] += 0;
    result[2] += 30618;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 4082;
  } else {
    result[0] += 24769292;
    result[1] += 124860;
    result[2] += 302787;
    result[3] += 20998491;
    result[4] += 7413619;
    result[5] += 37458;
    result[6] += 40579;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53668738;
    result[1] += 0;
    result[2] += 14274;
    result[3] += 0;
    result[4] += 2039;
    result[5] += 0;
    result[6] += 2039;
  } else {
    result[0] += 24603587;
    result[1] += 121923;
    result[2] += 340761;
    result[3] += 21108439;
    result[4] += 7443601;
    result[5] += 37514;
    result[6] += 31262;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53652192;
    result[1] += 0;
    result[2] += 28740;
    result[3] += 0;
    result[4] += 2052;
    result[5] += 0;
    result[6] += 4105;
  } else {
    result[0] += 24723666;
    result[1] += 123788;
    result[2] += 293997;
    result[3] += 20966684;
    result[4] += 7532532;
    result[5] += 18568;
    result[6] += 27852;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6362053;
    result[1] += 99666;
    result[2] += 149499;
    result[3] += 26552851;
    result[4] += 20456575;
    result[5] += 66444;
    result[6] += 0;
  } else {
    result[0] += 48517845;
    result[1] += 36239;
    result[2] += 115967;
    result[3] += 5005441;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11596;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40884784;
    result[1] += 21928;
    result[2] += 102330;
    result[3] += 10456008;
    result[4] += 2189146;
    result[5] += 3654;
    result[6] += 29237;
  } else {
    result[0] += 43182608;
    result[1] += 57768;
    result[2] += 130444;
    result[3] += 7042121;
    result[4] += 3251786;
    result[5] += 9317;
    result[6] += 13044;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53646060;
    result[1] += 0;
    result[2] += 28721;
    result[3] += 0;
    result[4] += 6154;
    result[5] += 0;
    result[6] += 6154;
  } else {
    result[0] += 25017422;
    result[1] += 102225;
    result[2] += 291188;
    result[3] += 20550468;
    result[4] += 7676222;
    result[5] += 24781;
    result[6] += 24781;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10723536;
    result[1] += 208224;
    result[2] += 196656;
    result[3] += 23691265;
    result[4] += 18867409;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46125665;
    result[1] += 15197;
    result[2] += 139540;
    result[3] += 6275168;
    result[4] += 1113559;
    result[5] += 5526;
    result[6] += 12434;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53642144;
    result[1] += 0;
    result[2] += 22473;
    result[3] += 0;
    result[4] += 12258;
    result[5] += 0;
    result[6] += 10215;
  } else {
    result[0] += 24754917;
    result[1] += 118459;
    result[2] += 346026;
    result[3] += 20933040;
    result[4] += 7503473;
    result[5] += 15586;
    result[6] += 15586;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 13171583;
    result[1] += 293151;
    result[2] += 242607;
    result[3] += 22178399;
    result[4] += 17801349;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46257300;
    result[1] += 15464;
    result[2] += 127930;
    result[3] += 6189852;
    result[4] += 1059992;
    result[5] += 16869;
    result[6] += 19681;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12637131;
    result[1] += 207166;
    result[2] += 227882;
    result[3] += 22808986;
    result[4] += 17805925;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46071950;
    result[1] += 25220;
    result[2] += 130305;
    result[3] += 6391954;
    result[4] += 1035434;
    result[5] += 11209;
    result[6] += 21016;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 3412594;
    result[1] += 113124;
    result[2] += 235676;
    result[3] += 26980237;
    result[4] += 22879468;
    result[5] += 65989;
    result[6] += 0;
  } else {
    result[0] += 47989627;
    result[1] += 46863;
    result[2] += 130649;
    result[3] += 5502909;
    result[4] += 0;
    result[5] += 0;
    result[6] += 17041;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648184;
    result[1] += 0;
    result[2] += 26620;
    result[3] += 0;
    result[4] += 4095;
    result[5] += 0;
    result[6] += 8190;
  } else {
    result[0] += 24936134;
    result[1] += 105622;
    result[2] += 301333;
    result[3] += 20965986;
    result[4] += 7340735;
    result[5] += 15532;
    result[6] += 21745;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11059763;
    result[1] += 255652;
    result[2] += 277883;
    result[3] += 23308867;
    result[4] += 18784924;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45873516;
    result[1] += 27766;
    result[2] += 118008;
    result[3] += 6521030;
    result[4] += 1130108;
    result[5] += 8330;
    result[6] += 8330;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1947040;
    result[1] += 71733;
    result[2] += 235694;
    result[3] += 26182576;
    result[4] += 25147570;
    result[5] += 102475;
    result[6] += 0;
  } else {
    result[0] += 47817586;
    result[1] += 26660;
    result[2] += 126286;
    result[3] += 5695509;
    result[4] += 0;
    result[5] += 5612;
    result[6] += 15434;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53652449;
    result[1] += 0;
    result[2] += 28528;
    result[3] += 0;
    result[4] += 6113;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24771675;
    result[1] += 118929;
    result[2] += 319230;
    result[3] += 20893961;
    result[4] += 7539477;
    result[5] += 12518;
    result[6] += 31297;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2210403;
    result[1] += 92528;
    result[2] += 236461;
    result[3] += 26103317;
    result[4] += 24962132;
    result[5] += 82247;
    result[6] += 0;
  } else {
    result[0] += 47692560;
    result[1] += 54699;
    result[2] += 137450;
    result[3] += 5791159;
    result[4] += 0;
    result[5] += 2805;
    result[6] += 8415;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6653988;
    result[1] += 82761;
    result[2] += 182074;
    result[3] += 26533191;
    result[4] += 20177143;
    result[5] += 57932;
    result[6] += 0;
  } else {
    result[0] += 48179569;
    result[1] += 53668;
    result[2] += 129093;
    result[3] += 5307353;
    result[4] += 0;
    result[5] += 0;
    result[6] += 17405;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6066199;
    result[1] += 130984;
    result[2] += 286527;
    result[3] += 26827172;
    result[4] += 20310715;
    result[5] += 65492;
    result[6] += 0;
  } else {
    result[0] += 48394243;
    result[1] += 30518;
    result[2] += 111902;
    result[3] += 5132987;
    result[4] += 0;
    result[5] += 0;
    result[6] += 17439;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6342743;
    result[1] += 106946;
    result[2] += 156306;
    result[3] += 26728372;
    result[4] += 20311588;
    result[5] += 41133;
    result[6] += 0;
  } else {
    result[0] += 48379947;
    result[1] += 58080;
    result[2] += 129230;
    result[3] += 5100956;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18876;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12991967;
    result[1] += 267663;
    result[2] += 370610;
    result[3] += 22761679;
    result[4] += 17295170;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45932367;
    result[1] += 15425;
    result[2] += 155655;
    result[3] += 6523503;
    result[4] += 1032093;
    result[5] += 8413;
    result[6] += 19632;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6112223;
    result[1] += 108847;
    result[2] += 175831;
    result[3] += 26944020;
    result[4] += 20304303;
    result[5] += 41864;
    result[6] += 0;
  } else {
    result[0] += 48413631;
    result[1] += 40531;
    result[2] += 102776;
    result[3] += 5111333;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18818;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2080243;
    result[1] += 115569;
    result[2] += 210125;
    result[3] += 26423294;
    result[4] += 24784314;
    result[5] += 73543;
    result[6] += 0;
  } else {
    result[0] += 47557616;
    result[1] += 34961;
    result[2] += 152432;
    result[3] += 5923899;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18180;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6263766;
    result[1] += 65332;
    result[2] += 228664;
    result[3] += 26663880;
    result[4] += 20400114;
    result[5] += 65332;
    result[6] += 0;
  } else {
    result[0] += 48423935;
    result[1] += 45071;
    result[2] += 152660;
    result[3] += 5045068;
    result[4] += 0;
    result[5] += 0;
    result[6] += 20354;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53646252;
    result[1] += 0;
    result[2] += 30629;
    result[3] += 0;
    result[4] += 6125;
    result[5] += 0;
    result[6] += 4083;
  } else {
    result[0] += 24587864;
    result[1] += 96716;
    result[2] += 302629;
    result[3] += 21268299;
    result[4] += 7384782;
    result[5] += 9359;
    result[6] += 37438;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6181024;
    result[1] += 67552;
    result[2] += 227988;
    result[3] += 27223526;
    result[4] += 19961667;
    result[5] += 25332;
    result[6] += 0;
  } else {
    result[0] += 48581743;
    result[1] += 34690;
    result[2] += 131536;
    result[3] += 4931892;
    result[4] += 0;
    result[5] += 0;
    result[6] += 7227;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45049530;
    result[1] += 27905;
    result[2] += 124912;
    result[3] += 7169175;
    result[4] += 1283674;
    result[5] += 14617;
    result[6] += 17275;
  } else {
    result[0] += 4677481;
    result[1] += 381128;
    result[2] += 173240;
    result[3] += 22833038;
    result[4] += 25622203;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45118206;
    result[1] += 26578;
    result[2] += 151497;
    result[3] += 7112386;
    result[4] += 1259817;
    result[5] += 6644;
    result[6] += 11960;
  } else {
    result[0] += 5418916;
    result[1] += 311630;
    result[2] += 207753;
    result[3] += 22402804;
    result[4] += 25345985;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6428278;
    result[1] += 126540;
    result[2] += 236209;
    result[3] += 25890270;
    result[4] += 20963611;
    result[5] += 42180;
    result[6] += 0;
  } else {
    result[0] += 48484057;
    result[1] += 34696;
    result[2] += 128666;
    result[3] += 5012202;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27468;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12851617;
    result[1] += 195188;
    result[2] += 308192;
    result[3] += 22970596;
    result[4] += 17361497;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46083033;
    result[1] += 29456;
    result[2] += 129048;
    result[3] += 6372484;
    result[4] += 1047819;
    result[5] += 12624;
    result[6] += 12624;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6383196;
    result[1] += 124834;
    result[2] += 183090;
    result[3] += 26856029;
    result[4] += 20065040;
    result[5] += 74900;
    result[6] += 0;
  } else {
    result[0] += 48379098;
    result[1] += 40574;
    result[2] += 113028;
    result[3] += 5139898;
    result[4] += 0;
    result[5] += 0;
    result[6] += 14490;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53647948;
    result[1] += 0;
    result[2] += 30902;
    result[3] += 0;
    result[4] += 6180;
    result[5] += 0;
    result[6] += 2060;
  } else {
    result[0] += 24950336;
    result[1] += 126213;
    result[2] += 329387;
    result[3] += 20812982;
    result[4] += 7425072;
    result[5] += 27705;
    result[6] += 15391;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6240736;
    result[1] += 108898;
    result[2] += 159159;
    result[3] += 27107415;
    result[4] += 19987111;
    result[5] += 83768;
    result[6] += 0;
  } else {
    result[0] += 48429979;
    result[1] += 46318;
    result[2] += 134612;
    result[3] += 5064601;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11579;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11178490;
    result[1] += 210034;
    result[2] += 256708;
    result[3] += 23687197;
    result[4] += 18354660;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45873969;
    result[1] += 13801;
    result[2] += 131115;
    result[3] += 6482641;
    result[4] += 1164860;
    result[5] += 11041;
    result[6] += 9661;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45132044;
    result[1] += 55102;
    result[2] += 91312;
    result[3] += 5612576;
    result[4] += 2785034;
    result[5] += 4723;
    result[6] += 6297;
  } else {
    result[0] += 32204257;
    result[1] += 0;
    result[2] += 239904;
    result[3] += 17438737;
    result[4] += 3752784;
    result[5] += 5712;
    result[6] += 45696;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44975570;
    result[1] += 11982;
    result[2] += 131811;
    result[3] += 7338820;
    result[4] += 1195620;
    result[5] += 13314;
    result[6] += 19971;
  } else {
    result[0] += 4866818;
    result[1] += 371770;
    result[2] += 185885;
    result[3] += 23252577;
    result[4] += 25010039;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53644434;
    result[1] += 0;
    result[2] += 32500;
    result[3] += 0;
    result[4] += 4062;
    result[5] += 0;
    result[6] += 6093;
  } else {
    result[0] += 24814947;
    result[1] += 138385;
    result[2] += 330236;
    result[3] += 20943312;
    result[4] += 7391017;
    result[5] += 12580;
    result[6] += 56612;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10710044;
    result[1] += 342173;
    result[2] += 148275;
    result[3] += 24077639;
    result[4] += 18408957;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45733601;
    result[1] += 17991;
    result[2] += 123170;
    result[3] += 6659507;
    result[4] += 1118221;
    result[5] += 11071;
    result[6] += 23526;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45066209;
    result[1] += 50423;
    result[2] += 102423;
    result[3] += 5690002;
    result[4] += 2768577;
    result[5] += 1575;
    result[6] += 7878;
  } else {
    result[0] += 31788634;
    result[1] += 0;
    result[2] += 239140;
    result[3] += 17935553;
    result[4] += 3706681;
    result[5] += 0;
    result[6] += 17081;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53658406;
    result[1] += 0;
    result[2] += 22537;
    result[3] += 0;
    result[4] += 4097;
    result[5] += 0;
    result[6] += 2048;
  } else {
    result[0] += 24942444;
    result[1] += 127257;
    result[2] += 288656;
    result[3] += 20677770;
    result[4] += 7588884;
    result[5] += 31038;
    result[6] += 31038;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6576627;
    result[1] += 66096;
    result[2] += 198290;
    result[3] += 26711352;
    result[4] += 20068627;
    result[5] += 66096;
    result[6] += 0;
  } else {
    result[0] += 48365101;
    result[1] += 47880;
    result[2] += 136386;
    result[3] += 5124663;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13058;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6479333;
    result[1] += 74761;
    result[2] += 315659;
    result[3] += 26448970;
    result[4] += 20310217;
    result[5] += 58147;
    result[6] += 0;
  } else {
    result[0] += 48370131;
    result[1] += 43486;
    result[2] += 131909;
    result[3] += 5125619;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15945;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6646894;
    result[1] += 107341;
    result[2] += 222939;
    result[3] += 26546293;
    result[4] += 20105823;
    result[5] += 57799;
    result[6] += 0;
  } else {
    result[0] += 48505281;
    result[1] += 34825;
    result[2] += 114635;
    result[3] += 5014935;
    result[4] += 0;
    result[5] += 0;
    result[6] += 17412;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6493202;
    result[1] += 74634;
    result[2] += 306830;
    result[3] += 26163542;
    result[4] += 20599124;
    result[5] += 49756;
    result[6] += 0;
  } else {
    result[0] += 48430900;
    result[1] += 31899;
    result[2] += 129048;
    result[3] += 5077842;
    result[4] += 0;
    result[5] += 0;
    result[6] += 17399;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2065670;
    result[1] += 81405;
    result[2] += 132284;
    result[3] += 25876852;
    result[4] += 25459647;
    result[5] += 71230;
    result[6] += 0;
  } else {
    result[0] += 47848423;
    result[1] += 32304;
    result[2] += 129217;
    result[3] += 5658886;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18259;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45097740;
    result[1] += 18577;
    result[2] += 134022;
    result[3] += 7201360;
    result[4] += 1207524;
    result[5] += 9288;
    result[6] += 18577;
  } else {
    result[0] += 4466568;
    result[1] += 459014;
    result[2] += 123580;
    result[3] += 23074326;
    result[4] += 25563600;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11524692;
    result[1] += 227535;
    result[2] += 216159;
    result[3] += 23766122;
    result[4] += 17952581;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45973404;
    result[1] += 19381;
    result[2] += 128746;
    result[3] += 6420688;
    result[4] += 1121336;
    result[5] += 12459;
    result[6] += 11074;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40559333;
    result[1] += 47777;
    result[2] += 154357;
    result[3] += 10529402;
    result[4] += 2370493;
    result[5] += 3675;
    result[6] += 22051;
  } else {
    result[0] += 42918826;
    result[1] += 65036;
    result[2] += 133790;
    result[3] += 7243260;
    result[4] += 3305736;
    result[5] += 9290;
    result[6] += 11149;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45296032;
    result[1] += 11964;
    result[2] += 124961;
    result[3] += 7047053;
    result[4] += 1180491;
    result[5] += 11964;
    result[6] += 14623;
  } else {
    result[0] += 5360091;
    result[1] += 310230;
    result[2] += 155115;
    result[3] += 22543407;
    result[4] += 25318246;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11107674;
    result[1] += 208268;
    result[2] += 277691;
    result[3] += 23592236;
    result[4] += 18501219;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45781853;
    result[1] += 22104;
    result[2] += 125721;
    result[3] += 6548554;
    result[4] += 1182608;
    result[5] += 8289;
    result[6] += 17960;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2026124;
    result[1] += 103903;
    result[2] += 322101;
    result[3] += 25238231;
    result[4] += 25903216;
    result[5] += 93513;
    result[6] += 0;
  } else {
    result[0] += 47758584;
    result[1] += 35013;
    result[2] += 119046;
    result[3] += 5750637;
    result[4] += 0;
    result[5] += 5602;
    result[6] += 18207;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 44944718;
    result[1] += 50643;
    result[2] += 87043;
    result[3] += 5782879;
    result[4] += 2798065;
    result[5] += 15826;
    result[6] += 7913;
  } else {
    result[0] += 31942053;
    result[1] += 0;
    result[2] += 313926;
    result[3] += 17635959;
    result[4] += 3767121;
    result[5] += 0;
    result[6] += 28029;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45089292;
    result[1] += 18598;
    result[2] += 138159;
    result[3] += 7179002;
    result[4] += 1232811;
    result[5] += 15941;
    result[6] += 13284;
  } else {
    result[0] += 5147838;
    result[1] += 469566;
    result[2] += 52174;
    result[3] += 23165275;
    result[4] += 24852236;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53641719;
    result[1] += 0;
    result[2] += 35059;
    result[3] += 0;
    result[4] += 6187;
    result[5] += 0;
    result[6] += 4124;
  } else {
    result[0] += 24901122;
    result[1] += 116791;
    result[2] += 350373;
    result[3] += 20770400;
    result[4] += 7493080;
    result[5] += 21514;
    result[6] += 33807;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53650232;
    result[1] += 0;
    result[2] += 30715;
    result[3] += 0;
    result[4] += 2047;
    result[5] += 0;
    result[6] += 4095;
  } else {
    result[0] += 25001371;
    result[1] += 93195;
    result[2] += 316866;
    result[3] += 20931814;
    result[4] += 7303457;
    result[5] += 12426;
    result[6] += 27958;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40803070;
    result[1] += 36706;
    result[2] += 124802;
    result[3] += 10310887;
    result[4] += 2374917;
    result[5] += 11011;
    result[6] += 25694;
  } else {
    result[0] += 42893520;
    result[1] += 61358;
    result[2] += 172920;
    result[3] += 7156667;
    result[4] += 3374734;
    result[5] += 7437;
    result[6] += 20452;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11418136;
    result[1] += 252969;
    result[2] += 195476;
    result[3] += 23445701;
    result[4] += 18374806;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45955685;
    result[1] += 20738;
    result[2] += 134110;
    result[3] += 6427629;
    result[4] += 1129570;
    result[5] += 9678;
    result[6] += 9678;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44977810;
    result[1] += 17261;
    result[2] += 135439;
    result[3] += 7255299;
    result[4] += 1278706;
    result[5] += 10622;
    result[6] += 11950;
  } else {
    result[0] += 5057225;
    result[1] += 349981;
    result[2] += 227487;
    result[3] += 22818763;
    result[4] += 25233632;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45057382;
    result[1] += 10649;
    result[2] += 150417;
    result[3] += 7161473;
    result[4] += 1280546;
    result[5] += 3993;
    result[6] += 22629;
  } else {
    result[0] += 4880644;
    result[1] += 220306;
    result[2] += 169466;
    result[3] += 22335727;
    result[4] += 26080944;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45261865;
    result[1] += 53764;
    result[2] += 91716;
    result[3] += 5577284;
    result[4] += 2688228;
    result[5] += 6325;
    result[6] += 7906;
  } else {
    result[0] += 31951381;
    result[1] += 0;
    result[2] += 292358;
    result[3] += 17592094;
    result[4] += 3828768;
    result[5] += 5622;
    result[6] += 16866;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10567420;
    result[1] += 218240;
    result[2] += 241212;
    result[3] += 24155745;
    result[4] += 18504472;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45857896;
    result[1] += 24889;
    result[2] += 118917;
    result[3] += 6457495;
    result[4] += 1197471;
    result[5] += 8296;
    result[6] += 22124;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53658275;
    result[1] += 0;
    result[2] += 22640;
    result[3] += 0;
    result[4] += 4116;
    result[5] += 0;
    result[6] += 2058;
  } else {
    result[0] += 24793596;
    result[1] += 138718;
    result[2] += 323676;
    result[3] += 21119100;
    result[4] += 7265759;
    result[5] += 21578;
    result[6] += 24661;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1989946;
    result[1] += 124371;
    result[2] += 228014;
    result[3] += 26542980;
    result[4] += 24718863;
    result[5] += 82914;
    result[6] += 0;
  } else {
    result[0] += 47776187;
    result[1] += 28020;
    result[2] += 126091;
    result[3] += 5735776;
    result[4] += 0;
    result[5] += 4203;
    result[6] += 16812;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45148438;
    result[1] += 21256;
    result[2] += 132855;
    result[3] += 7133036;
    result[4] += 1228917;
    result[5] += 7971;
    result[6] += 14614;
  } else {
    result[0] += 5021219;
    result[1] += 382238;
    result[2] += 225868;
    result[3] += 23212282;
    result[4] += 24845482;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53646210;
    result[1] += 0;
    result[2] += 32704;
    result[3] += 0;
    result[4] += 6132;
    result[5] += 0;
    result[6] += 2044;
  } else {
    result[0] += 24714440;
    result[1] += 74760;
    result[2] += 286580;
    result[3] += 20783305;
    result[4] += 7750129;
    result[5] += 56070;
    result[6] += 21805;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44936156;
    result[1] += 27877;
    result[2] += 151335;
    result[3] += 7268108;
    result[4] += 1281045;
    result[5] += 7965;
    result[6] += 14602;
  } else {
    result[0] += 4915757;
    result[1] += 333569;
    result[2] += 175562;
    result[3] += 23051390;
    result[4] += 25210811;
    result[5] += 0;
    result[6] += 0;
  }
  
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

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
