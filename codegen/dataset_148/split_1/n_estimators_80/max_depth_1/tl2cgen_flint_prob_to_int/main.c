
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6027311;
    result[1] += 101583;
    result[2] += 237029;
    result[3] += 26369487;
    result[4] += 20883956;
    result[5] += 67722;
    result[6] += 0;
  } else {
    result[0] += 48368662;
    result[1] += 21672;
    result[2] += 157486;
    result[3] += 5123376;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15893;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6385157;
    result[1] += 43142;
    result[2] += 155314;
    result[3] += 26567430;
    result[4] += 20467017;
    result[5] += 69028;
    result[6] += 0;
  } else {
    result[0] += 48554283;
    result[1] += 27363;
    result[2] += 152659;
    result[3] += 4935502;
    result[4] += 0;
    result[5] += 0;
    result[6] += 17282;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45062065;
    result[1] += 29287;
    result[2] += 142441;
    result[3] += 7124731;
    result[4] += 1297947;
    result[5] += 6656;
    result[6] += 23962;
  } else {
    result[0] += 4943749;
    result[1] += 321682;
    result[2] += 186237;
    result[3] += 21383410;
    result[4] += 26852010;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53637876;
    result[1] += 0;
    result[2] += 34860;
    result[3] += 0;
    result[4] += 10253;
    result[5] += 0;
    result[6] += 4101;
  } else {
    result[0] += 24672068;
    result[1] += 89896;
    result[2] += 313089;
    result[3] += 20797199;
    result[4] += 7777637;
    result[5] += 15499;
    result[6] += 21699;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45026342;
    result[1] += 13260;
    result[2] += 155153;
    result[3] += 7199387;
    result[4] += 1270402;
    result[5] += 10608;
    result[6] += 11934;
  } else {
    result[0] += 4932445;
    result[1] += 338326;
    result[2] += 195873;
    result[3] += 22436396;
    result[4] += 25784049;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45108527;
    result[1] += 18597;
    result[2] += 174015;
    result[3] += 7053603;
    result[4] += 1312421;
    result[5] += 7970;
    result[6] += 11955;
  } else {
    result[0] += 4926539;
    result[1] += 208899;
    result[2] += 261123;
    result[3] += 22752603;
    result[4] += 25537925;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12949964;
    result[1] += 229387;
    result[2] += 354507;
    result[3] += 22761491;
    result[4] += 17391739;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46189292;
    result[1] += 15398;
    result[2] += 135789;
    result[3] += 6324692;
    result[4] += 1003719;
    result[5] += 9799;
    result[6] += 8399;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45158123;
    result[1] += 17259;
    result[2] += 160648;
    result[3] += 7055251;
    result[4] += 1267927;
    result[5] += 10621;
    result[6] += 17259;
  } else {
    result[0] += 5188174;
    result[1] += 297969;
    result[2] += 192803;
    result[3] += 21664134;
    result[4] += 26344008;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5861762;
    result[1] += 49887;
    result[2] += 216178;
    result[3] += 26905904;
    result[4] += 20586841;
    result[5] += 66516;
    result[6] += 0;
  } else {
    result[0] += 48421718;
    result[1] += 37682;
    result[2] += 169570;
    result[3] += 5039279;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18841;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6055308;
    result[1] += 82722;
    result[2] += 157173;
    result[3] += 26909723;
    result[4] += 20399440;
    result[5] += 82722;
    result[6] += 0;
  } else {
    result[0] += 48412671;
    result[1] += 24660;
    result[2] += 133456;
    result[3] += 5100346;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15956;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40864045;
    result[1] += 25712;
    result[2] += 146926;
    result[3] += 10148975;
    result[4] += 2464698;
    result[5] += 3673;
    result[6] += 33058;
  } else {
    result[0] += 42951159;
    result[1] += 48326;
    result[2] += 137544;
    result[3] += 7087275;
    result[4] += 3444196;
    result[5] += 3717;
    result[6] += 14869;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53638125;
    result[1] += 0;
    result[2] += 42845;
    result[3] += 0;
    result[4] += 2040;
    result[5] += 0;
    result[6] += 4080;
  } else {
    result[0] += 25184762;
    result[1] += 71849;
    result[2] += 340503;
    result[3] += 20286510;
    result[4] += 7747235;
    result[5] += 24991;
    result[6] += 31238;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6073504;
    result[1] += 126006;
    result[2] += 210010;
    result[3] += 26948550;
    result[4] += 20295417;
    result[5] += 33601;
    result[6] += 0;
  } else {
    result[0] += 48582990;
    result[1] += 40508;
    result[2] += 120079;
    result[3] += 4924704;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18807;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6117850;
    result[1] += 92694;
    result[2] += 294937;
    result[3] += 26468553;
    result[4] += 20654066;
    result[5] += 58987;
    result[6] += 0;
  } else {
    result[0] += 48416562;
    result[1] += 37594;
    result[2] += 143150;
    result[3] += 5073877;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15905;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648212;
    result[1] += 0;
    result[2] += 34786;
    result[3] += 0;
    result[4] += 4092;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24997789;
    result[1] += 80858;
    result[2] += 326544;
    result[3] += 20634527;
    result[4] += 7591391;
    result[5] += 24879;
    result[6] += 31099;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6275003;
    result[1] += 59680;
    result[2] += 255774;
    result[3] += 26054907;
    result[4] += 20982044;
    result[5] += 59680;
    result[6] += 0;
  } else {
    result[0] += 48582899;
    result[1] += 23089;
    result[2] += 144308;
    result[3] += 4923806;
    result[4] += 0;
    result[5] += 0;
    result[6] += 12987;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6384456;
    result[1] += 93265;
    result[2] += 245882;
    result[3] += 26071984;
    result[4] += 20823672;
    result[5] += 67829;
    result[6] += 0;
  } else {
    result[0] += 48602648;
    result[1] += 28888;
    result[2] += 154555;
    result[3] += 4887998;
    result[4] += 0;
    result[5] += 0;
    result[6] += 12999;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53658354;
    result[1] += 0;
    result[2] += 22579;
    result[3] += 0;
    result[4] += 4105;
    result[5] += 0;
    result[6] += 2052;
  } else {
    result[0] += 24746514;
    result[1] += 95952;
    result[2] += 328096;
    result[3] += 20790786;
    result[4] += 7688598;
    result[5] += 9285;
    result[6] += 27857;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10903726;
    result[1] += 199101;
    result[2] += 292796;
    result[3] += 23564229;
    result[4] += 18727237;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45892557;
    result[1] += 20693;
    result[2] += 148992;
    result[3] += 6443940;
    result[4] += 1151935;
    result[5] += 15175;
    result[6] += 13795;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40882146;
    result[1] += 36880;
    result[2] += 202843;
    result[3] += 9946698;
    result[4] += 2574265;
    result[5] += 11064;
    result[6] += 33192;
  } else {
    result[0] += 42932236;
    result[1] += 29678;
    result[2] += 161378;
    result[3] += 7167429;
    result[4] += 3377818;
    result[5] += 11129;
    result[6] += 7419;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53640274;
    result[1] += 0;
    result[2] += 38675;
    result[3] += 0;
    result[4] += 6106;
    result[5] += 0;
    result[6] += 2035;
  } else {
    result[0] += 25227446;
    result[1] += 94050;
    result[2] += 360526;
    result[3] += 20386987;
    result[4] += 7552245;
    result[5] += 40755;
    result[6] += 25080;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11039781;
    result[1] += 105475;
    result[2] += 316426;
    result[3] += 23614819;
    result[4] += 18610587;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45959372;
    result[1] += 15174;
    result[2] += 164155;
    result[3] += 6371712;
    result[4] += 1147708;
    result[5] += 12415;
    result[6] += 16553;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53642314;
    result[1] += 0;
    result[2] += 38670;
    result[3] += 0;
    result[4] += 4070;
    result[5] += 0;
    result[6] += 2035;
  } else {
    result[0] += 25178562;
    result[1] += 106609;
    result[2] += 351182;
    result[3] += 20453270;
    result[4] += 7550433;
    result[5] += 12542;
    result[6] += 34491;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5798808;
    result[1] += 83676;
    result[2] += 158986;
    result[3] += 26366587;
    result[4] += 21203723;
    result[5] += 75309;
    result[6] += 0;
  } else {
    result[0] += 48492687;
    result[1] += 39088;
    result[2] += 138980;
    result[3] += 5001857;
    result[4] += 0;
    result[5] += 0;
    result[6] += 14477;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45069971;
    result[1] += 21280;
    result[2] += 135660;
    result[3] += 7241891;
    result[4] += 1203656;
    result[5] += 6650;
    result[6] += 7980;
  } else {
    result[0] += 5430379;
    result[1] += 239827;
    result[2] += 205566;
    result[3] += 20933511;
    result[4] += 26877806;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6163601;
    result[1] += 76513;
    result[2] += 204036;
    result[3] += 26822291;
    result[4] += 20335632;
    result[5] += 85015;
    result[6] += 0;
  } else {
    result[0] += 48420168;
    result[1] += 23100;
    result[2] += 174697;
    result[3] += 5048911;
    result[4] += 0;
    result[5] += 0;
    result[6] += 20212;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10732816;
    result[1] += 195560;
    result[2] += 195560;
    result[3] += 23812358;
    result[4] += 18750794;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45935346;
    result[1] += 22120;
    result[2] += 142398;
    result[3] += 6413473;
    result[4] += 1146102;
    result[5] += 13825;
    result[6] += 13825;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53642540;
    result[1] += 0;
    result[2] += 38475;
    result[3] += 0;
    result[4] += 4050;
    result[5] += 0;
    result[6] += 2025;
  } else {
    result[0] += 24846239;
    result[1] += 91648;
    result[2] += 363433;
    result[3] += 20665168;
    result[4] += 7657394;
    result[5] += 18961;
    result[6] += 44244;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6192089;
    result[1] += 92044;
    result[2] += 142250;
    result[3] += 25889629;
    result[4] += 21320871;
    result[5] += 50206;
    result[6] += 0;
  } else {
    result[0] += 48470971;
    result[1] += 24611;
    result[2] += 182412;
    result[3] += 5000410;
    result[4] += 0;
    result[5] += 0;
    result[6] += 8686;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 41109472;
    result[1] += 21855;
    result[2] += 163913;
    result[3] += 10107990;
    result[4] += 2240149;
    result[5] += 3642;
    result[6] += 40067;
  } else {
    result[0] += 43007912;
    result[1] += 42933;
    result[2] += 160533;
    result[3] += 7119452;
    result[4] += 3337593;
    result[5] += 5599;
    result[6] += 13066;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 13022690;
    result[1] += 157532;
    result[2] += 357073;
    result[3] += 22390625;
    result[4] += 17759168;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46195121;
    result[1] += 18180;
    result[2] += 142650;
    result[3] += 6286430;
    result[4] += 1016737;
    result[5] += 11188;
    result[6] += 16782;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45144513;
    result[1] += 11958;
    result[2] += 171409;
    result[3] += 7066328;
    result[4] += 1264976;
    result[5] += 14616;
    result[6] += 13287;
  } else {
    result[0] += 4976807;
    result[1] += 294793;
    result[2] += 121385;
    result[3] += 22369621;
    result[4] += 25924483;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6137351;
    result[1] += 109445;
    result[2] += 277822;
    result[3] += 26612026;
    result[4] += 20466256;
    result[5] += 84188;
    result[6] += 0;
  } else {
    result[0] += 48540083;
    result[1] += 21692;
    result[2] += 157635;
    result[3] += 4956109;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11569;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5601048;
    result[1] += 99574;
    result[2] += 182552;
    result[3] += 26959715;
    result[4] += 20769519;
    result[5] += 74680;
    result[6] += 0;
  } else {
    result[0] += 48445966;
    result[1] += 26096;
    result[2] += 172529;
    result[3] += 5030899;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11598;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45293901;
    result[1] += 33106;
    result[2] += 149765;
    result[3] += 5495615;
    result[4] += 2700513;
    result[5] += 6305;
    result[6] += 7882;
  } else {
    result[0] += 31910993;
    result[1] += 0;
    result[2] += 198946;
    result[3] += 17643698;
    result[4] += 3910716;
    result[5] += 5684;
    result[6] += 17052;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
    result[0] += 8672530;
    result[1] += 112630;
    result[2] += 162688;
    result[3] += 25028946;
    result[4] += 19710295;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45801756;
    result[1] += 16430;
    result[2] += 139660;
    result[3] += 6454500;
    result[4] += 1239143;
    result[5] += 12322;
    result[6] += 23276;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10786235;
    result[1] += 220838;
    result[2] += 267331;
    result[3] += 23931959;
    result[4] += 18480726;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45940773;
    result[1] += 22092;
    result[2] += 154650;
    result[3] += 6322707;
    result[4] += 1223393;
    result[5] += 5523;
    result[6] += 17950;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6300829;
    result[1] += 92289;
    result[2] += 176188;
    result[3] += 25715101;
    result[4] += 21343953;
    result[5] += 58729;
    result[6] += 0;
  } else {
    result[0] += 48563078;
    result[1] += 23152;
    result[2] += 144705;
    result[3] += 4937342;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18811;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53633826;
    result[1] += 0;
    result[2] += 43021;
    result[3] += 0;
    result[4] += 8194;
    result[5] += 0;
    result[6] += 2048;
  } else {
    result[0] += 24940562;
    result[1] += 108653;
    result[2] += 363212;
    result[3] += 20380233;
    result[4] += 7844759;
    result[5] += 18626;
    result[6] += 31043;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53650512;
    result[1] += 0;
    result[2] += 32514;
    result[3] += 0;
    result[4] += 4064;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 25185566;
    result[1] += 91149;
    result[2] += 314308;
    result[3] += 20502364;
    result[4] += 7555984;
    result[5] += 15715;
    result[6] += 22001;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648493;
    result[1] += 0;
    result[2] += 32503;
    result[3] += 0;
    result[4] += 2031;
    result[5] += 0;
    result[6] += 4062;
  } else {
    result[0] += 24758579;
    result[1] += 100631;
    result[2] += 402527;
    result[3] += 20874819;
    result[4] += 7497072;
    result[5] += 18868;
    result[6] += 34592;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11035679;
    result[1] += 91772;
    result[2] += 355619;
    result[3] += 23493838;
    result[4] += 18710180;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46098707;
    result[1] += 23510;
    result[2] += 127233;
    result[3] += 6277323;
    result[4] += 1134039;
    result[5] += 11063;
    result[6] += 15212;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53650411;
    result[1] += 0;
    result[2] += 28528;
    result[3] += 0;
    result[4] += 2037;
    result[5] += 0;
    result[6] += 6113;
  } else {
    result[0] += 25006404;
    result[1] += 112669;
    result[2] += 297322;
    result[3] += 20656103;
    result[4] += 7567645;
    result[5] += 9389;
    result[6] += 37556;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53656385;
    result[1] += 0;
    result[2] += 22517;
    result[3] += 0;
    result[4] += 8188;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24939803;
    result[1] += 96352;
    result[2] += 338788;
    result[3] += 20420551;
    result[4] += 7841864;
    result[5] += 24865;
    result[6] += 24865;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53642256;
    result[1] += 0;
    result[2] += 32606;
    result[3] += 0;
    result[4] += 8151;
    result[5] += 0;
    result[6] += 4075;
  } else {
    result[0] += 25131792;
    result[1] += 71974;
    result[2] += 384909;
    result[3] += 20606755;
    result[4] += 7435330;
    result[5] += 15646;
    result[6] += 40681;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6618496;
    result[1] += 134385;
    result[2] += 134385;
    result[3] += 26247209;
    result[4] += 20477022;
    result[5] += 75591;
    result[6] += 0;
  } else {
    result[0] += 48551024;
    result[1] += 24595;
    result[2] += 172166;
    result[3] += 4929177;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10127;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648128;
    result[1] += 0;
    result[2] += 34861;
    result[3] += 0;
    result[4] += 4101;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 25011613;
    result[1] += 127088;
    result[2] += 409162;
    result[3] += 20436431;
    result[4] += 7653200;
    result[5] += 18598;
    result[6] += 30997;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5798954;
    result[1] += 68022;
    result[2] += 187063;
    result[3] += 26307865;
    result[4] += 21265665;
    result[5] += 59520;
    result[6] += 0;
  } else {
    result[0] += 48456404;
    result[1] += 36093;
    result[2] += 122718;
    result[3] += 5057437;
    result[4] += 0;
    result[5] += 0;
    result[6] += 14437;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53656514;
    result[1] += 0;
    result[2] += 24461;
    result[3] += 0;
    result[4] += 4076;
    result[5] += 0;
    result[6] += 2038;
  } else {
    result[0] += 25012059;
    result[1] += 100098;
    result[2] += 350344;
    result[3] += 20811059;
    result[4] += 7357224;
    result[5] += 31280;
    result[6] += 25024;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45229581;
    result[1] += 25282;
    result[2] += 155684;
    result[3] += 7019094;
    result[4] += 1238820;
    result[5] += 10645;
    result[6] += 7983;
  } else {
    result[0] += 4920891;
    result[1] += 323518;
    result[2] += 102163;
    result[3] += 22373878;
    result[4] += 25966639;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11031432;
    result[1] += 129366;
    result[2] += 258732;
    result[3] += 23180121;
    result[4] += 19087436;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46023219;
    result[1] += 19304;
    result[2] += 133752;
    result[3] += 6348410;
    result[4] += 1133447;
    result[5] += 11031;
    result[6] += 17925;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6109895;
    result[1] += 85096;
    result[2] += 204230;
    result[3] += 26456358;
    result[4] += 20771943;
    result[5] += 59567;
    result[6] += 0;
  } else {
    result[0] += 48439784;
    result[1] += 27427;
    result[2] += 161677;
    result[3] += 5049540;
    result[4] += 0;
    result[5] += 0;
    result[6] += 8661;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53656566;
    result[1] += 0;
    result[2] += 26454;
    result[3] += 0;
    result[4] += 4069;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24889634;
    result[1] += 128588;
    result[2] += 370082;
    result[3] += 20639954;
    result[4] += 7608650;
    result[5] += 9408;
    result[6] += 40771;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6090202;
    result[1] += 99975;
    result[2] += 208283;
    result[3] += 26926858;
    result[4] += 20311782;
    result[5] += 49987;
    result[6] += 0;
  } else {
    result[0] += 48546714;
    result[1] += 33322;
    result[2] += 155022;
    result[3] += 4937543;
    result[4] += 0;
    result[5] += 0;
    result[6] += 14488;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45131347;
    result[1] += 60040;
    result[2] += 126400;
    result[3] += 5577428;
    result[4] += 2777654;
    result[5] += 4740;
    result[6] += 9480;
  } else {
    result[0] += 31712656;
    result[1] += 0;
    result[2] += 231191;
    result[3] += 17970881;
    result[4] += 3738529;
    result[5] += 11277;
    result[6] += 22555;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45062963;
    result[1] += 21271;
    result[2] += 176816;
    result[3] += 7145782;
    result[4] += 1262975;
    result[5] += 6647;
    result[6] += 10635;
  } else {
    result[0] += 5167188;
    result[1] += 361703;
    result[2] += 86119;
    result[3] += 21271593;
    result[4] += 26800485;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45046304;
    result[1] += 15974;
    result[2] += 158412;
    result[3] += 7117899;
    result[4] += 1335188;
    result[5] += 5324;
    result[6] += 7987;
  } else {
    result[0] += 4894501;
    result[1] += 304847;
    result[2] += 169359;
    result[3] += 22033724;
    result[4] += 26284657;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648221;
    result[1] += 0;
    result[2] += 28640;
    result[3] += 0;
    result[4] += 6137;
    result[5] += 0;
    result[6] += 4091;
  } else {
    result[0] += 24689155;
    result[1] += 96442;
    result[2] += 398212;
    result[3] += 20912361;
    result[4] += 7541143;
    result[5] += 15555;
    result[6] += 34221;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6402893;
    result[1] += 117330;
    result[2] += 167615;
    result[3] += 26323939;
    result[4] += 20608266;
    result[5] += 67046;
    result[6] += 0;
  } else {
    result[0] += 48667766;
    result[1] += 34735;
    result[2] += 151969;
    result[3] += 4825383;
    result[4] += 0;
    result[5] += 0;
    result[6] += 7236;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45033934;
    result[1] += 21286;
    result[2] += 150339;
    result[3] += 7197659;
    result[4] += 1266575;
    result[5] += 5321;
    result[6] += 11973;
  } else {
    result[0] += 5442066;
    result[1] += 307075;
    result[2] += 136478;
    result[3] += 21341770;
    result[4] += 26459700;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6150608;
    result[1] += 66403;
    result[2] += 207510;
    result[3] += 26337220;
    result[4] += 20875546;
    result[5] += 49802;
    result[6] += 0;
  } else {
    result[0] += 48486842;
    result[1] += 21746;
    result[2] += 172520;
    result[3] += 4990034;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15947;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45228972;
    result[1] += 10617;
    result[2] += 168551;
    result[3] += 6975658;
    result[4] += 1271438;
    result[5] += 13271;
    result[6] += 18580;
  } else {
    result[0] += 5019954;
    result[1] += 281822;
    result[2] += 123297;
    result[3] += 22316779;
    result[4] += 25945237;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53631842;
    result[1] += 0;
    result[2] += 53202;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 2046;
  } else {
    result[0] += 24736553;
    result[1] += 96408;
    result[2] += 323434;
    result[3] += 20597208;
    result[4] += 7883726;
    result[5] += 21769;
    result[6] += 27989;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10753890;
    result[1] += 152954;
    result[2] += 305909;
    result[3] += 23955055;
    result[4] += 18519281;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46029128;
    result[1] += 22061;
    result[2] += 125472;
    result[3] += 6321886;
    result[4] += 1149935;
    result[5] += 9651;
    result[6] += 28955;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53636631;
    result[1] += 0;
    result[2] += 40367;
    result[3] += 0;
    result[4] += 8073;
    result[5] += 0;
    result[6] += 2018;
  } else {
    result[0] += 24646952;
    result[1] += 98473;
    result[2] += 349421;
    result[3] += 20676248;
    result[4] += 7849287;
    result[5] += 31765;
    result[6] += 34942;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53637818;
    result[1] += 0;
    result[2] += 41060;
    result[3] += 0;
    result[4] += 8212;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24894100;
    result[1] += 86641;
    result[2] += 331096;
    result[3] += 20636265;
    result[4] += 7698759;
    result[5] += 18566;
    result[6] += 21660;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53631939;
    result[1] += 0;
    result[2] += 51066;
    result[3] += 0;
    result[4] += 4085;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24833826;
    result[1] += 112257;
    result[2] += 355481;
    result[3] += 20727077;
    result[4] += 7608555;
    result[5] += 18709;
    result[6] += 31182;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10866896;
    result[1] += 254331;
    result[2] += 323694;
    result[3] += 23005450;
    result[4] += 19236718;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45968950;
    result[1] += 15198;
    result[2] += 146459;
    result[3] += 6400005;
    result[4] += 1134370;
    result[5] += 13816;
    result[6] += 8290;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5887712;
    result[1] += 144640;
    result[2] += 187181;
    result[3] += 26954152;
    result[4] += 20428321;
    result[5] += 85082;
    result[6] += 0;
  } else {
    result[0] += 48439643;
    result[1] += 28871;
    result[2] += 134253;
    result[3] += 5074216;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10105;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10341695;
    result[1] += 195560;
    result[2] += 253078;
    result[3] += 24122954;
    result[4] += 18773801;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46120602;
    result[1] += 17972;
    result[2] += 136868;
    result[3] += 6272457;
    result[4] += 1111539;
    result[5] += 9677;
    result[6] += 17972;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10323082;
    result[1] += 294272;
    result[2] += 270730;
    result[3] += 24118581;
    result[4] += 18680423;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46048824;
    result[1] += 19302;
    result[2] += 106163;
    result[3] += 6338107;
    result[4] += 1151255;
    result[5] += 11029;
    result[6] += 12408;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40947408;
    result[1] += 44005;
    result[2] += 172356;
    result[3] += 10099333;
    result[4] += 2394649;
    result[5] += 14668;
    result[6] += 14668;
  } else {
    result[0] += 42970135;
    result[1] += 40925;
    result[2] += 148820;
    result[3] += 7234549;
    result[4] += 3268476;
    result[5] += 5580;
    result[6] += 18602;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648226;
    result[1] += 0;
    result[2] += 34774;
    result[3] += 0;
    result[4] += 2045;
    result[5] += 0;
    result[6] += 2045;
  } else {
    result[0] += 24578320;
    result[1] += 102681;
    result[2] += 370277;
    result[3] += 21024902;
    result[4] += 7554900;
    result[5] += 28004;
    result[6] += 28004;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44995174;
    result[1] += 15968;
    result[2] += 192946;
    result[3] += 7246812;
    result[4] += 1206914;
    result[5] += 11976;
    result[6] += 17298;
  } else {
    result[0] += 5140615;
    result[1] += 340438;
    result[2] += 153197;
    result[3] += 22928507;
    result[4] += 25124333;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53636131;
    result[1] += 0;
    result[2] += 46882;
    result[3] += 0;
    result[4] += 2038;
    result[5] += 0;
    result[6] += 2038;
  } else {
    result[0] += 25047927;
    result[1] += 96975;
    result[2] += 384775;
    result[3] += 20518216;
    result[4] += 7579758;
    result[5] += 15641;
    result[6] += 43795;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10633952;
    result[1] += 206930;
    result[2] += 390869;
    result[3] += 23302726;
    result[4] += 19152611;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45901564;
    result[1] += 24887;
    result[2] += 145174;
    result[3] += 6485865;
    result[4] += 1113008;
    result[5] += 5530;
    result[6] += 11060;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53668561;
    result[1] += 0;
    result[2] += 16470;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 2058;
  } else {
    result[0] += 24732913;
    result[1] += 77030;
    result[2] += 357420;
    result[3] += 20705765;
    result[4] += 7780068;
    result[5] += 15406;
    result[6] += 18487;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53652166;
    result[1] += 0;
    result[2] += 30815;
    result[3] += 0;
    result[4] += 4108;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24690435;
    result[1] += 89648;
    result[2] += 336954;
    result[3] += 20612974;
    result[4] += 7910708;
    result[5] += 12365;
    result[6] += 34004;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
    result[0] += 9822513;
    result[1] += 177898;
    result[2] += 152484;
    result[3] += 23978116;
    result[4] += 19556078;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46029418;
    result[1] += 12302;
    result[2] += 144897;
    result[3] += 6221004;
    result[4] += 1254863;
    result[5] += 13669;
    result[6] += 10935;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45249715;
    result[1] += 42517;
    result[2] += 114954;
    result[3] += 5495789;
    result[4] += 2769940;
    result[5] += 6298;
    result[6] += 7873;
  } else {
    result[0] += 31748834;
    result[1] += 0;
    result[2] += 268235;
    result[3] += 18080228;
    result[4] += 3555549;
    result[5] += 5707;
    result[6] += 28535;
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
