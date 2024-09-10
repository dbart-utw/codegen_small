
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85800822;
    result[1] += 0;
    result[2] += 88671;
    result[3] += 0;
    result[4] += 3284;
    result[5] += 0;
    result[6] += 6568;
  } else {
    result[0] += 39938441;
    result[1] += 242681;
    result[2] += 470504;
    result[3] += 32771907;
    result[4] += 12416378;
    result[5] += 39621;
    result[6] += 19810;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9925260;
    result[1] += 265736;
    result[2] += 411891;
    result[3] += 42717153;
    result[4] += 32433148;
    result[5] += 146155;
    result[6] += 0;
  } else {
    result[0] += 77605136;
    result[1] += 62624;
    result[2] += 296884;
    result[3] += 7902229;
    result[4] += 0;
    result[5] += 0;
    result[6] += 32471;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85820536;
    result[1] += 0;
    result[2] += 65674;
    result[3] += 0;
    result[4] += 6567;
    result[5] += 0;
    result[6] += 6567;
  } else {
    result[0] += 39856186;
    result[1] += 203095;
    result[2] += 564703;
    result[3] += 33545376;
    result[4] += 11635866;
    result[5] += 39628;
    result[6] += 54488;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17967326;
    result[1] += 388182;
    result[2] += 573032;
    result[3] += 37505868;
    result[4] += 29464935;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73458720;
    result[1] += 35374;
    result[2] += 192346;
    result[3] += 10433145;
    result[4] += 1744384;
    result[5] += 13265;
    result[6] += 22108;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85820151;
    result[1] += 0;
    result[2] += 69294;
    result[3] += 0;
    result[4] += 3299;
    result[5] += 0;
    result[6] += 6599;
  } else {
    result[0] += 39207435;
    result[1] += 186865;
    result[2] += 501587;
    result[3] += 33827662;
    result[4] += 12136454;
    result[5] += 24587;
    result[6] += 14752;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71767237;
    result[1] += 29738;
    result[2] += 244279;
    result[3] += 11682939;
    result[4] += 2124170;
    result[5] += 19117;
    result[6] += 31862;
  } else {
    result[0] += 8362628;
    result[1] += 813812;
    result[2] += 196437;
    result[3] += 34937826;
    result[4] += 41588641;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71775647;
    result[1] += 25478;
    result[2] += 299374;
    result[3] += 11756301;
    result[4] += 2002201;
    result[5] += 21232;
    result[6] += 19109;
  } else {
    result[0] += 8637923;
    result[1] += 366970;
    result[2] += 225828;
    result[3] += 36584144;
    result[4] += 40084479;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17772913;
    result[1] += 294680;
    result[2] += 644613;
    result[3] += 37442832;
    result[4] += 29744306;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73512994;
    result[1] += 30965;
    result[2] += 214549;
    result[3] += 10329332;
    result[4] += 1782749;
    result[5] += 8847;
    result[6] += 19906;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72143717;
    result[1] += 80915;
    result[2] += 192174;
    result[3] += 8984144;
    result[4] += 4473107;
    result[5] += 5057;
    result[6] += 20228;
  } else {
    result[0] += 51409798;
    result[1] += 0;
    result[2] += 396638;
    result[3] += 27638513;
    result[4] += 6373264;
    result[5] += 18029;
    result[6] += 63101;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9480790;
    result[1] += 104041;
    result[2] += 455181;
    result[3] += 42123842;
    result[4] += 33631447;
    result[5] += 104041;
    result[6] += 0;
  } else {
    result[0] += 77748279;
    result[1] += 46564;
    result[2] += 228164;
    result[3] += 7843742;
    result[4] += 0;
    result[5] += 2328;
    result[6] += 30266;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85823805;
    result[1] += 0;
    result[2] += 68971;
    result[3] += 0;
    result[4] += 3284;
    result[5] += 0;
    result[6] += 3284;
  } else {
    result[0] += 40027926;
    result[1] += 207988;
    result[2] += 643774;
    result[3] += 32961261;
    result[4] += 11969256;
    result[5] += 44569;
    result[6] += 44569;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72224769;
    result[1] += 73153;
    result[2] += 224504;
    result[3] += 8924672;
    result[4] += 4427021;
    result[5] += 2522;
    result[6] += 22702;
  } else {
    result[0] += 49946555;
    result[1] += 0;
    result[2] += 454638;
    result[3] += 28914990;
    result[4] += 6492233;
    result[5] += 36371;
    result[6] += 54556;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71884200;
    result[1] += 42502;
    result[2] += 244388;
    result[3] += 11724269;
    result[4] += 1969983;
    result[5] += 17000;
    result[6] += 17000;
  } else {
    result[0] += 8006856;
    result[1] += 446375;
    result[2] += 167390;
    result[3] += 35821617;
    result[4] += 41457105;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72254199;
    result[1] += 93685;
    result[2] += 207627;
    result[3] += 8803891;
    result[4] += 4514621;
    result[5] += 10128;
    result[6] += 15192;
  } else {
    result[0] += 51100018;
    result[1] += 0;
    result[2] += 430618;
    result[3] += 28017092;
    result[4] += 6270876;
    result[5] += 35884;
    result[6] += 44856;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85800219;
    result[1] += 0;
    result[2] += 89213;
    result[3] += 0;
    result[4] += 3304;
    result[5] += 0;
    result[6] += 6608;
  } else {
    result[0] += 39767034;
    result[1] += 171769;
    result[2] += 510400;
    result[3] += 33023864;
    result[4] += 12362477;
    result[5] += 19630;
    result[6] += 44169;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10123042;
    result[1] += 173157;
    result[2] += 439553;
    result[3] += 42010627;
    result[4] += 32993127;
    result[5] += 159837;
    result[6] += 0;
  } else {
    result[0] += 77576260;
    result[1] += 71870;
    result[2] += 243432;
    result[3] += 7968369;
    result[4] += 0;
    result[5] += 2318;
    result[6] += 37094;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85827299;
    result[1] += 0;
    result[2] += 65497;
    result[3] += 0;
    result[4] += 3274;
    result[5] += 0;
    result[6] += 3274;
  } else {
    result[0] += 39701712;
    result[1] += 164138;
    result[2] += 547129;
    result[3] += 32967044;
    result[4] += 12479528;
    result[5] += 14921;
    result[6] += 24869;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 18115951;
    result[1] += 422154;
    result[2] += 330382;
    result[3] += 37296468;
    result[4] += 29734388;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73521166;
    result[1] += 26553;
    result[2] += 212424;
    result[3] += 10293759;
    result[4] += 1801186;
    result[5] += 22127;
    result[6] += 22127;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85797378;
    result[1] += 0;
    result[2] += 82231;
    result[3] += 0;
    result[4] += 9867;
    result[5] += 0;
    result[6] += 9867;
  } else {
    result[0] += 40130830;
    result[1] += 207522;
    result[2] += 533628;
    result[3] += 33114605;
    result[4] += 11848526;
    result[5] += 39528;
    result[6] += 24705;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85834062;
    result[1] += 0;
    result[2] += 65282;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 40445275;
    result[1] += 124969;
    result[2] += 564864;
    result[3] += 32762122;
    result[4] += 11947127;
    result[5] += 24993;
    result[6] += 29992;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85830143;
    result[1] += 0;
    result[2] += 56020;
    result[3] += 0;
    result[4] += 3295;
    result[5] += 0;
    result[6] += 9885;
  } else {
    result[0] += 39670488;
    result[1] += 157676;
    result[2] += 630707;
    result[3] += 33220523;
    result[4] += 12101691;
    result[5] += 49273;
    result[6] += 68983;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72183836;
    result[1] += 106067;
    result[2] += 214659;
    result[3] += 8945007;
    result[4] += 4419470;
    result[5] += 12627;
    result[6] += 17677;
  } else {
    result[0] += 50411307;
    result[1] += 0;
    result[2] += 443713;
    result[3] += 29004385;
    result[4] += 5958440;
    result[5] += 54332;
    result[6] += 27166;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71888512;
    result[1] += 34048;
    result[2] += 257489;
    result[3] += 11667891;
    result[4] += 2019483;
    result[5] += 14896;
    result[6] += 17024;
  } else {
    result[0] += 8524153;
    result[1] += 712630;
    result[2] += 191861;
    result[3] += 34727016;
    result[4] += 41743683;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17451416;
    result[1] += 235340;
    result[2] += 651712;
    result[3] += 36857970;
    result[4] += 30702906;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73232212;
    result[1] += 57628;
    result[2] += 201698;
    result[3] += 10563702;
    result[4] += 1801991;
    result[5] += 19948;
    result[6] += 22164;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10191217;
    result[1] += 162842;
    result[2] += 339254;
    result[3] += 41687644;
    result[4] += 33477675;
    result[5] += 40710;
    result[6] += 0;
  } else {
    result[0] += 77519711;
    result[1] += 60085;
    result[2] += 265763;
    result[3] += 8026054;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27731;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71696218;
    result[1] += 46644;
    result[2] += 284104;
    result[3] += 11868802;
    result[4] += 1967532;
    result[5] += 23322;
    result[6] += 12721;
  } else {
    result[0] += 7366912;
    result[1] += 546763;
    result[2] += 143885;
    result[3] += 36748229;
    result[4] += 41093556;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85804084;
    result[1] += 0;
    result[2] += 75552;
    result[3] += 0;
    result[4] += 3284;
    result[5] += 0;
    result[6] += 16424;
  } else {
    result[0] += 39984041;
    result[1] += 158431;
    result[2] += 599067;
    result[3] += 32849692;
    result[4] += 12223947;
    result[5] += 34656;
    result[6] += 49509;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 19553645;
    result[1] += 400074;
    result[2] += 733470;
    result[3] += 37140256;
    result[4] += 28071899;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73659691;
    result[1] += 42561;
    result[2] += 194884;
    result[3] += 10349048;
    result[4] += 1599398;
    result[5] += 26880;
    result[6] += 26880;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17581847;
    result[1] += 356896;
    result[2] += 507168;
    result[3] += 36760336;
    result[4] += 30693096;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73720691;
    result[1] += 41926;
    result[2] += 198601;
    result[3] += 10088930;
    result[4] += 1818302;
    result[5] += 17653;
    result[6] += 13240;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17934036;
    result[1] += 306718;
    result[2] += 685607;
    result[3] += 37780556;
    result[4] += 29192426;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73488632;
    result[1] += 50999;
    result[2] += 228390;
    result[3] += 10255413;
    result[4] += 1833778;
    result[5] += 15521;
    result[6] += 26608;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85830236;
    result[1] += 0;
    result[2] += 52654;
    result[3] += 0;
    result[4] += 6581;
    result[5] += 0;
    result[6] += 9872;
  } else {
    result[0] += 40046533;
    result[1] += 162931;
    result[2] += 592477;
    result[3] += 33257730;
    result[4] += 11755738;
    result[5] += 39498;
    result[6] += 44435;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9385077;
    result[1] += 185843;
    result[2] += 265490;
    result[3] += 43221800;
    result[4] += 32734938;
    result[5] += 106196;
    result[6] += 0;
  } else {
    result[0] += 77179271;
    result[1] += 51035;
    result[2] += 257496;
    result[3] += 8379066;
    result[4] += 0;
    result[5] += 0;
    result[6] += 32477;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85817211;
    result[1] += 0;
    result[2] += 68992;
    result[3] += 0;
    result[4] += 6570;
    result[5] += 0;
    result[6] += 6570;
  } else {
    result[0] += 39940176;
    result[1] += 163344;
    result[2] += 549431;
    result[3] += 33203458;
    result[4] += 11973638;
    result[5] += 49498;
    result[6] += 19799;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9427648;
    result[1] += 202021;
    result[2] += 377105;
    result[3] += 42451354;
    result[4] += 33306535;
    result[5] += 134680;
    result[6] += 0;
  } else {
    result[0] += 77499619;
    result[1] += 55535;
    result[2] += 229083;
    result[3] += 8087339;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27767;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9831852;
    result[1] += 81705;
    result[2] += 462995;
    result[3] += 42827115;
    result[4] += 32586736;
    result[5] += 108940;
    result[6] += 0;
  } else {
    result[0] += 77483094;
    result[1] += 43882;
    result[2] += 180150;
    result[3] += 8166812;
    result[4] += 0;
    result[5] += 0;
    result[6] += 25405;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10408008;
    result[1] += 199642;
    result[2] += 425903;
    result[3] += 42364056;
    result[4] += 32408569;
    result[5] += 93166;
    result[6] += 0;
  } else {
    result[0] += 77593686;
    result[1] += 51011;
    result[2] += 243465;
    result[3] += 7981038;
    result[4] += 0;
    result[5] += 2318;
    result[6] += 27824;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85797557;
    result[1] += 0;
    result[2] += 85370;
    result[3] += 0;
    result[4] += 6566;
    result[5] += 0;
    result[6] += 9850;
  } else {
    result[0] += 39117667;
    result[1] += 163485;
    result[2] += 634126;
    result[3] += 33861354;
    result[4] += 12088032;
    result[5] += 19816;
    result[6] += 14862;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 21158365;
    result[1] += 345241;
    result[2] += 493201;
    result[3] += 34754299;
    result[4] += 29148237;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73634422;
    result[1] += 53862;
    result[2] += 215449;
    result[3] += 10334852;
    result[4] += 1627094;
    result[5] += 20198;
    result[6] += 13465;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72299535;
    result[1] += 31839;
    result[2] += 275944;
    result[3] += 11339189;
    result[4] += 1904015;
    result[5] += 16981;
    result[6] += 31839;
  } else {
    result[0] += 8329290;
    result[1] += 708272;
    result[2] += 198316;
    result[3] += 35555303;
    result[4] += 41108163;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17418733;
    result[1] += 202116;
    result[2] += 569599;
    result[3] += 36785131;
    result[4] += 30923764;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73456385;
    result[1] += 44249;
    result[2] += 199122;
    result[3] += 10321196;
    result[4] += 1847416;
    result[5] += 11062;
    result[6] += 19912;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10511507;
    result[1] += 106311;
    result[2] += 279066;
    result[3] += 42497850;
    result[4] += 32464743;
    result[5] += 39866;
    result[6] += 0;
  } else {
    result[0] += 77375744;
    result[1] += 39428;
    result[2] += 238892;
    result[3] += 8226724;
    result[4] += 0;
    result[5] += 2319;
    result[6] += 16235;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85836945;
    result[1] += 0;
    result[2] += 55832;
    result[3] += 0;
    result[4] += 3284;
    result[5] += 0;
    result[6] += 3284;
  } else {
    result[0] += 39366612;
    result[1] += 183238;
    result[2] += 470477;
    result[3] += 33166210;
    result[4] += 12633567;
    result[5] += 44571;
    result[6] += 34666;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85820827;
    result[1] += 0;
    result[2] += 68703;
    result[3] += 0;
    result[4] += 6543;
    result[5] += 0;
    result[6] += 3271;
  } else {
    result[0] += 39836294;
    result[1] += 244088;
    result[2] += 518066;
    result[3] += 33041658;
    result[4] += 12174553;
    result[5] += 34869;
    result[6] += 49814;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10026147;
    result[1] += 104167;
    result[2] += 390629;
    result[3] += 42786910;
    result[4] += 32539406;
    result[5] += 52083;
    result[6] += 0;
  } else {
    result[0] += 77468393;
    result[1] += 46554;
    result[2] += 209493;
    result[3] += 8151627;
    result[4] += 0;
    result[5] += 0;
    result[6] += 23277;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72036234;
    result[1] += 44705;
    result[2] += 283137;
    result[3] += 11536271;
    result[4] += 1964934;
    result[5] += 12773;
    result[6] += 21288;
  } else {
    result[0] += 7990002;
    result[1] += 518123;
    result[2] += 163617;
    result[3] += 35832298;
    result[4] += 41395303;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10323473;
    result[1] += 160885;
    result[2] += 268142;
    result[3] += 42379870;
    result[4] += 32632902;
    result[5] += 134071;
    result[6] += 0;
  } else {
    result[0] += 77402737;
    result[1] += 50947;
    result[2] += 245473;
    result[3] += 8186293;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13894;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85823992;
    result[1] += 0;
    result[2] += 75353;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39646616;
    result[1] += 164034;
    result[2] += 596488;
    result[3] += 33408338;
    result[4] += 12029189;
    result[5] += 9941;
    result[6] += 44736;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17168979;
    result[1] += 381129;
    result[2] += 508172;
    result[3] += 37259952;
    result[4] += 30581110;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73426690;
    result[1] += 37668;
    result[2] += 221578;
    result[3] += 10460722;
    result[4] += 1715017;
    result[5] += 19942;
    result[6] += 17726;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85839934;
    result[1] += 0;
    result[2] += 56111;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 3300;
  } else {
    result[0] += 40258405;
    result[1] += 191706;
    result[2] += 540711;
    result[3] += 33248822;
    result[4] += 11600712;
    result[5] += 24577;
    result[6] += 34408;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71738549;
    result[1] += 40356;
    result[2] += 290989;
    result[3] += 11633220;
    result[4] += 2151625;
    result[5] += 21240;
    result[6] += 23364;
  } else {
    result[0] += 8736002;
    result[1] += 533710;
    result[2] += 224720;
    result[3] += 35393451;
    result[4] += 41011460;
    result[5] += 0;
    result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
