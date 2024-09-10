
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 10475529;
    result[1] += 43211561;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15004252;
    result[1] += 38682838;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e971de6))) ) ) {
    result[0] += 36099940;
    result[1] += 17587150;
  } else {
    result[0] += 10226112;
    result[1] += 43460978;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13163661;
    result[1] += 40523429;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 52728393;
    result[1] += 958698;
  } else {
    result[0] += 9596243;
    result[1] += 44090847;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 52761451;
    result[1] += 925639;
  } else {
    result[0] += 13618188;
    result[1] += 40068902;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14044724;
    result[1] += 39642366;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f533919))) ) ) {
    result[0] += 18602106;
    result[1] += 35084985;
  } else {
    result[0] += 49085340;
    result[1] += 4601750;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12662049;
    result[1] += 41025041;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3da8c155))) ) ) {
    result[0] += 37636311;
    result[1] += 16050779;
  } else {
    result[0] += 8408821;
    result[1] += 45278269;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e44dd2f))) ) ) {
    result[0] += 29987384;
    result[1] += 23699706;
  } else {
    result[0] += 9183318;
    result[1] += 44503772;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f705e0c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16310002;
    result[1] += 37377088;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
    result[0] += 16661511;
    result[1] += 37025580;
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3bff9725))) ) ) {
    result[0] += 36583239;
    result[1] += 17103852;
  } else {
    result[0] += 8589934;
    result[1] += 45097156;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 11441511;
    result[1] += 42245579;
  } else {
    result[0] += 46305116;
    result[1] += 7381975;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 11485298;
    result[1] += 42201793;
  } else {
    result[0] += 41564199;
    result[1] += 12122891;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
    result[0] += 51495781;
    result[1] += 2191309;
  } else {
    result[0] += 10787593;
    result[1] += 42899498;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 50383270;
    result[1] += 3303820;
  } else {
    result[0] += 8676701;
    result[1] += 45010389;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 12808595;
    result[1] += 40878495;
  } else {
    result[0] += 47993005;
    result[1] += 5694085;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d0801f7))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12832524;
    result[1] += 40854566;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12122891;
    result[1] += 41564199;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 17124330;
    result[1] += 36562760;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e110b63))) ) ) {
    result[0] += 38654705;
    result[1] += 15032385;
  } else {
    result[0] += 10869165;
    result[1] += 42817925;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3df4f8b6))) ) ) {
    result[0] += 38266330;
    result[1] += 15420760;
  } else {
    result[0] += 10800953;
    result[1] += 42886137;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
    result[0] += 17273238;
    result[1] += 36413853;
  } else {
    result[0] += 52060209;
    result[1] += 1626881;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 8727458;
    result[1] += 44959633;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 51352869;
    result[1] += 2334221;
  } else {
    result[0] += 11069503;
    result[1] += 42617587;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 52761451;
    result[1] += 925639;
  } else {
    result[0] += 11784971;
    result[1] += 41902119;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e0dd980))) ) ) {
    result[0] += 35624144;
    result[1] += 18062946;
  } else {
    result[0] += 11356884;
    result[1] += 42330206;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 49357487;
    result[1] += 4329604;
  } else {
    result[0] += 14156297;
    result[1] += 39530793;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    result[0] += 51246768;
    result[1] += 2440322;
  } else {
    result[0] += 10541301;
    result[1] += 43145790;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ed5a46a))) ) ) {
    result[0] += 51002736;
    result[1] += 2684354;
  } else {
    result[0] += 17093199;
    result[1] += 36593891;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 48240574;
    result[1] += 5446516;
  } else {
    result[0] += 8025389;
    result[1] += 45661701;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f682c90))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 19014178;
    result[1] += 34672913;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 10914408;
    result[1] += 42772682;
  } else {
    result[0] += 45733448;
    result[1] += 7953643;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4883ba))) ) ) {
    result[0] += 18583993;
    result[1] += 35103098;
  } else {
    result[0] += 49984533;
    result[1] += 3702558;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a7e4799))) ) ) {
    result[0] += 40111045;
    result[1] += 13576046;
  } else {
    result[0] += 9761289;
    result[1] += 43925801;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e29fa98))) ) ) {
    result[0] += 38677796;
    result[1] += 15009294;
  } else {
    result[0] += 8210966;
    result[1] += 45476124;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ec96bba))) ) ) {
    result[0] += 51046742;
    result[1] += 2640348;
  } else {
    result[0] += 11428440;
    result[1] += 42258650;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 50529027;
    result[1] += 3158064;
  } else {
    result[0] += 16176459;
    result[1] += 37510631;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 52909017;
    result[1] += 778073;
  } else {
    result[0] += 8302127;
    result[1] += 45384963;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
    result[0] += 50059585;
    result[1] += 3627506;
  } else {
    result[0] += 11362347;
    result[1] += 42324743;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 18813425;
    result[1] += 34873666;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e075e20))) ) ) {
    result[0] += 32307276;
    result[1] += 21379815;
  } else {
    result[0] += 9663676;
    result[1] += 44023414;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e0b367a))) ) ) {
    result[0] += 34164512;
    result[1] += 19522578;
  } else {
    result[0] += 13191685;
    result[1] += 40495405;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed96c61))) ) ) {
    result[0] += 48109211;
    result[1] += 5577879;
  } else {
    result[0] += 11834251;
    result[1] += 41852839;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    result[0] += 35791394;
    result[1] += 17895697;
  } else {
    result[0] += 10670726;
    result[1] += 43016364;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    result[0] += 49357487;
    result[1] += 4329604;
  } else {
    result[0] += 10951098;
    result[1] += 42735992;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 10400117;
    result[1] += 43286974;
  } else {
    result[0] += 46230550;
    result[1] += 7456540;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f673238))) ) ) {
    result[0] += 20216896;
    result[1] += 33470194;
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 36758729;
    result[1] += 16928362;
  } else {
    result[0] += 10596136;
    result[1] += 43090954;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 10682635;
    result[1] += 43004455;
  } else {
    result[0] += 44872792;
    result[1] += 8814298;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 52821170;
    result[1] += 865920;
  } else {
    result[0] += 13622097;
    result[1] += 40064993;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15339168;
    result[1] += 38347922;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e846f16))) ) ) {
    result[0] += 33159673;
    result[1] += 20527417;
  } else {
    result[0] += 8003044;
    result[1] += 45684046;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    result[0] += 48035818;
    result[1] += 5651272;
  } else {
    result[0] += 10909676;
    result[1] += 42777414;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11184810;
    result[1] += 42502280;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    result[0] += 52674127;
    result[1] += 1012963;
  } else {
    result[0] += 11248723;
    result[1] += 42438367;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d5cfb))) ) ) {
    result[0] += 51035876;
    result[1] += 2651214;
  } else {
    result[0] += 10324440;
    result[1] += 43362650;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ec176de))) ) ) {
    result[0] += 33004359;
    result[1] += 20682731;
  } else {
    result[0] += 10661266;
    result[1] += 43025824;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3bb97785))) ) ) {
    result[0] += 34378575;
    result[1] += 19308515;
  } else {
    result[0] += 14052325;
    result[1] += 39634765;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 49557314;
    result[1] += 4129776;
  } else {
    result[0] += 18694612;
    result[1] += 34992479;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1e08af))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11988379;
    result[1] += 41698711;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e47396d))) ) ) {
    result[0] += 30483348;
    result[1] += 23203742;
  } else {
    result[0] += 10737418;
    result[1] += 42949672;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 13490602;
    result[1] += 40196488;
  } else {
    result[0] += 48949994;
    result[1] += 4737096;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f4d9c8d))) ) ) {
    result[0] += 18360520;
    result[1] += 35326570;
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6eb852))) ) ) {
    result[0] += 47551423;
    result[1] += 6135667;
  } else {
    result[0] += 14599121;
    result[1] += 39087969;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11467145;
    result[1] += 42219945;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 40409638;
    result[1] += 13277452;
  } else {
    result[0] += 11369031;
    result[1] += 42318060;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 35608784;
    result[1] += 18078306;
  } else {
    result[0] += 10737418;
    result[1] += 42949672;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14423397;
    result[1] += 39263693;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 10468982;
    result[1] += 43218108;
  } else {
    result[0] += 44313154;
    result[1] += 9373936;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13293946;
    result[1] += 40393144;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16391191;
    result[1] += 37295899;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d7d7b20))) ) ) {
    result[0] += 50481891;
    result[1] += 3205199;
  } else {
    result[0] += 14243513;
    result[1] += 39443577;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 52710962;
    result[1] += 976128;
  } else {
    result[0] += 11098773;
    result[1] += 42588317;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 51769695;
    result[1] += 1917396;
  } else {
    result[0] += 11411748;
    result[1] += 42275342;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13227254;
    result[1] += 40459836;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e218937))) ) ) {
    result[0] += 40002146;
    result[1] += 13684944;
  } else {
    result[0] += 15672629;
    result[1] += 38014462;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d1d4413))) ) ) {
    result[0] += 38163113;
    result[1] += 15523978;
  } else {
    result[0] += 13123511;
    result[1] += 40563580;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
