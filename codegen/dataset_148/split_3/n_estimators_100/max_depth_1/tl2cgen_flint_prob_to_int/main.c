
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 2809074;
    result[1] += 76750;
    result[2] += 199551;
    result[3] += 20968282;
    result[4] += 18849963;
    result[5] += 46050;
    result[6] += 0;
  } else {
    result[0] += 38280097;
    result[1] += 37392;
    result[2] += 135974;
    result[3] += 4479212;
    result[4] += 0;
    result[5] += 0;
    result[6] += 16996;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4825805;
    result[1] += 39664;
    result[2] += 198320;
    result[3] += 21755790;
    result[4] += 16063984;
    result[5] += 66106;
    result[6] += 0;
  } else {
    result[0] += 38646928;
    result[1] += 19732;
    result[2] += 123035;
    result[3] += 4150691;
    result[4] += 0;
    result[5] += 2321;
    result[6] += 6964;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42903709;
    result[1] += 0;
    result[2] += 42680;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 3283;
  } else {
    result[0] += 19961093;
    result[1] += 101576;
    result[2] += 282433;
    result[3] += 16557029;
    result[4] += 5995512;
    result[5] += 24774;
    result[6] += 27252;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10417149;
    result[1] += 134849;
    result[2] += 286555;
    result[3] += 17463053;
    result[4] += 14648063;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37015630;
    result[1] += 23485;
    result[2] += 112954;
    result[3] += 4978959;
    result[4] += 798512;
    result[5] += 14538;
    result[6] += 5591;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8666810;
    result[1] += 173885;
    result[2] += 274555;
    result[3] += 18834525;
    result[4] += 14999896;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36778431;
    result[1] += 18814;
    result[2] += 94073;
    result[3] += 5179593;
    result[4] += 857731;
    result[5] += 9960;
    result[6] += 11067;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42911990;
    result[1] += 0;
    result[2] += 32767;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 4915;
  } else {
    result[0] += 19731753;
    result[1] += 77028;
    result[2] += 280781;
    result[3] += 16702788;
    result[4] += 6102655;
    result[5] += 24847;
    result[6] += 29817;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918490;
    result[1] += 0;
    result[2] += 24617;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6564;
  } else {
    result[0] += 19395507;
    result[1] += 109047;
    result[2] += 312271;
    result[3] += 16775899;
    result[4] += 6332164;
    result[5] += 14870;
    result[6] += 9913;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32735305;
    result[1] += 11607;
    result[2] += 194421;
    result[3] += 8180199;
    result[4] += 1796219;
    result[5] += 20312;
    result[6] += 11607;
  } else {
    result[0] += 34230735;
    result[1] += 41903;
    result[2] += 113738;
    result[3] += 5842556;
    result[4] += 2707270;
    result[5] += 10475;
    result[6] += 2993;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8942116;
    result[1] += 146742;
    result[2] += 339341;
    result[3] += 18562916;
    result[4] += 14958555;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36820960;
    result[1] += 9958;
    result[2] += 126137;
    result[3] += 5078676;
    result[4] += 888491;
    result[5] += 9958;
    result[6] += 15490;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8494429;
    result[1] += 220396;
    result[2] += 275495;
    result[3] += 19174453;
    result[4] += 14784899;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36865052;
    result[1] += 12169;
    result[2] += 89609;
    result[3] += 5018152;
    result[4] += 944775;
    result[5] += 7744;
    result[6] += 12169;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5133558;
    result[1] += 92735;
    result[2] += 225214;
    result[3] += 21090647;
    result[4] += 16354525;
    result[5] += 52991;
    result[6] += 0;
  } else {
    result[0] += 38682088;
    result[1] += 30167;
    result[2] += 112549;
    result[3] += 4114424;
    result[4] += 0;
    result[5] += 1160;
    result[6] += 9282;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35909491;
    result[1] += 8498;
    result[2] += 138105;
    result[3] += 5900281;
    result[4] += 970986;
    result[5] += 6374;
    result[6] += 15935;
  } else {
    result[0] += 4265597;
    result[1] += 279711;
    result[2] += 111884;
    result[3] += 17426015;
    result[4] += 20866464;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8447600;
    result[1] += 175606;
    result[2] += 231061;
    result[3] += 19418390;
    result[4] += 14677013;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36829955;
    result[1] += 13265;
    result[2] += 119387;
    result[3] += 5083920;
    result[4] += 882141;
    result[5] += 14370;
    result[6] += 6632;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8350546;
    result[1] += 233777;
    result[2] += 271182;
    result[3] += 18590017;
    result[4] += 15504149;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36752344;
    result[1] += 23182;
    result[2] += 112598;
    result[3] += 5197189;
    result[4] += 846695;
    result[5] += 8831;
    result[6] += 8831;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8619721;
    result[1] += 223405;
    result[2] += 297873;
    result[3] += 18775355;
    result[4] += 15033316;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36678309;
    result[1] += 15463;
    result[2] += 122599;
    result[3] += 5201100;
    result[4] += 913423;
    result[5] += 7731;
    result[6] += 11045;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5171153;
    result[1] += 85965;
    result[2] += 198381;
    result[3] += 21041702;
    result[4] += 16439243;
    result[5] += 13225;
    result[6] += 0;
  } else {
    result[0] += 38873487;
    result[1] += 27855;
    result[2] += 112582;
    result[3] += 3922980;
    result[4] += 0;
    result[5] += 1160;
    result[6] += 11606;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36055833;
    result[1] += 17003;
    result[2] += 122212;
    result[3] += 5736541;
    result[4] += 1004266;
    result[5] += 7439;
    result[6] += 6376;
  } else {
    result[0] += 4107018;
    result[1] += 306286;
    result[2] += 139220;
    result[3] += 17319090;
    result[4] += 21078056;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1596300;
    result[1] += 83575;
    result[2] += 192224;
    result[3] += 21512445;
    result[4] += 19531695;
    result[5] += 33430;
    result[6] += 0;
  } else {
    result[0] += 38200252;
    result[1] += 21272;
    result[2] += 113081;
    result[3] += 4606109;
    result[4] += 0;
    result[5] += 2239;
    result[6] += 6717;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42924993;
    result[1] += 0;
    result[2] += 21389;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 3290;
  } else {
    result[0] += 19598442;
    result[1] += 111102;
    result[2] += 232080;
    result[3] += 16786320;
    result[4] += 6189631;
    result[5] += 12344;
    result[6] += 19751;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42910453;
    result[1] += 0;
    result[2] += 34316;
    result[3] += 0;
    result[4] += 1634;
    result[5] += 0;
    result[6] += 3268;
  } else {
    result[0] += 19677471;
    result[1] += 77332;
    result[2] += 286879;
    result[3] += 16833617;
    result[4] += 6029468;
    result[5] += 14967;
    result[6] += 29935;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32982326;
    result[1] += 26153;
    result[2] += 185979;
    result[3] += 8008748;
    result[4] += 1731935;
    result[5] += 8717;
    result[6] += 5811;
  } else {
    result[0] += 34326838;
    result[1] += 37386;
    result[2] += 127114;
    result[3] += 5893616;
    result[4] += 2552753;
    result[5] += 5981;
    result[6] += 5981;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8710397;
    result[1] += 240925;
    result[2] += 240925;
    result[3] += 18477162;
    result[4] += 15280261;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36805322;
    result[1] += 19891;
    result[2] += 107194;
    result[3] += 5104452;
    result[4] += 887394;
    result[5] += 14366;
    result[6] += 11050;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4933272;
    result[1] += 40271;
    result[2] += 248341;
    result[3] += 21283546;
    result[4] += 16383833;
    result[5] += 60407;
    result[6] += 0;
  } else {
    result[0] += 38752063;
    result[1] += 33571;
    result[2] += 114606;
    result[3] += 4030909;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18522;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8608527;
    result[1] += 223115;
    result[2] += 269597;
    result[3] += 19243684;
    result[4] += 14604748;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36700539;
    result[1] += 20988;
    result[2] += 90583;
    result[3] += 5212950;
    result[4] += 910250;
    result[5] += 7732;
    result[6] += 6628;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8382903;
    result[1] += 157121;
    result[2] += 295758;
    result[3] += 18447933;
    result[4] += 15665955;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36800108;
    result[1] += 25425;
    result[2] += 100595;
    result[3] += 5190042;
    result[4] += 815814;
    result[5] += 12159;
    result[6] += 5527;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 9056917;
    result[1] += 173294;
    result[2] += 237139;
    result[3] += 18597235;
    result[4] += 14885085;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36669593;
    result[1] += 26572;
    result[2] += 116256;
    result[3] += 5230446;
    result[4] += 889087;
    result[5] += 7750;
    result[6] += 9964;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8393765;
    result[1] += 216917;
    result[2] += 188623;
    result[3] += 18419128;
    result[4] += 15731237;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36714438;
    result[1] += 17644;
    result[2] += 103663;
    result[3] += 5169929;
    result[4] += 921941;
    result[5] += 13233;
    result[6] += 8822;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10176400;
    result[1] += 189060;
    result[2] += 271261;
    result[3] += 18001872;
    result[4] += 14311077;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36910348;
    result[1] += 11221;
    result[2] += 109969;
    result[3] += 5100098;
    result[4] += 802325;
    result[5] += 10099;
    result[6] += 5610;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918574;
    result[1] += 0;
    result[2] += 27824;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 3273;
  } else {
    result[0] += 20114850;
    result[1] += 77144;
    result[2] += 278716;
    result[3] += 16364624;
    result[4] += 6079497;
    result[5] += 19908;
    result[6] += 14931;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36016479;
    result[1] += 12750;
    result[2] += 128569;
    result[3] += 5776067;
    result[4] += 989241;
    result[5] += 9563;
    result[6] += 17000;
  } else {
    result[0] += 4296362;
    result[1] += 251086;
    result[2] += 125543;
    result[3] += 17896859;
    result[4] += 20379822;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8726458;
    result[1] += 249063;
    result[2] += 285962;
    result[3] += 18227782;
    result[4] += 15460406;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36733447;
    result[1] += 15479;
    result[2] += 116098;
    result[3] += 5170236;
    result[4] += 896719;
    result[5] += 6634;
    result[6] += 11056;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42913445;
    result[1] += 0;
    result[2] += 31287;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 4940;
  } else {
    result[0] += 19948493;
    result[1] += 69042;
    result[2] += 244116;
    result[3] += 16580181;
    result[4] += 6060988;
    result[5] += 29589;
    result[6] += 17260;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42925154;
    result[1] += 0;
    result[2] += 22883;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 1634;
  } else {
    result[0] += 19629576;
    result[1] += 97250;
    result[2] += 306712;
    result[3] += 16844231;
    result[4] += 6027018;
    result[5] += 27429;
    result[6] += 17455;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10383437;
    result[1] += 190445;
    result[2] += 347770;
    result[3] += 17868786;
    result[4] += 14159232;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37007141;
    result[1] += 26904;
    result[2] += 103133;
    result[3] += 4970606;
    result[4] += 823950;
    result[5] += 5605;
    result[6] += 12331;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36142087;
    result[1] += 56835;
    result[2] += 101040;
    result[3] += 4447032;
    result[4] += 2183731;
    result[5] += 7578;
    result[6] += 11367;
  } else {
    result[0] += 25437751;
    result[1] += 0;
    result[2] += 176431;
    result[3] += 14155206;
    result[4] += 3153141;
    result[5] += 13571;
    result[6] += 13571;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4813835;
    result[1] += 105220;
    result[2] += 164406;
    result[3] += 22017379;
    result[4] += 15783067;
    result[5] += 65762;
    result[6] += 0;
  } else {
    result[0] += 38778899;
    result[1] += 31367;
    result[2] += 128957;
    result[3] += 4001154;
    result[4] += 0;
    result[5] += 2323;
    result[6] += 6970;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4598918;
    result[1] += 46253;
    result[2] += 178406;
    result[3] += 21540912;
    result[4] += 16519104;
    result[5] += 66076;
    result[6] += 0;
  } else {
    result[0] += 38716228;
    result[1] += 31341;
    result[2] += 125366;
    result[3] += 4067450;
    result[4] += 0;
    result[5] += 1160;
    result[6] += 8125;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5086843;
    result[1] += 106114;
    result[2] += 205596;
    result[3] += 21328929;
    result[4] += 16169132;
    result[5] += 53057;
    result[6] += 0;
  } else {
    result[0] += 38800175;
    result[1] += 26681;
    result[2] += 139205;
    result[3] += 3966209;
    result[4] += 0;
    result[5] += 1160;
    result[6] += 16240;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42926800;
    result[1] += 0;
    result[2] += 22872;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19976301;
    result[1] += 104810;
    result[2] += 259529;
    result[3] += 16722198;
    result[4] += 5851896;
    result[5] += 17468;
    result[6] += 17468;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42921589;
    result[1] += 0;
    result[2] += 24779;
    result[3] += 0;
    result[4] += 3303;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19802349;
    result[1] += 112889;
    result[2] += 321490;
    result[3] += 16555539;
    result[4] += 6105867;
    result[5] += 22087;
    result[6] += 29449;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 35987384;
    result[1] += 45422;
    result[2] += 99677;
    result[3] += 4440067;
    result[4] += 2355670;
    result[5] += 8832;
    result[6] += 12617;
  } else {
    result[0] += 25733482;
    result[1] += 0;
    result[2] += 172525;
    result[3] += 14101657;
    result[4] += 2905686;
    result[5] += 27240;
    result[6] += 9080;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5249702;
    result[1] += 60341;
    result[2] += 194433;
    result[3] += 21716202;
    result[4] += 15661947;
    result[5] += 67046;
    result[6] += 0;
  } else {
    result[0] += 38730429;
    result[1] += 30104;
    result[2] += 100733;
    result[3] += 4075668;
    result[4] += 0;
    result[5] += 1157;
    result[6] += 11578;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10111068;
    result[1] += 203360;
    result[2] += 309107;
    result[3] += 17757412;
    result[4] += 14568724;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36875811;
    result[1] += 12361;
    result[2] += 102261;
    result[3] += 5087210;
    result[4] += 849553;
    result[5] += 11237;
    result[6] += 11237;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5192740;
    result[1] += 73043;
    result[2] += 192569;
    result[3] += 21129539;
    result[4] += 16335218;
    result[5] += 26561;
    result[6] += 0;
  } else {
    result[0] += 38724525;
    result[1] += 31314;
    result[2] += 99742;
    result[3] += 4079012;
    result[4] += 0;
    result[5] += 3479;
    result[6] += 11597;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 9912725;
    result[1] += 123088;
    result[2] += 303618;
    result[3] += 17856035;
    result[4] += 14754205;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36885357;
    result[1] += 12346;
    result[2] += 107750;
    result[3] += 5163029;
    result[4] += 773332;
    result[5] += 1122;
    result[6] += 6734;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4938580;
    result[1] += 99836;
    result[2] += 226296;
    result[3] += 21098785;
    result[4] += 16532928;
    result[5] += 53246;
    result[6] += 0;
  } else {
    result[0] += 38787680;
    result[1] += 20867;
    result[2] += 129844;
    result[3] += 4003164;
    result[4] += 0;
    result[5] += 1159;
    result[6] += 6955;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35998293;
    result[1] += 13805;
    result[2] += 111502;
    result[3] += 5736534;
    result[4] += 1073609;
    result[5] += 7433;
    result[6] += 8495;
  } else {
    result[0] += 4147349;
    result[1] += 281176;
    result[2] += 112470;
    result[3] += 17896868;
    result[4] += 20511807;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42908881;
    result[1] += 0;
    result[2] += 39159;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 1631;
  } else {
    result[0] += 19893322;
    result[1] += 70011;
    result[2] += 280046;
    result[3] += 16407740;
    result[4] += 6271047;
    result[5] += 15002;
    result[6] += 12502;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36035385;
    result[1] += 59366;
    result[2] += 106101;
    result[3] += 4548474;
    result[4] += 2190240;
    result[5] += 3789;
    result[6] += 6315;
  } else {
    result[0] += 25158369;
    result[1] += 0;
    result[2] += 167330;
    result[3] += 14476350;
    result[4] += 3106920;
    result[5] += 18089;
    result[6] += 22612;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32794608;
    result[1] += 26537;
    result[2] += 147431;
    result[3] += 7976030;
    result[4] += 1993270;
    result[5] += 2948;
    result[6] += 8845;
  } else {
    result[0] += 34264439;
    result[1] += 38594;
    result[2] += 132111;
    result[3] += 5798072;
    result[4] += 2695673;
    result[5] += 8906;
    result[6] += 11875;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36087683;
    result[1] += 24469;
    result[2] += 122345;
    result[3] += 5734282;
    result[4] += 958550;
    result[5] += 8510;
    result[6] += 13830;
  } else {
    result[0] += 3884550;
    result[1] += 274526;
    result[2] += 137263;
    result[3] += 17706960;
    result[4] += 20946372;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5013116;
    result[1] += 99466;
    result[2] += 159146;
    result[3] += 21226170;
    result[4] += 16431880;
    result[5] += 19893;
    result[6] += 0;
  } else {
    result[0] += 38751340;
    result[1] += 20881;
    result[2] += 107887;
    result[3] += 4051002;
    result[4] += 0;
    result[5] += 2320;
    result[6] += 16241;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36074914;
    result[1] += 24484;
    result[2] += 121356;
    result[3] += 5718674;
    result[4] += 991080;
    result[5] += 13838;
    result[6] += 5322;
  } else {
    result[0] += 3935464;
    result[1] += 313203;
    result[2] += 122557;
    result[3] += 17893427;
    result[4] += 20685020;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42917033;
    result[1] += 0;
    result[2] += 26111;
    result[3] += 0;
    result[4] += 3263;
    result[5] += 0;
    result[6] += 3263;
  } else {
    result[0] += 19642563;
    result[1] += 74990;
    result[2] += 282464;
    result[3] += 16872907;
    result[4] += 6024252;
    result[5] += 34995;
    result[6] += 17497;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35909945;
    result[1] += 13822;
    result[2] += 152043;
    result[3] += 5801050;
    result[4] += 1050483;
    result[5] += 8505;
    result[6] += 13822;
  } else {
    result[0] += 3762419;
    result[1] += 318145;
    result[2] += 110659;
    result[3] += 17415020;
    result[4] += 21343428;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35944557;
    result[1] += 12763;
    result[2] += 115936;
    result[3] += 5826604;
    result[4] += 1039173;
    result[5] += 6381;
    result[6] += 4254;
  } else {
    result[0] += 3964585;
    result[1] += 220254;
    result[2] += 55063;
    result[3] += 17854399;
    result[4] += 20855370;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36163627;
    result[1] += 50500;
    result[2] += 103526;
    result[3] += 4423870;
    result[4] += 2198047;
    result[5] += 8837;
    result[6] += 1262;
  } else {
    result[0] += 25209886;
    result[1] += 0;
    result[2] += 244624;
    result[3] += 14392058;
    result[4] += 3062332;
    result[5] += 13590;
    result[6] += 27180;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915315;
    result[1] += 0;
    result[2] += 31085;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 3272;
  } else {
    result[0] += 19930959;
    result[1] += 109565;
    result[2] += 261463;
    result[3] += 16432333;
    result[4] += 6168039;
    result[5] += 27391;
    result[6] += 19920;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36055173;
    result[1] += 44244;
    result[2] += 111242;
    result[3] += 4526806;
    result[4] += 2200829;
    result[5] += 3792;
    result[6] += 7584;
  } else {
    result[0] += 25474874;
    result[1] += 0;
    result[2] += 211952;
    result[3] += 14250416;
    result[4] += 2958314;
    result[5] += 18038;
    result[6] += 36077;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36094191;
    result[1] += 17019;
    result[2] += 141470;
    result[3] += 5680104;
    result[4] += 996677;
    result[5] += 10636;
    result[6] += 9573;
  } else {
    result[0] += 4154644;
    result[1] += 302656;
    result[2] += 165085;
    result[3] += 16934992;
    result[4] += 21392293;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4894852;
    result[1] += 46554;
    result[2] += 232771;
    result[3] += 21208811;
    result[4] += 16533429;
    result[5] += 33253;
    result[6] += 0;
  } else {
    result[0] += 38722187;
    result[1] += 34784;
    result[2] += 113629;
    result[3] += 4075592;
    result[4] += 0;
    result[5] += 0;
    result[6] += 3478;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5025031;
    result[1] += 93426;
    result[2] += 226893;
    result[3] += 21514876;
    result[4] += 16029383;
    result[5] += 60060;
    result[6] += 0;
  } else {
    result[0] += 38780319;
    result[1] += 28969;
    result[2] += 104291;
    result[3] += 4015233;
    result[4] += 0;
    result[5] += 1158;
    result[6] += 19699;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8782041;
    result[1] += 192107;
    result[2] += 283586;
    result[3] += 18323364;
    result[4] += 15368573;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36730520;
    result[1] += 16602;
    result[2] += 129496;
    result[3] += 5182073;
    result[4] += 874378;
    result[5] += 6640;
    result[6] += 9961;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4972258;
    result[1] += 75027;
    result[2] += 143233;
    result[3] += 21069007;
    result[4] += 16601477;
    result[5] += 88668;
    result[6] += 0;
  } else {
    result[0] += 38666596;
    result[1] += 35788;
    result[2] += 126991;
    result[3] += 4106442;
    result[4] += 0;
    result[5] += 1154;
    result[6] += 12699;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 9875228;
    result[1] += 109350;
    result[2] += 328052;
    result[3] += 18042900;
    result[4] += 14594140;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36803777;
    result[1] += 27966;
    result[2] += 90611;
    result[3] += 5214054;
    result[4] += 798720;
    result[5] += 2237;
    result[6] += 12305;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8842857;
    result[1] += 217060;
    result[2] += 217060;
    result[3] += 18629456;
    result[4] += 15043238;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36615674;
    result[1] += 23157;
    result[2] += 120196;
    result[3] += 5253337;
    result[4] += 918562;
    result[5] += 6616;
    result[6] += 12129;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32637095;
    result[1] += 17459;
    result[2] += 136763;
    result[3] += 8237840;
    result[4] += 1891415;
    result[5] += 17459;
    result[6] += 11639;
  } else {
    result[0] += 34246162;
    result[1] += 46327;
    result[2] += 104609;
    result[3] += 5889514;
    result[4] += 2652598;
    result[5] += 5977;
    result[6] += 4483;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32474711;
    result[1] += 23329;
    result[2] += 142893;
    result[3] += 8389883;
    result[4] += 1901357;
    result[5] += 8748;
    result[6] += 8748;
  } else {
    result[0] += 34331973;
    result[1] += 34333;
    result[2] += 114942;
    result[3] += 5720253;
    result[4] += 2733242;
    result[5] += 2985;
    result[6] += 11942;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36138350;
    result[1] += 23366;
    result[2] += 114708;
    result[3] += 5695042;
    result[4] += 959086;
    result[5] += 4248;
    result[6] += 14869;
  } else {
    result[0] += 3646934;
    result[1] += 308586;
    result[2] += 112213;
    result[3] += 17659581;
    result[4] += 21222356;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4692205;
    result[1] += 93310;
    result[2] += 179956;
    result[3] += 21401520;
    result[4] += 16529358;
    result[5] += 53320;
    result[6] += 0;
  } else {
    result[0] += 38731898;
    result[1] += 33612;
    result[2] += 113586;
    result[3] += 4064780;
    result[4] += 0;
    result[5] += 2318;
    result[6] += 3477;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8837153;
    result[1] += 138368;
    result[2] += 249063;
    result[3] += 18375375;
    result[4] += 15349711;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36800894;
    result[1] += 18796;
    result[2] += 107252;
    result[3] += 5126008;
    result[4] += 871288;
    result[5] += 11056;
    result[6] += 14374;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8786650;
    result[1] += 149878;
    result[2] += 290390;
    result[3] += 18716127;
    result[4] += 15006625;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36749203;
    result[1] += 12140;
    result[2] += 128026;
    result[3] += 5155285;
    result[4] += 889565;
    result[5] += 7725;
    result[6] += 7725;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8657228;
    result[1] += 127312;
    result[2] += 263718;
    result[3] += 18987702;
    result[4] += 14913712;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36644066;
    result[1] += 17721;
    result[2] += 105222;
    result[3] += 5293253;
    result[4] += 868363;
    result[5] += 6645;
    result[6] += 14398;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42913696;
    result[1] += 0;
    result[2] += 27800;
    result[3] += 0;
    result[4] += 4905;
    result[5] += 0;
    result[6] += 3270;
  } else {
    result[0] += 19750470;
    result[1] += 107149;
    result[2] += 261645;
    result[3] += 16720370;
    result[4] += 6075151;
    result[5] += 14951;
    result[6] += 19934;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4725514;
    result[1] += 72195;
    result[2] += 170643;
    result[3] += 21330445;
    result[4] += 16631184;
    result[5] += 19689;
    result[6] += 0;
  } else {
    result[0] += 38777432;
    result[1] += 18594;
    result[2] += 120867;
    result[3] += 4022318;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10459;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42903856;
    result[1] += 0;
    result[2] += 40907;
    result[3] += 0;
    result[4] += 3272;
    result[5] += 0;
    result[6] += 1636;
  } else {
    result[0] += 20162844;
    result[1] += 92113;
    result[2] += 268871;
    result[3] += 16274171;
    result[4] += 6119307;
    result[5] += 19916;
    result[6] += 12447;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42903742;
    result[1] += 0;
    result[2] += 42649;
    result[3] += 0;
    result[4] += 1640;
    result[5] += 0;
    result[6] += 1640;
  } else {
    result[0] += 19744894;
    result[1] += 99208;
    result[2] += 322426;
    result[3] += 16547913;
    result[4] += 6178185;
    result[5] += 32242;
    result[6] += 24802;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10482353;
    result[1] += 98734;
    result[2] += 255065;
    result[3] += 17500757;
    result[4] += 14612762;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37040165;
    result[1] += 26927;
    result[2] += 99856;
    result[3] += 4959183;
    result[4] += 802220;
    result[5] += 8975;
    result[6] += 12341;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918630;
    result[1] += 0;
    result[2] += 26141;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 4901;
  } else {
    result[0] += 19990113;
    result[1] += 79850;
    result[2] += 279477;
    result[3] += 16603946;
    result[4] += 5958855;
    result[5] += 22457;
    result[6] += 14971;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8871125;
    result[1] += 163272;
    result[2] += 290261;
    result[3] += 18667460;
    result[4] += 14957552;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36716347;
    result[1] += 17727;
    result[2] += 126306;
    result[3] += 5177449;
    result[4] += 886359;
    result[5] += 13295;
    result[6] += 12187;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4836735;
    result[1] += 74307;
    result[2] += 175635;
    result[3] += 21292445;
    result[4] += 16516506;
    result[5] += 54041;
    result[6] += 0;
  } else {
    result[0] += 38812202;
    result[1] += 38160;
    result[2] += 107541;
    result[3] += 3979048;
    result[4] += 0;
    result[5] += 1156;
    result[6] += 11563;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 35978293;
    result[1] += 41767;
    result[2] += 124036;
    result[3] += 4514689;
    result[4] += 2274431;
    result[5] += 8859;
    result[6] += 7594;
  } else {
    result[0] += 25789559;
    result[1] += 0;
    result[2] += 134694;
    result[3] += 13873561;
    result[4] += 3111449;
    result[5] += 17959;
    result[6] += 22449;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36006401;
    result[1] += 21252;
    result[2] += 129641;
    result[3] += 5764807;
    result[4] += 1011630;
    result[5] += 10626;
    result[6] += 5313;
  } else {
    result[0] += 3943788;
    result[1] += 236906;
    result[2] += 139356;
    result[3] += 18311443;
    result[4] += 20318177;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4846150;
    result[1] += 73224;
    result[2] += 166419;
    result[3] += 21554718;
    result[4] += 16282532;
    result[5] += 26627;
    result[6] += 0;
  } else {
    result[0] += 38697367;
    result[1] += 38256;
    result[2] += 99699;
    result[3] += 4105074;
    result[4] += 0;
    result[5] += 1159;
    result[6] += 8115;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915245;
    result[1] += 0;
    result[2] += 32788;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 1639;
  } else {
    result[0] += 19675130;
    result[1] += 106741;
    result[2] += 253200;
    result[3] += 16487789;
    result[4] += 6387094;
    result[5] += 14894;
    result[6] += 24823;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4819195;
    result[1] += 92549;
    result[2] += 185099;
    result[3] += 21755790;
    result[4] += 16017709;
    result[5] += 79328;
    result[6] += 0;
  } else {
    result[0] += 38759517;
    result[1] += 32499;
    result[2] += 97499;
    result[3] += 4054352;
    result[4] += 0;
    result[5] += 1160;
    result[6] += 4642;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5081219;
    result[1] += 46800;
    result[2] += 260746;
    result[3] += 21321062;
    result[4] += 16166299;
    result[5] += 73543;
    result[6] += 0;
  } else {
    result[0] += 38650767;
    result[1] += 35911;
    result[2] += 137852;
    result[3] += 4110083;
    result[4] += 0;
    result[5] += 1158;
    result[6] += 13901;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32595890;
    result[1] += 20421;
    result[2] += 140034;
    result[3] += 8197838;
    result[4] += 1986735;
    result[5] += 5834;
    result[6] += 2917;
  } else {
    result[0] += 34218851;
    result[1] += 37311;
    result[2] += 117903;
    result[3] += 5875768;
    result[4] += 2677451;
    result[5] += 8954;
    result[6] += 13432;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4894702;
    result[1] += 80681;
    result[2] += 262216;
    result[3] += 21481559;
    result[4] += 16196894;
    result[5] += 33617;
    result[6] += 0;
  } else {
    result[0] += 38724375;
    result[1] += 30089;
    result[2] += 104156;
    result[3] += 4080635;
    result[4] += 0;
    result[5] += 2314;
    result[6] += 8101;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35837876;
    result[1] += 12773;
    result[2] += 146898;
    result[3] += 5900417;
    result[4] += 1027224;
    result[5] += 9580;
    result[6] += 14902;
  } else {
    result[0] += 4087849;
    result[1] += 367906;
    result[2] += 149887;
    result[3] += 17809398;
    result[4] += 20534631;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32674378;
    result[1] += 20538;
    result[2] += 155508;
    result[3] += 8197935;
    result[4] += 1863167;
    result[5] += 14670;
    result[6] += 23472;
  } else {
    result[0] += 34338012;
    result[1] += 31250;
    result[2] += 113095;
    result[3] += 5785750;
    result[4] += 2671147;
    result[5] += 5952;
    result[6] += 4464;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36106926;
    result[1] += 18091;
    result[2] += 133023;
    result[3] += 5688099;
    result[4] += 985440;
    result[5] += 8513;
    result[6] += 9577;
  } else {
    result[0] += 3979100;
    result[1] += 314499;
    result[2] += 123064;
    result[3] += 17584616;
    result[4] += 20948391;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36049836;
    result[1] += 25507;
    result[2] += 134978;
    result[3] += 5716915;
    result[4] += 1003303;
    result[5] += 8502;
    result[6] += 10628;
  } else {
    result[0] += 3795811;
    result[1] += 361505;
    result[2] += 69520;
    result[3] += 18089195;
    result[4] += 20633640;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36054118;
    result[1] += 46960;
    result[2] += 109151;
    result[3] += 4476462;
    result[4] += 2256634;
    result[5] += 0;
    result[6] += 6345;
  } else {
    result[0] += 24973945;
    result[1] += 0;
    result[2] += 191183;
    result[3] += 14627787;
    result[4] += 3143418;
    result[5] += 0;
    result[6] += 13338;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36048203;
    result[1] += 9557;
    result[2] += 153979;
    result[3] += 5684499;
    result[4] += 1033255;
    result[5] += 8495;
    result[6] += 11681;
  } else {
    result[0] += 3570938;
    result[1] += 196823;
    result[2] += 84352;
    result[3] += 18149927;
    result[4] += 20947630;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8359082;
    result[1] += 195479;
    result[2] += 353725;
    result[3] += 18775355;
    result[4] += 15266030;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36725802;
    result[1] += 18776;
    result[2] += 100509;
    result[3] += 5195578;
    result[4] += 881392;
    result[5] += 13254;
    result[6] += 14358;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42911957;
    result[1] += 0;
    result[2] += 31156;
    result[3] += 0;
    result[4] += 4919;
    result[5] += 0;
    result[6] += 1639;
  } else {
    result[0] += 19837051;
    result[1] += 126556;
    result[2] += 250630;
    result[3] += 16725259;
    result[4] += 5975434;
    result[5] += 14888;
    result[6] += 19851;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36167146;
    result[1] += 41750;
    result[2] += 106273;
    result[3] += 4405289;
    result[4] += 2210235;
    result[5] += 6325;
    result[6] += 12651;
  } else {
    result[0] += 25571062;
    result[1] += 0;
    result[2] += 256295;
    result[3] += 13781485;
    result[4] += 3300362;
    result[5] += 17985;
    result[6] += 22482;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35985982;
    result[1] += 20221;
    result[2] += 152194;
    result[3] += 5770613;
    result[4] += 1000438;
    result[5] += 8514;
    result[6] += 11707;
  } else {
    result[0] += 4124261;
    result[1] += 259473;
    result[2] += 95595;
    result[3] += 18381640;
    result[4] += 20088702;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8582511;
    result[1] += 213402;
    result[2] += 204124;
    result[3] += 18603174;
    result[4] += 15346459;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36722296;
    result[1] += 9944;
    result[2] += 120437;
    result[3] += 5120238;
    result[4] += 953553;
    result[5] += 13259;
    result[6] += 9944;
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
