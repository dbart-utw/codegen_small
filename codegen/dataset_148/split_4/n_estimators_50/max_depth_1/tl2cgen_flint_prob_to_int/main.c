
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72325788;
    result[1] += 33965;
    result[2] += 269603;
    result[3] += 11221429;
    result[4] += 1999732;
    result[5] += 21228;
    result[6] += 27597;
  } else {
    result[0] += 7328040;
    result[1] += 537578;
    result[2] += 226348;
    result[3] += 35621632;
    result[4] += 42185745;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85853297;
    result[1] += 0;
    result[2] += 42758;
    result[3] += 0;
    result[4] += 3289;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 40567972;
    result[1] += 222357;
    result[2] += 454598;
    result[3] += 32311080;
    result[4] += 12229687;
    result[5] += 44471;
    result[6] += 69178;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 3404990;
    result[1] += 242060;
    result[2] += 338885;
    result[3] += 40876017;
    result[4] += 40940567;
    result[5] += 96824;
    result[6] += 0;
  } else {
    result[0] += 76624727;
    result[1] += 63000;
    result[2] += 265503;
    result[3] += 8919113;
    result[4] += 0;
    result[5] += 6750;
    result[6] += 20250;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72450866;
    result[1] += 34014;
    result[2] += 265738;
    result[3] += 11103605;
    result[4] += 2013232;
    result[5] += 12755;
    result[6] += 19133;
  } else {
    result[0] += 8273434;
    result[1] += 805132;
    result[2] += 138816;
    result[3] += 35620187;
    result[4] += 41061775;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85827367;
    result[1] += 0;
    result[2] += 45804;
    result[3] += 0;
    result[4] += 9815;
    result[5] += 0;
    result[6] += 16358;
  } else {
    result[0] += 40396850;
    result[1] += 149433;
    result[2] += 592752;
    result[3] += 32691064;
    result[4] += 11994527;
    result[5] += 29886;
    result[6] += 44830;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85843486;
    result[1] += 0;
    result[2] += 39430;
    result[3] += 0;
    result[4] += 6571;
    result[5] += 0;
    result[6] += 9857;
  } else {
    result[0] += 39767665;
    result[1] += 158358;
    result[2] += 455279;
    result[3] += 33156217;
    result[4] += 12248005;
    result[5] += 39589;
    result[6] += 74230;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85837187;
    result[1] += 0;
    result[2] += 42529;
    result[3] += 0;
    result[4] += 3271;
    result[5] += 0;
    result[6] += 16357;
  } else {
    result[0] += 39968129;
    result[1] += 189304;
    result[2] += 612748;
    result[3] += 32998739;
    result[4] += 12060680;
    result[5] += 19926;
    result[6] += 49816;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72062581;
    result[1] += 40396;
    result[2] += 244503;
    result[3] += 11536306;
    result[4] += 1968783;
    result[5] += 23387;
    result[6] += 23387;
  } else {
    result[0] += 8567752;
    result[1] += 637729;
    result[2] += 221818;
    result[3] += 34714648;
    result[4] += 41757396;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85830558;
    result[1] += 0;
    result[2] += 45858;
    result[3] += 0;
    result[4] += 9826;
    result[5] += 0;
    result[6] += 13102;
  } else {
    result[0] += 39553675;
    result[1] += 149165;
    result[2] += 606605;
    result[3] += 33587061;
    result[4] += 11948143;
    result[5] += 34805;
    result[6] += 19888;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71886114;
    result[1] += 25513;
    result[2] += 227494;
    result[3] += 11580954;
    result[4] += 2136746;
    result[5] += 17008;
    result[6] += 25513;
  } else {
    result[0] += 8068660;
    result[1] += 610001;
    result[2] += 138636;
    result[3] += 34520557;
    result[4] += 42561489;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85863275;
    result[1] += 0;
    result[2] += 29511;
    result[3] += 0;
    result[4] += 3279;
    result[5] += 0;
    result[6] += 3279;
  } else {
    result[0] += 40139974;
    result[1] += 153888;
    result[2] += 481520;
    result[3] += 33140547;
    result[4] += 11884132;
    result[5] += 39713;
    result[6] += 59569;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10090867;
    result[1] += 147019;
    result[2] += 454423;
    result[3] += 42769240;
    result[4] += 32370968;
    result[5] += 66826;
    result[6] += 0;
  } else {
    result[0] += 77613637;
    result[1] += 71828;
    result[2] += 222435;
    result[3] += 7956689;
    result[4] += 0;
    result[5] += 2317;
    result[6] += 32438;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17157343;
    result[1] += 488064;
    result[2] += 506836;
    result[3] += 37224301;
    result[4] += 30522800;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73494654;
    result[1] += 39723;
    result[2] += 207443;
    result[3] += 10323634;
    result[4] += 1785339;
    result[5] += 22068;
    result[6] += 26482;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72179414;
    result[1] += 38240;
    result[2] += 244315;
    result[3] += 11325635;
    result[4] += 2073498;
    result[5] += 19120;
    result[6] += 19120;
  } else {
    result[0] += 8122207;
    result[1] += 476129;
    result[2] += 168045;
    result[3] += 34589400;
    result[4] += 42543562;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72250771;
    result[1] += 29814;
    result[2] += 215089;
    result[3] += 11484906;
    result[4] += 1878302;
    result[5] += 17036;
    result[6] += 23425;
  } else {
    result[0] += 7574563;
    result[1] += 542979;
    result[2] += 135744;
    result[3] += 34587789;
    result[4] += 43058268;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 16963159;
    result[1] += 541774;
    result[2] += 485729;
    result[3] += 37569287;
    result[4] += 30339394;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73935882;
    result[1] += 41953;
    result[2] += 189896;
    result[3] += 9879020;
    result[4] += 1808430;
    result[5] += 13248;
    result[6] += 30913;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85827651;
    result[1] += 0;
    result[2] += 61917;
    result[3] += 0;
    result[4] += 6517;
    result[5] += 0;
    result[6] += 3258;
  } else {
    result[0] += 40261090;
    result[1] += 170385;
    result[2] += 641451;
    result[3] += 32964581;
    result[4] += 11806712;
    result[5] += 25056;
    result[6] += 30068;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85846717;
    result[1] += 0;
    result[2] += 39471;
    result[3] += 0;
    result[4] += 13157;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 40135771;
    result[1] += 182817;
    result[2] += 513864;
    result[3] += 33272717;
    result[4] += 11700296;
    result[5] += 44469;
    result[6] += 49410;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17349036;
    result[1] += 319538;
    result[2] += 488705;
    result[3] += 37291969;
    result[4] += 30450096;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73496565;
    result[1] += 37510;
    result[2] += 251541;
    result[3] += 10291152;
    result[4] += 1791684;
    result[5] += 13239;
    result[6] += 17652;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17704871;
    result[1] += 316490;
    result[2] += 297873;
    result[3] += 37439008;
    result[4] += 30141101;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73471487;
    result[1] += 46389;
    result[2] += 187765;
    result[3] += 10366857;
    result[4] += 1784875;
    result[5] += 17672;
    result[6] += 24299;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 16481686;
    result[1] += 400596;
    result[2] += 572280;
    result[3] += 37102870;
    result[4] += 31341911;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73343860;
    result[1] += 28635;
    result[2] += 231285;
    result[3] += 10434269;
    result[4] += 1817241;
    result[5] += 17621;
    result[6] += 26432;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72213896;
    result[1] += 48846;
    result[2] += 295201;
    result[3] += 11287735;
    result[4] += 2004820;
    result[5] += 21237;
    result[6] += 27608;
  } else {
    result[0] += 8018772;
    result[1] += 731537;
    result[2] += 393904;
    result[3] += 36604994;
    result[4] += 40150136;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85843739;
    result[1] += 0;
    result[2] += 42522;
    result[3] += 0;
    result[4] += 6541;
    result[5] += 0;
    result[6] += 6541;
  } else {
    result[0] += 40171734;
    result[1] += 209279;
    result[2] += 523199;
    result[3] += 33036293;
    result[4] += 11879113;
    result[5] += 49828;
    result[6] += 29897;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 18664042;
    result[1] += 503425;
    result[2] += 466134;
    result[3] += 36190716;
    result[4] += 30075026;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73732130;
    result[1] += 37546;
    result[2] += 198774;
    result[3] += 10097750;
    result[4] += 1791180;
    result[5] += 15460;
    result[6] += 26503;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17312333;
    result[1] += 423149;
    result[2] += 367956;
    result[3] += 37145165;
    result[4] += 30650741;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73633067;
    result[1] += 33181;
    result[2] += 201304;
    result[3] += 10133782;
    result[4] += 1844919;
    result[5] += 11060;
    result[6] += 42030;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 20104811;
    result[1] += 283166;
    result[2] += 632960;
    result[3] += 35329166;
    result[4] += 29549241;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73810754;
    result[1] += 47046;
    result[2] += 194905;
    result[3] += 10235873;
    result[4] += 1572681;
    result[5] += 20162;
    result[6] += 17922;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 16949487;
    result[1] += 438821;
    result[2] += 347400;
    result[3] += 37574107;
    result[4] += 30589528;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73480003;
    result[1] += 33206;
    result[2] += 199240;
    result[3] += 10307390;
    result[4] += 1852939;
    result[5] += 13282;
    result[6] += 13282;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17161316;
    result[1] += 389608;
    result[2] += 408161;
    result[3] += 36029488;
    result[4] += 31910772;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73435432;
    result[1] += 28728;
    result[2] += 278449;
    result[3] += 10311457;
    result[4] += 1801079;
    result[5] += 15469;
    result[6] += 28728;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9580870;
    result[1] += 109495;
    result[2] += 369547;
    result[3] += 43305533;
    result[4] += 32424402;
    result[5] += 109495;
    result[6] += 0;
  } else {
    result[0] += 77372640;
    result[1] += 62306;
    result[2] += 251532;
    result[3] += 8187483;
    result[4] += 0;
    result[5] += 2307;
    result[6] += 23076;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72035345;
    result[1] += 21280;
    result[2] += 236209;
    result[3] += 11504034;
    result[4] += 2066299;
    result[5] += 12768;
    result[6] += 23408;
  } else {
    result[0] += 7372981;
    result[1] += 411132;
    result[2] += 246679;
    result[3] += 36426365;
    result[4] += 41442186;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9728711;
    result[1] += 79634;
    result[2] += 424718;
    result[3] += 43108942;
    result[4] += 32424614;
    result[5] += 132724;
    result[6] += 0;
  } else {
    result[0] += 77738119;
    result[1] += 64955;
    result[2] += 222705;
    result[3] += 7848047;
    result[4] += 0;
    result[5] += 2319;
    result[6] += 23198;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85856819;
    result[1] += 0;
    result[2] += 32712;
    result[3] += 0;
    result[4] += 6542;
    result[5] += 0;
    result[6] += 3271;
  } else {
    result[0] += 40500886;
    result[1] += 164414;
    result[2] += 478298;
    result[3] += 32494375;
    result[4] += 12171689;
    result[5] += 29893;
    result[6] += 59787;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85856764;
    result[1] += 0;
    result[2] += 36030;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6550;
  } else {
    result[0] += 40132771;
    result[1] += 139229;
    result[2] += 581778;
    result[3] += 33007227;
    result[4] += 11958780;
    result[5] += 49724;
    result[6] += 29834;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10139507;
    result[1] += 186534;
    result[2] += 319774;
    result[3] += 42969658;
    result[4] += 32177279;
    result[5] += 106591;
    result[6] += 0;
  } else {
    result[0] += 77901269;
    result[1] += 27819;
    result[2] += 224873;
    result[3] += 7715246;
    result[4] += 0;
    result[5] += 2318;
    result[6] += 27819;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85830668;
    result[1] += 0;
    result[2] += 55596;
    result[3] += 0;
    result[4] += 6540;
    result[5] += 0;
    result[6] += 6540;
  } else {
    result[0] += 40622007;
    result[1] += 184418;
    result[2] += 593131;
    result[3] += 32746820;
    result[4] += 11653282;
    result[5] += 49842;
    result[6] += 49842;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 77695713;
    result[1] += 28231;
    result[2] += 190563;
    result[3] += 7709579;
    result[4] += 256437;
    result[5] += 0;
    result[6] += 18821;
  } else {
    result[0] += 14836936;
    result[1] += 147508;
    result[2] += 590035;
    result[3] += 40663285;
    result[4] += 29563240;
    result[5] += 98339;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72287613;
    result[1] += 44649;
    result[2] += 304042;
    result[3] += 11264442;
    result[4] += 1953949;
    result[5] += 17009;
    result[6] += 27640;
  } else {
    result[0] += 8121493;
    result[1] += 498931;
    result[2] += 304902;
    result[3] += 35119222;
    result[4] += 41854795;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10046396;
    result[1] += 186044;
    result[2] += 385377;
    result[3] += 41448029;
    result[4] += 33767054;
    result[5] += 66444;
    result[6] += 0;
  } else {
    result[0] += 77408215;
    result[1] += 39428;
    result[2] += 259766;
    result[3] += 8159463;
    result[4] += 0;
    result[5] += 2319;
    result[6] += 30151;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10233922;
    result[1] += 144324;
    result[2] += 301769;
    result[3] += 41840998;
    result[4] += 33273368;
    result[5] += 104963;
    result[6] += 0;
  } else {
    result[0] += 77282213;
    result[1] += 60438;
    result[2] += 241753;
    result[3] += 8277746;
    result[4] += 0;
    result[5] += 2324;
    result[6] += 34868;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17457435;
    result[1] += 456522;
    result[2] += 529566;
    result[3] += 36814005;
    result[4] += 30641815;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73489153;
    result[1] += 42068;
    result[2] += 252410;
    result[3] += 10218205;
    result[4] += 1866510;
    result[5] += 13284;
    result[6] += 17713;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72348476;
    result[1] += 38231;
    result[2] += 276114;
    result[3] += 11208141;
    result[4] += 1977407;
    result[5] += 27611;
    result[6] += 23363;
  } else {
    result[0] += 7867784;
    result[1] += 730579;
    result[2] += 168595;
    result[3] += 35770319;
    result[4] += 41362066;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85813765;
    result[1] += 0;
    result[2] += 69122;
    result[3] += 0;
    result[4] += 6583;
    result[5] += 0;
    result[6] += 9874;
  } else {
    result[0] += 40128810;
    result[1] += 217179;
    result[2] += 592307;
    result[3] += 32611445;
    result[4] += 12241014;
    result[5] += 39487;
    result[6] += 69102;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17426684;
    result[1] += 280472;
    result[2] += 504850;
    result[3] += 37284130;
    result[4] += 30403207;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73597100;
    result[1] += 28702;
    result[2] += 242865;
    result[3] += 10248927;
    result[4] += 1748632;
    result[5] += 11039;
    result[6] += 22078;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72319893;
    result[1] += 103853;
    result[2] += 162112;
    result[3] += 8827530;
    result[4] += 4475824;
    result[5] += 5066;
    result[6] += 5066;
  } else {
    result[0] += 51496604;
    result[1] += 0;
    result[2] += 349402;
    result[3] += 27952227;
    result[4] += 5984643;
    result[5] += 35836;
    result[6] += 80631;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17552572;
    result[1] += 496938;
    result[2] += 266216;
    result[3] += 37163890;
    result[4] += 30419727;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73296627;
    result[1] += 31106;
    result[2] += 204416;
    result[3] += 10405241;
    result[4] += 1921958;
    result[5] += 11109;
    result[6] += 28884;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85850086;
    result[1] += 0;
    result[2] += 32839;
    result[3] += 0;
    result[4] += 9851;
    result[5] += 0;
    result[6] += 6567;
  } else {
    result[0] += 39861496;
    result[1] += 148589;
    result[2] += 544826;
    result[3] += 33056116;
    result[4] += 12204116;
    result[5] += 34670;
    result[6] += 49529;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85827023;
    result[1] += 0;
    result[2] += 65747;
    result[3] += 0;
    result[4] += 3287;
    result[5] += 0;
    result[6] += 3287;
  } else {
    result[0] += 39389078;
    result[1] += 222537;
    result[2] += 519253;
    result[3] += 33355848;
    result[4] += 12333504;
    result[5] += 44507;
    result[6] += 34616;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17392842;
    result[1] += 467047;
    result[2] += 485729;
    result[3] += 37868197;
    result[4] += 29685528;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73748194;
    result[1] += 26497;
    result[2] += 225225;
    result[3] += 10073333;
    result[4] += 1777517;
    result[5] += 6624;
    result[6] += 41953;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85833836;
    result[1] += 0;
    result[2] += 45856;
    result[3] += 0;
    result[4] += 16377;
    result[5] += 0;
    result[6] += 3275;
  } else {
    result[0] += 40097963;
    result[1] += 164091;
    result[2] += 566861;
    result[3] += 32882916;
    result[4] += 12073146;
    result[5] += 64642;
    result[6] += 49724;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 3139233;
    result[1] += 198267;
    result[2] += 396534;
    result[3] += 40925693;
    result[4] += 41157005;
    result[5] += 82611;
    result[6] += 0;
  } else {
    result[0] += 76627841;
    result[1] += 71767;
    result[2] += 251187;
    result[3] += 8905937;
    result[4] += 0;
    result[5] += 6728;
    result[6] += 35883;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
