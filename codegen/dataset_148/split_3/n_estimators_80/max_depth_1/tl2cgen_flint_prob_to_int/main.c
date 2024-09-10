
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
    result[0] += 53642060;
    result[1] += 0;
    result[2] += 38890;
    result[3] += 0;
    result[4] += 2046;
    result[5] += 0;
    result[6] += 4093;
  } else {
    result[0] += 25023512;
    result[1] += 118123;
    result[2] += 348153;
    result[3] += 20830131;
    result[4] += 7326760;
    result[5] += 24868;
    result[6] += 15542;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6315638;
    result[1] += 58246;
    result[2] += 249629;
    result[3] += 26527347;
    result[4] += 20494622;
    result[5] += 41604;
    result[6] += 0;
  } else {
    result[0] += 48470250;
    result[1] += 40575;
    result[2] += 128971;
    result[3] += 5034251;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13042;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6361715;
    result[1] += 68130;
    result[2] += 204392;
    result[3] += 26920192;
    result[4] += 20081561;
    result[5] += 51098;
    result[6] += 0;
  } else {
    result[0] += 48369765;
    result[1] += 60620;
    result[2] += 134232;
    result[3] += 5095048;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27423;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53631591;
    result[1] += 0;
    result[2] += 51388;
    result[3] += 0;
    result[4] += 2055;
    result[5] += 0;
    result[6] += 2055;
  } else {
    result[0] += 24832827;
    result[1] += 108103;
    result[2] += 333575;
    result[3] += 20857722;
    result[4] += 7520887;
    result[5] += 9265;
    result[6] += 24709;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45117139;
    result[1] += 26643;
    result[2] += 167855;
    result[3] += 7099218;
    result[4] += 1258915;
    result[5] += 7993;
    result[6] += 9325;
  } else {
    result[0] += 4731174;
    result[1] += 436207;
    result[2] += 184549;
    result[3] += 22632464;
    result[4] += 25702694;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6123749;
    result[1] += 125144;
    result[2] += 233603;
    result[3] += 26822688;
    result[4] += 20315161;
    result[5] += 66743;
    result[6] += 0;
  } else {
    result[0] += 48532029;
    result[1] += 36211;
    result[2] += 130361;
    result[3] += 4976901;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11587;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44924349;
    result[1] += 19951;
    result[2] += 162273;
    result[3] += 7229129;
    result[4] += 1330106;
    result[5] += 10640;
    result[6] += 10640;
  } else {
    result[0] += 5100016;
    result[1] += 256712;
    result[2] += 68456;
    result[3] += 22299738;
    result[4] += 25962166;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53633970;
    result[1] += 0;
    result[2] += 46991;
    result[3] += 0;
    result[4] += 2043;
    result[5] += 0;
    result[6] += 4086;
  } else {
    result[0] += 24569567;
    result[1] += 102866;
    result[2] += 317951;
    result[3] += 20987933;
    result[4] += 7674482;
    result[5] += 15585;
    result[6] += 18703;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6509528;
    result[1] += 132173;
    result[2] += 206520;
    result[3] += 26533764;
    result[4] += 20255538;
    result[5] += 49564;
    result[6] += 0;
  } else {
    result[0] += 48481035;
    result[1] += 37725;
    result[2] += 150900;
    result[3] += 5007274;
    result[4] += 0;
    result[5] += 2901;
    result[6] += 7254;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6254146;
    result[1] += 76477;
    result[2] += 229432;
    result[3] += 26639606;
    result[4] += 20461936;
    result[5] += 25492;
    result[6] += 0;
  } else {
    result[0] += 48552582;
    result[1] += 37541;
    result[2] += 137170;
    result[3] += 4941025;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18770;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44983658;
    result[1] += 17252;
    result[2] += 171202;
    result[3] += 7198447;
    result[4] += 1291314;
    result[5] += 13271;
    result[6] += 11944;
  } else {
    result[0] += 5373995;
    result[1] += 352393;
    result[2] += 158576;
    result[3] += 22306484;
    result[4] += 25495641;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10542533;
    result[1] += 105660;
    result[2] += 258280;
    result[3] += 24184432;
    result[4] += 18596184;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46072673;
    result[1] += 23445;
    result[2] += 132400;
    result[3] += 6319373;
    result[4] += 1118509;
    result[5] += 6895;
    result[6] += 13791;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6252084;
    result[1] += 98977;
    result[2] += 222699;
    result[3] += 26171322;
    result[4] += 20867773;
    result[5] += 74233;
    result[6] += 0;
  } else {
    result[0] += 48481079;
    result[1] += 29027;
    result[2] += 145135;
    result[3] += 5017335;
    result[4] += 0;
    result[5] += 4354;
    result[6] += 10159;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45055465;
    result[1] += 26554;
    result[2] += 155345;
    result[3] += 7151197;
    result[4] += 1277284;
    result[5] += 11949;
    result[6] += 9294;
  } else {
    result[0] += 4729368;
    result[1] += 227710;
    result[2] += 105097;
    result[3] += 22245548;
    result[4] += 26379366;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6169013;
    result[1] += 108374;
    result[2] += 225085;
    result[3] += 26743507;
    result[4] += 20366081;
    result[5] += 75028;
    result[6] += 0;
  } else {
    result[0] += 48418339;
    result[1] += 26075;
    result[2] += 152108;
    result[3] += 5074632;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15935;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1883233;
    result[1] += 99641;
    result[2] += 259069;
    result[3] += 25607985;
    result[4] += 25807269;
    result[5] += 29892;
    result[6] += 0;
  } else {
    result[0] += 47797457;
    result[1] += 26764;
    result[2] += 135231;
    result[3] += 5705098;
    result[4] += 0;
    result[5] += 7043;
    result[6] += 15495;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6598459;
    result[1] += 89941;
    result[2] += 228942;
    result[3] += 26091304;
    result[4] += 20629383;
    result[5] += 49059;
    result[6] += 0;
  } else {
    result[0] += 48446879;
    result[1] += 37793;
    result[2] += 162802;
    result[3] += 5026532;
    result[4] += 0;
    result[5] += 1453;
    result[6] += 11628;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11261081;
    result[1] += 243294;
    result[2] += 359149;
    result[3] += 23588027;
    result[4] += 18235537;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46012376;
    result[1] += 20720;
    result[2] += 136752;
    result[3] += 6390070;
    result[4] += 1107833;
    result[5] += 6906;
    result[6] += 12432;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10786554;
    result[1] += 163787;
    result[2] += 292477;
    result[3] += 23667244;
    result[4] += 18777027;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45833607;
    result[1] += 31734;
    result[2] += 144872;
    result[3] += 6515135;
    result[4] += 1130007;
    result[5] += 12417;
    result[6] += 19316;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53639686;
    result[1] += 0;
    result[2] += 41221;
    result[3] += 0;
    result[4] += 6183;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24853197;
    result[1] += 98440;
    result[2] += 310703;
    result[3] += 20890960;
    result[4] += 7472263;
    result[5] += 36915;
    result[6] += 24610;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45004849;
    result[1] += 17221;
    result[2] += 172214;
    result[3] += 7213122;
    result[4] += 1254513;
    result[5] += 10597;
    result[6] += 14571;
  } else {
    result[0] += 5309116;
    result[1] += 379222;
    result[2] += 198640;
    result[3] += 22265786;
    result[4] += 25534324;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53658379;
    result[1] += 0;
    result[2] += 24610;
    result[3] += 0;
    result[4] += 2050;
    result[5] += 0;
    result[6] += 2050;
  } else {
    result[0] += 25039718;
    result[1] += 130173;
    result[2] += 356426;
    result[3] += 20620033;
    result[4] += 7488050;
    result[5] += 34092;
    result[6] += 18596;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40887715;
    result[1] += 59187;
    result[2] += 147969;
    result[3] += 10206207;
    result[4] += 2341619;
    result[5] += 22195;
    result[6] += 22195;
  } else {
    result[0] += 42993012;
    result[1] += 35190;
    result[2] += 174098;
    result[3] += 7219521;
    result[4] += 3250451;
    result[5] += 3704;
    result[6] += 11112;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53656237;
    result[1] += 0;
    result[2] += 22625;
    result[3] += 0;
    result[4] += 4113;
    result[5] += 0;
    result[6] += 4113;
  } else {
    result[0] += 24935075;
    result[1] += 141939;
    result[2] += 336335;
    result[3] += 20729345;
    result[4] += 7482682;
    result[5] += 33942;
    result[6] += 27770;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45104379;
    result[1] += 19916;
    result[2] += 163315;
    result[3] += 7139424;
    result[4] += 1233499;
    result[5] += 13277;
    result[6] += 13277;
  } else {
    result[0] += 5043014;
    result[1] += 350209;
    result[2] += 192615;
    result[3] += 21240196;
    result[4] += 26861056;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53639773;
    result[1] += 0;
    result[2] += 39088;
    result[3] += 0;
    result[4] += 6171;
    result[5] += 0;
    result[6] += 2057;
  } else {
    result[0] += 24863132;
    result[1] += 104881;
    result[2] += 367085;
    result[3] += 20609253;
    result[4] += 7681042;
    result[5] += 24678;
    result[6] += 37017;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53643863;
    result[1] += 0;
    result[2] += 34994;
    result[3] += 0;
    result[4] += 2058;
    result[5] += 0;
    result[6] += 6175;
  } else {
    result[0] += 24860214;
    result[1] += 135612;
    result[2] += 413001;
    result[3] += 20616163;
    result[4] += 7618949;
    result[5] += 15410;
    result[6] += 27738;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53631844;
    result[1] += 0;
    result[2] += 45015;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10230;
  } else {
    result[0] += 24933924;
    result[1] += 87083;
    result[2] += 335894;
    result[3] += 20735247;
    result[4] += 7554509;
    result[5] += 18660;
    result[6] += 21770;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53635876;
    result[1] += 0;
    result[2] += 43020;
    result[3] += 0;
    result[4] += 4097;
    result[5] += 0;
    result[6] += 4097;
  } else {
    result[0] += 24516680;
    result[1] += 133495;
    result[2] += 310455;
    result[3] += 20940231;
    result[4] += 7717926;
    result[5] += 27941;
    result[6] += 40359;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6271427;
    result[1] += 108559;
    result[2] += 208769;
    result[3] += 26839370;
    result[4] += 20200509;
    result[5] += 58455;
    result[6] += 0;
  } else {
    result[0] += 48395282;
    result[1] += 47791;
    result[2] += 146270;
    result[3] += 5080367;
    result[4] += 0;
    result[5] += 1448;
    result[6] += 15930;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 13342354;
    result[1] += 163961;
    result[2] += 491884;
    result[3] += 22237256;
    result[4] += 17451635;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45933115;
    result[1] += 28063;
    result[2] += 162768;
    result[3] += 6450421;
    result[4] += 1090271;
    result[5] += 4209;
    result[6] += 18241;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53627596;
    result[1] += 0;
    result[2] += 51288;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 8206;
  } else {
    result[0] += 24970956;
    result[1] += 127007;
    result[2] += 325263;
    result[3] += 20615520;
    result[4] += 7577094;
    result[5] += 27879;
    result[6] += 43368;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11307344;
    result[1] += 273564;
    result[2] += 319158;
    result[3] += 23207413;
    result[4] += 18579609;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46037476;
    result[1] += 23528;
    result[2] += 132868;
    result[3] += 6401206;
    result[4] += 1068482;
    result[5] += 8304;
    result[6] += 15224;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53641893;
    result[1] += 0;
    result[2] += 32871;
    result[3] += 0;
    result[4] += 6163;
    result[5] += 0;
    result[6] += 6163;
  } else {
    result[0] += 25186689;
    result[1] += 139101;
    result[2] += 333844;
    result[3] += 20608696;
    result[4] += 7369301;
    result[5] += 21638;
    result[6] += 27820;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53652334;
    result[1] += 0;
    result[2] += 24534;
    result[3] += 0;
    result[4] += 4089;
    result[5] += 0;
    result[6] += 6133;
  } else {
    result[0] += 24995434;
    result[1] += 127670;
    result[2] += 364328;
    result[3] += 20657743;
    result[4] += 7510774;
    result[5] += 21797;
    result[6] += 9341;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10858718;
    result[1] += 233270;
    result[2] += 373232;
    result[3] += 23338663;
    result[4] += 18883206;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45930157;
    result[1] += 15182;
    result[2] += 133883;
    result[3] += 6394639;
    result[4] += 1174581;
    result[5] += 17943;
    result[6] += 20703;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53634111;
    result[1] += 0;
    result[2] += 48904;
    result[3] += 0;
    result[4] += 4075;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24835717;
    result[1] += 106416;
    result[2] += 350548;
    result[3] += 20810672;
    result[4] += 7543047;
    result[5] += 25039;
    result[6] += 15649;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53662415;
    result[1] += 0;
    result[2] += 22619;
    result[3] += 0;
    result[4] += 2056;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24531469;
    result[1] += 148170;
    result[2] += 339557;
    result[3] += 21200721;
    result[4] += 7436304;
    result[5] += 15434;
    result[6] += 15434;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6223244;
    result[1] += 75996;
    result[2] += 143548;
    result[3] += 26742217;
    result[4] += 20451421;
    result[5] += 50664;
    result[6] += 0;
  } else {
    result[0] += 48406843;
    result[1] += 33245;
    result[2] += 156109;
    result[3] += 5074992;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15900;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45058571;
    result[1] += 21288;
    result[2] += 162325;
    result[3] += 7118362;
    result[4] += 1303924;
    result[5] += 11974;
    result[6] += 10644;
  } else {
    result[0] += 4380184;
    result[1] += 272696;
    result[2] += 153391;
    result[3] += 21935011;
    result[4] += 26945806;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6057133;
    result[1] += 66837;
    result[2] += 309122;
    result[3] += 26726580;
    result[4] += 20452225;
    result[5] += 75192;
    result[6] += 0;
  } else {
    result[0] += 48413088;
    result[1] += 36202;
    result[2] += 121640;
    result[3] += 5103126;
    result[4] += 0;
    result[5] += 1448;
    result[6] += 11584;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10706211;
    result[1] += 252052;
    result[2] += 384079;
    result[3] += 23212795;
    result[4] += 19131952;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45931234;
    result[1] += 22010;
    result[2] += 143066;
    result[3] += 6444872;
    result[4] += 1128024;
    result[5] += 12380;
    result[6] += 5502;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10551419;
    result[1] += 218146;
    result[2] += 287035;
    result[3] += 23249863;
    result[4] += 19380626;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45901743;
    result[1] += 31805;
    result[2] += 127220;
    result[3] += 6442616;
    result[4] += 1162962;
    result[5] += 6914;
    result[6] += 13828;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 44979793;
    result[1] += 39564;
    result[2] += 125022;
    result[3] += 5787457;
    result[4] += 2744175;
    result[5] += 4747;
    result[6] += 6330;
  } else {
    result[0] += 31788409;
    result[1] += 0;
    result[2] += 319566;
    result[3] += 17419151;
    result[4] += 4081474;
    result[5] += 39244;
    result[6] += 39244;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6084989;
    result[1] += 93354;
    result[2] += 263088;
    result[3] += 26894466;
    result[4] += 20317245;
    result[5] += 33946;
    result[6] += 0;
  } else {
    result[0] += 48518260;
    result[1] += 51991;
    result[2] += 141532;
    result[3] += 4956531;
    result[4] += 0;
    result[5] += 2888;
    result[6] += 15886;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45092151;
    result[1] += 68100;
    result[2] += 147287;
    result[3] += 5544662;
    result[4] += 2807965;
    result[5] += 14253;
    result[6] += 12669;
  } else {
    result[0] += 31168820;
    result[1] += 0;
    result[2] += 190121;
    result[3] += 18229342;
    result[4] += 4059663;
    result[5] += 33550;
    result[6] += 5591;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53637975;
    result[1] += 0;
    result[2] += 36836;
    result[3] += 0;
    result[4] += 4092;
    result[5] += 0;
    result[6] += 8185;
  } else {
    result[0] += 24850413;
    result[1] += 96391;
    result[2] += 370019;
    result[3] += 20649598;
    result[4] += 7686464;
    result[5] += 21765;
    result[6] += 12437;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6310125;
    result[1] += 136067;
    result[2] += 263630;
    result[3] += 26745747;
    result[4] += 20197503;
    result[5] += 34016;
    result[6] += 0;
  } else {
    result[0] += 48354041;
    result[1] += 27430;
    result[2] += 141483;
    result[3] += 5148255;
    result[4] += 0;
    result[5] += 2887;
    result[6] += 12993;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10592349;
    result[1] += 195728;
    result[2] += 310862;
    result[3] += 23153493;
    result[4] += 19434657;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45778554;
    result[1] += 16588;
    result[2] += 129942;
    result[3] += 6647815;
    result[4] += 1092072;
    result[5] += 4147;
    result[6] += 17970;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648169;
    result[1] += 0;
    result[2] += 36873;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 2048;
  } else {
    result[0] += 24906190;
    result[1] += 96246;
    result[2] += 353939;
    result[3] += 20721006;
    result[4] += 7563136;
    result[5] += 34152;
    result[6] += 12418;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6276294;
    result[1] += 74324;
    result[2] += 206457;
    result[3] += 26203528;
    result[4] += 20843903;
    result[5] += 82582;
    result[6] += 0;
  } else {
    result[0] += 48489459;
    result[1] += 49335;
    result[2] += 158163;
    result[3] += 4974170;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15961;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53619801;
    result[1] += 0;
    result[2] += 50977;
    result[3] += 0;
    result[4] += 4078;
    result[5] += 0;
    result[6] += 12234;
  } else {
    result[0] += 24806556;
    result[1] += 137571;
    result[2] += 315788;
    result[3] += 20676299;
    result[4] += 7694597;
    result[5] += 21886;
    result[6] += 34392;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45123884;
    result[1] += 83720;
    result[2] += 134269;
    result[3] += 5580854;
    result[4] += 2743827;
    result[5] += 12637;
    result[6] += 7898;
  } else {
    result[0] += 31688533;
    result[1] += 0;
    result[2] += 293464;
    result[3] += 17557084;
    result[4] += 4097217;
    result[5] += 33861;
    result[6] += 16930;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10556645;
    result[1] += 278111;
    result[2] += 312875;
    result[3] += 23813289;
    result[4] += 18726168;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45835766;
    result[1] += 17956;
    result[2] += 135367;
    result[3] += 6557043;
    result[4] += 1110567;
    result[5] += 12431;
    result[6] += 17956;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45092284;
    result[1] += 55368;
    result[2] += 136048;
    result[3] += 5620715;
    result[4] += 2771599;
    result[5] += 3163;
    result[6] += 7909;
  } else {
    result[0] += 31826008;
    result[1] += 0;
    result[2] += 291930;
    result[3] += 17796515;
    result[4] += 3738952;
    result[5] += 22456;
    result[6] += 11228;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12666123;
    result[1] += 195337;
    result[2] += 349552;
    result[3] += 22350772;
    result[4] += 18125304;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46214265;
    result[1] += 23843;
    result[2] += 143060;
    result[3] += 6275041;
    result[4] += 1005633;
    result[5] += 11220;
    result[6] += 14025;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45169440;
    result[1] += 25227;
    result[2] += 156676;
    result[3] += 7074363;
    result[4] += 1240138;
    result[5] += 9294;
    result[6] += 11949;
  } else {
    result[0] += 4972972;
    result[1] += 315188;
    result[2] += 140083;
    result[3] += 22220782;
    result[4] += 26038064;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45233947;
    result[1] += 17264;
    result[2] += 150071;
    result[3] += 6977661;
    result[4] += 1276271;
    result[5] += 17264;
    result[6] += 14608;
  } else {
    result[0] += 4521937;
    result[1] += 384102;
    result[2] += 69836;
    result[3] += 21404999;
    result[4] += 27306214;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53646355;
    result[1] += 0;
    result[2] += 32588;
    result[3] += 0;
    result[4] += 2036;
    result[5] += 0;
    result[6] += 6110;
  } else {
    result[0] += 25160049;
    result[1] += 131547;
    result[2] += 394642;
    result[3] += 20349164;
    result[4] += 7604705;
    result[5] += 18792;
    result[6] += 28188;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6205040;
    result[1] += 109599;
    result[2] += 244492;
    result[3] += 26312407;
    result[4] += 20748104;
    result[5] += 67446;
    result[6] += 0;
  } else {
    result[0] += 48482051;
    result[1] += 36146;
    result[2] += 153259;
    result[3] += 4998283;
    result[4] += 0;
    result[5] += 0;
    result[6] += 17350;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5931813;
    result[1] += 75192;
    result[2] += 225576;
    result[3] += 27261278;
    result[4] += 20126393;
    result[5] += 66837;
    result[6] += 0;
  } else {
    result[0] += 48414536;
    result[1] += 46339;
    result[2] += 169428;
    result[3] += 5043754;
    result[4] += 0;
    result[5] += 1448;
    result[6] += 11584;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6224712;
    result[1] += 126006;
    result[2] += 252012;
    result[3] += 27250966;
    result[4] += 19774591;
    result[5] += 58802;
    result[6] += 0;
  } else {
    result[0] += 48396361;
    result[1] += 52082;
    result[2] += 169268;
    result[3] += 5049124;
    result[4] += 0;
    result[5] += 1446;
    result[6] += 18807;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6367979;
    result[1] += 57666;
    result[2] += 247140;
    result[3] += 26163910;
    result[4] += 20776253;
    result[5] += 74142;
    result[6] += 0;
  } else {
    result[0] += 48506082;
    result[1] += 47905;
    result[2] += 120488;
    result[3] += 5001001;
    result[4] += 0;
    result[5] += 1451;
    result[6] += 10161;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45024454;
    result[1] += 25243;
    result[2] += 186007;
    result[3] += 7199820;
    result[4] += 1232964;
    result[5] += 10629;
    result[6] += 7971;
  } else {
    result[0] += 4965882;
    result[1] += 381990;
    result[2] += 190995;
    result[3] += 21200497;
    result[4] += 26947724;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10838454;
    result[1] += 321479;
    result[2] += 378886;
    result[3] += 23559861;
    result[4] += 18588409;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45918337;
    result[1] += 17976;
    result[2] += 143814;
    result[3] += 6427405;
    result[4] += 1158813;
    result[5] += 12445;
    result[6] += 8296;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53638308;
    result[1] += 0;
    result[2] += 46749;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 2032;
  } else {
    result[0] += 24403794;
    result[1] += 97401;
    result[2] += 364470;
    result[3] += 21070148;
    result[4] += 7685294;
    result[5] += 47129;
    result[6] += 18851;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45151863;
    result[1] += 60151;
    result[2] += 153545;
    result[3] += 5546631;
    result[4] += 2762235;
    result[5] += 7914;
    result[6] += 4748;
  } else {
    result[0] += 32434083;
    result[1] += 0;
    result[2] += 308095;
    result[3] += 17202948;
    result[4] += 3713954;
    result[5] += 5601;
    result[6] += 22406;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10732766;
    result[1] += 255818;
    result[2] += 302331;
    result[3] += 23744648;
    result[4] += 18651525;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45978451;
    result[1] += 41422;
    result[2] += 144977;
    result[3] += 6432841;
    result[4] += 1067307;
    result[5] += 4142;
    result[6] += 17949;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1878591;
    result[1] += 121854;
    result[2] += 294481;
    result[3] += 25619922;
    result[4] += 25731622;
    result[5] += 40618;
    result[6] += 0;
  } else {
    result[0] += 47758231;
    result[1] += 43553;
    result[2] += 143304;
    result[3] += 5722333;
    result[4] += 0;
    result[5] += 1404;
    result[6] += 18264;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40963835;
    result[1] += 25600;
    result[2] += 179200;
    result[3] += 10068158;
    result[4] += 2417381;
    result[5] += 21942;
    result[6] += 10971;
  } else {
    result[0] += 42932907;
    result[1] += 39119;
    result[2] += 150890;
    result[3] += 7166351;
    result[4] += 3386645;
    result[5] += 3725;
    result[6] += 7451;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5958658;
    result[1] += 92971;
    result[2] += 228203;
    result[3] += 26057509;
    result[4] += 21299034;
    result[5] += 50711;
    result[6] += 0;
  } else {
    result[0] += 48401915;
    result[1] += 37575;
    result[2] += 157529;
    result[3] += 5074172;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15897;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10705359;
    result[1] += 240441;
    result[2] += 354937;
    result[3] += 23643387;
    result[4] += 18742966;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46056831;
    result[1] += 22132;
    result[2] += 123113;
    result[3] += 6392209;
    result[4] += 1067904;
    result[5] += 13832;
    result[6] += 11066;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648050;
    result[1] += 0;
    result[2] += 36985;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 2054;
  } else {
    result[0] += 24884207;
    result[1] += 132888;
    result[2] += 358490;
    result[3] += 20585408;
    result[4] += 7685919;
    result[5] += 21633;
    result[6] += 18542;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10930654;
    result[1] += 256096;
    result[2] += 395785;
    result[3] += 23339682;
    result[4] += 18764872;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45961495;
    result[1] += 20708;
    result[2] += 118727;
    result[3] += 6432013;
    result[4] += 1122392;
    result[5] += 16566;
    result[6] += 15186;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53633360;
    result[1] += 0;
    result[2] += 45464;
    result[3] += 0;
    result[4] += 2066;
    result[5] += 0;
    result[6] += 6199;
  } else {
    result[0] += 24844183;
    result[1] += 119502;
    result[2] += 395276;
    result[3] += 20802560;
    result[4] += 7479606;
    result[5] += 30641;
    result[6] += 15320;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 41237910;
    result[1] += 18525;
    result[2] += 211191;
    result[3] += 9914883;
    result[4] += 2271234;
    result[5] += 18525;
    result[6] += 14820;
  } else {
    result[0] += 42899705;
    result[1] += 51817;
    result[2] += 125843;
    result[3] += 7241557;
    result[4] += 3347809;
    result[5] += 7402;
    result[6] += 12954;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11060245;
    result[1] += 170507;
    result[2] += 250077;
    result[3] += 23086699;
    result[4] += 19119561;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45871539;
    result[1] += 23536;
    result[2] += 131528;
    result[3] += 6537649;
    result[4] += 1099299;
    result[5] += 9691;
    result[6] += 13845;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44831898;
    result[1] += 17248;
    result[2] += 155237;
    result[3] += 7370481;
    result[4] += 1287014;
    result[5] += 14595;
    result[6] += 10614;
  } else {
    result[0] += 5038136;
    result[1] += 318198;
    result[2] += 88388;
    result[3] += 23016329;
    result[4] += 25226038;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44998912;
    result[1] += 25279;
    result[2] += 145024;
    result[3] += 7279177;
    result[4] += 1222731;
    result[5] += 3991;
    result[6] += 11974;
  } else {
    result[0] += 5557952;
    result[1] += 221636;
    result[2] += 85244;
    result[3] += 21907879;
    result[4] += 25914378;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6007780;
    result[1] += 68076;
    result[2] += 221249;
    result[3] += 27222222;
    result[4] += 20133722;
    result[5] += 34038;
    result[6] += 0;
  } else {
    result[0] += 48555268;
    result[1] += 36088;
    result[2] += 134250;
    result[3] += 4948491;
    result[4] += 0;
    result[5] += 4330;
    result[6] += 8661;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
