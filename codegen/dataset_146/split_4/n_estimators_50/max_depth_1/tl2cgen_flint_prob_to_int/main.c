
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25602438;
    result[1] += 12371496;
    result[2] += 3573485;
    result[3] += 7780246;
    result[4] += 11806071;
    result[5] += 24765609;
  } else {
    result[0] += 668477;
    result[1] += 417798;
    result[2] += 69772328;
    result[3] += 9358683;
    result[4] += 417798;
    result[5] += 5264259;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26178192;
    result[1] += 12894079;
    result[2] += 3051445;
    result[3] += 8121893;
    result[4] += 12389328;
    result[5] += 23264406;
  } else {
    result[0] += 1190841;
    result[1] += 714504;
    result[2] += 73276429;
    result[3] += 7065657;
    result[4] += 0;
    result[5] += 3651913;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27289404;
    result[1] += 12614272;
    result[2] += 2513795;
    result[3] += 8696374;
    result[4] += 10983702;
    result[5] += 23801796;
  } else {
    result[0] += 2162035;
    result[1] += 665241;
    result[2] += 68353593;
    result[3] += 9230229;
    result[4] += 665241;
    result[5] += 4823002;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25342832;
    result[1] += 12533683;
    result[2] += 3076032;
    result[3] += 7781902;
    result[4] += 12694371;
    result[5] += 24470524;
  } else {
    result[0] += 792429;
    result[1] += 633943;
    result[2] += 71714859;
    result[3] += 9033695;
    result[4] += 158485;
    result[5] += 3565932;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27940315;
    result[1] += 12824675;
    result[2] += 1700509;
    result[3] += 6896510;
    result[4] += 11903566;
    result[5] += 24633768;
  } else {
    result[0] += 2311841;
    result[1] += 577960;
    result[2] += 65670736;
    result[3] += 10909000;
    result[4] += 1083675;
    result[5] += 5346132;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26363788;
    result[1] += 12176689;
    result[2] += 2718622;
    result[3] += 7767494;
    result[4] += 12016770;
    result[5] += 24855980;
  } else {
    result[0] += 1933943;
    result[1] += 564066;
    result[2] += 69702564;
    result[3] += 9589138;
    result[4] += 483485;
    result[5] += 3626144;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25394937;
    result[1] += 12503177;
    result[2] += 3154366;
    result[3] += 8525932;
    result[4] += 13051763;
    result[5] += 23269168;
  } else {
    result[0] += 884731;
    result[1] += 321720;
    result[2] += 73030530;
    result[3] += 7077848;
    result[4] += 80430;
    result[5] += 4504085;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26673066;
    result[1] += 12721688;
    result[2] += 3264264;
    result[3] += 7691143;
    result[4] += 11469641;
    result[5] += 24079540;
  } else {
    result[0] += 611072;
    result[1] += 174592;
    result[2] += 71059011;
    result[3] += 8467720;
    result[4] += 1047552;
    result[5] += 4539396;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 28204384;
    result[1] += 12172901;
    result[2] += 711999;
    result[3] += 7372644;
    result[4] += 11346063;
    result[5] += 26091352;
  } else {
    result[0] += 1740134;
    result[1] += 0;
    result[2] += 69684460;
    result[3] += 10598998;
    result[4] += 79097;
    result[5] += 3796656;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26645124;
    result[1] += 12154712;
    result[2] += 3220091;
    result[3] += 7574018;
    result[4] += 11655824;
    result[5] += 24649574;
  } else {
    result[0] += 662037;
    result[1] += 331018;
    result[2] += 71996561;
    result[3] += 8689240;
    result[4] += 331018;
    result[5] += 3889469;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2710827;
    result[1] += 451804;
    result[2] += 451804;
    result[3] += 10673883;
    result[4] += 16434391;
    result[5] += 55176634;
  } else {
    result[0] += 28901686;
    result[1] += 13203288;
    result[2] += 27212289;
    result[3] += 6653625;
    result[4] += 5847913;
    result[5] += 4080543;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26179933;
    result[1] += 12645659;
    result[2] += 2916476;
    result[3] += 8270944;
    result[4] += 12326670;
    result[5] += 23559661;
  } else {
    result[0] += 1545537;
    result[1] += 976128;
    result[2] += 68898433;
    result[3] += 7727687;
    result[4] += 244032;
    result[5] += 6507526;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 28158977;
    result[1] += 12247226;
    result[2] += 1856370;
    result[3] += 7473701;
    result[4] += 11982030;
    result[5] += 24181039;
  } else {
    result[0] += 1564279;
    result[1] += 748133;
    result[2] += 65019615;
    result[3] += 11017968;
    result[4] += 884157;
    result[5] += 6665190;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25819983;
    result[1] += 12430999;
    result[2] += 3147665;
    result[3] += 9306142;
    result[4] += 10948403;
    result[5] += 24246151;
  } else {
    result[0] += 1053482;
    result[1] += 810371;
    result[2] += 70259181;
    result[3] += 8914083;
    result[4] += 648296;
    result[5] += 4213930;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26587353;
    result[1] += 12478391;
    result[2] += 2785557;
    result[3] += 7949029;
    result[4] += 12070749;
    result[5] += 24028264;
  } else {
    result[0] += 748397;
    result[1] += 582086;
    result[2] += 70848250;
    result[3] += 9230229;
    result[4] += 582086;
    result[5] += 3908295;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27107212;
    result[1] += 12162342;
    result[2] += 3590359;
    result[3] += 7921230;
    result[4] += 11691107;
    result[5] += 23427094;
  } else {
    result[0] += 430357;
    result[1] += 430357;
    result[2] += 71181121;
    result[3] += 7488219;
    result[4] += 774643;
    result[5] += 5594646;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27685410;
    result[1] += 12188105;
    result[2] += 2307117;
    result[3] += 7224307;
    result[4] += 12491060;
    result[5] += 24003344;
  } else {
    result[0] += 979553;
    result[1] += 527452;
    result[2] += 70000431;
    result[3] += 8213183;
    result[4] += 602802;
    result[5] += 5575922;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26835990;
    result[1] += 13828996;
    result[2] += 1716536;
    result[3] += 7156264;
    result[4] += 12281696;
    result[5] += 24079861;
  } else {
    result[0] += 2024336;
    result[1] += 1214601;
    result[2] += 65183635;
    result[3] += 11538718;
    result[4] += 1012168;
    result[5] += 4925885;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27935333;
    result[1] += 12102905;
    result[2] += 2021161;
    result[3] += 6159729;
    result[4] += 13835328;
    result[5] += 23844888;
  } else {
    result[0] += 1572997;
    result[1] += 1231041;
    result[2] += 61757252;
    result[3] += 11900068;
    result[4] += 1641388;
    result[5] += 7796596;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27679199;
    result[1] += 12291441;
    result[2] += 2064211;
    result[3] += 7881534;
    result[4] += 12666752;
    result[5] += 23316206;
  } else {
    result[0] += 1549730;
    result[1] += 1475933;
    result[2] += 65531459;
    result[3] += 8486619;
    result[4] += 590373;
    result[5] += 8265229;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25889044;
    result[1] += 12795471;
    result[2] += 2981023;
    result[3] += 9057726;
    result[4] += 12199266;
    result[5] += 22976813;
  } else {
    result[0] += 715827;
    result[1] += 795364;
    result[2] += 71026033;
    result[3] += 7237815;
    result[4] += 715827;
    result[5] += 5408477;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    result[0] += 14216885;
    result[1] += 14651818;
    result[2] += 2201850;
    result[3] += 10193751;
    result[4] += 14842102;
    result[5] += 29792937;
  } else {
    result[0] += 31245500;
    result[1] += 0;
    result[2] += 49704063;
    result[3] += 3763896;
    result[4] += 464042;
    result[5] += 721843;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25476887;
    result[1] += 11784763;
    result[2] += 2406907;
    result[3] += 8492295;
    result[4] += 12556790;
    result[5] += 25181700;
  } else {
    result[0] += 658863;
    result[1] += 247073;
    result[2] += 72804431;
    result[3] += 7824005;
    result[4] += 82357;
    result[5] += 4282613;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    result[0] += 5280096;
    result[1] += 635567;
    result[2] += 831126;
    result[3] += 13884697;
    result[4] += 15302501;
    result[5] += 49965356;
  } else {
    result[0] += 29500785;
    result[1] += 14554467;
    result[2] += 29276870;
    result[3] += 5066074;
    result[4] += 4366340;
    result[5] += 3134808;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27536766;
    result[1] += 13276226;
    result[2] += 1824580;
    result[3] += 7634430;
    result[4] += 11643706;
    result[5] += 23983635;
  } else {
    result[0] += 963614;
    result[1] += 550636;
    result[2] += 66420567;
    result[3] += 11769862;
    result[4] += 825955;
    result[5] += 5368709;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26252690;
    result[1] += 11992809;
    result[2] += 3309924;
    result[3] += 8161458;
    result[4] += 12604918;
    result[5] += 23577545;
  } else {
    result[0] += 1159682;
    result[1] += 994013;
    result[2] += 70160796;
    result[3] += 8283447;
    result[4] += 579841;
    result[5] += 4721564;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25130616;
    result[1] += 12737750;
    result[2] += 2460179;
    result[3] += 8208261;
    result[4] += 12277904;
    result[5] += 25084632;
  } else {
    result[0] += 1339714;
    result[1] += 0;
    result[2] += 73763108;
    result[3] += 8195900;
    result[4] += 0;
    result[5] += 2600622;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25362719;
    result[1] += 13195932;
    result[2] += 2675778;
    result[3] += 8461863;
    result[4] += 11274860;
    result[5] += 24928191;
  } else {
    result[0] += 883077;
    result[1] += 883077;
    result[2] += 71770107;
    result[3] += 8188535;
    result[4] += 0;
    result[5] += 4174547;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25972275;
    result[1] += 12148322;
    result[2] += 1768721;
    result[3] += 8122154;
    result[4] += 12637048;
    result[5] += 25250823;
  } else {
    result[0] += 1210915;
    result[1] += 0;
    result[2] += 71444037;
    result[3] += 10217102;
    result[4] += 0;
    result[5] += 3027289;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 3617968;
    result[1] += 986718;
    result[2] += 54817;
    result[3] += 10579817;
    result[4] += 16774218;
    result[5] += 53885805;
  } else {
    result[0] += 29046050;
    result[1] += 13547794;
    result[2] += 27253735;
    result[3] += 6483964;
    result[4] += 5719594;
    result[5] += 3848206;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26421708;
    result[1] += 12208810;
    result[2] += 3248004;
    result[3] += 8384918;
    result[4] += 11379532;
    result[5] += 24256372;
  } else {
    result[0] += 626430;
    result[1] += 234911;
    result[2] += 70160267;
    result[3] += 8535121;
    result[4] += 783038;
    result[5] += 5559574;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2919454;
    result[1] += 1066723;
    result[2] += 1572014;
    result[3] += 10891812;
    result[4] += 19425603;
    result[5] += 50023736;
  } else {
    result[0] += 29032727;
    result[1] += 12874477;
    result[2] += 26322311;
    result[3] += 7245151;
    result[4] += 5186277;
    result[5] += 5238400;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27217759;
    result[1] += 13286846;
    result[2] += 1812927;
    result[3] += 6917747;
    result[4] += 12046423;
    result[5] += 24617640;
  } else {
    result[0] += 2103657;
    result[1] += 911584;
    result[2] += 64792649;
    result[3] += 11850603;
    result[4] += 1262194;
    result[5] += 4978655;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25667407;
    result[1] += 12287588;
    result[2] += 2912613;
    result[3] += 8555802;
    result[4] += 12378607;
    result[5] += 24097326;
  } else {
    result[0] += 980772;
    result[1] += 81731;
    result[2] += 72495451;
    result[3] += 7764450;
    result[4] += 0;
    result[5] += 4576939;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26448076;
    result[1] += 11858388;
    result[2] += 2913385;
    result[3] += 7351745;
    result[4] += 12746060;
    result[5] += 24581688;
  } else {
    result[0] += 2286294;
    result[1] += 816533;
    result[2] += 71201739;
    result[3] += 7920376;
    result[4] += 653226;
    result[5] += 3021174;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26576973;
    result[1] += 12199266;
    result[2] += 2751714;
    result[3] += 7452559;
    result[4] += 12841333;
    result[5] += 24077499;
  } else {
    result[0] += 795364;
    result[1] += 477218;
    result[2] += 73571199;
    result[3] += 6999205;
    result[4] += 0;
    result[5] += 4056358;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26732350;
    result[1] += 11609869;
    result[2] += 3489803;
    result[3] += 8302539;
    result[4] += 12134480;
    result[5] += 23630303;
  } else {
    result[0] += 1539705;
    result[1] += 972445;
    result[2] += 68800513;
    result[3] += 7617489;
    result[4] += 486222;
    result[5] += 6482969;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    result[0] += 13678617;
    result[1] += 15696288;
    result[2] += 890148;
    result[3] += 8871814;
    result[4] += 16022675;
    result[5] += 30739800;
  } else {
    result[0] += 30293865;
    result[1] += 0;
    result[2] += 45774431;
    result[3] += 7206470;
    result[4] += 444843;
    result[5] += 2179734;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27305434;
    result[1] += 13292803;
    result[2] += 1967526;
    result[3] += 7246257;
    result[4] += 12524988;
    result[5] += 23562334;
  } else {
    result[0] += 1103041;
    result[1] += 137880;
    result[2] += 64458979;
    result[3] += 12133454;
    result[4] += 1034101;
    result[5] += 7031888;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26534114;
    result[1] += 12046442;
    result[2] += 3080056;
    result[3] += 8167852;
    result[4] += 11453246;
    result[5] += 24617634;
  } else {
    result[0] += 2347861;
    result[1] += 809607;
    result[2] += 69221433;
    result[3] += 8177034;
    result[4] += 485764;
    result[5] += 4857644;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2973230;
    result[1] += 1513644;
    result[2] += 1567703;
    result[3] += 12974098;
    result[4] += 16055447;
    result[5] += 50815220;
  } else {
    result[0] += 30251854;
    result[1] += 13162210;
    result[2] += 24174947;
    result[3] += 6926082;
    result[4] += 6554568;
    result[5] += 4829682;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26547679;
    result[1] += 12940804;
    result[2] += 1236988;
    result[3] += 6898590;
    result[4] += 13321416;
    result[5] += 24953867;
  } else {
    result[0] += 848388;
    result[1] += 0;
    result[2] += 70911147;
    result[3] += 10109964;
    result[4] += 141398;
    result[5] += 3888447;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26428801;
    result[1] += 12514072;
    result[2] += 1905812;
    result[3] += 8013598;
    result[4] += 11411915;
    result[5] += 25625145;
  } else {
    result[0] += 1345888;
    result[1] += 0;
    result[2] += 72757141;
    result[3] += 9342048;
    result[4] += 79169;
    result[5] += 2375097;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27827540;
    result[1] += 12482505;
    result[2] += 1478191;
    result[3] += 6593203;
    result[4] += 12154018;
    result[5] += 25363887;
  } else {
    result[0] += 1843333;
    result[1] += 811066;
    result[2] += 67760943;
    result[3] += 10322668;
    result[4] += 1106000;
    result[5] += 4055333;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 28125913;
    result[1] += 12101513;
    result[2] += 1854455;
    result[3] += 7061197;
    result[4] += 12244163;
    result[5] += 24512102;
  } else {
    result[0] += 2053652;
    result[1] += 1416312;
    result[2] += 66354235;
    result[3] += 10622342;
    result[4] += 1487127;
    result[5] += 3965674;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 28536463;
    result[1] += 12516416;
    result[2] += 2029689;
    result[3] += 7103912;
    result[4] += 12129809;
    result[5] += 23583055;
  } else {
    result[0] += 743424;
    result[1] += 337920;
    result[2] += 63596604;
    result[3] += 11624459;
    result[4] += 1824769;
    result[5] += 7772167;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25828919;
    result[1] += 12482461;
    result[2] += 2978510;
    result[3] += 8367114;
    result[4] += 12050464;
    result[5] += 24191875;
  } else {
    result[0] += 901615;
    result[1] += 819650;
    result[2] += 71473501;
    result[3] += 8032572;
    result[4] += 0;
    result[5] += 4672006;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25936993;
    result[1] += 12245514;
    result[2] += 3434166;
    result[3] += 7749467;
    result[4] += 12381073;
    result[5] += 24152130;
  } else {
    result[0] += 1677721;
    result[1] += 671088;
    result[2] += 69625446;
    result[3] += 9143582;
    result[4] += 503316;
    result[5] += 4278190;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27880231;
    result[1] += 12634332;
    result[2] += 1270491;
    result[3] += 7105341;
    result[4] += 11740283;
    result[5] += 25268665;
  } else {
    result[0] += 1169693;
    result[1] += 0;
    result[2] += 68792582;
    result[3] += 11696932;
    result[4] += 365529;
    result[5] += 3874608;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26370745;
    result[1] += 12678696;
    result[2] += 2191670;
    result[3] += 7329134;
    result[4] += 12065971;
    result[5] += 25263127;
  } else {
    result[0] += 2472970;
    result[1] += 436406;
    result[2] += 66042850;
    result[3] += 10764693;
    result[4] += 509140;
    result[5] += 5673284;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
