
#include "header.h"


static const int32_t num_class[] = {  6, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 36;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15673604;
    result[1] += 7394286;
    result[2] += 1698687;
    result[3] += 5524303;
    result[4] += 7351462;
    result[5] += 16044746;
  } else {
    result[0] += 403283;
    result[1] += 453693;
    result[2] += 44058702;
    result[3] += 6200480;
    result[4] += 151231;
    result[5] += 2419699;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16207423;
    result[1] += 7927544;
    result[2] += 939560;
    result[3] += 4683123;
    result[4] += 8133073;
    result[5] += 15796365;
  } else {
    result[0] += 826661;
    result[1] += 0;
    result[2] += 43399744;
    result[3] += 7394030;
    result[4] += 0;
    result[5] += 2066654;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16605825;
    result[1] += 7998218;
    result[2] += 898847;
    result[3] += 4372359;
    result[4] += 8394321;
    result[5] += 15417518;
  } else {
    result[0] += 865920;
    result[1] += 453577;
    result[2] += 40244701;
    result[3] += 7793287;
    result[4] += 618514;
    result[5] += 3711089;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    result[0] += 3060695;
    result[1] += 1061873;
    result[2] += 249852;
    result[3] += 8932232;
    result[4] += 11368296;
    result[5] += 29014140;
  } else {
    result[0] += 18368000;
    result[1] += 8052199;
    result[2] += 18074250;
    result[3] += 3766908;
    result[4] += 3542276;
    result[5] += 1883454;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16251535;
    result[1] += 7484259;
    result[2] += 2024314;
    result[3] += 5887617;
    result[4] += 7370214;
    result[5] += 14669149;
  } else {
    result[0] += 810371;
    result[1] += 253240;
    result[2] += 44469118;
    result[3] += 5925839;
    result[4] += 202592;
    result[5] += 2025927;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17086222;
    result[1] += 8274093;
    result[2] += 887029;
    result[3] += 4551478;
    result[4] += 7706976;
    result[5] += 15181290;
  } else {
    result[0] += 804832;
    result[1] += 0;
    result[2] += 42277400;
    result[3] += 7953643;
    result[4] += 47343;
    result[5] += 2603871;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16234719;
    result[1] += 7364805;
    result[2] += 1665848;
    result[3] += 4792968;
    result[4] += 8080827;
    result[5] += 15547921;
  } else {
    result[0] += 652447;
    result[1] += 419430;
    result[2] += 41477006;
    result[3] += 6431266;
    result[4] += 978670;
    result[5] += 3728270;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16322814;
    result[1] += 7341702;
    result[2] += 1710687;
    result[3] += 5260365;
    result[4] += 7797886;
    result[5] += 15253634;
  } else {
    result[0] += 962315;
    result[1] += 202592;
    result[2] += 43253562;
    result[3] += 6280376;
    result[4] += 506481;
    result[5] += 2481761;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15954452;
    result[1] += 8012998;
    result[2] += 1888778;
    result[3] += 5194140;
    result[4] += 7626657;
    result[5] += 15010063;
  } else {
    result[0] += 549867;
    result[1] += 349915;
    result[2] += 44939194;
    result[3] += 5348713;
    result[4] += 199951;
    result[5] += 2299447;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16563499;
    result[1] += 7762336;
    result[2] += 1442813;
    result[3] += 5150844;
    result[4] += 7618055;
    result[5] += 15149541;
  } else {
    result[0] += 1408982;
    result[1] += 242928;
    result[2] += 42998258;
    result[3] += 6316128;
    result[4] += 291513;
    result[5] += 2429280;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16397253;
    result[1] += 7606384;
    result[2] += 1855215;
    result[3] += 5066166;
    result[4] += 7863260;
    result[5] += 14898809;
  } else {
    result[0] += 302746;
    result[1] += 353204;
    result[2] += 43999195;
    result[3] += 6054935;
    result[4] += 504577;
    result[5] += 2472431;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17421341;
    result[1] += 7055418;
    result[2] += 838860;
    result[3] += 4958266;
    result[4] += 8193872;
    result[5] += 15219331;
  } else {
    result[0] += 950979;
    result[1] += 0;
    result[2] += 43312774;
    result[3] += 7002664;
    result[4] += 86452;
    result[5] += 2334221;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16921178;
    result[1] += 6939750;
    result[2] += 1535604;
    result[3] += 4783998;
    result[4] += 7855206;
    result[5] += 15651352;
  } else {
    result[0] += 360921;
    result[1] += 225576;
    result[2] += 42047368;
    result[3] += 7037971;
    result[4] += 766958;
    result[5] += 3248294;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16324736;
    result[1] += 7339033;
    result[2] += 2058336;
    result[3] += 5252306;
    result[4] += 7693919;
    result[5] += 15018757;
  } else {
    result[0] += 1131337;
    result[1] += 977063;
    result[2] += 41550928;
    result[3] += 6376627;
    result[4] += 308546;
    result[5] += 3342587;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    result[0] += 914543;
    result[1] += 779055;
    result[2] += 812927;
    result[3] += 6435676;
    result[4] += 11380985;
    result[5] += 33363902;
  } else {
    result[0] += 18304299;
    result[1] += 8249358;
    result[2] += 15322603;
    result[3] += 4638193;
    result[4] += 4025289;
    result[5] += 3147345;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    result[0] += 3208883;
    result[1] += 617093;
    result[2] += 462819;
    result[3] += 8423319;
    result[4] += 10027761;
    result[5] += 30947214;
  } else {
    result[0] += 18962712;
    result[1] += 8663697;
    result[2] += 16805486;
    result[3] += 3896924;
    result[4] += 3635969;
    result[5] += 1722301;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 18117911;
    result[1] += 7570116;
    result[2] += 1007373;
    result[3] += 4947982;
    result[4] += 7140501;
    result[5] += 14903204;
  } else {
    result[0] += 401983;
    result[1] += 401983;
    result[2] += 42342231;
    result[3] += 6342401;
    result[4] += 580642;
    result[5] += 3617848;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    result[0] += 8826462;
    result[1] += 9294664;
    result[2] += 1057788;
    result[3] += 6225344;
    result[4] += 9346686;
    result[5] += 18936144;
  } else {
    result[0] += 20574879;
    result[1] += 0;
    result[2] += 29512383;
    result[3] += 2979168;
    result[4] += 310330;
    result[5] += 310330;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16351978;
    result[1] += 7518479;
    result[2] += 1729536;
    result[3] += 5017084;
    result[4] += 7604241;
    result[5] += 15465770;
  } else {
    result[0] += 802797;
    result[1] += 150524;
    result[2] += 43852820;
    result[3] += 6171506;
    result[4] += 250874;
    result[5] += 2458567;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16957635;
    result[1] += 7731753;
    result[2] += 1276537;
    result[3] += 4453373;
    result[4] += 7528668;
    result[5] += 15739122;
  } else {
    result[0] += 858993;
    result[1] += 0;
    result[2] += 44619938;
    result[3] += 6394729;
    result[4] += 47721;
    result[5] += 1765708;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17437968;
    result[1] += 7116935;
    result[2] += 1122172;
    result[3] += 4562516;
    result[4] += 7796145;
    result[5] += 15651352;
  } else {
    result[0] += 1985068;
    result[1] += 451152;
    result[2] += 41686447;
    result[3] += 7037971;
    result[4] += 180460;
    result[5] += 2345990;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 4596497;
    result[1] += 525314;
    result[2] += 840502;
    result[3] += 8352492;
    result[4] += 10926531;
    result[5] += 28445753;
  } else {
    result[0] += 19105039;
    result[1] += 9706903;
    result[2] += 17561198;
    result[3] += 2894702;
    result[4] += 3492941;
    result[5] += 926304;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17333093;
    result[1] += 7176869;
    result[2] += 777861;
    result[3] += 5107465;
    result[4] += 7793287;
    result[5] += 15498515;
  } else {
    result[0] += 1011229;
    result[1] += 0;
    result[2] += 42839357;
    result[3] += 7492290;
    result[4] += 91929;
    result[5] += 2252283;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16604255;
    result[1] += 7606735;
    result[2] += 1745575;
    result[3] += 4924509;
    result[4] += 7975719;
    result[5] += 14830296;
  } else {
    result[0] += 1389790;
    result[1] += 257368;
    result[2] += 42208451;
    result[3] += 5970951;
    result[4] += 514737;
    result[5] += 3345791;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17223186;
    result[1] += 7758593;
    result[2] += 904921;
    result[3] += 4791635;
    result[4] += 7817932;
    result[5] += 15190821;
  } else {
    result[0] += 1467832;
    result[1] += 266878;
    result[2] += 40876915;
    result[3] += 7472602;
    result[4] += 177919;
    result[5] += 3424942;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16672745;
    result[1] += 7054398;
    result[2] += 2223977;
    result[3] += 5170392;
    result[4] += 7833499;
    result[5] += 14732077;
  } else {
    result[0] += 414572;
    result[1] += 207286;
    result[2] += 43996467;
    result[3] += 5544902;
    result[4] += 673679;
    result[5] += 2850183;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16386592;
    result[1] += 7132652;
    result[2] += 1964682;
    result[3] += 5580837;
    result[4] += 7716362;
    result[5] += 14905962;
  } else {
    result[0] += 508882;
    result[1] += 152664;
    result[2] += 45646749;
    result[3] += 4834382;
    result[4] += 152664;
    result[5] += 2391747;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17241815;
    result[1] += 7404098;
    result[2] += 1002945;
    result[3] += 4631249;
    result[4] += 7964568;
    result[5] += 15442413;
  } else {
    result[0] += 1176951;
    result[1] += 362138;
    result[2] += 42098646;
    result[3] += 6835371;
    result[4] += 362138;
    result[5] += 2851843;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17031665;
    result[1] += 7322298;
    result[2] += 1127633;
    result[3] += 4583758;
    result[4] += 7893437;
    result[5] += 15728296;
  } else {
    result[0] += 740511;
    result[1] += 601665;
    result[2] += 41052111;
    result[3] += 6757168;
    result[4] += 1064485;
    result[5] += 3471148;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16744484;
    result[1] += 7176207;
    result[2] += 1698510;
    result[3] += 4755829;
    result[4] += 7728223;
    result[5] += 15583835;
  } else {
    result[0] += 571692;
    result[1] += 311832;
    result[2] += 44799876;
    result[3] += 4573537;
    result[4] += 259860;
    result[5] += 3170292;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17080925;
    result[1] += 7450035;
    result[2] += 805013;
    result[3] += 4595896;
    result[4] += 8284322;
    result[5] += 15470898;
  } else {
    result[0] += 1159047;
    result[1] += 0;
    result[2] += 42467509;
    result[3] += 7278819;
    result[4] += 139085;
    result[5] += 2642628;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1499829;
    result[1] += 647653;
    result[2] += 920350;
    result[3] += 7396888;
    result[4] += 12441770;
    result[5] += 30780598;
  } else {
    result[0] += 18792959;
    result[1] += 7513880;
    result[2] += 16035117;
    result[3] += 4425758;
    result[4] += 3996393;
    result[5] += 2922982;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16729253;
    result[1] += 8149755;
    result[2] += 675309;
    result[3] += 4374162;
    result[4] += 8548802;
    result[5] += 15209807;
  } else {
    result[0] += 1819216;
    result[1] += 282989;
    result[2] += 39133361;
    result[3] += 8327967;
    result[4] += 525551;
    result[5] += 3598005;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16430101;
    result[1] += 8361610;
    result[2] += 925639;
    result[3] += 4057386;
    result[4] += 8623874;
    result[5] += 15288479;
  } else {
    result[0] += 2074092;
    result[1] += 558409;
    result[2] += 38171282;
    result[3] += 8376143;
    result[4] += 398863;
    result[5] += 4108298;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16617772;
    result[1] += 7624792;
    result[2] += 1852753;
    result[3] += 5429992;
    result[4] += 7282745;
    result[5] += 14879034;
  } else {
    result[0] += 253480;
    result[1] += 101392;
    result[2] += 44764590;
    result[3] += 5475170;
    result[4] += 202784;
    result[5] += 2889673;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16609578;
    result[1] += 7573279;
    result[2] += 1749886;
    result[3] += 5163599;
    result[4] += 7472875;
    result[5] += 15117871;
  } else {
    result[0] += 446153;
    result[1] += 347007;
    result[2] += 44417020;
    result[3] += 5651272;
    result[4] += 297435;
    result[5] += 2528200;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16029390;
    result[1] += 7147857;
    result[2] += 2231041;
    result[3] += 5527866;
    result[4] += 7659434;
    result[5] += 15091501;
  } else {
    result[0] += 1280703;
    result[1] += 307368;
    result[2] += 43287778;
    result[3] += 5583867;
    result[4] += 153684;
    result[5] += 3073688;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16426325;
    result[1] += 7638815;
    result[2] += 1708682;
    result[3] += 4982460;
    result[4] += 7394718;
    result[5] += 15536087;
  } else {
    result[0] += 1185363;
    result[1] += 197560;
    result[2] += 43858451;
    result[3] += 6074988;
    result[4] += 98780;
    result[5] += 2271946;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16963730;
    result[1] += 7605429;
    result[2] += 1665951;
    result[3] += 5084773;
    result[4] += 7663375;
    result[5] += 14703830;
  } else {
    result[0] += 719023;
    result[1] += 479349;
    result[2] += 42662063;
    result[3] += 5848058;
    result[4] += 766958;
    result[5] += 3211638;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17149052;
    result[1] += 7504493;
    result[2] += 1498045;
    result[3] += 4622539;
    result[4] += 7718500;
    result[5] += 15194459;
  } else {
    result[0] += 606063;
    result[1] += 0;
    result[2] += 45050691;
    result[3] += 6464673;
    result[4] += 0;
    result[5] += 1565663;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16374776;
    result[1] += 8130531;
    result[2] += 1137137;
    result[3] += 4719119;
    result[4] += 7405606;
    result[5] += 15919921;
  } else {
    result[0] += 716510;
    result[1] += 0;
    result[2] += 45549581;
    result[3] += 6346233;
    result[4] += 102358;
    result[5] += 972406;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17340869;
    result[1] += 7505297;
    result[2] += 1271058;
    result[3] += 4221730;
    result[4] += 7913852;
    result[5] += 15434282;
  } else {
    result[0] += 1596329;
    result[1] += 714147;
    result[2] += 39236105;
    result[3] += 7477544;
    result[4] += 504104;
    result[5] += 4158859;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17561058;
    result[1] += 7461951;
    result[2] += 1153755;
    result[3] += 4270393;
    result[4] += 7372048;
    result[5] += 15867884;
  } else {
    result[0] += 475107;
    result[1] += 129574;
    result[2] += 39045157;
    result[3] += 8335968;
    result[4] += 863830;
    result[5] += 4837453;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    result[0] += 3159851;
    result[1] += 638046;
    result[2] += 243065;
    result[3] += 7930011;
    result[4] += 10239133;
    result[5] += 31476981;
  } else {
    result[0] += 18814175;
    result[1] += 8599762;
    result[2] += 17357480;
    result[3] += 3580309;
    result[4] += 3527657;
    result[5] += 1807705;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16707123;
    result[1] += 7519643;
    result[2] += 1351522;
    result[3] += 5032266;
    result[4] += 7332730;
    result[5] += 15743804;
  } else {
    result[0] += 786624;
    result[1] += 0;
    result[2] += 44690078;
    result[3] += 6342156;
    result[4] += 49164;
    result[5] += 1819068;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    result[0] += 1167110;
    result[1] += 547083;
    result[2] += 802388;
    result[3] += 6856775;
    result[4] += 11415801;
    result[5] += 32897932;
  } else {
    result[0] += 18952151;
    result[1] += 8227538;
    result[2] += 16086919;
    result[3] += 3921686;
    result[4] += 3617555;
    result[5] += 2881239;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17148425;
    result[1] += 7322290;
    result[2] += 742419;
    result[3] += 4454514;
    result[4] += 7686221;
    result[5] += 16333220;
  } else {
    result[0] += 943534;
    result[1] += 0;
    result[2] += 42883625;
    result[3] += 6982152;
    result[4] += 188706;
    result[5] += 2689072;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17169582;
    result[1] += 7896495;
    result[2] += 801751;
    result[3] += 3842355;
    result[4] += 7654457;
    result[5] += 16322448;
  } else {
    result[0] += 1008997;
    result[1] += 420415;
    result[2] += 39308872;
    result[3] += 8156065;
    result[4] += 756748;
    result[5] += 4035991;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17249218;
    result[1] += 8242599;
    result[2] += 1160722;
    result[3] += 4451885;
    result[4] += 7801818;
    result[5] += 14780846;
  } else {
    result[0] += 1511667;
    result[1] += 183232;
    result[2] += 41868601;
    result[3] += 7420911;
    result[4] += 183232;
    result[5] += 2519445;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16244437;
    result[1] += 6901416;
    result[2] += 1862959;
    result[3] += 5405403;
    result[4] += 7875235;
    result[5] += 15397638;
  } else {
    result[0] += 262657;
    result[1] += 210125;
    result[2] += 44966878;
    result[3] += 6041111;
    result[4] += 105062;
    result[5] += 2101256;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16720799;
    result[1] += 6791481;
    result[2] += 2407107;
    result[3] += 5057791;
    result[4] += 7923395;
    result[5] += 14786516;
  } else {
    result[0] += 895614;
    result[1] += 995126;
    result[2] += 43835335;
    result[3] += 4975634;
    result[4] += 149269;
    result[5] += 2836111;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17299006;
    result[1] += 7220454;
    result[2] += 1143238;
    result[3] += 4437571;
    result[4] += 7626605;
    result[5] += 15960213;
  } else {
    result[0] += 1110472;
    result[1] += 341683;
    result[2] += 39336365;
    result[3] += 7816020;
    result[4] += 811499;
    result[5] += 4271049;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    result[0] += 2062409;
    result[1] += 257801;
    result[2] += 547827;
    result[3] += 7218432;
    result[4] += 10569847;
    result[5] += 33030773;
  } else {
    result[0] += 18807471;
    result[1] += 8324897;
    result[2] += 17261419;
    result[3] += 3873625;
    result[4] += 3550823;
    result[5] += 1868854;
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
    result[0] += 5697521;
    result[1] += 765338;
    result[2] += 255112;
    result[3] += 6179401;
    result[4] += 12103689;
    result[5] += 28686027;
  } else {
    result[0] += 18164254;
    result[1] += 9613138;
    result[2] += 16516287;
    result[3] += 5346736;
    result[4] += 1831074;
    result[5] += 2215599;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17284552;
    result[1] += 7126735;
    result[2] += 887145;
    result[3] += 4687085;
    result[4] += 8294810;
    result[5] += 15406760;
  } else {
    result[0] += 1257940;
    result[1] += 0;
    result[2] += 42859820;
    result[3] += 6783891;
    result[4] += 44926;
    result[5] += 2740512;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16982192;
    result[1] += 8176611;
    result[2] += 1093209;
    result[3] += 4327913;
    result[4] += 7562616;
    result[5] += 15544546;
  } else {
    result[0] += 908484;
    result[1] += 43261;
    result[2] += 37637203;
    result[3] += 8955058;
    result[4] += 1643923;
    result[5] += 4499159;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16308746;
    result[1] += 7736382;
    result[2] += 1927010;
    result[3] += 5525987;
    result[4] += 7538013;
    result[5] += 14650950;
  } else {
    result[0] += 1035430;
    result[1] += 776573;
    result[2] += 42711523;
    result[3] += 5694869;
    result[4] += 983659;
    result[5] += 2485034;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 17807181;
    result[1] += 7794547;
    result[2] += 1218386;
    result[3] += 3905083;
    result[4] += 7575862;
    result[5] += 15386029;
  } else {
    result[0] += 927638;
    result[1] += 270561;
    result[2] += 37646671;
    result[3] += 8696613;
    result[4] += 1198200;
    result[5] += 4947406;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16620279;
    result[1] += 7816912;
    result[2] += 1210649;
    result[3] += 4723029;
    result[4] += 7787019;
    result[5] += 15529200;
  } else {
    result[0] += 1218183;
    result[1] += 217532;
    result[2] += 40983176;
    result[3] += 8005206;
    result[4] += 217532;
    result[5] += 3045458;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16527903;
    result[1] += 7434697;
    result[2] += 1458344;
    result[3] += 4803958;
    result[4] += 7734944;
    result[5] += 15727243;
  } else {
    result[0] += 601536;
    result[1] += 0;
    result[2] += 44814434;
    result[3] += 7268560;
    result[4] += 0;
    result[5] += 1002560;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16459445;
    result[1] += 7396696;
    result[2] += 1766589;
    result[3] += 4710905;
    result[4] += 8086097;
    result[5] += 15267356;
  } else {
    result[0] += 1184274;
    result[1] += 197379;
    result[2] += 43324693;
    result[3] += 6266783;
    result[4] += 345413;
    result[5] += 2368548;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16807412;
    result[1] += 6983567;
    result[2] += 1390857;
    result[3] += 5212054;
    result[4] += 7627754;
    result[5] += 15665445;
  } else {
    result[0] += 1343335;
    result[1] += 185287;
    result[2] += 40670635;
    result[3] += 8198977;
    result[4] += 277931;
    result[5] += 3010924;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16442547;
    result[1] += 7583476;
    result[2] += 1864329;
    result[3] += 4948183;
    result[4] += 7905879;
    result[5] += 14942673;
  } else {
    result[0] += 377318;
    result[1] += 377318;
    result[2] += 44631437;
    result[3] += 5498075;
    result[4] += 215610;
    result[5] += 2587329;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17017084;
    result[1] += 7994409;
    result[2] += 1462745;
    result[3] += 4793748;
    result[4] += 7893030;
    result[5] += 14526072;
  } else {
    result[0] += 863599;
    result[1] += 479777;
    result[2] += 43275921;
    result[3] += 6812839;
    result[4] += 383821;
    result[5] += 1871131;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16025149;
    result[1] += 7586373;
    result[2] += 1988936;
    result[3] += 5057582;
    result[4] += 7302239;
    result[5] += 15726808;
  } else {
    result[0] += 717878;
    result[1] += 615324;
    result[2] += 42098473;
    result[3] += 6922404;
    result[4] += 1025541;
    result[5] += 2307468;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16403594;
    result[1] += 7136350;
    result[2] += 2016483;
    result[3] += 5134167;
    result[4] += 7994428;
    result[5] += 15002066;
  } else {
    result[0] += 1101787;
    result[1] += 801299;
    result[2] += 41968080;
    result[3] += 5759342;
    result[4] += 450731;
    result[5] += 3605849;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    result[0] += 1031076;
    result[1] += 782196;
    result[2] += 959967;
    result[3] += 6790883;
    result[4] += 10559646;
    result[5] += 33563320;
  } else {
    result[0] += 18311248;
    result[1] += 7949445;
    result[2] += 15785559;
    result[3] += 4711382;
    result[4] += 4274243;
    result[5] += 2655211;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16692505;
    result[1] += 7119282;
    result[2] += 1868989;
    result[3] += 5022018;
    result[4] += 7889705;
    result[5] += 15094590;
  } else {
    result[0] += 1464652;
    result[1] += 707073;
    result[2] += 41313302;
    result[3] += 6515178;
    result[4] += 303031;
    result[5] += 3383852;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    result[0] += 8412822;
    result[1] += 9556671;
    result[2] += 461229;
    result[3] += 5331810;
    result[4] += 10183943;
    result[5] += 19740614;
  } else {
    result[0] += 21295505;
    result[1] += 0;
    result[2] += 26479280;
    result[3] += 4034937;
    result[4] += 420306;
    result[5] += 1457060;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16447655;
    result[1] += 6973463;
    result[2] += 1786235;
    result[3] += 5601634;
    result[4] += 7502188;
    result[5] += 15375914;
  } else {
    result[0] += 552439;
    result[1] += 150665;
    result[2] += 44647169;
    result[3] += 5825727;
    result[4] += 351552;
    result[5] += 2159536;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16620975;
    result[1] += 7782247;
    result[2] += 982080;
    result[3] += 4523524;
    result[4] += 7975687;
    result[5] += 15802575;
  } else {
    result[0] += 1498654;
    result[1] += 308546;
    result[2] += 42050480;
    result[3] += 6788023;
    result[4] += 88156;
    result[5] += 2953230;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17333754;
    result[1] += 7233204;
    result[2] += 1354424;
    result[3] += 4466719;
    result[4] += 7434927;
    result[5] += 15864059;
  } else {
    result[0] += 732096;
    result[1] += 244032;
    result[2] += 41436673;
    result[3] += 6979321;
    result[4] += 878516;
    result[5] += 3416451;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16576264;
    result[1] += 7416449;
    result[2] += 1800525;
    result[3] += 4944299;
    result[4] += 7687957;
    result[5] += 15261595;
  } else {
    result[0] += 652883;
    result[1] += 200887;
    result[2] += 44697391;
    result[3] += 5574618;
    result[4] += 200887;
    result[5] += 2360424;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16951488;
    result[1] += 7612679;
    result[2] += 1696624;
    result[3] += 4499742;
    result[4] += 7347120;
    result[5] += 15579436;
  } else {
    result[0] += 1130730;
    result[1] += 452292;
    result[2] += 41791804;
    result[3] += 6060716;
    result[4] += 1040272;
    result[5] += 3211275;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17167383;
    result[1] += 7416904;
    result[2] += 1441762;
    result[3] += 4161790;
    result[4] += 7506085;
    result[5] += 15993164;
  } else {
    result[0] += 1105582;
    result[1] += 176893;
    result[2] += 39004954;
    result[3] += 8313981;
    result[4] += 1238252;
    result[5] += 3847427;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16070612;
    result[1] += 7828134;
    result[2] += 1257828;
    result[3] += 4498587;
    result[4] += 7724548;
    result[5] += 16307379;
  } else {
    result[0] += 2375138;
    result[1] += 268883;
    result[2] += 39257004;
    result[3] += 8290577;
    result[4] += 313697;
    result[5] += 3181789;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    result[0] += 3165366;
    result[1] += 899957;
    result[2] += 279297;
    result[3] += 8472009;
    result[4] += 11171880;
    result[5] += 29698581;
  } else {
    result[0] += 17965060;
    result[1] += 9069234;
    result[2] += 17600903;
    result[3] += 3104001;
    result[4] += 3762951;
    result[5] += 2184939;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 8966725;
    result[1] += 10061610;
    result[2] += 622951;
    result[3] += 5474422;
    result[4] += 9306517;
    result[5] += 19254863;
  } else {
    result[0] += 19150743;
    result[1] += 54174;
    result[2] += 26708108;
    result[3] += 5390378;
    result[4] += 460484;
    result[5] += 1923200;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16886613;
    result[1] += 7675733;
    result[2] += 1807742;
    result[3] += 5251062;
    result[4] += 7144888;
    result[5] += 14921051;
  } else {
    result[0] += 643848;
    result[1] += 495268;
    result[2] += 43088348;
    result[3] += 5992747;
    result[4] += 594322;
    result[5] += 2872556;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16665966;
    result[1] += 7435805;
    result[2] += 1823064;
    result[3] += 4823225;
    result[4] += 7335321;
    result[5] += 15603708;
  } else {
    result[0] += 395485;
    result[1] += 148306;
    result[2] += 43997708;
    result[3] += 6080582;
    result[4] += 543791;
    result[5] += 2521216;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
