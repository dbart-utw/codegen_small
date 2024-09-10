
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 25995854;
    result[1] += 12479894;
    result[2] += 2566619;
    result[3] += 7982422;
    result[4] += 12032501;
    result[5] += 24842053;
  } else {
    result[0] += 1166714;
    result[1] += 875035;
    result[2] += 66356880;
    result[3] += 10646268;
    result[4] += 1166714;
    result[5] += 5687732;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27254662;
    result[1] += 12454437;
    result[2] += 2103953;
    result[3] += 6771344;
    result[4] += 11874036;
    result[5] += 25440909;
  } else {
    result[0] += 1348498;
    result[1] += 67424;
    result[2] += 62974873;
    result[3] += 12810734;
    result[4] += 2022747;
    result[5] += 6675066;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26400573;
    result[1] += 11147418;
    result[2] += 3096505;
    result[3] += 8005039;
    result[4] += 12500705;
    result[5] += 24749103;
  } else {
    result[0] += 2701737;
    result[1] += 635702;
    result[2] += 66987186;
    result[3] += 10568559;
    result[4] += 556239;
    result[5] += 4449919;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27087711;
    result[1] += 11672897;
    result[2] += 1317907;
    result[3] += 7507367;
    result[4] += 12849600;
    result[5] += 25463860;
  } else {
    result[0] += 1680004;
    result[1] += 0;
    result[2] += 68003648;
    result[3] += 12125247;
    result[4] += 73043;
    result[5] += 4017401;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26896352;
    result[1] += 12603264;
    result[2] += 1220427;
    result[3] += 7087869;
    result[4] += 12673673;
    result[5] += 25417757;
  } else {
    result[0] += 1841752;
    result[1] += 0;
    result[2] += 68734210;
    result[3] += 12671258;
    result[4] += 0;
    result[5] += 2652123;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26404857;
    result[1] += 11937096;
    result[2] += 1933809;
    result[3] += 7687490;
    result[4] += 13512793;
    result[5] += 24423299;
  } else {
    result[0] += 2168468;
    result[1] += 349753;
    result[2] += 65054064;
    result[3] += 13080763;
    result[4] += 629555;
    result[5] += 4616740;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26762610;
    result[1] += 12901688;
    result[2] += 1342926;
    result[3] += 6858518;
    result[4] += 13141496;
    result[5] += 24892105;
  } else {
    result[0] += 1242916;
    result[1] += 345254;
    result[2] += 62629185;
    result[3] += 14431642;
    result[4] += 759560;
    result[5] += 6490786;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25874949;
    result[1] += 12206027;
    result[2] += 3062935;
    result[3] += 8091636;
    result[4] += 12914616;
    result[5] += 23749180;
  } else {
    result[0] += 2332472;
    result[1] += 402150;
    result[2] += 68687304;
    result[3] += 9249461;
    result[4] += 643440;
    result[5] += 4584515;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25818126;
    result[1] += 12402825;
    result[2] += 2692264;
    result[3] += 8237869;
    result[4] += 12310782;
    result[5] += 24437477;
  } else {
    result[0] += 2043351;
    result[1] += 392952;
    result[2] += 70338439;
    result[3] += 9823804;
    result[4] += 314361;
    result[5] += 2986436;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26964139;
    result[1] += 12798196;
    result[2] += 1270050;
    result[3] += 6545642;
    result[4] += 13750734;
    result[5] += 24570583;
  } else {
    result[0] += 3477971;
    result[1] += 590599;
    result[2] += 60437966;
    result[3] += 13715021;
    result[4] += 853087;
    result[5] += 6824699;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 28289321;
    result[1] += 13579856;
    result[2] += 1768082;
    result[3] += 6065505;
    result[4] += 12352021;
    result[5] += 23844558;
  } else {
    result[0] += 1358348;
    result[1] += 129366;
    result[2] += 59508583;
    result[3] += 14359679;
    result[4] += 1811130;
    result[5] += 8732237;
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
    result[0] += 5274029;
    result[1] += 617173;
    result[2] += 392746;
    result[3] += 6396162;
    result[4] += 22386570;
    result[5] += 50832663;
  } else {
    result[0] += 27164527;
    result[1] += 13947238;
    result[2] += 25652490;
    result[3] += 9280779;
    result[4] += 3649744;
    result[5] += 6204565;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25156556;
    result[1] += 11324926;
    result[2] += 3133378;
    result[3] += 7922972;
    result[4] += 12667803;
    result[5] += 25693707;
  } else {
    result[0] += 1130254;
    result[1] += 695541;
    result[2] += 68945527;
    result[3] += 9911462;
    result[4] += 260827;
    result[5] += 4955731;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26545756;
    result[1] += 10845189;
    result[2] += 4061273;
    result[3] += 8099859;
    result[4] += 11661981;
    result[5] += 24685284;
  } else {
    result[0] += 495573;
    result[1] += 82595;
    result[2] += 71279937;
    result[3] += 8424743;
    result[4] += 1073741;
    result[5] += 4542753;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26237606;
    result[1] += 11661158;
    result[2] += 2824892;
    result[3] += 7367320;
    result[4] += 13401292;
    result[5] += 24407075;
  } else {
    result[0] += 921846;
    result[1] += 586629;
    result[2] += 70227953;
    result[3] += 9302270;
    result[4] += 754238;
    result[5] += 4106407;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27416150;
    result[1] += 11618569;
    result[2] += 2548737;
    result[3] += 8380984;
    result[4] += 12766649;
    result[5] += 23168254;
  } else {
    result[0] += 1029208;
    result[1] += 633359;
    result[2] += 69827855;
    result[3] += 8312839;
    result[4] += 1108378;
    result[5] += 4987703;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    result[0] += 14472172;
    result[1] += 15268553;
    result[2] += 1592762;
    result[3] += 10133266;
    result[4] += 14417249;
    result[5] += 30015340;
  } else {
    result[0] += 32629610;
    result[1] += 0;
    result[2] += 45630865;
    result[3] += 6424744;
    result[4] += 607062;
    result[5] += 607062;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25861429;
    result[1] += 12003001;
    result[2] += 3367254;
    result[3] += 7971459;
    result[4] += 11292900;
    result[5] += 25403299;
  } else {
    result[0] += 1436977;
    result[1] += 638656;
    result[2] += 67298465;
    result[3] += 11256326;
    result[4] += 1596642;
    result[5] += 3672276;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
    result[0] += 11551446;
    result[1] += 2325794;
    result[2] += 1240423;
    result[3] += 11551446;
    result[4] += 18296250;
    result[5] += 40933984;
  } else {
    result[0] += 27250826;
    result[1] += 15139348;
    result[2] += 32483775;
    result[3] += 5265860;
    result[4] += 3192427;
    result[5] += 2567106;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27127347;
    result[1] += 12446111;
    result[2] += 1882209;
    result[3] += 8140557;
    result[4] += 12469639;
    result[5] += 23833480;
  } else {
    result[0] += 1754539;
    result[1] += 804164;
    result[2] += 65649032;
    result[3] += 11623826;
    result[4] += 1242799;
    result[5] += 4824984;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27103819;
    result[1] += 11552062;
    result[2] += 1341074;
    result[3] += 8022918;
    result[4] += 12399056;
    result[5] += 25480414;
  } else {
    result[0] += 1023481;
    result[1] += 0;
    result[2] += 69158111;
    result[3] += 12208672;
    result[4] += 219317;
    result[5] += 3289762;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27070754;
    result[1] += 12163548;
    result[2] += 2766521;
    result[3] += 8025198;
    result[4] += 12049229;
    result[5] += 23824093;
  } else {
    result[0] += 2169581;
    result[1] += 321419;
    result[2] += 70149793;
    result[3] += 9160454;
    result[4] += 401774;
    result[5] += 3696323;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26808575;
    result[1] += 12650144;
    result[2] += 1313668;
    result[3] += 7127869;
    result[4] += 13720541;
    result[5] += 24278546;
  } else {
    result[0] += 3183913;
    result[1] += 994973;
    result[2] += 61555670;
    result[3] += 12801987;
    result[4] += 928641;
    result[5] += 6434159;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25911597;
    result[1] += 11755128;
    result[2] += 3041696;
    result[3] += 8599082;
    result[4] += 12258266;
    result[5] += 24333574;
  } else {
    result[0] += 3773148;
    result[1] += 802797;
    result[2] += 67435000;
    result[3] += 9232172;
    result[4] += 321119;
    result[5] += 4335107;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27285955;
    result[1] += 12889684;
    result[2] += 2295750;
    result[3] += 6911166;
    result[4] += 12363575;
    result[5] += 24153212;
  } else {
    result[0] += 1322599;
    result[1] += 348052;
    result[2] += 61605284;
    result[3] += 13017161;
    result[4] += 1740262;
    result[5] += 7865985;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 28097032;
    result[1] += 11754398;
    result[2] += 1679199;
    result[3] += 7828382;
    result[4] += 11990905;
    result[5] += 24549427;
  } else {
    result[0] += 2661872;
    result[1] += 647482;
    result[2] += 66834583;
    result[3] += 11223030;
    result[4] += 575540;
    result[5] += 3956837;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 28473865;
    result[1] += 12349822;
    result[2] += 2436522;
    result[3] += 6855704;
    result[4] += 12469259;
    result[5] += 23314171;
  } else {
    result[0] += 1117389;
    result[1] += 279347;
    result[2] += 65227633;
    result[3] += 11383409;
    result[4] += 1676084;
    result[5] += 6215481;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27579961;
    result[1] += 11663876;
    result[2] += 2304268;
    result[3] += 7079094;
    result[4] += 11901430;
    result[5] += 25370713;
  } else {
    result[0] += 993876;
    result[1] += 425947;
    result[2] += 67015688;
    result[3] += 11074626;
    result[4] += 1135859;
    result[5] += 5253348;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 28007517;
    result[1] += 11381061;
    result[2] += 2333959;
    result[3] += 7555292;
    result[4] += 12487888;
    result[5] += 24133625;
  } else {
    result[0] += 1846562;
    result[1] += 683911;
    result[2] += 65176812;
    result[3] += 11079374;
    result[4] += 1641388;
    result[5] += 5471295;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27045020;
    result[1] += 12183295;
    result[2] += 1730312;
    result[3] += 7253090;
    result[4] += 12870680;
    result[5] += 24816946;
  } else {
    result[0] += 2572692;
    result[1] += 500245;
    result[2] += 67318788;
    result[3] += 11076870;
    result[4] += 500245;
    result[5] += 3930502;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27026925;
    result[1] += 12356529;
    result[2] += 1789072;
    result[3] += 7394833;
    result[4] += 12642780;
    result[5] += 24689203;
  } else {
    result[0] += 2384145;
    result[1] += 1402438;
    result[2] += 61987772;
    result[3] += 11499994;
    result[4] += 701219;
    result[5] += 7923776;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25310448;
    result[1] += 12609289;
    result[2] += 2939870;
    result[3] += 7671225;
    result[4] += 12218837;
    result[5] += 25149674;
  } else {
    result[0] += 2372910;
    result[1] += 632776;
    result[2] += 67707035;
    result[3] += 10519901;
    result[4] += 474582;
    result[5] += 4192141;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25533341;
    result[1] += 12778039;
    result[2] += 3274088;
    result[3] += 7980590;
    result[4] += 12186884;
    result[5] += 24146401;
  } else {
    result[0] += 1311440;
    result[1] += 491790;
    result[2] += 67047390;
    result[3] += 11557068;
    result[4] += 983580;
    result[5] += 4508076;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26306816;
    result[1] += 12394339;
    result[2] += 2379169;
    result[3] += 7998541;
    result[4] += 12416998;
    result[5] += 24403480;
  } else {
    result[0] += 1327912;
    result[1] += 0;
    result[2] += 71956263;
    result[3] += 9959344;
    result[4] += 82994;
    result[5] += 2572830;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27532450;
    result[1] += 12305271;
    result[2] += 2185492;
    result[3] += 7292892;
    result[4] += 12804133;
    result[5] += 23779105;
  } else {
    result[0] += 1348832;
    result[1] += 851894;
    result[2] += 64460005;
    result[3] += 11926520;
    result[4] += 1703788;
    result[5] += 5608304;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26905120;
    result[1] += 12267984;
    result[2] += 2204953;
    result[3] += 7975362;
    result[4] += 11939586;
    result[5] += 24606339;
  } else {
    result[0] += 1106950;
    result[1] += 442780;
    result[2] += 66933596;
    result[3] += 11217096;
    result[4] += 1254543;
    result[5] += 4944378;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27424702;
    result[1] += 11958582;
    result[2] += 2071565;
    result[3] += 7250479;
    result[4] += 12523554;
    result[5] += 24670461;
  } else {
    result[0] += 2773300;
    result[1] += 729816;
    result[2] += 64077846;
    result[3] += 12479853;
    result[4] += 291926;
    result[5] += 5546601;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26582842;
    result[1] += 11901006;
    result[2] += 2026706;
    result[3] += 8248222;
    result[4] += 12372333;
    result[5] += 24768233;
  } else {
    result[0] += 800078;
    result[1] += 436406;
    result[2] += 66915663;
    result[3] += 10764693;
    result[4] += 1236485;
    result[5] += 5746018;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26745050;
    result[1] += 11488266;
    result[2] += 3562961;
    result[3] += 8564811;
    result[4] += 11808019;
    result[5] += 23730236;
  } else {
    result[0] += 2177729;
    result[1] += 806566;
    result[2] += 69768013;
    result[3] += 8307636;
    result[4] += 887223;
    result[5] += 3952176;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 28145140;
    result[1] += 12089187;
    result[2] += 1511148;
    result[3] += 7201566;
    result[4] += 12207246;
    result[5] += 24745056;
  } else {
    result[0] += 2096869;
    result[1] += 0;
    result[2] += 68835166;
    result[3] += 11424323;
    result[4] += 144611;
    result[5] += 3398374;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26079843;
    result[1] += 12173633;
    result[2] += 2302503;
    result[3] += 7705408;
    result[4] += 13290689;
    result[5] += 24347266;
  } else {
    result[0] += 1136664;
    result[1] += 0;
    result[2] += 70229616;
    result[3] += 11447833;
    result[4] += 162380;
    result[5] += 2922851;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27394182;
    result[1] += 11884578;
    result[2] += 3097332;
    result[3] += 8924905;
    result[4] += 12687590;
    result[5] += 21910757;
  } else {
    result[0] += 1825956;
    result[1] += 635115;
    result[2] += 68671843;
    result[3] += 10082455;
    result[4] += 396947;
    result[5] += 4287028;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26833045;
    result[1] += 12264477;
    result[2] += 2544099;
    result[3] += 6528254;
    result[4] += 12072470;
    result[5] += 25656999;
  } else {
    result[0] += 1377696;
    result[1] += 137769;
    result[2] += 62271859;
    result[3] += 12123724;
    result[4] += 2479852;
    result[5] += 7508443;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26327039;
    result[1] += 11782235;
    result[2] += 1511148;
    result[3] += 7626577;
    result[4] += 13151714;
    result[5] += 25500630;
  } else {
    result[0] += 1663034;
    result[1] += 0;
    result[2] += 68618248;
    result[3] += 12219688;
    result[4] += 289223;
    result[5] += 3109151;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26842134;
    result[1] += 12371311;
    result[2] += 2573594;
    result[3] += 8262591;
    result[4] += 12168133;
    result[5] += 23681580;
  } else {
    result[0] += 588927;
    result[1] += 84132;
    result[2] += 69409363;
    result[3] += 10264172;
    result[4] += 673060;
    result[5] += 4879688;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27002954;
    result[1] += 11582723;
    result[2] += 2597337;
    result[3] += 7932410;
    result[4] += 12003912;
    result[5] += 24780007;
  } else {
    result[0] += 1338691;
    result[1] += 743717;
    result[2] += 67306413;
    result[3] += 11007015;
    result[4] += 1264319;
    result[5] += 4239188;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27274692;
    result[1] += 10518287;
    result[2] += 2595421;
    result[3] += 8309902;
    result[4] += 12203034;
    result[5] += 24998007;
  } else {
    result[0] += 734182;
    result[1] += 326303;
    result[2] += 71134121;
    result[3] += 9625947;
    result[4] += 81575;
    result[5] += 3997215;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27217021;
    result[1] += 12067924;
    result[2] += 1307163;
    result[3] += 6559162;
    result[4] += 13235035;
    result[5] += 25513039;
  } else {
    result[0] += 1349204;
    result[1] += 0;
    result[2] += 68584556;
    result[3] += 12142839;
    result[4] += 149911;
    result[5] += 3672834;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27353812;
    result[1] += 12165003;
    result[2] += 2372524;
    result[3] += 7396694;
    result[4] += 12281303;
    result[5] += 24330006;
  } else {
    result[0] += 1516316;
    result[1] += 303263;
    result[2] += 69826387;
    result[3] += 10159322;
    result[4] += 682342;
    result[5] += 3411712;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2556851;
    result[1] += 272005;
    result[2] += 598412;
    result[3] += 10880221;
    result[4] += 17734760;
    result[5] += 53857094;
  } else {
    result[0] += 30158686;
    result[1] += 13941778;
    result[2] += 24814778;
    result[3] += 7460306;
    result[4] += 5555547;
    result[5] += 3968248;
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
