
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
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 9348498;
    result[1] += 44338592;
  } else {
    result[0] += 51089328;
    result[1] += 2597762;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 51955249;
    result[1] += 1731841;
  } else {
    result[0] += 9348498;
    result[1] += 44338592;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 33846209;
    result[1] += 19840881;
  } else {
    result[0] += 13186303;
    result[1] += 40500788;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e932768))) ) ) {
    result[0] += 52438554;
    result[1] += 1248537;
  } else {
    result[0] += 13177740;
    result[1] += 40509350;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12570635;
    result[1] += 41116455;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12647439;
    result[1] += 41039651;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 49426210;
    result[1] += 4260880;
  } else {
    result[0] += 10468982;
    result[1] += 43218108;
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
    result[0] += 17296677;
    result[1] += 36390413;
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e937bf2))) ) ) {
    result[0] += 52613349;
    result[1] += 1073741;
  } else {
    result[0] += 8569770;
    result[1] += 45117320;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4505d1))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15435038;
    result[1] += 38252052;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 36953452;
    result[1] += 16733638;
  } else {
    result[0] += 10102409;
    result[1] += 43584681;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    result[0] += 49984533;
    result[1] += 3702558;
  } else {
    result[0] += 14913080;
    result[1] += 38774010;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11555965;
    result[1] += 42131125;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 51734833;
    result[1] += 1952257;
  } else {
    result[0] += 10582551;
    result[1] += 43104539;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13733907;
    result[1] += 39953184;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 8194345;
    result[1] += 45492745;
  } else {
    result[0] += 47068134;
    result[1] += 6618956;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 9654257;
    result[1] += 44032833;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e4595ff))) ) ) {
    result[0] += 51418622;
    result[1] += 2268468;
  } else {
    result[0] += 13142152;
    result[1] += 40544938;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 6991807;
    result[1] += 46695283;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13293946;
    result[1] += 40393144;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4b25c4))) ) ) {
    result[0] += 16536530;
    result[1] += 37150560;
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 52710962;
    result[1] += 976128;
  } else {
    result[0] += 10840662;
    result[1] += 42846428;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f667a64))) ) ) {
    result[0] += 51955249;
    result[1] += 1731841;
  } else {
    result[0] += 16661511;
    result[1] += 37025580;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13038293;
    result[1] += 40648797;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 8053063;
    result[1] += 45634027;
  } else {
    result[0] += 49426210;
    result[1] += 4260880;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 49941480;
    result[1] += 3745611;
  } else {
    result[0] += 9517257;
    result[1] += 44169834;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 38056672;
    result[1] += 15630418;
  } else {
    result[0] += 13129995;
    result[1] += 40557096;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
    result[0] += 51835812;
    result[1] += 1851279;
  } else {
    result[0] += 17666265;
    result[1] += 36020826;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 51734833;
    result[1] += 1952257;
  } else {
    result[0] += 12647439;
    result[1] += 41039651;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12806095;
    result[1] += 40880996;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    result[0] += 52674127;
    result[1] += 1012963;
  } else {
    result[0] += 10481765;
    result[1] += 43205325;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 10005321;
    result[1] += 43681769;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    result[0] += 49919576;
    result[1] += 3767515;
  } else {
    result[0] += 11467145;
    result[1] += 42219945;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d277708))) ) ) {
    result[0] += 51622203;
    result[1] += 2064888;
  } else {
    result[0] += 11958735;
    result[1] += 41728355;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12895428;
    result[1] += 40791662;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15014186;
    result[1] += 38672904;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef7342f))) ) ) {
    result[0] += 51769695;
    result[1] += 1917396;
  } else {
    result[0] += 14164253;
    result[1] += 39522837;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14849620;
    result[1] += 38837470;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d939432))) ) ) {
    result[0] += 33000322;
    result[1] += 20686769;
  } else {
    result[0] += 11504376;
    result[1] += 42182714;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 52777140;
    result[1] += 909950;
  } else {
    result[0] += 10263708;
    result[1] += 43423382;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
    result[0] += 47179564;
    result[1] += 6507526;
  } else {
    result[0] += 14939016;
    result[1] += 38748074;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    result[0] += 51982739;
    result[1] += 1704352;
  } else {
    result[0] += 11542724;
    result[1] += 42144366;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 52009369;
    result[1] += 1677721;
  } else {
    result[0] += 17198462;
    result[1] += 36488629;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f220e94))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15274988;
    result[1] += 38412102;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 9302218;
    result[1] += 44384872;
  } else {
    result[0] += 45766044;
    result[1] += 7921046;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f71ab4c))) ) ) {
    result[0] += 17506660;
    result[1] += 36180431;
  } else {
    result[0] += 47179564;
    result[1] += 6507526;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4b9970))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12709597;
    result[1] += 40977494;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f65c098))) ) ) {
    result[0] += 15842092;
    result[1] += 37844998;
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14104235;
    result[1] += 39582855;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13869165;
    result[1] += 39817925;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f67b938))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13194285;
    result[1] += 40492806;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 52274272;
    result[1] += 1412818;
  } else {
    result[0] += 8828543;
    result[1] += 44858547;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 51539607;
    result[1] += 2147483;
  } else {
    result[0] += 12406680;
    result[1] += 41280410;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f168922))) ) ) {
    result[0] += 51352869;
    result[1] += 2334221;
  } else {
    result[0] += 17224608;
    result[1] += 36462482;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 52634403;
    result[1] += 1052688;
  } else {
    result[0] += 9369916;
    result[1] += 44317174;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 11683201;
    result[1] += 42003889;
  } else {
    result[0] += 46017506;
    result[1] += 7669584;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 11069503;
    result[1] += 42617587;
  } else {
    result[0] += 45128279;
    result[1] += 8558811;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
    result[0] += 51622203;
    result[1] += 2064888;
  } else {
    result[0] += 13230941;
    result[1] += 40456149;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12427567;
    result[1] += 41259523;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 39415839;
    result[1] += 14271252;
  } else {
    result[0] += 13713550;
    result[1] += 39973540;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11902326;
    result[1] += 41784764;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e4595ff))) ) ) {
    result[0] += 46976204;
    result[1] += 6710886;
  } else {
    result[0] += 11524454;
    result[1] += 42162637;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 52591436;
    result[1] += 1095654;
  } else {
    result[0] += 11540215;
    result[1] += 42146875;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 10882518;
    result[1] += 42804572;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3eb060fe))) ) ) {
    result[0] += 46230550;
    result[1] += 7456540;
  } else {
    result[0] += 15845969;
    result[1] += 37841121;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 10625570;
    result[1] += 43061521;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eb48fda))) ) ) {
    result[0] += 32212254;
    result[1] += 21474836;
  } else {
    result[0] += 11245269;
    result[1] += 42441822;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 52777140;
    result[1] += 909950;
  } else {
    result[0] += 10790052;
    result[1] += 42897038;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e4ebaf1))) ) ) {
    result[0] += 51955249;
    result[1] += 1731841;
  } else {
    result[0] += 13884592;
    result[1] += 39802498;
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
    result[0] += 15078076;
    result[1] += 38609014;
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15241674;
    result[1] += 38445416;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 36333687;
    result[1] += 17353403;
  } else {
    result[0] += 9166088;
    result[1] += 44521002;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 49635235;
    result[1] += 4051855;
  } else {
    result[0] += 10993071;
    result[1] += 42694020;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15307476;
    result[1] += 38379614;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3ead1f60))) ) ) {
    result[0] += 35140641;
    result[1] += 18546449;
  } else {
    result[0] += 10877776;
    result[1] += 42809314;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    result[0] += 17296677;
    result[1] += 36390413;
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 46976204;
    result[1] += 6710886;
  } else {
    result[0] += 12140297;
    result[1] += 41546794;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
    result[0] += 50619257;
    result[1] += 3067833;
  } else {
    result[0] += 14599121;
    result[1] += 39087969;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12915290;
    result[1] += 40771800;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e933483))) ) ) {
    result[0] += 49448636;
    result[1] += 4238454;
  } else {
    result[0] += 8899999;
    result[1] += 44787092;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
