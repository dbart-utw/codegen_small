
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
    result[0] += 4764241;
    result[1] += 116993;
    result[2] += 168990;
    result[3] += 21344843;
    result[4] += 16496106;
    result[5] += 58496;
    result[6] += 0;
  } else {
    result[0] += 38774851;
    result[1] += 27940;
    result[2] += 124569;
    result[3] += 4007177;
    result[4] += 0;
    result[5] += 1164;
    result[6] += 13970;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8492978;
    result[1] += 177131;
    result[2] += 223744;
    result[3] += 18999659;
    result[4] += 15056158;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36924593;
    result[1] += 9938;
    result[2] += 107117;
    result[3] += 5022371;
    result[4] += 873504;
    result[5] += 4417;
    result[6] += 7730;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42910098;
    result[1] += 0;
    result[2] += 28031;
    result[3] += 0;
    result[4] += 9893;
    result[5] += 0;
    result[6] += 1648;
  } else {
    result[0] += 20139811;
    result[1] += 71365;
    result[2] += 290383;
    result[3] += 16234400;
    result[4] += 6196486;
    result[5] += 2460;
    result[6] += 14765;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8475656;
    result[1] += 142848;
    result[2] += 199987;
    result[3] += 19008325;
    result[4] += 15122856;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36715966;
    result[1] += 14320;
    result[2] += 115663;
    result[3] += 5145368;
    result[4] += 945135;
    result[5] += 6609;
    result[6] += 6609;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1740223;
    result[1] += 112792;
    result[2] += 217527;
    result[3] += 21245223;
    result[4] += 19625849;
    result[5] += 8056;
    result[6] += 0;
  } else {
    result[0] += 38202242;
    result[1] += 27006;
    result[2] += 124902;
    result[3] += 4582018;
    result[4] += 0;
    result[5] += 3375;
    result[6] += 10127;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32715169;
    result[1] += 29367;
    result[2] += 185013;
    result[3] += 7952664;
    result[4] += 2023406;
    result[5] += 14683;
    result[6] += 29367;
  } else {
    result[0] += 34239256;
    result[1] += 37185;
    result[2] += 102632;
    result[3] += 5882803;
    result[4] += 2674407;
    result[5] += 7437;
    result[6] += 5949;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42910452;
    result[1] += 0;
    result[2] += 31049;
    result[3] += 0;
    result[4] += 4902;
    result[5] += 0;
    result[6] += 3268;
  } else {
    result[0] += 19633922;
    result[1] += 104767;
    result[2] += 259424;
    result[3] += 16810189;
    result[4] += 6083996;
    result[5] += 14966;
    result[6] += 42405;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8675388;
    result[1] += 148614;
    result[2] += 260075;
    result[3] += 18762616;
    result[4] += 15102977;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36730830;
    result[1] += 11047;
    result[2] += 131469;
    result[3] += 5138361;
    result[4] += 916972;
    result[5] += 7733;
    result[6] += 13257;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4940936;
    result[1] += 66321;
    result[2] += 192331;
    result[3] += 21527893;
    result[4] += 16195661;
    result[5] += 26528;
    result[6] += 0;
  } else {
    result[0] += 38800175;
    result[1] += 31321;
    result[2] += 126445;
    result[3] += 3975489;
    result[4] += 0;
    result[5] += 0;
    result[6] += 16240;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 38953999;
    result[1] += 18786;
    result[2] += 70449;
    result[3] += 3771408;
    result[4] += 120938;
    result[5] += 2348;
    result[6] += 11741;
  } else {
    result[0] += 7558546;
    result[1] += 148936;
    result[2] += 328902;
    result[3] += 20342295;
    result[4] += 14558580;
    result[5] += 12411;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8419298;
    result[1] += 159385;
    result[2] += 234390;
    result[3] += 18535582;
    result[4] += 15601016;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36802812;
    result[1] += 24278;
    result[2] += 114770;
    result[3] += 5085230;
    result[4] += 902716;
    result[5] += 5517;
    result[6] += 14346;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918647;
    result[1] += 0;
    result[2] += 19595;
    result[3] += 0;
    result[4] += 9797;
    result[5] += 0;
    result[6] += 1632;
  } else {
    result[0] += 20046344;
    result[1] += 97397;
    result[2] += 337144;
    result[3] += 16330265;
    result[4] += 6098563;
    result[5] += 17481;
    result[6] += 22476;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4923870;
    result[1] += 86151;
    result[2] += 159048;
    result[3] += 21100410;
    result[4] += 16640430;
    result[5] += 39762;
    result[6] += 0;
  } else {
    result[0] += 38966685;
    result[1] += 22043;
    result[2] += 120661;
    result[3] += 3828680;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11602;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42916831;
    result[1] += 0;
    result[2] += 21346;
    result[3] += 0;
    result[4] += 8210;
    result[5] += 0;
    result[6] += 3284;
  } else {
    result[0] += 19872643;
    result[1] += 86671;
    result[2] += 309542;
    result[3] += 16472625;
    result[4] += 6163614;
    result[5] += 32192;
    result[6] += 12381;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 9901170;
    result[1] += 66899;
    result[2] += 275961;
    result[3] += 18246921;
    result[4] += 14458719;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37081093;
    result[1] += 22390;
    result[2] += 107474;
    result[3] += 4913619;
    result[4] += 802703;
    result[5] += 4478;
    result[6] += 17912;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42903797;
    result[1] += 0;
    result[2] += 32768;
    result[3] += 0;
    result[4] += 8192;
    result[5] += 0;
    result[6] += 4915;
  } else {
    result[0] += 20053616;
    result[1] += 94416;
    result[2] += 245980;
    result[3] += 16356455;
    result[4] += 6149510;
    result[5] += 29815;
    result[6] += 19877;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42933296;
    result[1] += 0;
    result[2] += 11463;
    result[3] += 0;
    result[4] += 3275;
    result[5] += 0;
    result[6] += 1637;
  } else {
    result[0] += 20057601;
    result[1] += 74591;
    result[2] += 303337;
    result[3] += 16288254;
    result[4] += 6176159;
    result[5] += 19891;
    result[6] += 29836;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4854827;
    result[1] += 101423;
    result[2] += 182563;
    result[3] += 21069140;
    result[4] += 16721432;
    result[5] += 20284;
    result[6] += 0;
  } else {
    result[0] += 38788590;
    result[1] += 31216;
    result[2] += 116773;
    result[3] += 3998060;
    result[4] += 0;
    result[5] += 2312;
    result[6] += 12717;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36176987;
    result[1] += 15948;
    result[2] += 111637;
    result[3] += 5621222;
    result[4] += 1002612;
    result[5] += 8505;
    result[6] += 12758;
  } else {
    result[0] += 4206411;
    result[1] += 290574;
    result[2] += 124531;
    result[3] += 17337609;
    result[4] += 20990545;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36029099;
    result[1] += 14889;
    result[2] += 114864;
    result[3] += 5783629;
    result[4] += 984854;
    result[5] += 8508;
    result[6] += 13826;
  } else {
    result[0] += 3803050;
    result[1] += 440933;
    result[2] += 110233;
    result[3] += 17471987;
    result[4] += 21123467;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8652594;
    result[1] += 156649;
    result[2] += 202723;
    result[3] += 18779539;
    result[4] += 15158166;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36657450;
    result[1] += 21010;
    result[2] += 122748;
    result[3] += 5281486;
    result[4] += 847072;
    result[5] += 8846;
    result[6] += 11058;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32819921;
    result[1] += 23598;
    result[2] += 159291;
    result[3] += 8061913;
    result[4] += 1849549;
    result[5] += 14749;
    result[6] += 20648;
  } else {
    result[0] += 34171258;
    result[1] += 51943;
    result[2] += 120211;
    result[3] += 5928954;
    result[4] += 2669884;
    result[5] += 7420;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8577050;
    result[1] += 230071;
    result[2] += 220868;
    result[3] += 18479310;
    result[4] += 15442372;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36743852;
    result[1] += 15484;
    result[2] += 113918;
    result[3] += 5124142;
    result[4] += 937896;
    result[5] += 4424;
    result[6] += 9954;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36138031;
    result[1] += 35444;
    result[2] += 93674;
    result[3] += 4443200;
    result[4] += 2229195;
    result[5] += 5063;
    result[6] += 5063;
  } else {
    result[0] += 26004947;
    result[1] += 0;
    result[2] += 183986;
    result[3] += 13799001;
    result[4] += 2912374;
    result[5] += 17949;
    result[6] += 31412;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36108098;
    result[1] += 32849;
    result[2] += 93495;
    result[3] += 4518092;
    result[4] += 2185766;
    result[5] += 7580;
    result[6] += 3790;
  } else {
    result[0] += 25459857;
    result[1] += 0;
    result[2] += 239462;
    result[3] += 14019864;
    result[4] += 3180787;
    result[5] += 27108;
    result[6] += 22590;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8847027;
    result[1] += 160683;
    result[2] += 245750;
    result[3] += 18421855;
    result[4] += 15274355;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36678553;
    result[1] += 18742;
    result[2] += 145532;
    result[3] += 5174114;
    result[4] += 908474;
    result[5] += 4410;
    result[6] += 19845;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4906436;
    result[1] += 120157;
    result[2] += 166885;
    result[3] += 21935440;
    result[4] += 15787375;
    result[5] += 33377;
    result[6] += 0;
  } else {
    result[0] += 38755052;
    result[1] += 32444;
    result[2] += 127460;
    result[3] += 4020810;
    result[4] += 0;
    result[5] += 1158;
    result[6] += 12746;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42922071;
    result[1] += 0;
    result[2] += 17859;
    result[3] += 0;
    result[4] += 3247;
    result[5] += 0;
    result[6] += 6494;
  } else {
    result[0] += 20140768;
    result[1] += 90701;
    result[2] += 269584;
    result[3] += 16459800;
    result[4] += 5935908;
    result[5] += 25194;
    result[6] += 27714;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42936558;
    result[1] += 0;
    result[2] += 4918;
    result[3] += 0;
    result[4] += 3278;
    result[5] += 0;
    result[6] += 4918;
  } else {
    result[0] += 20008922;
    result[1] += 101782;
    result[2] += 268109;
    result[3] += 16404337;
    result[4] += 6114389;
    result[5] += 12412;
    result[6] += 39719;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8303724;
    result[1] += 209643;
    result[2] += 255218;
    result[3] += 18412211;
    result[4] += 15768873;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36913819;
    result[1] += 18823;
    result[2] += 109621;
    result[3] += 4999426;
    result[4] += 878083;
    result[5] += 9965;
    result[6] += 19931;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42907300;
    result[1] += 0;
    result[2] += 32594;
    result[3] += 0;
    result[4] += 4889;
    result[5] += 0;
    result[6] += 4889;
  } else {
    result[0] += 20204832;
    result[1] += 112722;
    result[2] += 247988;
    result[3] += 16477484;
    result[4] += 5879090;
    result[5] += 15029;
    result[6] += 12524;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8519317;
    result[1] += 226336;
    result[2] += 280657;
    result[3] += 18785955;
    result[4] += 15137405;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36732631;
    result[1] += 17731;
    result[2] += 120794;
    result[3] += 5196382;
    result[4] += 853319;
    result[5] += 11082;
    result[6] += 17731;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4823009;
    result[1] += 53813;
    result[2] += 228706;
    result[3] += 21276400;
    result[4] += 16520657;
    result[5] += 47086;
    result[6] += 0;
  } else {
    result[0] += 38848537;
    result[1] += 25458;
    result[2] += 127292;
    result[3] += 3933340;
    result[4] += 0;
    result[5] += 1157;
    result[6] += 13886;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36231683;
    result[1] += 42934;
    result[2] += 103547;
    result[3] += 4332598;
    result[4] += 2226281;
    result[5] += 6313;
    result[6] += 6313;
  } else {
    result[0] += 25911037;
    result[1] += 0;
    result[2] += 176542;
    result[3] += 13553048;
    result[4] += 3254723;
    result[5] += 18106;
    result[6] += 36213;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 9070464;
    result[1] += 176939;
    result[2] += 214189;
    result[3] += 18383056;
    result[4] += 15105023;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36751525;
    result[1] += 15462;
    result[2] += 123697;
    result[3] += 5121313;
    result[4] += 906749;
    result[5] += 14357;
    result[6] += 16566;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36203918;
    result[1] += 15954;
    result[2] += 117002;
    result[3] += 5592743;
    result[4] += 1004098;
    result[5] += 7445;
    result[6] += 8509;
  } else {
    result[0] += 3908268;
    result[1] += 385322;
    result[2] += 82569;
    result[3] += 17490879;
    result[4] += 21082633;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4573843;
    result[1] += 60625;
    result[2] += 175139;
    result[3] += 21313168;
    result[4] += 16746061;
    result[5] += 80833;
    result[6] += 0;
  } else {
    result[0] += 38775488;
    result[1] += 24295;
    result[2] += 108750;
    result[3] += 4024941;
    result[4] += 0;
    result[5] += 0;
    result[6] += 16196;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8658593;
    result[1] += 171646;
    result[2] += 267005;
    result[3] += 18795249;
    result[4] += 15057178;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36811645;
    result[1] += 23129;
    result[2] += 125558;
    result[3] += 5023424;
    result[4] += 942786;
    result[5] += 9912;
    result[6] += 13216;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1757886;
    result[1] += 98114;
    result[2] += 188053;
    result[3] += 20342430;
    result[4] += 20530483;
    result[5] += 32704;
    result[6] += 0;
  } else {
    result[0] += 38360154;
    result[1] += 24705;
    result[2] += 107803;
    result[3] += 4440165;
    result[4] += 0;
    result[5] += 3368;
    result[6] += 13475;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1803447;
    result[1] += 89360;
    result[2] += 162472;
    result[3] += 20804636;
    result[4] += 20049138;
    result[5] += 40618;
    result[6] += 0;
  } else {
    result[0] += 38196469;
    result[1] += 32594;
    result[2] += 113519;
    result[3] += 4584610;
    result[4] += 0;
    result[5] += 2247;
    result[6] += 20231;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5062558;
    result[1] += 98493;
    result[2] += 177288;
    result[3] += 21944321;
    result[4] += 15627613;
    result[5] += 39397;
    result[6] += 0;
  } else {
    result[0] += 38805661;
    result[1] += 25565;
    result[2] += 123181;
    result[3] += 3973184;
    result[4] += 0;
    result[5] += 4648;
    result[6] += 17431;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8478977;
    result[1] += 129450;
    result[2] += 286639;
    result[3] += 18899705;
    result[4] += 15154900;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36820321;
    result[1] += 16580;
    result[2] += 116065;
    result[3] += 5048286;
    result[4] += 927416;
    result[5] += 6632;
    result[6] += 14369;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32884481;
    result[1] += 26219;
    result[2] += 145661;
    result[3] += 7979322;
    result[4] += 1890682;
    result[5] += 11652;
    result[6] += 11652;
  } else {
    result[0] += 34373777;
    result[1] += 32857;
    result[2] += 97079;
    result[3] += 5781485;
    result[4] += 2645055;
    result[5] += 8961;
    result[6] += 10454;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1652840;
    result[1] += 80626;
    result[2] += 185440;
    result[3] += 20325910;
    result[4] += 20664541;
    result[5] += 40313;
    result[6] += 0;
  } else {
    result[0] += 38233118;
    result[1] += 32628;
    result[2] += 118138;
    result[3] += 4550034;
    result[4] += 0;
    result[5] += 3375;
    result[6] += 12376;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42923409;
    result[1] += 0;
    result[2] += 18056;
    result[3] += 0;
    result[4] += 4924;
    result[5] += 0;
    result[6] += 3282;
  } else {
    result[0] += 19979588;
    result[1] += 86716;
    result[2] += 267583;
    result[3] += 16384550;
    result[4] += 6196546;
    result[5] += 17343;
    result[6] += 17343;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1607212;
    result[1] += 65936;
    result[2] += 164842;
    result[3] += 20662987;
    result[4] += 20390998;
    result[5] += 57694;
    result[6] += 0;
  } else {
    result[0] += 38220486;
    result[1] += 20191;
    result[2] += 112172;
    result[3] += 4575510;
    result[4] += 0;
    result[5] += 6730;
    result[6] += 14582;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8664467;
    result[1] += 158382;
    result[2] += 242232;
    result[3] += 18931395;
    result[4] += 14953194;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36575141;
    result[1] += 24296;
    result[2] += 121482;
    result[3] += 5239219;
    result[4] += 959713;
    result[5] += 12148;
    result[6] += 17670;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42923502;
    result[1] += 0;
    result[2] += 17992;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 8178;
  } else {
    result[0] += 19930421;
    result[1] += 82202;
    result[2] += 274009;
    result[3] += 16572565;
    result[4] += 6040654;
    result[5] += 19927;
    result[6] += 29891;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32862233;
    result[1] += 17507;
    result[2] += 157570;
    result[3] += 8009841;
    result[4] += 1876257;
    result[5] += 14589;
    result[6] += 11671;
  } else {
    result[0] += 34437636;
    result[1] += 40291;
    result[2] += 99983;
    result[3] += 5709511;
    result[4] += 2650311;
    result[5] += 5969;
    result[6] += 5969;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4896453;
    result[1] += 47737;
    result[2] += 156850;
    result[3] += 21611227;
    result[4] += 16162388;
    result[5] += 75015;
    result[6] += 0;
  } else {
    result[0] += 38927398;
    result[1] += 39252;
    result[2] += 103904;
    result[3] += 3859490;
    result[4] += 0;
    result[5] += 1154;
    result[6] += 18471;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8578572;
    result[1] += 151497;
    result[2] += 208309;
    result[3] += 18681592;
    result[4] += 15329700;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36763614;
    result[1] += 20943;
    result[2] += 95899;
    result[3] += 5144392;
    result[4] += 906083;
    result[5] += 7716;
    result[6] += 11022;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42906992;
    result[1] += 0;
    result[2] += 32831;
    result[3] += 0;
    result[4] += 6566;
    result[5] += 0;
    result[6] += 3283;
  } else {
    result[0] += 20042850;
    result[1] += 101576;
    result[2] += 314640;
    result[3] += 16351398;
    result[4] += 6097089;
    result[5] += 19819;
    result[6] += 22297;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36091626;
    result[1] += 13815;
    result[2] += 123281;
    result[3] += 5730449;
    result[4] += 970307;
    result[5] += 8502;
    result[6] += 11690;
  } else {
    result[0] += 4326967;
    result[1] += 208696;
    result[2] += 125217;
    result[3] += 18059175;
    result[4] += 20229615;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42905467;
    result[1] += 0;
    result[2] += 31107;
    result[3] += 0;
    result[4] += 8186;
    result[5] += 0;
    result[6] += 4911;
  } else {
    result[0] += 19692625;
    result[1] += 97008;
    result[2] += 268637;
    result[3] += 16777410;
    result[4] += 6071706;
    result[5] += 14924;
    result[6] += 27361;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10198441;
    result[1] += 235802;
    result[2] += 320017;
    result[3] += 17558836;
    result[4] += 14636574;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36889742;
    result[1] += 12303;
    result[2] += 108492;
    result[3] += 5114813;
    result[4] += 797477;
    result[5] += 10066;
    result[6] += 16777;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5116723;
    result[1] += 87064;
    result[2] += 180826;
    result[3] += 21176807;
    result[4] += 16314580;
    result[5] += 73670;
    result[6] += 0;
  } else {
    result[0] += 38919558;
    result[1] += 34742;
    result[2] += 130862;
    result[3] += 3844822;
    result[4] += 0;
    result[5] += 2316;
    result[6] += 17371;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36221776;
    result[1] += 55696;
    result[2] += 97469;
    result[3] += 4449398;
    result[4] += 2110141;
    result[5] += 6329;
    result[6] += 8860;
  } else {
    result[0] += 25729412;
    result[1] += 0;
    result[2] += 242349;
    result[3] += 14011377;
    result[4] += 2930630;
    result[5] += 22439;
    result[6] += 13463;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36075639;
    result[1] += 50871;
    result[2] += 94112;
    result[3] += 4499598;
    result[4] += 2223091;
    result[5] += 3815;
    result[6] += 2543;
  } else {
    result[0] += 25798940;
    result[1] += 0;
    result[2] += 225144;
    result[3] += 14025193;
    result[4] += 2869491;
    result[5] += 22073;
    result[6] += 8829;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42911938;
    result[1] += 0;
    result[2] += 26249;
    result[3] += 0;
    result[4] += 6562;
    result[5] += 0;
    result[6] += 4921;
  } else {
    result[0] += 20020533;
    result[1] += 66950;
    result[2] += 292596;
    result[3] += 16482101;
    result[4] += 6047817;
    result[5] += 17357;
    result[6] += 22316;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36194228;
    result[1] += 55767;
    result[2] += 89988;
    result[3] += 4292812;
    result[4] += 2302934;
    result[5] += 6337;
    result[6] += 7604;
  } else {
    result[0] += 25676871;
    result[1] += 0;
    result[2] += 236797;
    result[3] += 13859345;
    result[4] += 3140915;
    result[5] += 17871;
    result[6] += 17871;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918449;
    result[1] += 0;
    result[2] += 27936;
    result[3] += 0;
    result[4] += 1643;
    result[5] += 0;
    result[6] += 1643;
  } else {
    result[0] += 19743393;
    result[1] += 98939;
    result[2] += 284451;
    result[3] += 16597115;
    result[4] += 6163936;
    result[5] += 29681;
    result[6] += 32155;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35992518;
    result[1] += 13846;
    result[2] += 138461;
    result[3] += 5790883;
    result[4] += 988401;
    result[5] += 12781;
    result[6] += 12781;
  } else {
    result[0] += 3950017;
    result[1] += 284076;
    result[2] += 121747;
    result[3] += 16774045;
    result[4] += 21819786;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1563564;
    result[1] += 96715;
    result[2] += 201490;
    result[3] += 20914693;
    result[4] += 20108732;
    result[5] += 64476;
    result[6] += 0;
  } else {
    result[0] += 38263251;
    result[1] += 27004;
    result[2] += 101267;
    result[3] += 4540146;
    result[4] += 0;
    result[5] += 3375;
    result[6] += 14627;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8664065;
    result[1] += 138995;
    result[2] += 222393;
    result[3] += 18718088;
    result[4] += 15206130;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36706968;
    result[1] += 17681;
    result[2] += 110509;
    result[3] += 5191755;
    result[4] += 900655;
    result[5] += 12156;
    result[6] += 9945;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42905389;
    result[1] += 0;
    result[2] += 32802;
    result[3] += 0;
    result[4] += 3280;
    result[5] += 0;
    result[6] += 8200;
  } else {
    result[0] += 19955361;
    result[1] += 81865;
    result[2] += 267923;
    result[3] += 16420255;
    result[4] += 6174651;
    result[5] += 27288;
    result[6] += 22326;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42929953;
    result[1] += 0;
    result[2] += 8216;
    result[3] += 0;
    result[4] += 3286;
    result[5] += 0;
    result[6] += 8216;
  } else {
    result[0] += 20063629;
    result[1] += 93998;
    result[2] += 249836;
    result[3] += 16390285;
    result[4] += 6099976;
    result[5] += 22262;
    result[6] += 29683;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42916829;
    result[1] += 0;
    result[2] += 22990;
    result[3] += 0;
    result[4] += 6568;
    result[5] += 0;
    result[6] += 3284;
  } else {
    result[0] += 19939681;
    result[1] += 86661;
    result[2] += 309507;
    result[3] += 16485582;
    result[4] += 6063861;
    result[5] += 24760;
    result[6] += 39616;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4901143;
    result[1] += 132642;
    result[2] += 179067;
    result[3] += 21236079;
    result[4] += 16441049;
    result[5] += 59689;
    result[6] += 0;
  } else {
    result[0] += 38800175;
    result[1] += 35961;
    result[2] += 128765;
    result[3] += 3959248;
    result[4] += 0;
    result[5] += 3480;
    result[6] += 22040;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42916698;
    result[1] += 0;
    result[2] += 23082;
    result[3] += 0;
    result[4] += 6594;
    result[5] += 0;
    result[6] += 3297;
  } else {
    result[0] += 19936524;
    result[1] += 103374;
    result[2] += 297817;
    result[3] += 16286417;
    result[4] += 6276313;
    result[5] += 22151;
    result[6] += 27074;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36014621;
    result[1] += 50685;
    result[2] += 88699;
    result[3] += 4476801;
    result[4] += 2298589;
    result[5] += 8869;
    result[6] += 11404;
  } else {
    result[0] += 25729559;
    result[1] += 0;
    result[2] += 214636;
    result[3] += 14161542;
    result[4] += 2812633;
    result[5] += 13414;
    result[6] += 17886;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4848086;
    result[1] += 79585;
    result[2] += 119378;
    result[3] += 21501364;
    result[4] += 16368096;
    result[5] += 33160;
    result[6] += 0;
  } else {
    result[0] += 38817576;
    result[1] += 33641;
    result[2] += 126445;
    result[3] += 3953448;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18560;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 35986368;
    result[1] += 38023;
    result[2] += 102662;
    result[3] += 4547567;
    result[4] += 2263644;
    result[5] += 3802;
    result[6] += 7604;
  } else {
    result[0] += 25502624;
    result[1] += 0;
    result[2] += 241265;
    result[3] += 14109546;
    result[4] += 3042622;
    result[5] += 17871;
    result[6] += 35742;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915221;
    result[1] += 0;
    result[2] += 22967;
    result[3] += 0;
    result[4] += 8202;
    result[5] += 0;
    result[6] += 3281;
  } else {
    result[0] += 19892741;
    result[1] += 84312;
    result[2] += 275254;
    result[3] += 16495451;
    result[4] += 6157277;
    result[5] += 22317;
    result[6] += 22317;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8331867;
    result[1] += 156683;
    result[2] += 184333;
    result[3] += 19032419;
    result[4] += 15244368;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36744971;
    result[1] += 26539;
    result[2] += 122744;
    result[3] += 5133171;
    result[4] += 892388;
    result[5] += 9952;
    result[6] += 19904;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42920195;
    result[1] += 0;
    result[2] += 21288;
    result[3] += 0;
    result[4] += 4912;
    result[5] += 0;
    result[6] += 3275;
  } else {
    result[0] += 19690757;
    result[1] += 99460;
    result[2] += 271030;
    result[3] += 16634823;
    result[4] += 6221274;
    result[5] += 14919;
    result[6] += 17405;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1788895;
    result[1] += 105229;
    result[2] += 194269;
    result[3] += 20867745;
    result[4] += 19977345;
    result[5] += 16189;
    result[6] += 0;
  } else {
    result[0] += 38209848;
    result[1] += 29237;
    result[2] += 101206;
    result[3] += 4591389;
    result[4] += 0;
    result[5] += 4498;
    result[6] += 13494;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4856000;
    result[1] += 87556;
    result[2] += 175112;
    result[3] += 21532084;
    result[4] += 16265243;
    result[5] += 33675;
    result[6] += 0;
  } else {
    result[0] += 38704801;
    result[1] += 25453;
    result[2] += 113381;
    result[3] += 4087525;
    result[4] += 0;
    result[5] += 2313;
    result[6] += 16197;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1650016;
    result[1] += 57463;
    result[2] += 172389;
    result[3] += 20465125;
    result[4] += 20547215;
    result[5] += 57463;
    result[6] += 0;
  } else {
    result[0] += 38187588;
    result[1] += 35914;
    result[2] += 115600;
    result[3] += 4600467;
    result[4] += 0;
    result[5] += 2244;
    result[6] += 7856;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5032957;
    result[1] += 73134;
    result[2] += 132971;
    result[3] += 20843223;
    result[4] += 16834144;
    result[5] += 33242;
    result[6] += 0;
  } else {
    result[0] += 38835595;
    result[1] += 31307;
    result[2] += 112476;
    result[3] += 3955219;
    result[4] += 0;
    result[5] += 1159;
    result[6] += 13914;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42934910;
    result[1] += 0;
    result[2] += 8201;
    result[3] += 0;
    result[4] += 4920;
    result[5] += 0;
    result[6] += 1640;
  } else {
    result[0] += 19883602;
    result[1] += 96739;
    result[2] += 282775;
    result[3] += 16430761;
    result[4] += 6218586;
    result[5] += 14882;
    result[6] += 22324;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 38962152;
    result[1] += 22355;
    result[2] += 74126;
    result[3] += 3760434;
    result[4] += 111777;
    result[5] += 0;
    result[6] += 18825;
  } else {
    result[0] += 7955234;
    result[1] += 110489;
    result[2] += 331468;
    result[3] += 20164309;
    result[4] += 14345203;
    result[5] += 42968;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5163604;
    result[1] += 66972;
    result[2] += 167432;
    result[3] += 21049559;
    result[4] += 16448525;
    result[5] += 53578;
    result[6] += 0;
  } else {
    result[0] += 38674045;
    result[1] += 23161;
    result[2] += 106543;
    result[3] += 4123919;
    result[4] += 0;
    result[5] += 1158;
    result[6] += 20845;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42921685;
    result[1] += 0;
    result[2] += 23048;
    result[3] += 0;
    result[4] += 4939;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19945500;
    result[1] += 81400;
    result[2] += 313267;
    result[3] += 16462561;
    result[4] += 6107477;
    result[5] += 27133;
    result[6] += 12333;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4573653;
    result[1] += 106674;
    result[2] += 200014;
    result[3] += 21894865;
    result[4] += 16141129;
    result[5] += 33335;
    result[6] += 0;
  } else {
    result[0] += 38826003;
    result[1] += 35928;
    result[2] += 126329;
    result[3] += 3946344;
    result[4] += 0;
    result[5] += 1158;
    result[6] += 13907;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32477989;
    result[1] += 37962;
    result[2] += 157688;
    result[3] += 8261124;
    result[4] += 1982786;
    result[5] += 14600;
    result[6] += 17520;
  } else {
    result[0] += 34264864;
    result[1] += 41768;
    result[2] += 129779;
    result[3] += 5892303;
    result[4] += 2598580;
    result[5] += 5966;
    result[6] += 16408;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5172231;
    result[1] += 26868;
    result[2] += 154495;
    result[3] += 20917310;
    result[4] += 16611595;
    result[5] += 67171;
    result[6] += 0;
  } else {
    result[0] += 38716746;
    result[1] += 28937;
    result[2] += 122693;
    result[3] += 4062775;
    result[4] += 0;
    result[5] += 1157;
    result[6] += 17362;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8410387;
    result[1] += 179547;
    result[2] += 217347;
    result[3] += 18984794;
    result[4] += 15157596;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36755570;
    result[1] += 16538;
    result[2] += 110254;
    result[3] += 5124633;
    result[4] += 920625;
    result[5] += 12128;
    result[6] += 9922;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42892371;
    result[1] += 0;
    result[2] += 44203;
    result[3] += 0;
    result[4] += 11460;
    result[5] += 0;
    result[6] += 1637;
  } else {
    result[0] += 19800729;
    result[1] += 104476;
    result[2] += 296015;
    result[3] += 16780869;
    result[4] += 5925293;
    result[5] += 19900;
    result[6] += 22387;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5123221;
    result[1] += 131364;
    result[2] += 190478;
    result[3] += 21208823;
    result[4] += 16243239;
    result[5] += 52545;
    result[6] += 0;
  } else {
    result[0] += 38762890;
    result[1] += 36022;
    result[2] += 133633;
    result[3] += 3999696;
    result[4] += 0;
    result[5] += 2324;
    result[6] += 15106;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1424270;
    result[1] += 63300;
    result[2] += 150339;
    result[3] += 20984254;
    result[4] += 20264206;
    result[5] += 63300;
    result[6] += 0;
  } else {
    result[0] += 38293933;
    result[1] += 32715;
    result[2] += 111683;
    result[3] += 4502315;
    result[4] += 0;
    result[5] += 3384;
    result[6] += 5640;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32645485;
    result[1] += 17504;
    result[2] += 183794;
    result[3] += 8031547;
    result[4] += 2033414;
    result[5] += 14586;
    result[6] += 23339;
  } else {
    result[0] += 34388990;
    result[1] += 38803;
    result[2] += 107456;
    result[3] += 5833979;
    result[4] += 2562533;
    result[5] += 4477;
    result[6] += 13432;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36089958;
    result[1] += 16990;
    result[2] += 115744;
    result[3] += 5688466;
    result[4] += 1015152;
    result[5] += 11680;
    result[6] += 11680;
  } else {
    result[0] += 3404461;
    result[1] += 295428;
    result[2] += 126612;
    result[3] += 17528756;
    result[4] += 21594414;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32802573;
    result[1] += 14504;
    result[2] += 139239;
    result[3] += 7933767;
    result[4] += 2027679;
    result[5] += 14504;
    result[6] += 17404;
  } else {
    result[0] += 34389375;
    result[1] += 49394;
    result[2] += 112261;
    result[3] += 5773223;
    result[4] += 2611946;
    result[5] += 2993;
    result[6] += 10477;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1822255;
    result[1] += 147087;
    result[2] += 212460;
    result[3] += 20224589;
    result[4] += 20502421;
    result[5] += 40857;
    result[6] += 0;
  } else {
    result[0] += 38214921;
    result[1] += 32568;
    result[2] += 122411;
    result[3] += 4565171;
    result[4] += 0;
    result[5] += 3369;
    result[6] += 11230;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42910419;
    result[1] += 0;
    result[2] += 32711;
    result[3] += 0;
    result[4] += 4906;
    result[5] += 0;
    result[6] += 1635;
  } else {
    result[0] += 20229196;
    result[1] += 72247;
    result[2] += 281514;
    result[3] += 16434976;
    result[4] += 5889386;
    result[5] += 22421;
    result[6] += 19930;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1692154;
    result[1] += 57222;
    result[2] += 220715;
    result[3] += 20788164;
    result[4] += 20126017;
    result[5] += 65397;
    result[6] += 0;
  } else {
    result[0] += 38192709;
    result[1] += 31443;
    result[2] += 128020;
    result[3] += 4581777;
    result[4] += 0;
    result[5] += 5614;
    result[6] += 10106;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4831157;
    result[1] += 102066;
    result[2] += 156502;
    result[3] += 21488445;
    result[4] += 16317065;
    result[5] += 54435;
    result[6] += 0;
  } else {
    result[0] += 38808080;
    result[1] += 27718;
    result[2] += 103944;
    result[3] += 3998380;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11549;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8395261;
    result[1] += 205903;
    result[2] += 233981;
    result[3] += 19036747;
    result[4] += 15077777;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36725386;
    result[1] += 14349;
    result[2] += 115898;
    result[3] += 5193344;
    result[4] += 880826;
    result[5] += 5518;
    result[6] += 14349;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36077472;
    result[1] += 42911;
    result[2] += 97182;
    result[3] += 4543603;
    result[4] += 2170832;
    result[5] += 7572;
    result[6] += 10096;
  } else {
    result[0] += 25901328;
    result[1] += 0;
    result[2] += 208625;
    result[3] += 13624162;
    result[4] += 3156596;
    result[5] += 36282;
    result[6] += 22676;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42928455;
    result[1] += 0;
    result[2] += 16321;
    result[3] += 0;
    result[4] += 1632;
    result[5] += 0;
    result[6] += 3264;
  } else {
    result[0] += 20348922;
    result[1] += 107467;
    result[2] += 259922;
    result[3] += 16200161;
    result[4] += 5983213;
    result[5] += 22493;
    result[6] += 27491;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
