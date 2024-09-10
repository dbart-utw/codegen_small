
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
    result[0] += 10466111;
    result[1] += 199734;
    result[2] += 346207;
    result[3] += 42303863;
    result[4] += 32516850;
    result[5] += 66578;
    result[6] += 0;
  } else {
    result[0] += 77707967;
    result[1] += 46370;
    result[2] += 224897;
    result[3] += 7899243;
    result[4] += 0;
    result[5] += 0;
    result[6] += 20866;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85850487;
    result[1] += 0;
    result[2] += 42343;
    result[3] += 0;
    result[4] += 6514;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39669770;
    result[1] += 155469;
    result[2] += 551665;
    result[3] += 33200237;
    result[4] += 12241960;
    result[5] += 30090;
    result[6] += 50151;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9998651;
    result[1] += 175414;
    result[2] += 269869;
    result[3] += 41816222;
    result[4] += 33517746;
    result[5] += 121441;
    result[6] += 0;
  } else {
    result[0] += 77617995;
    result[1] += 32385;
    result[2] += 279900;
    result[3] += 7945932;
    result[4] += 0;
    result[5] += 0;
    result[6] += 23132;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10307921;
    result[1] += 118937;
    result[2] += 396458;
    result[3] += 42394631;
    result[4] += 32588890;
    result[5] += 92506;
    result[6] += 0;
  } else {
    result[0] += 77618184;
    result[1] += 58040;
    result[2] += 218230;
    result[3] += 7972387;
    result[4] += 0;
    result[5] += 0;
    result[6] += 32502;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 5830481;
    result[1] += 231368;
    result[2] += 339340;
    result[3] += 40998466;
    result[4] += 38468839;
    result[5] += 30849;
    result[6] += 0;
  } else {
    result[0] += 76913329;
    result[1] += 31704;
    result[2] += 233255;
    result[3] += 8693880;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27175;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85830511;
    result[1] += 0;
    result[2] += 59001;
    result[3] += 0;
    result[4] += 6555;
    result[5] += 0;
    result[6] += 3277;
  } else {
    result[0] += 39214486;
    result[1] += 173845;
    result[2] += 531469;
    result[3] += 33492499;
    result[4] += 12347968;
    result[5] += 34769;
    result[6] += 104307;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9544371;
    result[1] += 172328;
    result[2] += 265121;
    result[3] += 43188282;
    result[4] += 32583424;
    result[5] += 145816;
    result[6] += 0;
  } else {
    result[0] += 77696909;
    result[1] += 58008;
    result[2] += 220433;
    result[3] += 7898470;
    result[4] += 0;
    result[5] += 0;
    result[6] += 25523;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17569069;
    result[1] += 293735;
    result[2] += 458962;
    result[3] += 37322797;
    result[4] += 30254781;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73658672;
    result[1] += 46466;
    result[2] += 196930;
    result[3] += 10140818;
    result[4] += 1816629;
    result[5] += 11063;
    result[6] += 28765;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9659364;
    result[1] += 238830;
    result[2] += 278635;
    result[3] += 43573285;
    result[4] += 32003278;
    result[5] += 145951;
    result[6] += 0;
  } else {
    result[0] += 77675039;
    result[1] += 39439;
    result[2] += 259837;
    result[3] += 7901830;
    result[4] += 0;
    result[5] += 0;
    result[6] += 23199;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72439276;
    result[1] += 83211;
    result[2] += 191638;
    result[3] += 8752322;
    result[4] += 4402637;
    result[5] += 15129;
    result[6] += 15129;
  } else {
    result[0] += 51007858;
    result[1] += 0;
    result[2] += 473475;
    result[3] += 28463149;
    result[4] += 5854704;
    result[5] += 9105;
    result[6] += 91052;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72011032;
    result[1] += 23416;
    result[2] += 234168;
    result[3] += 11542372;
    result[4] += 2052166;
    result[5] += 12772;
    result[6] += 23416;
  } else {
    result[0] += 7092356;
    result[1] += 409174;
    result[2] += 354617;
    result[3] += 36116460;
    result[4] += 41926736;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72195236;
    result[1] += 23378;
    result[2] += 227410;
    result[3] += 11491643;
    result[4] += 1923421;
    result[5] += 17002;
    result[6] += 21253;
  } else {
    result[0] += 7996468;
    result[1] += 473658;
    result[2] += 334347;
    result[3] += 35607967;
    result[4] += 41486904;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17357605;
    result[1] += 226896;
    result[2] += 453793;
    result[3] += 36700556;
    result[4] += 31160493;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73701405;
    result[1] += 17639;
    result[2] += 176398;
    result[3] += 10089981;
    result[4] += 1865411;
    result[5] += 35279;
    result[6] += 13229;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9937788;
    result[1] += 105301;
    result[2] += 421204;
    result[3] += 41751873;
    result[4] += 33617365;
    result[5] += 65813;
    result[6] += 0;
  } else {
    result[0] += 77751755;
    result[1] += 44141;
    result[2] += 325253;
    result[3] += 7757286;
    result[4] += 0;
    result[5] += 0;
    result[6] += 20909;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72245949;
    result[1] += 44612;
    result[2] += 271920;
    result[3] += 11303831;
    result[4] += 1992669;
    result[5] += 19119;
    result[6] += 21243;
  } else {
    result[0] += 7174627;
    result[1] += 616569;
    result[2] += 420388;
    result[3] += 33883298;
    result[4] += 43804462;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 16743092;
    result[1] += 447975;
    result[2] += 429310;
    result[3] += 37891280;
    result[4] += 30387686;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73702778;
    result[1] += 22083;
    result[2] += 238498;
    result[3] += 10140618;
    result[4] += 1748991;
    result[5] += 17666;
    result[6] += 28708;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17051463;
    result[1] += 226597;
    result[2] += 660909;
    result[3] += 37690722;
    result[4] += 30269652;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73569412;
    result[1] += 48516;
    result[2] += 262432;
    result[3] += 10148873;
    result[4] += 1817182;
    result[5] += 11026;
    result[6] += 41901;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85843817;
    result[1] += 0;
    result[2] += 45729;
    result[3] += 0;
    result[4] += 3266;
    result[5] += 0;
    result[6] += 6532;
  } else {
    result[0] += 39728821;
    result[1] += 169781;
    result[2] += 609215;
    result[3] += 33147300;
    result[4] += 12164330;
    result[5] += 34954;
    result[6] += 44942;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 20310184;
    result[1] += 234606;
    result[2] += 519484;
    result[3] += 35408762;
    result[4] += 29426307;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73914535;
    result[1] += 51484;
    result[2] += 212655;
    result[3] += 9963464;
    result[4] += 1725866;
    result[5] += 6715;
    result[6] += 24623;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85810982;
    result[1] += 0;
    result[2] += 85090;
    result[3] += 0;
    result[4] += 3272;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39775683;
    result[1] += 149364;
    result[2] += 612393;
    result[3] += 32845185;
    result[4] += 12402206;
    result[5] += 59745;
    result[6] += 54766;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72268541;
    result[1] += 21241;
    result[2] += 250652;
    result[3] += 11355817;
    result[4] += 1977603;
    result[5] += 12745;
    result[6] += 12745;
  } else {
    result[0] += 7212065;
    result[1] += 449000;
    result[2] += 392875;
    result[3] += 35302638;
    result[4] += 42542766;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85863351;
    result[1] += 0;
    result[2] += 29450;
    result[3] += 0;
    result[4] += 3272;
    result[5] += 0;
    result[6] += 3272;
  } else {
    result[0] += 40322743;
    result[1] += 149398;
    result[2] += 517915;
    result[3] += 32942441;
    result[4] += 11892146;
    result[5] += 4979;
    result[6] += 69719;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17901008;
    result[1] += 364211;
    result[2] += 673791;
    result[3] += 36694335;
    result[4] += 30265998;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73617885;
    result[1] += 17718;
    result[2] += 212627;
    result[3] += 10053299;
    result[4] += 1960160;
    result[5] += 11074;
    result[6] += 26578;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 77790270;
    result[1] += 35236;
    result[2] += 180880;
    result[3] += 7575830;
    result[4] += 281891;
    result[5] += 4698;
    result[6] += 30538;
  } else {
    result[0] += 14533381;
    result[1] += 136289;
    result[2] += 582326;
    result[3] += 41308007;
    result[4] += 29252611;
    result[5] += 86729;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72037522;
    result[1] += 70736;
    result[2] += 222314;
    result[3] += 9077005;
    result[4] += 4461450;
    result[5] += 17684;
    result[6] += 12631;
  } else {
    result[0] += 51306273;
    result[1] += 0;
    result[2] += 298450;
    result[3] += 28108566;
    result[4] += 6059440;
    result[5] += 27131;
    result[6] += 99483;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 65739710;
    result[1] += 81382;
    result[2] += 313904;
    result[3] += 15927739;
    result[4] += 3795917;
    result[5] += 17439;
    result[6] += 23252;
  } else {
    result[0] += 68622580;
    result[1] += 50840;
    result[2] += 212333;
    result[3] += 11708245;
    result[4] += 5284411;
    result[5] += 5981;
    result[6] += 14953;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72264900;
    result[1] += 36143;
    result[2] += 208354;
    result[3] += 11459482;
    result[4] += 1900700;
    result[5] += 12756;
    result[6] += 17008;
  } else {
    result[0] += 8071265;
    result[1] += 277363;
    result[2] += 499253;
    result[3] += 35973991;
    result[4] += 41077472;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72226770;
    result[1] += 51064;
    result[2] += 259578;
    result[3] += 11266150;
    result[4] += 2055354;
    result[5] += 12766;
    result[6] += 27660;
  } else {
    result[0] += 8348274;
    result[1] += 439382;
    result[2] += 302075;
    result[3] += 35095704;
    result[4] += 41713908;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85830553;
    result[1] += 0;
    result[2] += 58965;
    result[3] += 0;
    result[4] += 9827;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39941853;
    result[1] += 208807;
    result[2] += 536933;
    result[3] += 32941837;
    result[4] += 12175454;
    result[5] += 34801;
    result[6] += 59659;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9783928;
    result[1] += 259267;
    result[2] += 327495;
    result[3] += 42492543;
    result[4] += 32981528;
    result[5] += 54582;
    result[6] += 0;
  } else {
    result[0] += 77522976;
    result[1] += 60029;
    result[2] += 226263;
    result[3] += 8062371;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27705;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9228089;
    result[1] += 185356;
    result[2] += 423671;
    result[3] += 42459803;
    result[4] += 33456789;
    result[5] += 145636;
    result[6] += 0;
  } else {
    result[0] += 77546602;
    result[1] += 44096;
    result[2] += 246010;
    result[3] += 8048712;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13925;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72303186;
    result[1] += 88058;
    result[2] += 163536;
    result[3] += 8926567;
    result[4] += 4397869;
    result[5] += 5031;
    result[6] += 15095;
  } else {
    result[0] += 50568443;
    result[1] += 0;
    result[2] += 449782;
    result[3] += 28373036;
    result[4] += 6480544;
    result[5] += 0;
    result[6] += 27537;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17901932;
    result[1] += 374126;
    result[2] += 430244;
    result[3] += 37281662;
    result[4] += 29911379;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73421112;
    result[1] += 39739;
    result[2] += 203113;
    result[3] += 10358788;
    result[4] += 1836852;
    result[5] += 13246;
    result[6] += 26493;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 5133365;
    result[1] += 215171;
    result[2] += 245909;
    result[3] += 41558745;
    result[4] += 38592459;
    result[5] += 153693;
    result[6] += 0;
  } else {
    result[0] += 76885930;
    result[1] += 61177;
    result[2] += 192594;
    result[3] += 8732454;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27189;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 65606219;
    result[1] += 46974;
    result[2] += 287720;
    result[3] += 15924466;
    result[4] += 3992860;
    result[5] += 0;
    result[6] += 41102;
  } else {
    result[0] += 68815280;
    result[1] += 56530;
    result[2] += 232071;
    result[3] += 11454832;
    result[4] += 5310877;
    result[5] += 11901;
    result[6] += 17851;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 20368763;
    result[1] += 204198;
    result[2] += 595577;
    result[3] += 36160085;
    result[4] += 28570721;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 74106392;
    result[1] += 22339;
    result[2] += 218925;
    result[3] += 9833790;
    result[4] += 1682154;
    result[5] += 11169;
    result[6] += 24573;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 8881004;
    result[1] += 81228;
    result[2] += 379067;
    result[3] += 43701038;
    result[4] += 32762240;
    result[5] += 94766;
    result[6] += 0;
  } else {
    result[0] += 77539447;
    result[1] += 53174;
    result[2] += 215008;
    result[3] += 8066284;
    result[4] += 0;
    result[5] += 0;
    result[6] += 25431;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17386331;
    result[1] += 398436;
    result[2] += 488990;
    result[3] += 36927844;
    result[4] += 30697742;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73452285;
    result[1] += 33245;
    result[2] += 232717;
    result[3] += 10288328;
    result[4] += 1857307;
    result[5] += 17730;
    result[6] += 17730;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72214873;
    result[1] += 109009;
    result[2] += 195202;
    result[3] += 8933694;
    result[4] += 4428820;
    result[5] += 7605;
    result[6] += 10140;
  } else {
    result[0] += 50417627;
    result[1] += 0;
    result[2] += 482379;
    result[3] += 28826662;
    result[4] += 6128010;
    result[5] += 0;
    result[6] += 44664;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85814860;
    result[1] += 0;
    result[2] += 64989;
    result[3] += 0;
    result[4] += 16247;
    result[5] += 0;
    result[6] += 3249;
  } else {
    result[0] += 40309520;
    result[1] += 191278;
    result[2] += 553702;
    result[3] += 32572790;
    result[4] += 12206616;
    result[5] += 35235;
    result[6] += 30201;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10319525;
    result[1] += 221034;
    result[2] += 303921;
    result[3] += 41139956;
    result[4] += 33901092;
    result[5] += 13814;
    result[6] += 0;
  } else {
    result[0] += 77738424;
    result[1] += 41472;
    result[2] += 264964;
    result[3] += 7808403;
    result[4] += 0;
    result[5] += 0;
    result[6] += 46080;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17391462;
    result[1] += 222729;
    result[2] += 612506;
    result[3] += 38123867;
    result[4] += 29548781;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73732187;
    result[1] += 37566;
    result[2] += 198882;
    result[3] += 10116464;
    result[4] += 1781098;
    result[5] += 13258;
    result[6] += 19888;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85837140;
    result[1] += 0;
    result[2] += 49109;
    result[3] += 0;
    result[4] += 9821;
    result[5] += 0;
    result[6] += 3273;
  } else {
    result[0] += 40036270;
    result[1] += 134349;
    result[2] += 582182;
    result[3] += 32925677;
    result[4] += 12151202;
    result[5] += 29855;
    result[6] += 39807;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85833733;
    result[1] += 0;
    result[2] += 59050;
    result[3] += 0;
    result[4] += 6561;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39849240;
    result[1] += 158742;
    result[2] += 724261;
    result[3] += 32576865;
    result[4] += 12461258;
    result[5] += 49606;
    result[6] += 79371;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72134857;
    result[1] += 23401;
    result[2] += 268056;
    result[3] += 11537066;
    result[4] += 1906179;
    result[5] += 6382;
    result[6] += 23401;
  } else {
    result[0] += 8279123;
    result[1] += 302559;
    result[2] += 192537;
    result[3] += 34629291;
    result[4] += 42495833;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    result[0] += 72431010;
    result[1] += 93917;
    result[2] += 205604;
    result[3] += 8772439;
    result[4] += 4383681;
    result[5] += 7614;
    result[6] += 5076;
  } else {
    result[0] += 51482691;
    result[1] += 0;
    result[2] += 675882;
    result[3] += 27675614;
    result[4] += 5967332;
    result[5] += 17786;
    result[6] += 80038;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85843859;
    result[1] += 0;
    result[2] += 55486;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39705075;
    result[1] += 139982;
    result[2] += 544932;
    result[3] += 33225878;
    result[4] += 12198487;
    result[5] += 74990;
    result[6] += 9998;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17127854;
    result[1] += 185768;
    result[2] += 427267;
    result[3] += 37432349;
    result[4] += 30726106;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73446194;
    result[1] += 35353;
    result[2] += 218747;
    result[3] += 10325332;
    result[4] += 1836154;
    result[5] += 17676;
    result[6] += 19886;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85840771;
    result[1] += 0;
    result[2] += 45557;
    result[3] += 0;
    result[4] += 9762;
    result[5] += 0;
    result[6] += 3254;
  } else {
    result[0] += 39762914;
    result[1] += 140629;
    result[2] += 612741;
    result[3] += 32716385;
    result[4] += 12596360;
    result[5] += 20089;
    result[6] += 50224;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85843389;
    result[1] += 0;
    result[2] += 46081;
    result[3] += 0;
    result[4] += 6583;
    result[5] += 0;
    result[6] += 3291;
  } else {
    result[0] += 39812912;
    result[1] += 133269;
    result[2] += 518268;
    result[3] += 33124777;
    result[4] += 12241014;
    result[5] += 19743;
    result[6] += 49358;
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
