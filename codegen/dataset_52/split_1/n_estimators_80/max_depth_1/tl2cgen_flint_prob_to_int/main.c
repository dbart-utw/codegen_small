
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
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
    result[0] += 51955249;
    result[1] += 1731841;
  } else {
    result[0] += 14578822;
    result[1] += 39108269;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 10213641;
    result[1] += 43473449;
  } else {
    result[0] += 45356335;
    result[1] += 8330755;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cebc409))) ) ) {
    result[0] += 49557314;
    result[1] += 4129776;
  } else {
    result[0] += 9107631;
    result[1] += 44579459;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f60fe9c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15564744;
    result[1] += 38122346;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 9077527;
    result[1] += 44609563;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b90ea))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11988379;
    result[1] += 41698711;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f667a64))) ) ) {
    result[0] += 50619257;
    result[1] += 3067833;
  } else {
    result[0] += 16718348;
    result[1] += 36968742;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 42949672;
    result[1] += 10737418;
  } else {
    result[0] += 11846447;
    result[1] += 41840643;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 52634403;
    result[1] += 1052688;
  } else {
    result[0] += 9876398;
    result[1] += 43810692;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 9994937;
    result[1] += 43692153;
  } else {
    result[0] += 43665500;
    result[1] += 10021590;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5bced9))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15668335;
    result[1] += 38018755;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12330049;
    result[1] += 41357041;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3df6e04c))) ) ) {
    result[0] += 29283867;
    result[1] += 24403223;
  } else {
    result[0] += 11784971;
    result[1] += 41902119;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed81301))) ) ) {
    result[0] += 51352869;
    result[1] += 2334221;
  } else {
    result[0] += 7748652;
    result[1] += 45938438;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11521887;
    result[1] += 42165204;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d63c750))) ) ) {
    result[0] += 39558909;
    result[1] += 14128181;
  } else {
    result[0] += 13291464;
    result[1] += 40395626;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f682c90))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15658734;
    result[1] += 38028356;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12235662;
    result[1] += 41451428;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14116002;
    result[1] += 39571088;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 13353641;
    result[1] += 40333449;
  } else {
    result[0] += 43925801;
    result[1] += 9761289;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 52408827;
    result[1] += 1278264;
  } else {
    result[0] += 12875184;
    result[1] += 40811906;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 52654647;
    result[1] += 1032444;
  } else {
    result[0] += 14248706;
    result[1] += 39438384;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b90ea))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 9166088;
    result[1] += 44521002;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 37642673;
    result[1] += 16044418;
  } else {
    result[0] += 14336893;
    result[1] += 39350197;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f65f7a4))) ) ) {
    result[0] += 52060209;
    result[1] += 1626881;
  } else {
    result[0] += 14939016;
    result[1] += 38748074;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12502473;
    result[1] += 41184617;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    result[0] += 30678337;
    result[1] += 23008753;
  } else {
    result[0] += 7466416;
    result[1] += 46220674;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e175643))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11659317;
    result[1] += 42027773;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 51698680;
    result[1] += 1988410;
  } else {
    result[0] += 14331723;
    result[1] += 39355367;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 9833774;
    result[1] += 43853317;
  } else {
    result[0] += 43125696;
    result[1] += 10561394;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11456241;
    result[1] += 42230849;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12915290;
    result[1] += 40771800;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14190420;
    result[1] += 39496670;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eea2142))) ) ) {
    result[0] += 51622203;
    result[1] += 2064888;
  } else {
    result[0] += 15856946;
    result[1] += 37830144;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 52728393;
    result[1] += 958698;
  } else {
    result[0] += 13227254;
    result[1] += 40459836;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 51246768;
    result[1] += 2440322;
  } else {
    result[0] += 11521887;
    result[1] += 42165204;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16060240;
    result[1] += 37626850;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eddbdf9))) ) ) {
    result[0] += 51897521;
    result[1] += 1789569;
  } else {
    result[0] += 12165547;
    result[1] += 41521543;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 49085340;
    result[1] += 4601750;
  } else {
    result[0] += 15305530;
    result[1] += 38381560;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 9623157;
    result[1] += 44063933;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    result[0] += 49796722;
    result[1] += 3890368;
  } else {
    result[0] += 10516028;
    result[1] += 43171063;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
    result[0] += 16220355;
    result[1] += 37466735;
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 52674127;
    result[1] += 1012963;
  } else {
    result[0] += 10226112;
    result[1] += 43460978;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 50758704;
    result[1] += 2928386;
  } else {
    result[0] += 9808218;
    result[1] += 43878872;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 10987125;
    result[1] += 42699965;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e943bf7))) ) ) {
    result[0] += 30483348;
    result[1] += 23203742;
  } else {
    result[0] += 8515883;
    result[1] += 45171207;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 51835812;
    result[1] += 1851279;
  } else {
    result[0] += 13307056;
    result[1] += 40380034;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14786698;
    result[1] += 38900392;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edb851e))) ) ) {
    result[0] += 51897521;
    result[1] += 1789569;
  } else {
    result[0] += 10049800;
    result[1] += 43637290;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 32554938;
    result[1] += 21132152;
  } else {
    result[0] += 8894902;
    result[1] += 44792188;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edfe282))) ) ) {
    result[0] += 48806446;
    result[1] += 4880644;
  } else {
    result[0] += 7743330;
    result[1] += 45943760;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f70beb6))) ) ) {
    result[0] += 51769695;
    result[1] += 1917396;
  } else {
    result[0] += 12565063;
    result[1] += 41122027;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e65e4a4))) ) ) {
    result[0] += 33000322;
    result[1] += 20686769;
  } else {
    result[0] += 8366819;
    result[1] += 45320271;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 35608784;
    result[1] += 18078306;
  } else {
    result[0] += 11388170;
    result[1] += 42298920;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 10119032;
    result[1] += 43568058;
  } else {
    result[0] += 41756626;
    result[1] += 11930464;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 37456110;
    result[1] += 16230981;
  } else {
    result[0] += 9402823;
    result[1] += 44284267;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13244392;
    result[1] += 40442698;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a7e4799))) ) ) {
    result[0] += 37082836;
    result[1] += 16604255;
  } else {
    result[0] += 9379070;
    result[1] += 44308021;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e64d402))) ) ) {
    result[0] += 35214113;
    result[1] += 18472977;
  } else {
    result[0] += 10421611;
    result[1] += 43265479;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 51982739;
    result[1] += 1704352;
  } else {
    result[0] += 9395240;
    result[1] += 44291850;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e1b2e9c))) ) ) {
    result[0] += 33554431;
    result[1] += 20132659;
  } else {
    result[0] += 8679948;
    result[1] += 45007142;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ee207b4))) ) ) {
    result[0] += 49334083;
    result[1] += 4353007;
  } else {
    result[0] += 13302996;
    result[1] += 40384095;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    result[0] += 51926858;
    result[1] += 1760232;
  } else {
    result[0] += 11959995;
    result[1] += 41727095;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13778103;
    result[1] += 39908988;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 52821170;
    result[1] += 865920;
  } else {
    result[0] += 6944598;
    result[1] += 46742492;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 51495781;
    result[1] += 2191309;
  } else {
    result[0] += 10787593;
    result[1] += 42899498;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f2d2cd0))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15658734;
    result[1] += 38028356;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e971de6))) ) ) {
    result[0] += 33358969;
    result[1] += 20328121;
  } else {
    result[0] += 8388607;
    result[1] += 45298483;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f15a21e))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16834087;
    result[1] += 36853003;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 8125613;
    result[1] += 45561477;
  } else {
    result[0] += 45427538;
    result[1] += 8259552;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e88d1b7))) ) ) {
    result[0] += 31453043;
    result[1] += 22234047;
  } else {
    result[0] += 11130250;
    result[1] += 42556840;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 51982739;
    result[1] += 1704352;
  } else {
    result[0] += 9932111;
    result[1] += 43754979;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b3c60))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12427567;
    result[1] += 41259523;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e5a03c4))) ) ) {
    result[0] += 35338338;
    result[1] += 18348752;
  } else {
    result[0] += 12254662;
    result[1] += 41432429;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12189822;
    result[1] += 41497268;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 51897521;
    result[1] += 1789569;
  } else {
    result[0] += 9785331;
    result[1] += 43901759;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12140297;
    result[1] += 41546794;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 52634403;
    result[1] += 1052688;
  } else {
    result[0] += 9116675;
    result[1] += 44570415;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11523082;
    result[1] += 42164008;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e422142))) ) ) {
    result[0] += 35970351;
    result[1] += 17716740;
  } else {
    result[0] += 12186640;
    result[1] += 41500450;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
