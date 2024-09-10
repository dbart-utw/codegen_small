
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16282031;
    result[1] += 7283301;
    result[2] += 1410140;
    result[3] += 5073597;
    result[4] += 7763039;
    result[5] += 15874980;
  } else {
    result[0] += 805543;
    result[1] += 0;
    result[2] += 44968269;
    result[3] += 5923112;
    result[4] += 142154;
    result[5] += 1848011;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16968981;
    result[1] += 7850674;
    result[2] += 1670969;
    result[3] += 4609570;
    result[4] += 7144834;
    result[5] += 15442061;
  } else {
    result[0] += 879315;
    result[1] += 390806;
    result[2] += 42842201;
    result[3] += 6594865;
    result[4] += 293105;
    result[5] += 2686797;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16700345;
    result[1] += 7157290;
    result[2] += 1333656;
    result[3] += 4934529;
    result[4] += 7913029;
    result[5] += 15648238;
  } else {
    result[0] += 535532;
    result[1] += 446276;
    result[2] += 41325225;
    result[3] += 6738778;
    result[4] += 312393;
    result[5] += 4328884;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16348324;
    result[1] += 7741667;
    result[2] += 1917396;
    result[3] += 4930447;
    result[4] += 7237089;
    result[5] += 15512167;
  } else {
    result[0] += 974357;
    result[1] += 584614;
    result[2] += 41653777;
    result[3] += 7161526;
    result[4] += 389742;
    result[5] += 2923072;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16552698;
    result[1] += 6916914;
    result[2] += 1831362;
    result[3] += 5184164;
    result[4] += 7649459;
    result[5] += 15552492;
  } else {
    result[0] += 370255;
    result[1] += 158681;
    result[2] += 45435676;
    result[3] += 5289368;
    result[4] += 158681;
    result[5] += 2274428;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17730966;
    result[1] += 8236513;
    result[2] += 1482572;
    result[3] += 4118256;
    result[4] += 7352960;
    result[5] += 14765822;
  } else {
    result[0] += 692178;
    result[1] += 475872;
    result[2] += 40016566;
    result[3] += 7224612;
    result[4] += 951745;
    result[5] += 4326115;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16807128;
    result[1] += 7305610;
    result[2] += 2055142;
    result[3] += 5081552;
    result[4] += 6925550;
    result[5] += 15512106;
  } else {
    result[0] += 583555;
    result[1] += 53050;
    result[2] += 43342246;
    result[3] += 5729452;
    result[4] += 795757;
    result[5] += 3183029;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    result[0] += 3292724;
    result[1] += 752622;
    result[2] += 250874;
    result[3] += 8467006;
    result[4] += 10630796;
    result[5] += 30293066;
  } else {
    result[0] += 19016333;
    result[1] += 9068532;
    result[2] += 16499212;
    result[3] += 3430870;
    result[4] += 3568795;
    result[5] += 2103347;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16766403;
    result[1] += 7611918;
    result[2] += 2104810;
    result[3] += 5535940;
    result[4] += 6905509;
    result[5] += 14762508;
  } else {
    result[0] += 633332;
    result[1] += 779485;
    result[2] += 43212749;
    result[3] += 5017940;
    result[4] += 146153;
    result[5] += 3897429;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    result[0] += 2373464;
    result[1] += 1103159;
    result[2] += 702010;
    result[3] += 7454683;
    result[4] += 10463299;
    result[5] += 31590473;
  } else {
    result[0] += 18540386;
    result[1] += 8319831;
    result[2] += 16839739;
    result[3] += 3918157;
    result[4] += 3718081;
    result[5] += 2350894;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16727558;
    result[1] += 7462846;
    result[2] += 1816053;
    result[3] += 5448161;
    result[4] += 7150711;
    result[5] += 15081759;
  } else {
    result[0] += 360661;
    result[1] += 257615;
    result[2] += 45701007;
    result[3] += 4946219;
    result[4] += 154569;
    result[5] += 2267017;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16440066;
    result[1] += 7563572;
    result[2] += 1883757;
    result[3] += 4923457;
    result[4] += 7449404;
    result[5] += 15426832;
  } else {
    result[0] += 454120;
    result[1] += 252288;
    result[2] += 44604688;
    result[3] += 5550357;
    result[4] += 555035;
    result[5] += 2270600;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17212433;
    result[1] += 7065238;
    result[2] += 1468290;
    result[3] += 4492096;
    result[4] += 7574052;
    result[5] += 15874980;
  } else {
    result[0] += 663388;
    result[1] += 568618;
    result[2] += 43072873;
    result[3] += 5591418;
    result[4] += 473848;
    result[5] += 3316942;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16154850;
    result[1] += 8130716;
    result[2] += 1339893;
    result[3] += 4765757;
    result[4] += 7658708;
    result[5] += 15637164;
  } else {
    result[0] += 2271376;
    result[1] += 371679;
    result[2] += 38861194;
    result[3] += 7309703;
    result[4] += 825955;
    result[5] += 4047180;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17335814;
    result[1] += 7658577;
    result[2] += 508517;
    result[3] += 4299281;
    result[4] += 7812673;
    result[5] += 16072226;
  } else {
    result[0] += 1240163;
    result[1] += 80010;
    result[2] += 39965278;
    result[3] += 8601136;
    result[4] += 240031;
    result[5] += 3560470;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16923262;
    result[1] += 7474682;
    result[2] += 1857785;
    result[3] += 5065367;
    result[4] += 7431141;
    result[5] += 14934851;
  } else {
    result[0] += 2096035;
    result[1] += 428734;
    result[2] += 41158515;
    result[3] += 5764097;
    result[4] += 905106;
    result[5] += 3334601;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16499308;
    result[1] += 7363209;
    result[2] += 1401154;
    result[3] += 4889743;
    result[4] += 7835026;
    result[5] += 15698648;
  } else {
    result[0] += 401024;
    result[1] += 0;
    result[2] += 45566354;
    result[3] += 6065488;
    result[4] += 100256;
    result[5] += 1553968;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1484746;
    result[1] += 371186;
    result[2] += 33744;
    result[3] += 6411406;
    result[4] += 10123273;
    result[5] += 35262734;
  } else {
    result[0] += 18670163;
    result[1] += 8762529;
    result[2] += 15948468;
    result[3] += 4231903;
    result[4] += 3385522;
    result[5] += 2688503;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16597809;
    result[1] += 7417856;
    result[2] += 1406834;
    result[3] += 4845764;
    result[4] += 6536808;
    result[5] += 16882018;
  } else {
    result[0] += 717193;
    result[1] += 0;
    result[2] += 46207782;
    result[3] += 5532639;
    result[4] += 102456;
    result[5] += 1127019;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 4628197;
    result[1] += 670290;
    result[2] += 63837;
    result[3] += 5298488;
    result[4] += 11841801;
    result[5] += 31184475;
  } else {
    result[0] += 18390902;
    result[1] += 8435567;
    result[2] += 16632069;
    result[3] += 5276498;
    result[4] += 1946669;
    result[5] += 3005384;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15742831;
    result[1] += 8102079;
    result[2] += 1672315;
    result[3] += 5305276;
    result[4] += 7410087;
    result[5] += 15454501;
  } else {
    result[0] += 974357;
    result[1] += 487178;
    result[2] += 43602492;
    result[3] += 6235887;
    result[4] += 97435;
    result[5] += 2289739;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 16344983;
    result[1] += 6887945;
    result[2] += 2360787;
    result[3] += 5443698;
    result[4] += 6887945;
    result[5] += 15761730;
  } else {
    result[0] += 838860;
    result[1] += 223696;
    result[2] += 45186635;
    result[3] += 4753544;
    result[4] += 223696;
    result[5] += 2460658;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16311456;
    result[1] += 7811119;
    result[2] += 1651247;
    result[3] += 5154764;
    result[4] += 7322924;
    result[5] += 15435577;
  } else {
    result[0] += 1037193;
    result[1] += 395121;
    result[2] += 42524917;
    result[3] += 6124378;
    result[4] += 246950;
    result[5] += 3358530;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16667560;
    result[1] += 7091023;
    result[2] += 1666756;
    result[3] += 5044130;
    result[4] += 7690471;
    result[5] += 15527148;
  } else {
    result[0] += 1023497;
    result[1] += 418703;
    result[2] += 42847323;
    result[3] += 5629235;
    result[4] += 279135;
    result[5] += 3489195;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17368449;
    result[1] += 8092991;
    result[2] += 445344;
    result[3] += 3869893;
    result[4] += 7647646;
    result[5] += 16262765;
  } else {
    result[0] += 1009155;
    result[1] += 0;
    result[2] += 40245135;
    result[3] += 8961303;
    result[4] += 121098;
    result[5] += 3350397;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    result[0] += 2573377;
    result[1] += 611177;
    result[2] += 289504;
    result[3] += 6948119;
    result[4] += 11226359;
    result[5] += 32038551;
  } else {
    result[0] += 18315171;
    result[1] += 8570888;
    result[2] += 16869684;
    result[3] += 4183409;
    result[4] += 3418151;
    result[5] += 2329785;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17473484;
    result[1] += 7752428;
    result[2] += 732512;
    result[3] += 3998299;
    result[4] += 7126740;
    result[5] += 16603625;
  } else {
    result[0] += 1354490;
    result[1] += 697768;
    result[2] += 37351110;
    result[3] += 10097113;
    result[4] += 533587;
    result[5] += 3653020;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17543650;
    result[1] += 7304964;
    result[2] += 1510866;
    result[3] += 4635278;
    result[4] += 7040929;
    result[5] += 15651400;
  } else {
    result[0] += 552525;
    result[1] += 276262;
    result[2] += 40564603;
    result[3] += 7781405;
    result[4] += 690657;
    result[5] += 3821636;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16902568;
    result[1] += 7470266;
    result[2] += 1802165;
    result[3] += 4621682;
    result[4] += 7470266;
    result[5] += 15420141;
  } else {
    result[0] += 901108;
    result[1] += 284560;
    result[2] += 41782974;
    result[3] += 6355185;
    result[4] += 616547;
    result[5] += 3746713;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17299658;
    result[1] += 7748502;
    result[2] += 1337452;
    result[3] += 5393422;
    result[4] += 6818100;
    result[5] += 15089954;
  } else {
    result[0] += 616003;
    result[1] += 284309;
    result[2] += 42125175;
    result[3] += 6681270;
    result[4] += 331694;
    result[5] += 3648637;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17940623;
    result[1] += 7203205;
    result[2] += 1377744;
    result[3] += 4672349;
    result[4] += 7712371;
    result[5] += 14780797;
  } else {
    result[0] += 995006;
    result[1] += 735439;
    result[2] += 38329381;
    result[3] += 8176357;
    result[4] += 346089;
    result[5] += 5104816;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1563356;
    result[1] += 1136986;
    result[2] += 568493;
    result[3] += 6964043;
    result[4] += 9593325;
    result[5] += 33860885;
  } else {
    result[0] += 17960477;
    result[1] += 8615846;
    result[2] += 15790320;
    result[3] += 4664217;
    result[4] += 3773481;
    result[5] += 2882745;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17408739;
    result[1] += 7760889;
    result[2] += 532610;
    result[3] += 3971749;
    result[4] += 7852193;
    result[5] += 16160910;
  } else {
    result[0] += 1199480;
    result[1] += 124084;
    result[2] += 39624216;
    result[3] += 8768615;
    result[4] += 0;
    result[5] += 3970693;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17091983;
    result[1] += 7176350;
    result[2] += 1926058;
    result[3] += 4979217;
    result[4] += 7005145;
    result[5] += 15508335;
  } else {
    result[0] += 555557;
    result[1] += 404042;
    result[2] += 43485028;
    result[3] += 5505073;
    result[4] += 555557;
    result[5] += 3181831;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2135086;
    result[1] += 309931;
    result[2] += 206621;
    result[3] += 7231744;
    result[4] += 8815840;
    result[5] += 34987866;
  } else {
    result[0] += 18651621;
    result[1] += 8610969;
    result[2] += 15857986;
    result[3] += 4305484;
    result[4] += 3713891;
    result[5] += 2547137;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17557854;
    result[1] += 8048592;
    result[2] += 789954;
    result[3] += 4009391;
    result[4] += 7810115;
    result[5] += 15471182;
  } else {
    result[0] += 745654;
    result[1] += 614068;
    result[2] += 39607388;
    result[3] += 7631988;
    result[4] += 570206;
    result[5] += 4517786;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16990858;
    result[1] += 7296158;
    result[2] += 1680414;
    result[3] += 5256681;
    result[4] += 7109446;
    result[5] += 15353531;
  } else {
    result[0] += 592137;
    result[1] += 542792;
    result[2] += 43028624;
    result[3] += 6020059;
    result[4] += 394758;
    result[5] += 3108719;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16625292;
    result[1] += 7742464;
    result[2] += 1335425;
    result[3] += 4531442;
    result[4] += 7442369;
    result[5] += 16010096;
  } else {
    result[0] += 1849795;
    result[1] += 559240;
    result[2] += 38974763;
    result[3] += 6925978;
    result[4] += 731314;
    result[5] += 4645998;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17085751;
    result[1] += 7750871;
    result[2] += 615148;
    result[3] += 4213767;
    result[4] += 8350641;
    result[5] += 15670909;
  } else {
    result[0] += 1447741;
    result[1] += 723870;
    result[2] += 38727092;
    result[3] += 8887525;
    result[4] += 241290;
    result[5] += 3659569;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 18105881;
    result[1] += 7221334;
    result[2] += 885776;
    result[3] += 4218700;
    result[4] += 7836874;
    result[5] += 15418524;
  } else {
    result[0] += 858993;
    result[1] += 515396;
    result[2] += 40114994;
    result[3] += 7258494;
    result[4] += 343597;
    result[5] += 4595615;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16851334;
    result[1] += 7818082;
    result[2] += 907717;
    result[3] += 4362899;
    result[4] += 8169456;
    result[5] += 15577601;
  } else {
    result[0] += 741150;
    result[1] += 0;
    result[2] += 43033052;
    result[3] += 7179895;
    result[4] += 92643;
    result[5] += 2640348;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16830895;
    result[1] += 7910671;
    result[2] += 934212;
    result[3] += 4520383;
    result[4] += 7473701;
    result[5] += 16017226;
  } else {
    result[0] += 1487765;
    result[1] += 680121;
    result[2] += 37576713;
    result[3] += 9011609;
    result[4] += 425075;
    result[5] += 4505804;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16470545;
    result[1] += 7417484;
    result[2] += 1721659;
    result[3] += 4548051;
    result[4] += 7101846;
    result[5] += 16427503;
  } else {
    result[0] += 792429;
    result[1] += 693375;
    result[2] += 43682670;
    result[3] += 5695586;
    result[4] += 544795;
    result[5] += 2278234;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16638033;
    result[1] += 7900583;
    result[2] += 2382940;
    result[3] += 4992828;
    result[4] += 6780034;
    result[5] += 14992669;
  } else {
    result[0] += 515726;
    result[1] += 206290;
    result[2] += 43217850;
    result[3] += 6704439;
    result[4] += 567298;
    result[5] += 2475485;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
    result[0] += 5427064;
    result[1] += 1225466;
    result[2] += 846155;
    result[3] += 5456242;
    result[4] += 11671106;
    result[5] += 29061055;
  } else {
    result[0] += 17997581;
    result[1] += 9223535;
    result[2] += 16828907;
    result[3] += 4710655;
    result[4] += 1762000;
    result[5] += 3164409;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    result[0] += 1422174;
    result[1] += 533315;
    result[2] += 568869;
    result[3] += 7786405;
    result[4] += 10381874;
    result[5] += 32994450;
  } else {
    result[0] += 18246487;
    result[1] += 8597058;
    result[2] += 15656036;
    result[3] += 4630430;
    result[4] += 3545679;
    result[5] += 3011398;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16679904;
    result[1] += 7496586;
    result[2] += 1701148;
    result[3] += 4642116;
    result[4] += 7338004;
    result[5] += 15829330;
  } else {
    result[0] += 1071793;
    result[1] += 584614;
    result[2] += 42628135;
    result[3] += 6576912;
    result[4] += 243589;
    result[5] += 2582047;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16587705;
    result[1] += 8130354;
    result[2] += 1501217;
    result[3] += 4399606;
    result[4] += 7134497;
    result[5] += 15933710;
  } else {
    result[0] += 1857378;
    result[1] += 309563;
    result[2] += 38208934;
    result[3] += 7296845;
    result[4] += 1017135;
    result[5] += 4997233;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17147598;
    result[1] += 7114273;
    result[2] += 1481529;
    result[3] += 5060668;
    result[4] += 7466319;
    result[5] += 15416702;
  } else {
    result[0] += 552525;
    result[1] += 690657;
    result[2] += 40242296;
    result[3] += 7274923;
    result[4] += 184175;
    result[5] += 4742513;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16792121;
    result[1] += 7617478;
    result[2] += 1837734;
    result[3] += 4475093;
    result[4] += 6831882;
    result[5] += 16132781;
  } else {
    result[0] += 322444;
    result[1] += 537408;
    result[2] += 43637555;
    result[3] += 6233936;
    result[4] += 107481;
    result[5] += 2848264;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16365949;
    result[1] += 7455755;
    result[2] += 1976904;
    result[3] += 5083469;
    result[4] += 7314548;
    result[5] += 15490462;
  } else {
    result[0] += 419430;
    result[1] += 524287;
    result[2] += 44249907;
    result[3] += 5662310;
    result[4] += 157286;
    result[5] += 2673868;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16808777;
    result[1] += 7416061;
    result[2] += 1428385;
    result[3] += 4645859;
    result[4] += 7343920;
    result[5] += 16044086;
  } else {
    result[0] += 874540;
    result[1] += 0;
    result[2] += 44552997;
    result[3] += 6704813;
    result[4] += 97171;
    result[5] += 1457568;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17181705;
    result[1] += 8032408;
    result[2] += 657892;
    result[3] += 4283951;
    result[4] += 7818211;
    result[5] += 15712921;
  } else {
    result[0] += 1222940;
    result[1] += 489176;
    result[2] += 39134098;
    result[3] += 9008995;
    result[4] += 611470;
    result[5] += 3220410;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16116119;
    result[1] += 7394286;
    result[2] += 1898533;
    result[3] += 5310182;
    result[4] += 7137342;
    result[5] += 15830625;
  } else {
    result[0] += 705745;
    result[1] += 302462;
    result[2] += 44411574;
    result[3] += 5696376;
    result[4] += 151231;
    result[5] += 2419699;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16406403;
    result[1] += 7746259;
    result[2] += 1798756;
    result[3] += 4409855;
    result[4] += 7020954;
    result[5] += 16304860;
  } else {
    result[0] += 763549;
    result[1] += 381774;
    result[2] += 42567898;
    result[3] += 6537894;
    result[4] += 620384;
    result[5] += 2815589;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16191571;
    result[1] += 7519040;
    result[2] += 1580707;
    result[3] += 5639280;
    result[4] += 6849732;
    result[5] += 15906758;
  } else {
    result[0] += 457560;
    result[1] += 610080;
    result[2] += 44332522;
    result[3] += 5897445;
    result[4] += 254200;
    result[5] += 2135282;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16926633;
    result[1] += 7083508;
    result[2] += 1564274;
    result[3] += 4973213;
    result[4] += 7526227;
    result[5] += 15613233;
  } else {
    result[0] += 677867;
    result[1] += 994205;
    result[2] += 40943185;
    result[3] += 6462335;
    result[4] += 406720;
    result[5] += 4202777;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16880303;
    result[1] += 7875493;
    result[2] += 1277910;
    result[3] += 4784733;
    result[4] += 7459429;
    result[5] += 15409220;
  } else {
    result[0] += 840935;
    result[1] += 177039;
    result[2] += 39391188;
    result[3] += 7435639;
    result[4] += 840935;
    result[5] += 5001353;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1491308;
    result[1] += 711760;
    result[2] += 643973;
    result[3] += 7931047;
    result[4] += 10608623;
    result[5] += 32300377;
  } else {
    result[0] += 18596731;
    result[1] += 7915616;
    result[2] += 16063071;
    result[3] += 4471164;
    result[4] += 3692850;
    result[5] += 2947656;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16128220;
    result[1] += 7747437;
    result[2] += 1369794;
    result[3] += 4610167;
    result[4] += 7762166;
    result[5] += 16069304;
  } else {
    result[0] += 1318311;
    result[1] += 500049;
    result[2] += 40322142;
    result[3] += 7091605;
    result[4] += 500049;
    result[5] += 3954933;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
    result[0] += 4588095;
    result[1] += 477926;
    result[2] += 541650;
    result[3] += 5384640;
    result[4] += 12904018;
    result[5] += 29790759;
  } else {
    result[0] += 16767601;
    result[1] += 8238515;
    result[2] += 16528308;
    result[3] += 6563464;
    result[4] += 2358745;
    result[5] += 3230455;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16492946;
    result[1] += 7424659;
    result[2] += 1728642;
    result[3] += 5426802;
    result[4] += 7367982;
    result[5] += 15246057;
  } else {
    result[0] += 155314;
    result[1] += 517715;
    result[2] += 44730614;
    result[3] += 5332469;
    result[4] += 155314;
    result[5] += 2795663;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
    result[0] += 3189644;
    result[1] += 1073741;
    result[2] += 410548;
    result[3] += 7610934;
    result[4] += 9789998;
    result[5] += 31612222;
  } else {
    result[0] += 17964394;
    result[1] += 8587186;
    result[2] += 17019804;
    result[3] += 4104675;
    result[4] += 3160084;
    result[5] += 2850945;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16901491;
    result[1] += 8266107;
    result[2] += 1320872;
    result[3] += 4374503;
    result[4] += 6902626;
    result[5] += 15921489;
  } else {
    result[0] += 359282;
    result[1] += 0;
    result[2] += 44910329;
    result[3] += 6467087;
    result[4] += 51326;
    result[5] += 1899065;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16179671;
    result[1] += 7960052;
    result[2] += 1369936;
    result[3] += 4758726;
    result[4] += 7383236;
    result[5] += 16035467;
  } else {
    result[0] += 681431;
    result[1] += 0;
    result[2] += 45217867;
    result[3] += 6035538;
    result[4] += 0;
    result[5] += 1752253;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16011182;
    result[1] += 7595601;
    result[2] += 1812586;
    result[3] += 5250747;
    result[4] += 7466130;
    result[5] += 15550842;
  } else {
    result[0] += 343518;
    result[1] += 294444;
    result[2] += 44117637;
    result[3] += 5790746;
    result[4] += 98148;
    result[5] += 3042595;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1819901;
    result[1] += 471826;
    result[2] += 269615;
    result[3] += 6774077;
    result[4] += 9402823;
    result[5] += 34948847;
  } else {
    result[0] += 18831166;
    result[1] += 8518861;
    result[2] += 16157605;
    result[3] += 4267733;
    result[4] += 3188345;
    result[5] += 2723378;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17618907;
    result[1] += 7729974;
    result[2] += 936051;
    result[3] += 4151841;
    result[4] += 7609194;
    result[5] += 15641121;
  } else {
    result[0] += 507279;
    result[1] += 338186;
    result[2] += 39018256;
    result[3] += 7778287;
    result[4] += 1099105;
    result[5] += 4945976;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    result[0] += 2365212;
    result[1] += 388802;
    result[2] += 226801;
    result[3] += 7516840;
    result[4] += 10821658;
    result[5] += 32367775;
  } else {
    result[0] += 18127228;
    result[1] += 8402902;
    result[2] += 17381809;
    result[3] += 4048979;
    result[4] += 3252736;
    result[5] += 2473434;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16262720;
    result[1] += 7427408;
    result[2] += 1767062;
    result[3] += 5229355;
    result[4] += 7125715;
    result[5] += 15874828;
  } else {
    result[0] += 591593;
    result[1] += 394395;
    result[2] += 42594716;
    result[3] += 6162430;
    result[4] += 443694;
    result[5] += 3500260;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16511473;
    result[1] += 6973085;
    result[2] += 1814136;
    result[3] += 5371543;
    result[4] += 7214025;
    result[5] += 15802826;
  } else {
    result[0] += 258608;
    result[1] += 362051;
    result[2] += 44584077;
    result[3] += 5585940;
    result[4] += 517216;
    result[5] += 2379196;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16234633;
    result[1] += 7339139;
    result[2] += 1370734;
    result[3] += 4811848;
    result[4] += 7610430;
    result[5] += 16320304;
  } else {
    result[0] += 352541;
    result[1] += 0;
    result[2] += 45628991;
    result[3] += 6295390;
    result[4] += 100726;
    result[5] += 1309441;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15684682;
    result[1] += 7791652;
    result[2] += 2085498;
    result[3] += 5344088;
    result[4] += 7357173;
    result[5] += 15423995;
  } else {
    result[0] += 1823154;
    result[1] += 431799;
    result[2] += 40925012;
    result[3] += 5901262;
    result[4] += 767643;
    result[5] += 3838219;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16008670;
    result[1] += 7667537;
    result[2] += 1533507;
    result[3] += 5403105;
    result[4] += 7180254;
    result[5] += 15894016;
  } else {
    result[0] += 695943;
    result[1] += 347971;
    result[2] += 43198224;
    result[3] += 6611465;
    result[4] += 99420;
    result[5] += 2734064;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17516729;
    result[1] += 6919669;
    result[2] += 1698336;
    result[3] += 4800257;
    result[4] += 7102135;
    result[5] += 15649962;
  } else {
    result[0] += 375434;
    result[1] += 321800;
    result[2] += 46124773;
    result[3] += 4451576;
    result[4] += 107266;
    result[5] += 2306238;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16834957;
    result[1] += 7874888;
    result[2] += 1290484;
    result[3] += 4795323;
    result[4] += 7288304;
    result[5] += 15603131;
  } else {
    result[0] += 1152083;
    result[1] += 506916;
    result[2] += 40737672;
    result[3] += 7096834;
    result[4] += 414750;
    result[5] += 3778833;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17281507;
    result[1] += 8009228;
    result[2] += 490360;
    result[3] += 3759433;
    result[4] += 7697180;
    result[5] += 16449380;
  } else {
    result[0] += 752415;
    result[1] += 88519;
    result[2] += 40453422;
    result[3] += 8940471;
    result[4] += 132779;
    result[5] += 3319482;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16900433;
    result[1] += 7443048;
    result[2] += 1871476;
    result[3] += 4828695;
    result[4] += 7114468;
    result[5] += 15528969;
  } else {
    result[0] += 703763;
    result[1] += 603225;
    result[2] += 42276070;
    result[3] += 6736020;
    result[4] += 452419;
    result[5] += 2915591;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16387632;
    result[1] += 7640859;
    result[2] += 1493701;
    result[3] += 4955068;
    result[4] += 7209983;
    result[5] += 15999844;
  } else {
    result[0] += 493447;
    result[1] += 0;
    result[2] += 44903725;
    result[3] += 6464162;
    result[4] += 0;
    result[5] += 1825755;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16577891;
    result[1] += 7936224;
    result[2] += 1807695;
    result[3] += 5055669;
    result[4] += 7421839;
    result[5] += 14887769;
  } else {
    result[0] += 778073;
    result[1] += 732304;
    result[2] += 40322529;
    result[3] += 6865356;
    result[4] += 228845;
    result[5] += 4759980;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
