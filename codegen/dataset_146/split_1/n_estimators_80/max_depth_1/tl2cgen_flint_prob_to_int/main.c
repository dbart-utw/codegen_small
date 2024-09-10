
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1760798;
    result[1] += 1173865;
    result[2] += 863136;
    result[3] += 8148008;
    result[4] += 9287348;
    result[5] += 32453932;
  } else {
    result[0] += 18989900;
    result[1] += 8305004;
    result[2] += 15822181;
    result[3] += 4185328;
    result[4] += 3840654;
    result[5] += 2544022;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16171668;
    result[1] += 7807995;
    result[2] += 1253838;
    result[3] += 5243325;
    result[4] += 8021717;
    result[5] += 15188545;
  } else {
    result[0] += 811903;
    result[1] += 0;
    result[2] += 46430707;
    result[3] += 5277370;
    result[4] += 101487;
    result[5] += 1065622;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16052857;
    result[1] += 6824264;
    result[2] += 2202768;
    result[3] += 5283765;
    result[4] += 7500931;
    result[5] += 15822502;
  } else {
    result[0] += 97879;
    result[1] += 146819;
    result[2] += 44437446;
    result[3] += 5236571;
    result[4] += 929858;
    result[5] += 2838515;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15835352;
    result[1] += 7386050;
    result[2] += 1928028;
    result[3] += 5557258;
    result[4] += 7499464;
    result[5] += 15480935;
  } else {
    result[0] += 155015;
    result[1] += 361703;
    result[2] += 43869432;
    result[3] += 5942267;
    result[4] += 516718;
    result[5] += 2841953;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    result[0] += 15321374;
    result[1] += 7501521;
    result[2] += 2339035;
    result[3] += 5896030;
    result[4] += 7653766;
    result[5] += 14975362;
  } else {
    result[0] += 113383;
    result[1] += 396842;
    result[2] += 47677765;
    result[3] += 3684964;
    result[4] += 0;
    result[5] += 1814136;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16521354;
    result[1] += 7281092;
    result[2] += 1725238;
    result[3] += 5497370;
    result[4] += 7807436;
    result[5] += 14854598;
  } else {
    result[0] += 1163065;
    result[1] += 372180;
    result[2] += 43824298;
    result[3] += 5908371;
    result[4] += 232613;
    result[5] += 2186562;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16101912;
    result[1] += 7165772;
    result[2] += 1601760;
    result[3] += 5409455;
    result[4] += 8079057;
    result[5] += 15329132;
  } else {
    result[0] += 267099;
    result[1] += 106839;
    result[2] += 46048032;
    result[3] += 5341999;
    result[4] += 106839;
    result[5] += 1816279;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15862422;
    result[1] += 7469759;
    result[2] += 1312254;
    result[3] += 5450905;
    result[4] += 7758166;
    result[5] += 15833582;
  } else {
    result[0] += 681431;
    result[1] += 0;
    result[2] += 44877151;
    result[3] += 6716970;
    result[4] += 97347;
    result[5] += 1314189;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15845398;
    result[1] += 8052343;
    result[2] += 1526920;
    result[3] += 5099337;
    result[4] += 8254012;
    result[5] += 14909079;
  } else {
    result[0] += 537359;
    result[1] += 683911;
    result[2] += 43965770;
    result[3] += 5031638;
    result[4] += 586210;
    result[5] += 2882200;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16116199;
    result[1] += 7367405;
    result[2] += 1366999;
    result[3] += 5194596;
    result[4] += 7741531;
    result[5] += 15900358;
  } else {
    result[0] += 931556;
    result[1] += 0;
    result[2] += 44910845;
    result[3] += 5736428;
    result[4] += 98058;
    result[5] += 2010201;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    result[0] += 2646097;
    result[1] += 223164;
    result[2] += 0;
    result[3] += 8161458;
    result[4] += 11030720;
    result[5] += 31625649;
  } else {
    result[0] += 17633697;
    result[1] += 8697240;
    result[2] += 17975436;
    result[3] += 4066686;
    result[4] += 3109818;
    result[5] += 2204212;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16222932;
    result[1] += 6662217;
    result[2] += 1917911;
    result[3] += 5494166;
    result[4] += 7758166;
    result[5] += 15631696;
  } else {
    result[0] += 1119495;
    result[1] += 486737;
    result[2] += 43708982;
    result[3] += 5354107;
    result[4] += 97347;
    result[5] += 2920422;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16038460;
    result[1] += 6565114;
    result[2] += 1871633;
    result[3] += 4851850;
    result[4] += 7400151;
    result[5] += 16959880;
  } else {
    result[0] += 1223497;
    result[1] += 342579;
    result[2] += 44241686;
    result[3] += 5481270;
    result[4] += 0;
    result[5] += 2398056;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16651152;
    result[1] += 7481574;
    result[2] += 1387596;
    result[3] += 5135535;
    result[4] += 7724761;
    result[5] += 15306471;
  } else {
    result[0] += 250172;
    result[1] += 200138;
    result[2] += 45231249;
    result[3] += 5403733;
    result[4] += 150103;
    result[5] += 2451693;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16675862;
    result[1] += 7390765;
    result[2] += 1707769;
    result[3] += 5123307;
    result[4] += 7003288;
    result[5] += 15786100;
  } else {
    result[0] += 346368;
    result[1] += 197924;
    result[2] += 45126845;
    result[3] += 5541893;
    result[4] += 296887;
    result[5] += 2177172;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16010412;
    result[1] += 7468625;
    result[2] += 2073812;
    result[3] += 5017756;
    result[4] += 7338105;
    result[5] += 15778377;
  } else {
    result[0] += 1432929;
    result[1] += 286585;
    result[2] += 41411661;
    result[3] += 6495946;
    result[4] += 620936;
    result[5] += 3439030;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15918929;
    result[1] += 7673667;
    result[2] += 1729075;
    result[3] += 5615924;
    result[4] += 7530768;
    result[5] += 15218725;
  } else {
    result[0] += 351552;
    result[1] += 401774;
    result[2] += 44245395;
    result[3] += 5323509;
    result[4] += 502217;
    result[5] += 2862641;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15852940;
    result[1] += 6948248;
    result[2] += 1294704;
    result[3] += 5466531;
    result[4] += 7048948;
    result[5] += 17075717;
  } else {
    result[0] += 883334;
    result[1] += 0;
    result[2] += 45246341;
    result[3] += 5839820;
    result[4] += 0;
    result[5] += 1717594;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15404984;
    result[1] += 7141002;
    result[2] += 2404329;
    result[3] += 5442134;
    result[4] += 7918450;
    result[5] += 15376190;
  } else {
    result[0] += 244699;
    result[1] += 0;
    result[2] += 43752287;
    result[3] += 5628090;
    result[4] += 783038;
    result[5] += 3278974;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15219525;
    result[1] += 7985196;
    result[2] += 1703893;
    result[3] += 5544874;
    result[4] += 7552003;
    result[5] += 15681597;
  } else {
    result[0] += 484540;
    result[1] += 484540;
    result[2] += 43754010;
    result[3] += 5329945;
    result[4] += 436086;
    result[5] += 3197967;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15361793;
    result[1] += 7328165;
    result[2] += 1511704;
    result[3] += 5067808;
    result[4] += 8249585;
    result[5] += 16168035;
  } else {
    result[0] += 978798;
    result[1] += 342579;
    result[2] += 43067128;
    result[3] += 6215369;
    result[4] += 587279;
    result[5] += 2495935;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15285405;
    result[1] += 7382155;
    result[2] += 1664603;
    result[3] += 5442530;
    result[4] += 8019047;
    result[5] += 15893347;
  } else {
    result[0] += 432572;
    result[1] += 288381;
    result[2] += 45708526;
    result[3] += 4662173;
    result[4] += 96127;
    result[5] += 2499309;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16816584;
    result[1] += 7265701;
    result[2] += 1669939;
    result[3] += 5112358;
    result[4] += 7133864;
    result[5] += 15688642;
  } else {
    result[0] += 1202294;
    result[1] += 508663;
    result[2] += 42450258;
    result[3] += 5872748;
    result[4] += 184968;
    result[5] += 3468158;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16703324;
    result[1] += 7760528;
    result[2] += 848807;
    result[3] += 4668442;
    result[4] += 8184932;
    result[5] += 15521056;
  } else {
    result[0] += 585373;
    result[1] += 334499;
    result[2] += 40432567;
    result[3] += 7902539;
    result[4] += 543560;
    result[5] += 3888550;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16182228;
    result[1] += 7724967;
    result[2] += 1392791;
    result[3] += 5111688;
    result[4] += 7739326;
    result[5] += 15536087;
  } else {
    result[0] += 1185363;
    result[1] += 0;
    result[2] += 46081008;
    result[3] += 4692064;
    result[4] += 98780;
    result[5] += 1629874;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15601128;
    result[1] += 7873330;
    result[2] += 1338902;
    result[3] += 5020885;
    result[4] += 8018863;
    result[5] += 15833980;
  } else {
    result[0] += 755491;
    result[1] += 0;
    result[2] += 44857288;
    result[3] += 6091147;
    result[4] += 141654;
    result[5] += 1841509;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    result[0] += 8721357;
    result[1] += 8893375;
    result[2] += 963305;
    result[3] += 6123871;
    result[4] += 9323423;
    result[5] += 19661757;
  } else {
    result[0] += 18766865;
    result[1] += 0;
    result[2] += 31204637;
    result[3] += 2739458;
    result[4] += 188928;
    result[5] += 787200;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 15546855;
    result[1] += 8292645;
    result[2] += 1513148;
    result[3] += 4836140;
    result[4] += 7788262;
    result[5] += 15710038;
  } else {
    result[0] += 1645751;
    result[1] += 489277;
    result[2] += 39008764;
    result[3] += 7383643;
    result[4] += 711676;
    result[5] += 4447977;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15918271;
    result[1] += 7669584;
    result[2] += 1709060;
    result[3] += 5452043;
    result[4] += 7471841;
    result[5] += 15466289;
  } else {
    result[0] += 785664;
    result[1] += 785664;
    result[2] += 43525827;
    result[3] += 5028254;
    result[4] += 209510;
    result[5] += 3352169;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16088251;
    result[1] += 8014332;
    result[2] += 1042757;
    result[3] += 4751992;
    result[4] += 7969643;
    result[5] += 15820113;
  } else {
    result[0] += 1010477;
    result[1] += 746874;
    result[2] += 42088570;
    result[3] += 6765803;
    result[4] += 175735;
    result[5] += 2899630;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2029757;
    result[1] += 947220;
    result[2] += 676585;
    result[3] += 7307127;
    result[4] += 9675178;
    result[5] += 33051221;
  } else {
    result[0] += 18348752;
    result[1] += 7922948;
    result[2] += 16260276;
    result[3] += 4226677;
    result[4] += 3994624;
    result[5] += 2933811;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15800497;
    result[1] += 7554252;
    result[2] += 2148060;
    result[3] += 5334109;
    result[4] += 7554252;
    result[5] += 15295919;
  } else {
    result[0] += 341025;
    result[1] += 292307;
    result[2] += 45405053;
    result[3] += 5261529;
    result[4] += 194871;
    result[5] += 2192304;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16202605;
    result[1] += 7420282;
    result[2] += 1248537;
    result[3] += 5618416;
    result[4] += 6994644;
    result[5] += 16202605;
  } else {
    result[0] += 566754;
    result[1] += 0;
    result[2] += 45907100;
    result[3] += 5770589;
    result[4] += 51523;
    result[5] += 1391124;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17191026;
    result[1] += 7560528;
    result[2] += 1556147;
    result[3] += 4639081;
    result[4] += 7164151;
    result[5] += 15576156;
  } else {
    result[0] += 734810;
    result[1] += 734810;
    result[2] += 42297528;
    result[3] += 5327376;
    result[4] += 183702;
    result[5] += 4408862;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16468432;
    result[1] += 7530565;
    result[2] += 1646843;
    result[3] += 4296763;
    result[4] += 7246110;
    result[5] += 16498375;
  } else {
    result[0] += 1948321;
    result[1] += 389664;
    result[2] += 39529285;
    result[3] += 6580998;
    result[4] += 606144;
    result[5] += 4632676;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15889848;
    result[1] += 7238708;
    result[2] += 2059795;
    result[3] += 4678677;
    result[4] += 7915498;
    result[5] += 15904561;
  } else {
    result[0] += 1778926;
    result[1] += 501748;
    result[2] += 41097764;
    result[3] += 6066595;
    result[4] += 364908;
    result[5] += 3877147;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15561475;
    result[1] += 7103525;
    result[2] += 1671417;
    result[3] += 5403290;
    result[4] += 7550197;
    result[5] += 16397184;
  } else {
    result[0] += 536870;
    result[1] += 927322;
    result[2] += 43535350;
    result[3] += 5710354;
    result[4] += 488064;
    result[5] += 2489128;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16460187;
    result[1] += 7167913;
    result[2] += 1748623;
    result[3] += 5491546;
    result[4] += 7456941;
    result[5] += 15361878;
  } else {
    result[0] += 1691312;
    result[1] += 434908;
    result[2] += 43007660;
    result[3] += 5170583;
    result[4] += 193292;
    result[5] += 3189332;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15568969;
    result[1] += 7755759;
    result[2] += 1938939;
    result[3] += 4682180;
    result[4] += 7798847;
    result[5] += 15942394;
  } else {
    result[0] += 246723;
    result[1] += 296068;
    result[2] += 45347827;
    result[3] += 5427922;
    result[4] += 148034;
    result[5] += 2220513;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15899249;
    result[1] += 7725385;
    result[2] += 1750508;
    result[3] += 5150257;
    result[4] += 7609649;
    result[5] += 15552040;
  } else {
    result[0] += 1059296;
    result[1] += 385198;
    result[2] += 44346018;
    result[3] += 5681683;
    result[4] += 288899;
    result[5] += 1925994;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16649254;
    result[1] += 7535529;
    result[2] += 2090043;
    result[3] += 5175344;
    result[4] += 7805670;
    result[5] += 14431249;
  } else {
    result[0] += 255652;
    result[1] += 255652;
    result[2] += 44023414;
    result[3] += 6033406;
    result[4] += 460175;
    result[5] += 2658789;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16693785;
    result[1] += 7993990;
    result[2] += 506337;
    result[3] += 4403599;
    result[4] += 8270174;
    result[5] += 15819202;
  } else {
    result[0] += 2022874;
    result[1] += 525947;
    result[2] += 38434616;
    result[3] += 8253328;
    result[4] += 323659;
    result[5] += 4126664;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15962578;
    result[1] += 7593708;
    result[2] += 2282419;
    result[3] += 5153386;
    result[4] += 7105644;
    result[5] += 15589353;
  } else {
    result[0] += 247178;
    result[1] += 0;
    result[2] += 44393193;
    result[3] += 5190740;
    result[4] += 939276;
    result[5] += 2916702;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 15974109;
    result[1] += 7466319;
    result[2] += 1422854;
    result[3] += 4855307;
    result[4] += 8449115;
    result[5] += 15519383;
  } else {
    result[0] += 1151095;
    result[1] += 690657;
    result[2] += 39873945;
    result[3] += 7367010;
    result[4] += 184175;
    result[5] += 4420206;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16726265;
    result[1] += 7438748;
    result[2] += 1674082;
    result[3] += 4672873;
    result[4] += 7584320;
    result[5] += 15590801;
  } else {
    result[0] += 566120;
    result[1] += 330236;
    result[2] += 43638452;
    result[3] += 5614027;
    result[4] += 377413;
    result[5] += 3160839;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16341409;
    result[1] += 7614583;
    result[2] += 1326135;
    result[3] += 5133427;
    result[4] += 7557545;
    result[5] += 15713990;
  } else {
    result[0] += 809607;
    result[1] += 0;
    result[2] += 46501825;
    result[3] += 5110646;
    result[4] += 50600;
    result[5] += 1214411;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16392017;
    result[1] += 7786567;
    result[2] += 1565933;
    result[3] += 4956394;
    result[4] += 7154447;
    result[5] += 15831729;
  } else {
    result[0] += 1232486;
    result[1] += 295796;
    result[2] += 42644016;
    result[3] += 6310328;
    result[4] += 345096;
    result[5] += 2859367;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15438478;
    result[1] += 7226829;
    result[2] += 1781362;
    result[3] += 5010988;
    result[4] += 7733721;
    result[5] += 16495709;
  } else {
    result[0] += 1823154;
    result[1] += 239888;
    result[2] += 42316366;
    result[3] += 5565417;
    result[4] += 479777;
    result[5] += 3262486;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
    result[0] += 4280227;
    result[1] += 878722;
    result[2] += 878722;
    result[3] += 8787221;
    result[4] += 9694289;
    result[5] += 29167907;
  } else {
    result[0] += 17614932;
    result[1] += 9961042;
    result[2] += 17743107;
    result[3] += 3314244;
    result[4] += 2746611;
    result[5] += 2307153;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15700530;
    result[1] += 7617664;
    result[2] += 1381065;
    result[3] += 5117209;
    result[4] += 7835727;
    result[5] += 16034893;
  } else {
    result[0] += 900313;
    result[1] += 0;
    result[2] += 45489503;
    result[3] += 5638803;
    result[4] += 94769;
    result[5] += 1563701;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    result[0] += 8224405;
    result[1] += 8786757;
    result[2] += 1054410;
    result[3] += 7328156;
    result[4] += 8839478;
    result[5] += 19453882;
  } else {
    result[0] += 19492264;
    result[1] += 0;
    result[2] += 30284248;
    result[3] += 3122399;
    result[4] += 151572;
    result[5] += 636605;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16550728;
    result[1] += 7902325;
    result[2] += 1020146;
    result[3] += 4537366;
    result[4] += 8420011;
    result[5] += 15256513;
  } else {
    result[0] += 702061;
    result[1] += 412977;
    result[2] += 41256464;
    result[3] += 6566344;
    result[4] += 660764;
    result[5] += 4088478;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16377887;
    result[1] += 7516770;
    result[2] += 1329890;
    result[3] += 5218373;
    result[4] += 7083111;
    result[5] += 16161057;
  } else {
    result[0] += 627636;
    result[1] += 0;
    result[2] += 46010609;
    result[3] += 5552172;
    result[4] += 48279;
    result[5] += 1448392;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15202029;
    result[1] += 7149682;
    result[2] += 1705034;
    result[3] += 5602255;
    result[4] += 7995035;
    result[5] += 16033054;
  } else {
    result[0] += 1194152;
    result[1] += 646832;
    result[2] += 43586554;
    result[3] += 5672222;
    result[4] += 149269;
    result[5] += 2438060;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    result[0] += 1695718;
    result[1] += 255957;
    result[2] += 159973;
    result[3] += 7838699;
    result[4] += 11742051;
    result[5] += 31994690;
  } else {
    result[0] += 17736523;
    result[1] += 9175239;
    result[2] += 17037294;
    result[3] += 4382967;
    result[4] += 2882185;
    result[5] += 2472880;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16069704;
    result[1] += 7211698;
    result[2] += 1806566;
    result[3] += 5317717;
    result[4] += 7838169;
    result[5] += 15443233;
  } else {
    result[0] += 1458632;
    result[1] += 564631;
    result[2] += 43335504;
    result[3] += 5693372;
    result[4] += 235263;
    result[5] += 2399685;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15562314;
    result[1] += 7405116;
    result[2] += 2068225;
    result[3] += 5206722;
    result[4] += 7839009;
    result[5] += 15605703;
  } else {
    result[0] += 1349406;
    result[1] += 481930;
    result[2] += 42361717;
    result[3] += 5638590;
    result[4] += 481930;
    result[5] += 3373515;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    result[0] += 8916472;
    result[1] += 8899358;
    result[2] += 1112419;
    result[3] += 6623176;
    result[4] += 9292983;
    result[5] += 18842680;
  } else {
    result[0] += 19262508;
    result[1] += 0;
    result[2] += 30610224;
    result[3] += 3051486;
    result[4] += 127145;
    result[5] += 635726;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15601006;
    result[1] += 7374759;
    result[2] += 1601953;
    result[3] += 5137796;
    result[4] += 7374759;
    result[5] += 16596815;
  } else {
    result[0] += 1359166;
    result[1] += 291250;
    result[2] += 43833131;
    result[3] += 4951250;
    result[4] += 582500;
    result[5] += 2669792;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16491358;
    result[1] += 7069786;
    result[2] += 1817945;
    result[3] += 5121988;
    result[4] += 7416061;
    result[5] += 15769951;
  } else {
    result[0] += 1020297;
    result[1] += 923126;
    result[2] += 43046844;
    result[3] += 5150073;
    result[4] += 777369;
    result[5] += 2769379;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    result[0] += 8071324;
    result[1] += 9148718;
    result[2] += 620871;
    result[3] += 5880014;
    result[4] += 9002631;
    result[5] += 20963530;
  } else {
    result[0] += 19527754;
    result[1] += 0;
    result[2] += 28380715;
    result[3] += 4355315;
    result[4] += 284661;
    result[5] += 1138644;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16672147;
    result[1] += 7618909;
    result[2] += 709453;
    result[3] += 4179604;
    result[4] += 8004481;
    result[5] += 16502495;
  } else {
    result[0] += 1995802;
    result[1] += 638656;
    result[2] += 37920250;
    result[3] += 8542035;
    result[4] += 957985;
    result[5] += 3632360;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15440465;
    result[1] += 7409108;
    result[2] += 1447091;
    result[3] += 5383180;
    result[4] += 8161595;
    result[5] += 15845650;
  } else {
    result[0] += 432960;
    result[1] += 0;
    result[2] += 45893803;
    result[3] += 5917125;
    result[4] += 0;
    result[5] += 1443201;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    result[0] += 2677978;
    result[1] += 382568;
    result[2] += 223164;
    result[3] += 8097696;
    result[4] += 11381408;
    result[5] += 30924274;
  } else {
    result[0] += 17804566;
    result[1] += 8748501;
    result[2] += 17531176;
    result[3] += 3998338;
    result[4] += 3263601;
    result[5] += 2340907;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15640452;
    result[1] += 7968845;
    result[2] += 1641893;
    result[3] += 5378617;
    result[4] += 7770686;
    result[5] += 15286595;
  } else {
    result[0] += 311832;
    result[1] += 571692;
    result[2] += 44903820;
    result[3] += 5353117;
    result[4] += 51972;
    result[5] += 2494656;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16062597;
    result[1] += 7429132;
    result[2] += 1581592;
    result[3] += 5049488;
    result[4] += 7704823;
    result[5] += 15859456;
  } else {
    result[0] += 476794;
    result[1] += 286076;
    result[2] += 46058374;
    result[3] += 4624909;
    result[4] += 143038;
    result[5] += 2097896;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16449483;
    result[1] += 7240645;
    result[2] += 1594666;
    result[3] += 5602880;
    result[4] += 7384309;
    result[5] += 15415105;
  } else {
    result[0] += 591593;
    result[1] += 98598;
    result[2] += 45306186;
    result[3] += 5176441;
    result[4] += 49299;
    result[5] += 2464972;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 15801087;
    result[1] += 7351471;
    result[2] += 1189657;
    result[3] += 4758628;
    result[4] += 8632640;
    result[5] += 15953607;
  } else {
    result[0] += 1233240;
    result[1] += 945484;
    result[2] += 38641551;
    result[3] += 7481662;
    result[4] += 411080;
    result[5] += 4974072;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 1130638;
    result[1] += 729444;
    result[2] += 620027;
    result[3] += 7330913;
    result[4] += 10978134;
    result[5] += 32897932;
  } else {
    result[0] += 18199827;
    result[1] += 7731325;
    result[2] += 16214974;
    result[3] += 3777624;
    result[4] += 4177796;
    result[5] += 3585542;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16033826;
    result[1] += 7201753;
    result[2] += 2381682;
    result[3] += 5585612;
    result[4] += 7116693;
    result[5] += 15367522;
  } else {
    result[0] += 361703;
    result[1] += 103343;
    result[2] += 44489495;
    result[3] += 5322204;
    result[4] += 413375;
    result[5] += 2996969;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1871223;
    result[1] += 918600;
    result[2] += 408266;
    result[3] += 8131314;
    result[4] += 11159293;
    result[5] += 31198392;
  } else {
    result[0] += 17653267;
    result[1] += 8512577;
    result[2] += 16330925;
    result[3] += 4479434;
    result[4] += 3669499;
    result[5] += 3041386;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15762016;
    result[1] += 7261317;
    result[2] += 2157981;
    result[3] += 5569926;
    result[4] += 7552936;
    result[5] += 15382911;
  } else {
    result[0] += 1877171;
    result[1] += 375434;
    result[2] += 42470994;
    result[3] += 5772300;
    result[4] += 234646;
    result[5] += 2956544;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17041341;
    result[1] += 7857019;
    result[2] += 1083200;
    result[3] += 4012419;
    result[4] += 7872275;
    result[5] += 15820833;
  } else {
    result[0] += 616148;
    result[1] += 451842;
    result[2] += 40213972;
    result[3] += 7681320;
    result[4] += 1067991;
    result[5] += 3655815;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
    result[0] += 8275287;
    result[1] += 8851768;
    result[2] += 781038;
    result[3] += 5076749;
    result[4] += 10451037;
    result[5] += 20251209;
  } else {
    result[0] += 18412540;
    result[1] += 221504;
    result[2] += 28546359;
    result[3] += 4347020;
    result[4] += 415320;
    result[5] += 1744345;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    result[0] += 1490322;
    result[1] += 1099999;
    result[2] += 958064;
    result[3] += 6883870;
    result[4] += 9864515;
    result[5] += 33390319;
  } else {
    result[0] += 17517580;
    result[1] += 7859414;
    result[2] += 15945698;
    result[3] += 4667033;
    result[4] += 4456368;
    result[5] += 3240995;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16055135;
    result[1] += 7022300;
    result[2] += 1791997;
    result[3] += 6060740;
    result[4] += 7153422;
    result[5] += 15603493;
  } else {
    result[0] += 564631;
    result[1] += 517579;
    result[2] += 42535609;
    result[3] += 6916741;
    result[4] += 564631;
    result[5] += 2587896;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15523288;
    result[1] += 7990770;
    result[2] += 1732765;
    result[3] += 5771111;
    result[4] += 7203149;
    result[5] += 15466006;
  } else {
    result[0] += 1096672;
    result[1] += 348941;
    result[2] += 43517948;
    result[3] += 5034722;
    result[4] += 398789;
    result[5] += 3290016;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
    result[0] += 8376329;
    result[1] += 10215906;
    result[2] += 875138;
    result[3] += 5822352;
    result[4] += 9019288;
    result[5] += 19378075;
  } else {
    result[0] += 18082520;
    result[1] += 235987;
    result[2] += 27993983;
    result[3] += 4808239;
    result[4] += 589968;
    result[5] += 1976392;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16390644;
    result[1] += 8303562;
    result[2] += 974160;
    result[3] += 4283215;
    result[4] += 7886064;
    result[5] += 15849443;
  } else {
    result[0] += 1149871;
    result[1] += 356856;
    result[2] += 38699114;
    result[3] += 8326653;
    result[4] += 396507;
    result[5] += 4758087;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    result[0] += 5409646;
    result[1] += 964964;
    result[2] += 87724;
    result[3] += 5819025;
    result[4] += 13304807;
    result[5] += 28100923;
  } else {
    result[0] += 16519104;
    result[1] += 9031641;
    result[2] += 18673770;
    result[3] += 4865953;
    result[4] += 2370132;
    result[5] += 2226488;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
