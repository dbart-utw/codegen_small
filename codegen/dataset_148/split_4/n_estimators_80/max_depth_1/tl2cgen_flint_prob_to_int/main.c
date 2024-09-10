
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
    result[0] += 6086424;
    result[1] += 108240;
    result[2] += 174849;
    result[3] += 26893502;
    result[4] += 20374117;
    result[5] += 49956;
    result[6] += 0;
  } else {
    result[0] += 48554853;
    result[1] += 42020;
    result[2] += 133304;
    result[3] += 4936627;
    result[4] += 0;
    result[5] += 1448;
    result[6] += 18836;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45070906;
    result[1] += 17269;
    result[2] += 158082;
    result[3] += 7205393;
    result[4] += 1211526;
    result[5] += 9298;
    result[6] += 14612;
  } else {
    result[0] += 5114713;
    result[1] += 243557;
    result[2] += 121778;
    result[3] += 22442108;
    result[4] += 25764932;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6335743;
    result[1] += 50019;
    result[2] += 108374;
    result[3] += 26510085;
    result[4] += 20599503;
    result[5] += 83365;
    result[6] += 0;
  } else {
    result[0] += 48367636;
    result[1] += 31870;
    result[2] += 149211;
    result[3] += 5123886;
    result[4] += 0;
    result[5] += 0;
    result[6] += 14486;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53666638;
    result[1] += 0;
    result[2] += 10226;
    result[3] += 0;
    result[4] += 6135;
    result[5] += 0;
    result[6] += 4090;
  } else {
    result[0] += 25117877;
    result[1] += 99587;
    result[2] += 345444;
    result[3] += 20483939;
    result[4] += 7590447;
    result[5] += 12448;
    result[6] += 37345;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6165064;
    result[1] += 58555;
    result[2] += 184031;
    result[3] += 26575862;
    result[4] += 20653385;
    result[5] += 50190;
    result[6] += 0;
  } else {
    result[0] += 48467794;
    result[1] += 39090;
    result[2] += 136092;
    result[3] += 5023844;
    result[4] += 0;
    result[5] += 1447;
    result[6] += 18821;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6449396;
    result[1] += 99221;
    result[2] += 264590;
    result[3] += 26343303;
    result[4] += 20406551;
    result[5] += 124026;
    result[6] += 0;
  } else {
    result[0] += 48381778;
    result[1] += 46423;
    result[2] += 149424;
    result[3] += 5083350;
    result[4] += 0;
    result[5] += 1450;
    result[6] += 24662;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6594320;
    result[1] += 141544;
    result[2] += 274763;
    result[3] += 26918481;
    result[4] += 19716351;
    result[5] += 41630;
    result[6] += 0;
  } else {
    result[0] += 48460670;
    result[1] += 39122;
    result[2] += 143447;
    result[3] += 5026463;
    result[4] += 0;
    result[5] += 1448;
    result[6] += 15938;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45013221;
    result[1] += 41175;
    result[2] += 128278;
    result[3] += 5609429;
    result[4] += 2875981;
    result[5] += 9502;
    result[6] += 9502;
  } else {
    result[0] += 32167515;
    result[1] += 0;
    result[2] += 251658;
    result[3] += 17196646;
    result[4] += 4009754;
    result[5] += 16777;
    result[6] += 44739;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40793749;
    result[1] += 33316;
    result[2] += 218405;
    result[3] += 10265069;
    result[4] += 2343234;
    result[5] += 14807;
    result[6] += 18508;
  } else {
    result[0] += 42915235;
    result[1] += 40732;
    result[2] += 127751;
    result[3] += 7292942;
    result[4] += 3282657;
    result[5] += 12960;
    result[6] += 14811;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11542724;
    result[1] += 233422;
    result[2] += 350133;
    result[3] += 22630276;
    result[4] += 18930535;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45948697;
    result[1] += 24842;
    result[2] += 132492;
    result[3] += 6425889;
    result[4] += 1134467;
    result[5] += 5520;
    result[6] += 15181;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53668642;
    result[1] += 0;
    result[2] += 14348;
    result[3] += 0;
    result[4] += 2049;
    result[5] += 0;
    result[6] += 2049;
  } else {
    result[0] += 24739051;
    result[1] += 120965;
    result[2] += 338083;
    result[3] += 20598299;
    result[4] += 7847266;
    result[5] += 24813;
    result[6] += 18610;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6426911;
    result[1] += 160461;
    result[2] += 211133;
    result[3] += 26493063;
    result[4] += 20336403;
    result[5] += 59117;
    result[6] += 0;
  } else {
    result[0] += 48370850;
    result[1] += 30353;
    result[2] += 143096;
    result[3] += 5126891;
    result[4] += 0;
    result[5] += 1445;
    result[6] += 14454;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53658485;
    result[1] += 0;
    result[2] += 22476;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6129;
  } else {
    result[0] += 24806708;
    result[1] += 118438;
    result[2] += 314798;
    result[3] += 20789137;
    result[4] += 7598788;
    result[5] += 15584;
    result[6] += 43635;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10953990;
    result[1] += 239369;
    result[2] += 262166;
    result[3] += 22626088;
    result[4] += 19605477;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45982114;
    result[1] += 29064;
    result[2] += 143940;
    result[3] += 6408126;
    result[4] += 1090627;
    result[5] += 9688;
    result[6] += 23528;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6484746;
    result[1] += 107390;
    result[2] += 173477;
    result[3] += 25782029;
    result[4] += 21098142;
    result[5] += 41304;
    result[6] += 0;
  } else {
    result[0] += 48479584;
    result[1] += 34823;
    result[2] += 132037;
    result[3] += 5020332;
    result[4] += 0;
    result[5] += 0;
    result[6] += 20313;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53638190;
    result[1] += 0;
    result[2] += 34638;
    result[3] += 0;
    result[4] += 10187;
    result[5] += 0;
    result[6] += 4075;
  } else {
    result[0] += 24926261;
    result[1] += 90777;
    result[2] += 322416;
    result[3] += 20759885;
    result[4] += 7553317;
    result[5] += 9390;
    result[6] += 25042;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 48657523;
    result[1] += 19185;
    result[2] += 126919;
    result[3] += 4698985;
    result[4] += 166766;
    result[5] += 1475;
    result[6] += 16233;
  } else {
    result[0] += 9279529;
    result[1] += 188455;
    result[2] += 316604;
    result[3] += 25840964;
    result[4] += 18008770;
    result[5] += 52767;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648270;
    result[1] += 0;
    result[2] += 32691;
    result[3] += 0;
    result[4] += 6129;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24817500;
    result[1] += 124679;
    result[2] += 317933;
    result[3] += 20678133;
    result[4] += 7667803;
    result[5] += 49871;
    result[6] += 31169;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53654127;
    result[1] += 0;
    result[2] += 26782;
    result[3] += 0;
    result[4] += 6180;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 25265962;
    result[1] += 126206;
    result[2] += 357072;
    result[3] += 20497812;
    result[4] += 7406177;
    result[5] += 18469;
    result[6] += 15391;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6247528;
    result[1] += 116620;
    result[2] += 158270;
    result[3] += 26931010;
    result[4] += 20133700;
    result[5] += 99960;
    result[6] += 0;
  } else {
    result[0] += 48595836;
    result[1] += 34772;
    result[2] += 136191;
    result[3] += 4900006;
    result[4] += 0;
    result[5] += 4346;
    result[6] += 15937;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45131984;
    result[1] += 19969;
    result[2] += 130470;
    result[3] += 7135912;
    result[4] += 1236802;
    result[5] += 13313;
    result[6] += 18638;
  } else {
    result[0] += 4753015;
    result[1] += 321378;
    result[2] += 50743;
    result[3] += 22344249;
    result[4] += 26217703;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6127654;
    result[1] += 93487;
    result[2] += 263463;
    result[3] += 26380359;
    result[4] += 20754135;
    result[5] += 67990;
    result[6] += 0;
  } else {
    result[0] += 48643683;
    result[1] += 30321;
    result[2] += 128503;
    result[3] += 4868699;
    result[4] += 0;
    result[5] += 1443;
    result[6] += 14438;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2025733;
    result[1] += 154243;
    result[2] += 143960;
    result[3] += 25676434;
    result[4] += 25583888;
    result[5] += 102829;
    result[6] += 0;
  } else {
    result[0] += 47790894;
    result[1] += 33660;
    result[2] += 124824;
    result[3] += 5723687;
    result[4] += 0;
    result[5] += 2805;
    result[6] += 11220;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10892352;
    result[1] += 246486;
    result[2] += 316911;
    result[3] += 23791808;
    result[4] += 18439532;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46042135;
    result[1] += 22067;
    result[2] += 142058;
    result[3] += 6333327;
    result[4] += 1118538;
    result[5] += 11033;
    result[6] += 17929;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45057529;
    result[1] += 22545;
    result[2] += 145881;
    result[3] += 7141568;
    result[4] += 1290389;
    result[5] += 14588;
    result[6] += 14588;
  } else {
    result[0] += 5390055;
    result[1] += 426935;
    result[2] += 88944;
    result[3] += 22058314;
    result[4] += 25722840;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10493811;
    result[1] += 175677;
    result[2] += 245948;
    result[3] += 23470534;
    result[4] += 19301118;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46041550;
    result[1] += 24832;
    result[2] += 151751;
    result[3] += 6329437;
    result[4] += 1113307;
    result[5] += 11036;
    result[6] += 15175;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53644102;
    result[1] += 0;
    result[2] += 32753;
    result[3] += 0;
    result[4] += 6141;
    result[5] += 0;
    result[6] += 4094;
  } else {
    result[0] += 25180781;
    result[1] += 96347;
    result[2] += 369848;
    result[3] += 20465989;
    result[4] += 7524397;
    result[5] += 27971;
    result[6] += 21755;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45239705;
    result[1] += 27914;
    result[2] += 143559;
    result[3] += 7021100;
    result[4] += 1226898;
    result[5] += 9304;
    result[6] += 18609;
  } else {
    result[0] += 4642181;
    result[1] += 431429;
    result[2] += 103543;
    result[3] += 21605991;
    result[4] += 26903945;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6373048;
    result[1] += 75075;
    result[2] += 250250;
    result[3] += 26693395;
    result[4] += 20245271;
    result[5] += 50050;
    result[6] += 0;
  } else {
    result[0] += 48526096;
    result[1] += 42006;
    result[2] += 143401;
    result[3] += 4949514;
    result[4] += 0;
    result[5] += 2896;
    result[6] += 23175;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53652367;
    result[1] += 0;
    result[2] += 24510;
    result[3] += 0;
    result[4] += 8170;
    result[5] += 0;
    result[6] += 2042;
  } else {
    result[0] += 25125284;
    result[1] += 134092;
    result[2] += 305607;
    result[3] += 20631609;
    result[4] += 7437483;
    result[5] += 21829;
    result[6] += 31184;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10631688;
    result[1] += 211459;
    result[2] += 293693;
    result[3] += 23518940;
    result[4] += 19031310;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45979483;
    result[1] += 31718;
    result[2] += 118599;
    result[3] += 6386460;
    result[4] += 1140488;
    result[5] += 8274;
    result[6] += 22065;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11110402;
    result[1] += 146933;
    result[2] += 350378;
    result[3] += 23136310;
    result[4] += 18943066;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45902116;
    result[1] += 24938;
    result[2] += 163485;
    result[3] += 6463233;
    result[4] += 1102836;
    result[5] += 6927;
    result[6] += 23553;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45148800;
    result[1] += 10626;
    result[2] += 144784;
    result[3] += 7073179;
    result[4] += 1276493;
    result[5] += 14611;
    result[6] += 18596;
  } else {
    result[0] += 5225868;
    result[1] += 348391;
    result[2] += 87097;
    result[3] += 21582837;
    result[4] += 26442895;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10996013;
    result[1] += 240287;
    result[2] += 286056;
    result[3] += 23101926;
    result[4] += 19062807;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45909601;
    result[1] += 12450;
    result[2] += 107905;
    result[3] += 6532427;
    result[4] += 1101188;
    result[5] += 2766;
    result[6] += 20751;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648154;
    result[1] += 0;
    result[2] += 26640;
    result[3] += 0;
    result[4] += 8197;
    result[5] += 0;
    result[6] += 4098;
  } else {
    result[0] += 25074869;
    result[1] += 105500;
    result[2] += 328911;
    result[3] += 20460795;
    result[4] += 7698397;
    result[5] += 9308;
    result[6] += 9308;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45001515;
    result[1] += 29239;
    result[2] += 164806;
    result[3] += 7174405;
    result[4] += 1287884;
    result[5] += 7974;
    result[6] += 21265;
  } else {
    result[0] += 4908929;
    result[1] += 328414;
    result[2] += 120994;
    result[3] += 21295072;
    result[4] += 27033680;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45173090;
    result[1] += 65077;
    result[2] += 130154;
    result[3] += 5514101;
    result[4] += 2787208;
    result[5] += 9523;
    result[6] += 7936;
  } else {
    result[0] += 32208925;
    result[1] += 0;
    result[2] += 344005;
    result[3] += 17516550;
    result[4] += 3584317;
    result[5] += 16645;
    result[6] += 16645;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 41163553;
    result[1] += 11089;
    result[2] += 225482;
    result[3] += 9810351;
    result[4] += 2435953;
    result[5] += 7392;
    result[6] += 33267;
  } else {
    result[0] += 42903723;
    result[1] += 61142;
    result[2] += 135255;
    result[3] += 7277846;
    result[4] += 3290594;
    result[5] += 3705;
    result[6] += 14822;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45116429;
    result[1] += 21237;
    result[2] += 131407;
    result[3] += 7065453;
    result[4] += 1329998;
    result[5] += 7964;
    result[6] += 14600;
  } else {
    result[0] += 4888637;
    result[1] += 316530;
    result[2] += 87925;
    result[3] += 21154788;
    result[4] += 27239208;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 13263991;
    result[1] += 331082;
    result[2] += 372467;
    result[3] += 22617070;
    result[4] += 17102478;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46257137;
    result[1] += 22421;
    result[2] += 109305;
    result[3] += 6310275;
    result[4] += 962726;
    result[5] += 2802;
    result[6] += 22421;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6300273;
    result[1] += 75805;
    result[2] += 235839;
    result[3] += 26717203;
    result[4] += 20282164;
    result[5] += 75805;
    result[6] += 0;
  } else {
    result[0] += 48566529;
    result[1] += 31813;
    result[2] += 138823;
    result[3] += 4932571;
    result[4] += 0;
    result[5] += 1446;
    result[6] += 15906;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53652054;
    result[1] += 0;
    result[2] += 26793;
    result[3] += 0;
    result[4] += 6183;
    result[5] += 0;
    result[6] += 2061;
  } else {
    result[0] += 25457605;
    result[1] += 119981;
    result[2] += 344562;
    result[3] += 20270714;
    result[4] += 7426545;
    result[5] += 33840;
    result[6] += 33840;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6266395;
    result[1] += 140911;
    result[2] += 207222;
    result[3] += 26300623;
    result[4] += 20713917;
    result[5] += 58022;
    result[6] += 0;
  } else {
    result[0] += 48484128;
    result[1] += 40602;
    result[2] += 124708;
    result[3] += 5015899;
    result[4] += 0;
    result[5] += 4350;
    result[6] += 17401;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10765968;
    result[1] += 321194;
    result[2] += 309298;
    result[3] += 22911885;
    result[4] += 19378743;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46191802;
    result[1] += 22032;
    result[2] += 136328;
    result[3] += 6180205;
    result[4] += 1134690;
    result[5] += 12393;
    result[6] += 9639;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1803469;
    result[1] += 104246;
    result[2] += 312740;
    result[3] += 25801077;
    result[4] += 25592584;
    result[5] += 72972;
    result[6] += 0;
  } else {
    result[0] += 47773811;
    result[1] += 34998;
    result[2] += 151191;
    result[3] += 5707490;
    result[4] += 0;
    result[5] += 5599;
    result[6] += 13999;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44829079;
    result[1] += 23897;
    result[2] += 143385;
    result[3] += 7311311;
    result[4] += 1360830;
    result[5] += 6638;
    result[6] += 11948;
  } else {
    result[0] += 4944402;
    result[1] += 385733;
    result[2] += 140266;
    result[3] += 21899143;
    result[4] += 26317545;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 41075048;
    result[1] += 36556;
    result[2] += 149882;
    result[3] += 9954374;
    result[4] += 2431016;
    result[5] += 10966;
    result[6] += 29245;
  } else {
    result[0] += 43038735;
    result[1] += 59623;
    result[2] += 145331;
    result[3] += 7180886;
    result[4] += 3255061;
    result[5] += 1863;
    result[6] += 5589;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45186608;
    result[1] += 50645;
    result[2] += 118699;
    result[3] += 5476013;
    result[4] += 2837714;
    result[5] += 6330;
    result[6] += 11078;
  } else {
    result[0] += 31865850;
    result[1] += 0;
    result[2] += 280262;
    result[3] += 17785460;
    result[4] += 3677044;
    result[5] += 5605;
    result[6] += 72868;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6195309;
    result[1] += 67066;
    result[2] += 176050;
    result[3] += 26524977;
    result[4] += 20656619;
    result[5] += 67066;
    result[6] += 0;
  } else {
    result[0] += 48407532;
    result[1] += 31839;
    result[2] += 131699;
    result[3] += 5095758;
    result[4] += 0;
    result[5] += 2894;
    result[6] += 17366;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6195306;
    result[1] += 50096;
    result[2] += 217086;
    result[3] += 26426072;
    result[4] += 20731733;
    result[5] += 66795;
    result[6] += 0;
  } else {
    result[0] += 48581965;
    result[1] += 41999;
    result[2] += 120205;
    result[3] += 4926989;
    result[4] += 0;
    result[5] += 2896;
    result[6] += 13034;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5993987;
    result[1] += 66785;
    result[2] += 192007;
    result[3] += 27240083;
    result[4] += 20119093;
    result[5] += 75133;
    result[6] += 0;
  } else {
    result[0] += 48347203;
    result[1] += 46345;
    result[2] += 144830;
    result[3] += 5134229;
    result[4] += 0;
    result[5] += 1448;
    result[6] += 13034;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53633488;
    result[1] += 0;
    result[2] += 41232;
    result[3] += 0;
    result[4] += 6184;
    result[5] += 0;
    result[6] += 6184;
  } else {
    result[0] += 25206087;
    result[1] += 76875;
    result[2] += 381304;
    result[3] += 20541254;
    result[4] += 7435442;
    result[5] += 24600;
    result[6] += 21525;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12853507;
    result[1] += 234441;
    result[2] += 336372;
    result[3] += 22465606;
    result[4] += 17797163;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46135259;
    result[1] += 16850;
    result[2] += 129187;
    result[3] += 6324553;
    result[4] += 1043326;
    result[5] += 12637;
    result[6] += 25275;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 48658702;
    result[1] += 29388;
    result[2] += 101390;
    result[3] += 4735972;
    result[4] += 133718;
    result[5] += 1469;
    result[6] += 26449;
  } else {
    result[0] += 9759887;
    result[1] += 161893;
    result[2] += 331496;
    result[3] += 25232316;
    result[4] += 18132113;
    result[5] += 69383;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6325844;
    result[1] += 82582;
    result[2] += 181682;
    result[3] += 26665992;
    result[4] += 20348406;
    result[5] += 82582;
    result[6] += 0;
  } else {
    result[0] += 48530089;
    result[1] += 36276;
    result[2] += 121887;
    result[3] += 4982877;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15961;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45079000;
    result[1] += 29197;
    result[2] += 130063;
    result[3] += 7156155;
    result[4] += 1266129;
    result[5] += 9290;
    result[6] += 17253;
  } else {
    result[0] += 5372231;
    result[1] += 493188;
    result[2] += 140911;
    result[3] += 22123027;
    result[4] += 25557732;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 13312989;
    result[1] += 186485;
    result[2] += 404051;
    result[3] += 21746276;
    result[4] += 18037287;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46264099;
    result[1] += 14010;
    result[2] += 130301;
    result[3] += 6264287;
    result[4] += 986369;
    result[5] += 9807;
    result[6] += 18214;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6181701;
    result[1] += 90423;
    result[2] += 172627;
    result[3] += 26683248;
    result[4] += 20493326;
    result[5] += 65762;
    result[6] += 0;
  } else {
    result[0] += 48533165;
    result[1] += 62445;
    result[2] += 124890;
    result[3] += 4949162;
    result[4] += 0;
    result[5] += 1452;
    result[6] += 15974;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53650177;
    result[1] += 0;
    result[2] += 24609;
    result[3] += 0;
    result[4] += 2050;
    result[5] += 0;
    result[6] += 10253;
  } else {
    result[0] += 24883088;
    result[1] += 86787;
    result[2] += 337849;
    result[3] += 20794797;
    result[4] += 7510179;
    result[5] += 34094;
    result[6] += 40293;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6073048;
    result[1] += 83650;
    result[2] += 276047;
    result[3] += 27554577;
    result[4] += 19649575;
    result[5] += 50190;
    result[6] += 0;
  } else {
    result[0] += 48470689;
    result[1] += 41986;
    result[2] += 115823;
    result[3] += 5035426;
    result[4] += 0;
    result[5] += 5791;
    result[6] += 17373;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 41049654;
    result[1] += 22016;
    result[2] += 227503;
    result[3] += 9808324;
    result[4] += 2557576;
    result[5] += 7338;
    result[6] += 14677;
  } else {
    result[0] += 42860036;
    result[1] += 42772;
    result[2] += 169230;
    result[3] += 7245311;
    result[4] += 3358581;
    result[5] += 5579;
    result[6] += 5579;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 13228894;
    result[1] += 164589;
    result[2] += 380613;
    result[3] += 22343046;
    result[4] += 17569946;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46286375;
    result[1] += 28048;
    result[2] += 124817;
    result[3] += 6193207;
    result[4] += 1012567;
    result[5] += 18231;
    result[6] += 23841;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2037098;
    result[1] += 140489;
    result[2] += 311084;
    result[3] += 25950433;
    result[4] += 25197810;
    result[5] += 50174;
    result[6] += 0;
  } else {
    result[0] += 47588012;
    result[1] += 37996;
    result[2] += 153391;
    result[3] += 5885174;
    result[4] += 0;
    result[5] += 5629;
    result[6] += 16887;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12484884;
    result[1] += 281849;
    result[2] += 354921;
    result[3] += 22746290;
    result[4] += 17819145;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46184867;
    result[1] += 23794;
    result[2] += 127369;
    result[3] += 6316704;
    result[4] += 999363;
    result[5] += 9797;
    result[6] += 25194;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12392480;
    result[1] += 225317;
    result[2] += 286768;
    result[3] += 22142596;
    result[4] += 18639928;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46148614;
    result[1] += 12629;
    result[2] += 105246;
    result[3] += 6351293;
    result[4] += 1041241;
    result[5] += 9823;
    result[6] += 18242;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10816165;
    result[1] += 266350;
    result[2] += 347414;
    result[3] += 23276758;
    result[4] += 18980401;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46075525;
    result[1] += 33153;
    result[2] += 139522;
    result[3] += 6256402;
    result[4] += 1154858;
    result[5] += 13814;
    result[6] += 13814;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45037688;
    result[1] += 22565;
    result[2] += 148669;
    result[3] += 7174650;
    result[4] += 1274313;
    result[5] += 15928;
    result[6] += 13274;
  } else {
    result[0] += 4393378;
    result[1] += 439337;
    result[2] += 193308;
    result[3] += 21826306;
    result[4] += 26834758;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53646099;
    result[1] += 0;
    result[2] += 32793;
    result[3] += 0;
    result[4] += 4099;
    result[5] += 0;
    result[6] += 4099;
  } else {
    result[0] += 25345171;
    result[1] += 108577;
    result[2] += 328835;
    result[3] += 20350590;
    result[4] += 7507382;
    result[5] += 27920;
    result[6] += 18613;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6231985;
    result[1] += 100380;
    result[2] += 225857;
    result[3] += 26793355;
    result[4] += 20285321;
    result[5] += 50190;
    result[6] += 0;
  } else {
    result[0] += 48505437;
    result[1] += 43433;
    result[2] += 141883;
    result[3] += 4970276;
    result[4] += 0;
    result[5] += 2895;
    result[6] += 23164;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45043527;
    result[1] += 25246;
    result[2] += 142176;
    result[3] += 7191231;
    result[4] += 1263647;
    result[5] += 7972;
    result[6] += 13287;
  } else {
    result[0] += 5323623;
    result[1] += 364156;
    result[2] += 121385;
    result[3] += 21623967;
    result[4] += 26253958;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10625082;
    result[1] += 269137;
    result[2] += 280839;
    result[3] += 23450072;
    result[4] += 19061959;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45946944;
    result[1] += 30353;
    result[2] += 135211;
    result[3] += 6428046;
    result[4] += 1118940;
    result[5] += 9657;
    result[6] += 17936;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45284459;
    result[1] += 13276;
    result[2] += 164627;
    result[3] += 6950193;
    result[4] += 1243998;
    result[5] += 10621;
    result[6] += 19914;
  } else {
    result[0] += 5189869;
    result[1] += 350666;
    result[2] += 157800;
    result[3] += 22460210;
    result[4] += 25528544;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10680182;
    result[1] += 251837;
    result[2] += 263284;
    result[3] += 23260590;
    result[4] += 19231196;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45945968;
    result[1] += 22133;
    result[2] += 124499;
    result[3] += 6468457;
    result[4] += 1099748;
    result[5] += 5533;
    result[6] += 20749;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53664520;
    result[1] += 0;
    result[2] += 16414;
    result[3] += 0;
    result[4] += 2051;
    result[5] += 0;
    result[6] += 4103;
  } else {
    result[0] += 24996164;
    result[1] += 123881;
    result[2] += 328285;
    result[3] += 20626249;
    result[4] += 7553666;
    result[5] += 24776;
    result[6] += 34067;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45018149;
    result[1] += 31900;
    result[2] += 135576;
    result[3] += 7237409;
    result[4] += 1234812;
    result[5] += 13291;
    result[6] += 15950;
  } else {
    result[0] += 5215021;
    result[1] += 483511;
    result[2] += 155414;
    result[3] += 22086133;
    result[4] += 25747009;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10774174;
    result[1] += 195267;
    result[2] += 241212;
    result[3] += 23202380;
    result[4] += 19274056;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45707175;
    result[1] += 20741;
    result[2] += 147955;
    result[3] += 6583326;
    result[4] += 1201619;
    result[5] += 9679;
    result[6] += 16593;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2024958;
    result[1] += 71952;
    result[2] += 133626;
    result[3] += 26406689;
    result[4] += 24957353;
    result[5] += 92510;
    result[6] += 0;
  } else {
    result[0] += 47943468;
    result[1] += 36467;
    result[2] += 147272;
    result[3] += 5538843;
    result[4] += 0;
    result[5] += 4207;
    result[6] += 16831;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6322015;
    result[1] += 75063;
    result[2] += 225190;
    result[3] += 26138782;
    result[4] += 20850975;
    result[5] += 75063;
    result[6] += 0;
  } else {
    result[0] += 48540442;
    result[1] += 34764;
    result[2] += 137610;
    result[3] += 4946750;
    result[4] += 0;
    result[5] += 2897;
    result[6] += 24625;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6053119;
    result[1] += 124892;
    result[2] += 199827;
    result[3] += 26219083;
    result[4] += 21073515;
    result[5] += 16652;
    result[6] += 0;
  } else {
    result[0] += 48459221;
    result[1] += 34775;
    result[2] += 182569;
    result[3] += 4987341;
    result[4] += 0;
    result[5] += 0;
    result[6] += 23183;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53646005;
    result[1] += 0;
    result[2] += 30814;
    result[3] += 0;
    result[4] += 6162;
    result[5] += 0;
    result[6] += 4108;
  } else {
    result[0] += 25081387;
    result[1] += 105111;
    result[2] += 330791;
    result[3] += 20459585;
    result[4] += 7657660;
    result[5] += 34006;
    result[6] += 18549;
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
