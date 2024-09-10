
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
    result[0] += 36814005;
    result[1] += 6135667;
  } else {
    result[0] += 11302545;
    result[1] += 31647127;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 41265372;
    result[1] += 1684300;
  } else {
    result[0] += 8711490;
    result[1] += 34238182;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 8417272;
    result[1] += 34532400;
  } else {
    result[0] += 36238786;
    result[1] += 6710886;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12298364;
    result[1] += 30651308;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9956515;
    result[1] += 32993157;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 42107522;
    result[1] += 842150;
  } else {
    result[0] += 10129639;
    result[1] += 32820033;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 42107522;
    result[1] += 842150;
  } else {
    result[0] += 7293340;
    result[1] += 35656332;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3f3190))) ) ) {
    result[0] += 13582375;
    result[1] += 29367297;
  } else {
    result[0] += 41468649;
    result[1] += 1481023;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9042036;
    result[1] += 33907636;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 40372692;
    result[1] += 2576980;
  } else {
    result[0] += 8872232;
    result[1] += 34077440;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b3c60))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8921912;
    result[1] += 34027760;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 11623994;
    result[1] += 31325678;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c71fddf))) ) ) {
    result[0] += 29066950;
    result[1] += 13882722;
  } else {
    result[0] += 9689865;
    result[1] += 33259807;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f15a21e))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9827467;
    result[1] += 33122205;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f58ef88))) ) ) {
    result[0] += 38347922;
    result[1] += 4601750;
  } else {
    result[0] += 14072871;
    result[1] += 28876801;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e985682))) ) ) {
    result[0] += 27837750;
    result[1] += 15111921;
  } else {
    result[0] += 6927366;
    result[1] += 36022306;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 7961402;
    result[1] += 34988270;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 39987626;
    result[1] += 2962046;
  } else {
    result[0] += 11563373;
    result[1] += 31386299;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 42107522;
    result[1] += 842150;
  } else {
    result[0] += 10129639;
    result[1] += 32820033;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 27943160;
    result[1] += 15006512;
  } else {
    result[0] += 7874106;
    result[1] += 35075566;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ac7e282))) ) ) {
    result[0] += 29838720;
    result[1] += 13110952;
  } else {
    result[0] += 8436542;
    result[1] += 34513130;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9942053;
    result[1] += 33007619;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8180890;
    result[1] += 34768782;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0cc4f0))) ) ) {
    result[0] += 42073149;
    result[1] += 876523;
  } else {
    result[0] += 13246160;
    result[1] += 29703512;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e175643))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 7735012;
    result[1] += 35214660;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 14559211;
    result[1] += 28390461;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 41442666;
    result[1] += 1507006;
  } else {
    result[0] += 9799197;
    result[1] += 33150475;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 7486640;
    result[1] += 35463032;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 30530490;
    result[1] += 12419182;
  } else {
    result[0] += 10260199;
    result[1] += 32689473;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    result[0] += 39485989;
    result[1] += 3463683;
  } else {
    result[0] += 9615598;
    result[1] += 33334074;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
    result[0] += 41819418;
    result[1] += 1130254;
  } else {
    result[0] += 10498808;
    result[1] += 32450864;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e94dd2f))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 11077517;
    result[1] += 31872155;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edb851e))) ) ) {
    result[0] += 38462393;
    result[1] += 4487279;
  } else {
    result[0] += 7450453;
    result[1] += 35499219;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3daf6168))) ) ) {
    result[0] += 25162434;
    result[1] += 17787238;
  } else {
    result[0] += 8118535;
    result[1] += 34831137;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8152484;
    result[1] += 34797188;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3dc5e5f4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 7505768;
    result[1] += 35443904;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 14001214;
    result[1] += 28948457;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de38866))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10534825;
    result[1] += 32414847;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 41927061;
    result[1] += 1022611;
  } else {
    result[0] += 10883175;
    result[1] += 32066497;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9911462;
    result[1] += 33038209;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ef4e854))) ) ) {
    result[0] += 41848399;
    result[1] += 1101273;
  } else {
    result[0] += 10737418;
    result[1] += 32212254;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e3230fd))) ) ) {
    result[0] += 28377462;
    result[1] += 14572210;
  } else {
    result[0] += 7679742;
    result[1] += 35269930;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 40086361;
    result[1] += 2863311;
  } else {
    result[0] += 10138334;
    result[1] += 32811338;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 9962553;
    result[1] += 32987119;
  } else {
    result[0] += 36725082;
    result[1] += 6224590;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 6740980;
    result[1] += 36208692;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13553007;
    result[1] += 29396665;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edfb5f2))) ) ) {
    result[0] += 41468649;
    result[1] += 1481023;
  } else {
    result[0] += 8380423;
    result[1] += 34569248;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 40346662;
    result[1] += 2603010;
  } else {
    result[0] += 10830787;
    result[1] += 32118885;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 29054190;
    result[1] += 13895482;
  } else {
    result[0] += 9030444;
    result[1] += 33919228;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cebc409))) ) ) {
    result[0] += 39513699;
    result[1] += 3435973;
  } else {
    result[0] += 10283724;
    result[1] += 32665948;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e353cde))) ) ) {
    result[0] += 28893416;
    result[1] += 14056256;
  } else {
    result[0] += 8702221;
    result[1] += 34247451;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ddc0443))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 7613805;
    result[1] += 35335867;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ba93f29))) ) ) {
    result[0] += 29600450;
    result[1] += 13349222;
  } else {
    result[0] += 9317124;
    result[1] += 33632548;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 8632042;
    result[1] += 34317630;
  } else {
    result[0] += 40037830;
    result[1] += 2911842;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 41973544;
    result[1] += 976128;
  } else {
    result[0] += 8825275;
    result[1] += 34124397;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 42139301;
    result[1] += 810371;
  } else {
    result[0] += 8998979;
    result[1] += 33950693;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3df465e8))) ) ) {
    result[0] += 30013024;
    result[1] += 12936648;
  } else {
    result[0] += 9544371;
    result[1] += 33405301;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8125613;
    result[1] += 34824059;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e97f8ca))) ) ) {
    result[0] += 29635274;
    result[1] += 13314398;
  } else {
    result[0] += 7641352;
    result[1] += 35308320;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9053117;
    result[1] += 33896555;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 8320093;
    result[1] += 34629579;
  } else {
    result[0] += 37580963;
    result[1] += 5368709;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3c6d1e))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9011761;
    result[1] += 33937911;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10873334;
    result[1] += 32076338;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ef4e854))) ) ) {
    result[0] += 40265318;
    result[1] += 2684354;
  } else {
    result[0] += 10412041;
    result[1] += 32537631;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 41927061;
    result[1] += 1022611;
  } else {
    result[0] += 8356723;
    result[1] += 34592949;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 11235779;
    result[1] += 31713893;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12056048;
    result[1] += 30893624;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 39268272;
    result[1] += 3681400;
  } else {
    result[0] += 11679297;
    result[1] += 31270375;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e32c12b))) ) ) {
    result[0] += 24365679;
    result[1] += 18583993;
  } else {
    result[0] += 6482969;
    result[1] += 36466703;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0b1ceb))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12732867;
    result[1] += 30216805;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
    result[0] += 13009651;
    result[1] += 29940020;
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8345671;
    result[1] += 34604001;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 7640086;
    result[1] += 35309586;
  } else {
    result[0] += 37483350;
    result[1] += 5466322;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13758769;
    result[1] += 29190903;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 30780598;
    result[1] += 12169074;
  } else {
    result[0] += 9309288;
    result[1] += 33640384;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 11379827;
    result[1] += 31569845;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 41082295;
    result[1] += 1867377;
  } else {
    result[0] += 8708689;
    result[1] += 34240983;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b3c60))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8471724;
    result[1] += 34477948;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9566063;
    result[1] += 33383609;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 40021286;
    result[1] += 2928386;
  } else {
    result[0] += 9609744;
    result[1] += 33339928;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 41297762;
    result[1] += 1651910;
  } else {
    result[0] += 11779446;
    result[1] += 31170226;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df28b6e))) ) ) {
    result[0] += 28447185;
    result[1] += 14502486;
  } else {
    result[0] += 9929225;
    result[1] += 33020447;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    result[0] += 41607495;
    result[1] += 1342177;
  } else {
    result[0] += 10226112;
    result[1] += 32723560;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8628282;
    result[1] += 34321390;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 30013024;
    result[1] += 12936648;
  } else {
    result[0] += 8112716;
    result[1] += 34836956;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 41082295;
    result[1] += 1867377;
  } else {
    result[0] += 10292087;
    result[1] += 32657585;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e92f05a))) ) ) {
    result[0] += 36200438;
    result[1] += 6749234;
  } else {
    result[0] += 6676114;
    result[1] += 36273557;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 41468649;
    result[1] += 1481023;
  } else {
    result[0] += 10475529;
    result[1] += 32474142;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 41686447;
    result[1] += 1263225;
  } else {
    result[0] += 14254039;
    result[1] += 28695633;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c02d384))) ) ) {
    result[0] += 31700949;
    result[1] += 11248723;
  } else {
    result[0] += 10557461;
    result[1] += 32392211;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f5a3bcd))) ) ) {
    result[0] += 13410446;
    result[1] += 29539226;
  } else {
    result[0] += 41297762;
    result[1] += 1651910;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 40133300;
    result[1] += 2816371;
  } else {
    result[0] += 6378664;
    result[1] += 36571008;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 11644133;
    result[1] += 31305539;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ddc0443))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9637487;
    result[1] += 33312185;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8471724;
    result[1] += 34477948;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d540cc8))) ) ) {
    result[0] += 28780708;
    result[1] += 14168964;
  } else {
    result[0] += 8020722;
    result[1] += 34928950;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 42221712;
    result[1] += 727960;
  } else {
    result[0] += 6105590;
    result[1] += 36844082;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10441892;
    result[1] += 32507779;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 42054888;
    result[1] += 894784;
  } else {
    result[0] += 9788530;
    result[1] += 33161142;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 32061023;
    result[1] += 10888649;
  } else {
    result[0] += 13198076;
    result[1] += 29751596;
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
