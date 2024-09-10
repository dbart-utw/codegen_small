
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13421772;
    result[1] += 29527900;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f705e0c))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 14069720;
    result[1] += 28879952;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 32069089;
    result[1] += 10880583;
  } else {
    result[0] += 9366683;
    result[1] += 33582988;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f5e92a3))) ) ) {
    result[0] += 14017048;
    result[1] += 28932624;
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e62031d))) ) ) {
    result[0] += 26492321;
    result[1] += 16457351;
  } else {
    result[0] += 9911462;
    result[1] += 33038209;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdd590c))) ) ) {
    result[0] += 31782757;
    result[1] += 11166914;
  } else {
    result[0] += 7904847;
    result[1] += 35044825;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 24643254;
    result[1] += 18306417;
  } else {
    result[0] += 10052051;
    result[1] += 32897621;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee51a22))) ) ) {
    result[0] += 38831211;
    result[1] += 4118461;
  } else {
    result[0] += 7459680;
    result[1] += 35489992;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8510764;
    result[1] += 34438908;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e7a747e))) ) ) {
    result[0] += 27144193;
    result[1] += 15805479;
  } else {
    result[0] += 8714426;
    result[1] += 34235246;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0e30a9))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13063858;
    result[1] += 29885814;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e075e20))) ) ) {
    result[0] += 27831388;
    result[1] += 15118284;
  } else {
    result[0] += 6847049;
    result[1] += 36102623;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 42168769;
    result[1] += 780903;
  } else {
    result[0] += 11769862;
    result[1] += 31179810;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8989466;
    result[1] += 33960206;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12049229;
    result[1] += 30900443;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 41950843;
    result[1] += 998829;
  } else {
    result[0] += 10932644;
    result[1] += 32017028;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12481101;
    result[1] += 30468571;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eb62585))) ) ) {
    result[0] += 40997415;
    result[1] += 1952257;
  } else {
    result[0] += 13139854;
    result[1] += 29809818;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 42245579;
    result[1] += 704092;
  } else {
    result[0] += 8292263;
    result[1] += 34657409;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 14378002;
    result[1] += 28571670;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13996991;
    result[1] += 28952681;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12190955;
    result[1] += 30758717;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    result[0] += 41328930;
    result[1] += 1620742;
  } else {
    result[0] += 8589934;
    result[1] += 34359738;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 10215057;
    result[1] += 32734615;
  } else {
    result[0] += 38544578;
    result[1] += 4405094;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f33f09a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13477930;
    result[1] += 29471742;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    result[0] += 41026553;
    result[1] += 1923119;
  } else {
    result[0] += 8984370;
    result[1] += 33965302;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12526987;
    result[1] += 30422685;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    result[0] += 38897817;
    result[1] += 4051855;
  } else {
    result[0] += 8589934;
    result[1] += 34359738;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8548235;
    result[1] += 34401437;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 41442666;
    result[1] += 1507006;
  } else {
    result[0] += 9382210;
    result[1] += 33567462;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 7630652;
    result[1] += 35319020;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d63c750))) ) ) {
    result[0] += 35898234;
    result[1] += 7051438;
  } else {
    result[0] += 13147859;
    result[1] += 29801813;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 7592113;
    result[1] += 35357559;
  } else {
    result[0] += 38324323;
    result[1] += 4625349;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9496410;
    result[1] += 33453262;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 29126789;
    result[1] += 13822883;
  } else {
    result[0] += 9273224;
    result[1] += 33676448;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    result[0] += 38923141;
    result[1] += 4026531;
  } else {
    result[0] += 8417272;
    result[1] += 34532400;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 28199280;
    result[1] += 14750392;
  } else {
    result[0] += 6809094;
    result[1] += 36140578;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12271335;
    result[1] += 30678337;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9522778;
    result[1] += 33426894;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3cb55ef2))) ) ) {
    result[0] += 32600354;
    result[1] += 10349318;
  } else {
    result[0] += 11691855;
    result[1] += 31257817;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0d3d86))) ) ) {
    result[0] += 32051994;
    result[1] += 10897678;
  } else {
    result[0] += 9203501;
    result[1] += 33746171;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f715864))) ) ) {
    result[0] += 12145604;
    result[1] += 30804068;
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8292263;
    result[1] += 34657409;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42176e))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13722509;
    result[1] += 29227163;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12809551;
    result[1] += 30140121;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 30114138;
    result[1] += 12835534;
  } else {
    result[0] += 6832902;
    result[1] += 36116770;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 9219563;
    result[1] += 33730109;
  } else {
    result[0] += 36387917;
    result[1] += 6561755;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 26674007;
    result[1] += 16275665;
  } else {
    result[0] += 8692195;
    result[1] += 34257477;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10300147;
    result[1] += 32649525;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    result[0] += 30180851;
    result[1] += 12768821;
  } else {
    result[0] += 9607163;
    result[1] += 33342509;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 41518017;
    result[1] += 1431655;
  } else {
    result[0] += 15668335;
    result[1] += 27281337;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    result[0] += 38985087;
    result[1] += 3964585;
  } else {
    result[0] += 11930464;
    result[1] += 31019208;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 40265318;
    result[1] += 2684354;
  } else {
    result[0] += 10783900;
    result[1] += 32165772;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb098b3))) ) ) {
    result[0] += 25839640;
    result[1] += 17110032;
  } else {
    result[0] += 8589934;
    result[1] += 34359738;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5588e4))) ) ) {
    result[0] += 28633115;
    result[1] += 14316557;
  } else {
    result[0] += 8118535;
    result[1] += 34831137;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 41297762;
    result[1] += 1651910;
  } else {
    result[0] += 13954113;
    result[1] += 28995559;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9460280;
    result[1] += 33489392;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9345530;
    result[1] += 33604142;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d73fa6e))) ) ) {
    result[0] += 38177487;
    result[1] += 4772185;
  } else {
    result[0] += 10737418;
    result[1] += 32212254;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 8417272;
    result[1] += 34532400;
  } else {
    result[0] += 33554431;
    result[1] += 9395240;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 30907708;
    result[1] += 12041964;
  } else {
    result[0] += 8534870;
    result[1] += 34414802;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 27467814;
    result[1] += 15481858;
  } else {
    result[0] += 9463487;
    result[1] += 33486185;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 7708915;
    result[1] += 35240757;
  } else {
    result[0] += 37896770;
    result[1] += 5052902;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9188238;
    result[1] += 33761434;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 25025793;
    result[1] += 17923879;
  } else {
    result[0] += 9789998;
    result[1] += 33159673;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13071639;
    result[1] += 29878033;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 9761289;
    result[1] += 33188383;
  } else {
    result[0] += 34359738;
    result[1] += 8589934;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7cd9e8))) ) ) {
    result[0] += 9728931;
    result[1] += 33220741;
  } else {
    result[0] += 36664354;
    result[1] += 6285317;
  }
  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ebadaba))) ) ) {
    result[0] += 27331610;
    result[1] += 15618062;
  } else {
    result[0] += 11228672;
    result[1] += 31721000;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f5a26d4))) ) ) {
    result[0] += 41564199;
    result[1] += 1385473;
  } else {
    result[0] += 13329208;
    result[1] += 29620464;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f692a84))) ) ) {
    result[0] += 12831437;
    result[1] += 30118235;
  } else {
    result[0] += 39045157;
    result[1] += 3904515;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
    result[0] += 42090679;
    result[1] += 858993;
  } else {
    result[0] += 9073874;
    result[1] += 33875798;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8589934;
    result[1] += 34359738;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0e30a9))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 15352223;
    result[1] += 27597449;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed81301))) ) ) {
    result[0] += 39768215;
    result[1] += 3181457;
  } else {
    result[0] += 7787578;
    result[1] += 35162094;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
    result[0] += 12848192;
    result[1] += 30101480;
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e9a3ad2))) ) ) {
    result[0] += 38177487;
    result[1] += 4772185;
  } else {
    result[0] += 12412061;
    result[1] += 30537611;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ba93f29))) ) ) {
    result[0] += 31770990;
    result[1] += 11178682;
  } else {
    result[0] += 9268087;
    result[1] += 33681585;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 24036055;
    result[1] += 18913617;
  } else {
    result[0] += 5298985;
    result[1] += 37650687;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
    result[0] += 41026553;
    result[1] += 1923119;
  } else {
    result[0] += 6573929;
    result[1] += 36375743;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e09ff))) ) ) {
    result[0] += 29620464;
    result[1] += 13329208;
  } else {
    result[0] += 10981450;
    result[1] += 31968222;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f673238))) ) ) {
    result[0] += 14193668;
    result[1] += 28756004;
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
    result[0] += 27126109;
    result[1] += 15823563;
  } else {
    result[0] += 8359332;
    result[1] += 34590340;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 41788870;
    result[1] += 1160801;
  } else {
    result[0] += 8635383;
    result[1] += 34314288;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 42154308;
    result[1] += 795364;
  } else {
    result[0] += 12124548;
    result[1] += 30825124;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 11076494;
    result[1] += 31873178;
  } else {
    result[0] += 37654507;
    result[1] += 5295165;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 28082478;
    result[1] += 14867194;
  } else {
    result[0] += 8643959;
    result[1] += 34305713;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 42123717;
    result[1] += 825955;
  } else {
    result[0] += 10788306;
    result[1] += 32161366;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10047859;
    result[1] += 32901813;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 10119032;
    result[1] += 32830640;
  } else {
    result[0] += 36387917;
    result[1] += 6561755;
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7280f1))) ) ) {
    result[0] += 13934782;
    result[1] += 29014890;
  } else {
    result[0] += 35037891;
    result[1] += 7911781;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e29fa98))) ) ) {
    result[0] += 30567785;
    result[1] += 12381887;
  } else {
    result[0] += 7911781;
    result[1] += 35037891;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 28477500;
    result[1] += 14472172;
  } else {
    result[0] += 8790868;
    result[1] += 34158804;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 28212040;
    result[1] += 14737632;
  } else {
    result[0] += 8269812;
    result[1] += 34679860;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 7592113;
    result[1] += 35357559;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10830787;
    result[1] += 32118885;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 26897774;
    result[1] += 16051897;
  } else {
    result[0] += 9689865;
    result[1] += 33259807;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 28633115;
    result[1] += 14316557;
  } else {
    result[0] += 10317519;
    result[1] += 32632153;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f416628))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13831250;
    result[1] += 29118422;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10307921;
    result[1] += 32641751;
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
