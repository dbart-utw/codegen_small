
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
    result[0] += 85830689;
    result[1] += 0;
    result[2] += 55579;
    result[3] += 0;
    result[4] += 6538;
    result[5] += 0;
    result[6] += 6538;
  } else {
    result[0] += 39857974;
    result[1] += 199464;
    result[2] += 548527;
    result[3] += 33490073;
    result[4] += 11713547;
    result[5] += 49866;
    result[6] += 39892;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85856590;
    result[1] += 0;
    result[2] += 26311;
    result[3] += 0;
    result[4] += 6577;
    result[5] += 0;
    result[6] += 9866;
  } else {
    result[0] += 40117989;
    result[1] += 168023;
    result[2] += 553487;
    result[3] += 33154913;
    result[4] += 11830803;
    result[5] += 44476;
    result[6] += 29651;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85840308;
    result[1] += 0;
    result[2] += 32798;
    result[3] += 0;
    result[4] += 13119;
    result[5] += 0;
    result[6] += 13119;
  } else {
    result[0] += 39714180;
    result[1] += 183609;
    result[2] += 501203;
    result[3] += 33337481;
    result[4] += 12073547;
    result[5] += 44661;
    result[6] += 44661;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 20792554;
    result[1] += 426426;
    result[2] += 443483;
    result[3] += 35836879;
    result[4] += 28400002;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73998409;
    result[1] += 49131;
    result[2] += 223324;
    result[3] += 10025014;
    result[4] += 1547635;
    result[5] += 17865;
    result[6] += 37965;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 64856692;
    result[1] += 40882;
    result[2] += 280335;
    result[3] += 16855147;
    result[4] += 3796204;
    result[5] += 17520;
    result[6] += 52562;
  } else {
    result[0] += 69010064;
    result[1] += 101437;
    result[2] += 164089;
    result[3] += 11304272;
    result[4] += 5277714;
    result[5] += 20884;
    result[6] += 20884;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85846634;
    result[1] += 0;
    result[2] += 42827;
    result[3] += 0;
    result[4] += 6588;
    result[5] += 0;
    result[6] += 3294;
  } else {
    result[0] += 39868811;
    result[1] += 172528;
    result[2] += 458432;
    result[3] += 33578924;
    result[4] += 11731920;
    result[5] += 44364;
    result[6] += 44364;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72056380;
    result[1] += 23466;
    result[2] += 209063;
    result[3] += 11521938;
    result[4] += 2037298;
    result[5] += 19199;
    result[6] += 31999;
  } else {
    result[0] += 7755908;
    result[1] += 398419;
    result[2] += 345297;
    result[3] += 35751552;
    result[4] += 41648167;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 18057203;
    result[1] += 453793;
    result[2] += 491609;
    result[3] += 37645960;
    result[4] += 29250778;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73333173;
    result[1] += 57329;
    result[2] += 207267;
    result[3] += 10526567;
    result[4] += 1748547;
    result[5] += 11024;
    result[6] += 15434;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71946843;
    result[1] += 25522;
    result[2] += 242467;
    result[3] += 11615032;
    result[4] += 2029068;
    result[5] += 21269;
    result[6] += 19142;
  } else {
    result[0] += 7698656;
    result[1] += 634656;
    result[2] += 386312;
    result[3] += 35844282;
    result[4] += 41335438;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 3181457;
    result[1] += 114206;
    result[2] += 293672;
    result[3] += 43675697;
    result[4] += 38503790;
    result[5] += 130521;
    result[6] += 0;
  } else {
    result[0] += 76530959;
    result[1] += 67398;
    result[2] += 211181;
    result[3] += 9062847;
    result[4] += 0;
    result[5] += 4493;
    result[6] += 22466;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85846689;
    result[1] += 0;
    result[2] += 36201;
    result[3] += 0;
    result[4] += 9873;
    result[5] += 0;
    result[6] += 6582;
  } else {
    result[0] += 40231839;
    result[1] += 217229;
    result[2] += 483828;
    result[3] += 33171889;
    result[4] += 11725440;
    result[5] += 34559;
    result[6] += 34559;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71995799;
    result[1] += 23378;
    result[2] += 197650;
    result[3] += 11623126;
    result[4] += 2033887;
    result[5] += 17002;
    result[6] += 8501;
  } else {
    result[0] += 8194162;
    result[1] += 445940;
    result[2] += 250841;
    result[3] += 35424422;
    result[4] += 41583979;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 3320257;
    result[1] += 98621;
    result[2] += 460233;
    result[3] += 41799088;
    result[4] += 40138959;
    result[5] += 82184;
    result[6] += 0;
  } else {
    result[0] += 76520306;
    result[1] += 60596;
    result[2] += 219943;
    result[3] += 9069322;
    result[4] += 0;
    result[5] += 4488;
    result[6] += 24687;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17157194;
    result[1] += 396807;
    result[2] += 283433;
    result[3] += 37942341;
    result[4] += 30119568;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73435847;
    result[1] += 50718;
    result[2] += 207283;
    result[3] += 10333324;
    result[4] += 1836888;
    result[5] += 6615;
    result[6] += 28666;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85840535;
    result[1] += 0;
    result[2] += 49008;
    result[3] += 0;
    result[4] += 6534;
    result[5] += 0;
    result[6] += 3267;
  } else {
    result[0] += 39797517;
    result[1] += 159729;
    result[2] += 484179;
    result[3] += 33253613;
    result[4] += 12139415;
    result[5] += 29949;
    result[6] += 34940;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 20146104;
    result[1] += 472437;
    result[2] += 421819;
    result[3] += 36715179;
    result[4] += 28143804;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73943348;
    result[1] += 35783;
    result[2] += 199042;
    result[3] += 10097517;
    result[4] += 1592343;
    result[5] += 6709;
    result[6] += 24600;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85873161;
    result[1] += 0;
    result[2] += 19638;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6546;
  } else {
    result[0] += 38997187;
    result[1] += 169249;
    result[2] += 423124;
    result[3] += 34208408;
    result[4] += 12021726;
    result[5] += 49779;
    result[6] += 29867;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2989081;
    result[1] += 245006;
    result[2] += 212339;
    result[3] += 42778168;
    result[4] += 39593081;
    result[5] += 81668;
    result[6] += 0;
  } else {
    result[0] += 76341496;
    result[1] += 47171;
    result[2] += 197671;
    result[3] += 9272573;
    result[4] += 0;
    result[5] += 2246;
    result[6] += 38186;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72158690;
    result[1] += 31974;
    result[2] += 211033;
    result[3] += 11583419;
    result[4] += 1863067;
    result[5] += 27711;
    result[6] += 23448;
  } else {
    result[0] += 7643244;
    result[1] += 777733;
    result[2] += 107273;
    result[3] += 36231662;
    result[4] += 41139430;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85853392;
    result[1] += 0;
    result[2] += 32823;
    result[3] += 0;
    result[4] += 9847;
    result[5] += 0;
    result[6] += 3282;
  } else {
    result[0] += 39638607;
    result[1] += 188354;
    result[2] += 555148;
    result[3] += 33299007;
    result[4] += 12153790;
    result[5] += 29740;
    result[6] += 34696;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85850025;
    result[1] += 0;
    result[2] += 36168;
    result[3] += 0;
    result[4] += 9864;
    result[5] += 0;
    result[6] += 3288;
  } else {
    result[0] += 39268978;
    result[1] += 202697;
    result[2] += 494384;
    result[3] += 33781308;
    result[4] += 12102538;
    result[5] += 14831;
    result[6] += 34606;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 18410951;
    result[1] += 405446;
    result[2] += 387017;
    result[3] += 37098344;
    result[4] += 29597586;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73396732;
    result[1] += 42021;
    result[2] += 221167;
    result[3] += 10262184;
    result[4] += 1926371;
    result[5] += 11058;
    result[6] += 39810;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72180787;
    result[1] += 38260;
    result[2] += 265698;
    result[3] += 11333646;
    result[4] += 2036315;
    result[5] += 12753;
    result[6] += 31883;
  } else {
    result[0] += 7816617;
    result[1] += 500708;
    result[2] += 222537;
    result[3] += 36718632;
    result[4] += 40640849;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10371831;
    result[1] += 189563;
    result[2] += 324965;
    result[3] += 41974774;
    result[4] += 32943428;
    result[5] += 94781;
    result[6] += 0;
  } else {
    result[0] += 77627522;
    result[1] += 62420;
    result[2] += 194195;
    result[3] += 7994400;
    result[4] += 0;
    result[5] += 0;
    result[6] += 20806;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85843321;
    result[1] += 0;
    result[2] += 46138;
    result[3] += 0;
    result[4] += 9886;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39611743;
    result[1] += 187219;
    result[2] += 458195;
    result[3] += 33285688;
    result[4] += 12287523;
    result[5] += 4926;
    result[6] += 64048;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85843483;
    result[1] += 0;
    result[2] += 52576;
    result[3] += 0;
    result[4] += 3286;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 40280008;
    result[1] += 173194;
    result[2] += 504737;
    result[3] += 32669363;
    result[4] += 12192867;
    result[5] += 49484;
    result[6] += 29690;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 3060818;
    result[1] += 114576;
    result[2] += 392832;
    result[3] += 42556840;
    result[4] += 39692437;
    result[5] += 81840;
    result[6] += 0;
  } else {
    result[0] += 76350981;
    result[1] += 85333;
    result[2] += 204351;
    result[3] += 9220503;
    result[4] += 0;
    result[5] += 2245;
    result[6] += 35929;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72003082;
    result[1] += 40365;
    result[2] += 227320;
    result[3] += 11450980;
    result[4] += 2132984;
    result[5] += 12746;
    result[6] += 31867;
  } else {
    result[0] += 8654352;
    result[1] += 560152;
    result[2] += 336091;
    result[3] += 34001240;
    result[4] += 42347509;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85833736;
    result[1] += 0;
    result[2] += 52487;
    result[3] += 0;
    result[4] += 9841;
    result[5] += 0;
    result[6] += 3280;
  } else {
    result[0] += 39638219;
    result[1] += 178595;
    result[2] += 550668;
    result[3] += 33491567;
    result[4] += 11995646;
    result[5] += 34726;
    result[6] += 9921;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85833658;
    result[1] += 0;
    result[2] += 42696;
    result[3] += 0;
    result[4] += 13137;
    result[5] += 0;
    result[6] += 9853;
  } else {
    result[0] += 39498050;
    result[1] += 188180;
    result[2] += 480354;
    result[3] += 33580275;
    result[4] += 12053442;
    result[5] += 59425;
    result[6] += 39616;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85846884;
    result[1] += 0;
    result[2] += 42625;
    result[3] += 0;
    result[4] += 9836;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39578637;
    result[1] += 173764;
    result[2] += 565976;
    result[3] += 33784825;
    result[4] += 11726635;
    result[5] += 29788;
    result[6] += 39717;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85876311;
    result[1] += 0;
    result[2] += 16453;
    result[3] += 0;
    result[4] += 6581;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39591915;
    result[1] += 212328;
    result[2] += 538228;
    result[3] += 33345497;
    result[4] += 12117555;
    result[5] += 64192;
    result[6] += 29627;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85818118;
    result[1] += 0;
    result[2] += 61732;
    result[3] += 0;
    result[4] += 12996;
    result[5] += 0;
    result[6] += 6498;
  } else {
    result[0] += 39858464;
    result[1] += 176208;
    result[2] += 503454;
    result[3] += 33509907;
    result[4] += 11785861;
    result[5] += 25172;
    result[6] += 40276;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85820641;
    result[1] += 0;
    result[2] += 65587;
    result[3] += 0;
    result[4] += 6558;
    result[5] += 0;
    result[6] += 6558;
  } else {
    result[0] += 39882193;
    result[1] += 198542;
    result[2] += 595627;
    result[3] += 33186353;
    result[4] += 11982030;
    result[5] += 34744;
    result[6] += 19854;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 18106324;
    result[1] += 496315;
    result[2] += 441169;
    result[3] += 39208924;
    result[4] += 27646611;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73580919;
    result[1] += 35397;
    result[2] += 190263;
    result[3] += 10165799;
    result[4] += 1878294;
    result[5] += 17698;
    result[6] += 30973;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 16692230;
    result[1] += 356350;
    result[2] += 318840;
    result[3] += 38992301;
    result[4] += 29539622;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73515449;
    result[1] += 37520;
    result[2] += 229535;
    result[3] += 10379872;
    result[4] += 1695033;
    result[5] += 24277;
    result[6] += 17656;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85853062;
    result[1] += 0;
    result[2] += 36365;
    result[3] += 0;
    result[4] += 3305;
    result[5] += 0;
    result[6] += 6611;
  } else {
    result[0] += 39995151;
    result[1] += 171631;
    result[2] += 539414;
    result[3] += 33115161;
    result[4] += 11989718;
    result[5] += 53941;
    result[6] += 34326;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72007779;
    result[1] += 25563;
    result[2] += 247112;
    result[3] += 11561038;
    result[4] += 2004595;
    result[5] += 21302;
    result[6] += 31954;
  } else {
    result[0] += 7786909;
    result[1] += 865212;
    result[2] += 189265;
    result[3] += 36879668;
    result[4] += 40178290;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 5761817;
    result[1] += 165916;
    result[2] += 331832;
    result[3] += 43319213;
    result[4] += 36184816;
    result[5] += 135749;
    result[6] += 0;
  } else {
    result[0] += 76851569;
    result[1] += 74981;
    result[2] += 227216;
    result[3] += 8718312;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27266;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85853518;
    result[1] += 0;
    result[2] += 26186;
    result[3] += 0;
    result[4] += 6546;
    result[5] += 0;
    result[6] += 13093;
  } else {
    result[0] += 40241986;
    result[1] += 124434;
    result[2] += 472849;
    result[3] += 32930239;
    result[4] += 12035265;
    result[5] += 34841;
    result[6] += 59728;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10079211;
    result[1] += 132971;
    result[2] += 239348;
    result[3] += 43508151;
    result[4] += 31806692;
    result[5] += 132971;
    result[6] += 0;
  } else {
    result[0] += 77673509;
    result[1] += 67253;
    result[2] += 215676;
    result[3] += 7910439;
    result[4] += 0;
    result[5] += 0;
    result[6] += 32467;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10144963;
    result[1] += 186390;
    result[2] += 306212;
    result[3] += 43122749;
    result[4] += 31992580;
    result[5] += 146449;
    result[6] += 0;
  } else {
    result[0] += 77503709;
    result[1] += 64920;
    result[2] += 222585;
    result[3] += 8084944;
    result[4] += 0;
    result[5] += 0;
    result[6] += 23185;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 18246593;
    result[1] += 486575;
    result[2] += 280716;
    result[3] += 38514347;
    result[4] += 28371112;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73593950;
    result[1] += 33114;
    result[2] += 245048;
    result[3] += 10188267;
    result[4] += 1794812;
    result[5] += 19868;
    result[6] += 24284;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85821225;
    result[1] += 0;
    result[2] += 58589;
    result[3] += 0;
    result[4] += 9764;
    result[5] += 0;
    result[6] += 9764;
  } else {
    result[0] += 39641217;
    result[1] += 170694;
    result[2] += 476939;
    result[3] += 33395818;
    result[4] += 12114267;
    result[5] += 40163;
    result[6] += 60245;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10208481;
    result[1] += 105787;
    result[2] += 277691;
    result[3] += 43676961;
    result[4] += 31511413;
    result[5] += 119010;
    result[6] += 0;
  } else {
    result[0] += 77526225;
    result[1] += 58033;
    result[2] += 185708;
    result[3] += 8103843;
    result[4] += 0;
    result[5] += 0;
    result[6] += 25534;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71902865;
    result[1] += 46633;
    result[2] += 233168;
    result[3] += 11620279;
    result[4] += 2037046;
    result[5] += 29676;
    result[6] += 29676;
  } else {
    result[0] += 7908743;
    result[1] += 548416;
    result[2] += 259776;
    result[3] += 36051170;
    result[4] += 41131239;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72060480;
    result[1] += 34070;
    result[2] += 221455;
    result[3] += 11547648;
    result[4] += 1997362;
    result[5] += 14905;
    result[6] += 23423;
  } else {
    result[0] += 8318101;
    result[1] += 380566;
    result[2] += 163100;
    result[3] += 36534405;
    result[4] += 40503172;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 65022423;
    result[1] += 47126;
    result[2] += 300429;
    result[3] += 16835847;
    result[4] += 3669955;
    result[5] += 11781;
    result[6] += 11781;
  } else {
    result[0] += 68691554;
    result[1] += 71290;
    result[2] += 190108;
    result[3] += 11748112;
    result[4] += 5180457;
    result[5] += 2970;
    result[6] += 14852;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71877265;
    result[1] += 38317;
    result[2] += 221390;
    result[3] += 11748574;
    result[4] += 1981866;
    result[5] += 14901;
    result[6] += 17030;
  } else {
    result[0] += 8267948;
    result[1] += 764034;
    result[2] += 245582;
    result[3] += 36646385;
    result[4] += 39975394;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 3389048;
    result[1] += 114054;
    result[2] += 260696;
    result[3] += 42183878;
    result[4] += 39821320;
    result[5] += 130348;
    result[6] += 0;
  } else {
    result[0] += 76291058;
    result[1] += 38199;
    result[2] += 190997;
    result[3] += 9354373;
    result[4] += 0;
    result[5] += 8988;
    result[6] += 15729;
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
