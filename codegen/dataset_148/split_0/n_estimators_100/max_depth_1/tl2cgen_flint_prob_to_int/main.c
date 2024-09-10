
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5126251;
    result[1] += 98962;
    result[2] += 184729;
    result[3] += 21461641;
    result[4] += 15979125;
    result[5] += 98962;
    result[6] += 0;
  } else {
    result[0] += 38751078;
    result[1] += 32511;
    result[2] += 124239;
    result[3] += 4027910;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13933;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42921929;
    result[1] += 0;
    result[2] += 16319;
    result[3] += 0;
    result[4] += 3263;
    result[5] += 0;
    result[6] += 8159;
  } else {
    result[0] += 19795044;
    result[1] += 84989;
    result[2] += 209973;
    result[3] += 16870407;
    result[4] += 5934263;
    result[5] += 19997;
    result[6] += 34995;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5165631;
    result[1] += 79573;
    result[2] += 99466;
    result[3] += 21232801;
    result[4] += 16332413;
    result[5] += 39786;
    result[6] += 0;
  } else {
    result[0] += 38812824;
    result[1] += 29002;
    result[2] += 106727;
    result[3] += 3989518;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11600;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5027575;
    result[1] += 125854;
    result[2] += 119231;
    result[3] += 21812657;
    result[4] += 15837857;
    result[5] += 26495;
    result[6] += 0;
  } else {
    result[0] += 38605508;
    result[1] += 37129;
    result[2] += 90503;
    result[3] += 4206088;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10442;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35912786;
    result[1] += 15949;
    result[2] += 105266;
    result[3] += 5865134;
    result[4] += 1030332;
    result[5] += 8506;
    result[6] += 11696;
  } else {
    result[0] += 3690879;
    result[1] += 207352;
    result[2] += 193529;
    result[3] += 17970574;
    result[4] += 20887336;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1826447;
    result[1] += 104598;
    result[2] += 168966;
    result[3] += 21104719;
    result[4] += 19696665;
    result[5] += 48276;
    result[6] += 0;
  } else {
    result[0] += 38156353;
    result[1] += 27010;
    result[2] += 100165;
    result[3] += 4651511;
    result[4] += 0;
    result[5] += 4501;
    result[6] += 10129;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    result[0] += 36152685;
    result[1] += 51307;
    result[2] += 71830;
    result[3] += 4508663;
    result[4] += 2149792;
    result[5] += 10261;
    result[6] += 5130;
  } else {
    result[0] += 25432758;
    result[1] += 0;
    result[2] += 235845;
    result[3] += 14382308;
    result[4] += 2881607;
    result[5] += 0;
    result[6] += 17152;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4923695;
    result[1] += 67171;
    result[2] += 174646;
    result[3] += 21642766;
    result[4] += 16107806;
    result[5] += 33585;
    result[6] += 0;
  } else {
    result[0] += 38638037;
    result[1] += 31252;
    result[2] += 103016;
    result[3] += 4169264;
    result[4] += 0;
    result[5] += 0;
    result[6] += 8102;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8609936;
    result[1] += 154560;
    result[2] += 154560;
    result[3] += 19056417;
    result[4] += 14974197;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36756883;
    result[1] += 21045;
    result[2] += 84180;
    result[3] += 5151612;
    result[4] += 920445;
    result[5] += 5538;
    result[6] += 9968;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10246623;
    result[1] += 173952;
    result[2] += 314770;
    result[3] += 17983363;
    result[4] += 14230962;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36857242;
    result[1] += 13451;
    result[2] += 100886;
    result[3] += 5126160;
    result[4] += 829512;
    result[5] += 13451;
    result[6] += 8967;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36176383;
    result[1] += 30294;
    result[2] += 85833;
    result[3] += 4498696;
    result[4] += 2150891;
    result[5] += 1262;
    result[6] += 6311;
  } else {
    result[0] += 25282913;
    result[1] += 0;
    result[2] += 249338;
    result[3] += 14538695;
    result[4] += 2865124;
    result[5] += 4533;
    result[6] += 9066;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5017516;
    result[1] += 59496;
    result[2] += 158656;
    result[3] += 21636798;
    result[4] += 16004487;
    result[5] += 72717;
    result[6] += 0;
  } else {
    result[0] += 38736303;
    result[1] += 38303;
    result[2] += 98660;
    result[3] += 4069441;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6964;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5325493;
    result[1] += 79782;
    result[2] += 159565;
    result[3] += 21361811;
    result[4] += 16003074;
    result[5] += 19945;
    result[6] += 0;
  } else {
    result[0] += 38763703;
    result[1] += 31307;
    result[2] += 99721;
    result[3] += 4045664;
    result[4] += 0;
    result[5] += 0;
    result[6] += 9276;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4973329;
    result[1] += 33155;
    result[2] += 145884;
    result[3] += 21769920;
    result[4] += 15967703;
    result[5] += 59679;
    result[6] += 0;
  } else {
    result[0] += 38701456;
    result[1] += 38282;
    result[2] += 104407;
    result[3] += 4089284;
    result[4] += 0;
    result[5] += 0;
    result[6] += 16241;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42920117;
    result[1] += 0;
    result[2] += 24629;
    result[3] += 0;
    result[4] += 4925;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19888648;
    result[1] += 56959;
    result[2] += 260030;
    result[3] += 16750942;
    result[4] += 5948516;
    result[5] += 19811;
    result[6] += 24764;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42929958;
    result[1] += 0;
    result[2] += 9857;
    result[3] += 0;
    result[4] += 6571;
    result[5] += 0;
    result[6] += 3285;
  } else {
    result[0] += 19857759;
    result[1] += 79183;
    result[2] += 259821;
    result[3] += 16826512;
    result[4] += 5889279;
    result[5] += 17321;
    result[6] += 19795;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36073556;
    result[1] += 17014;
    result[2] += 113786;
    result[3] += 5731869;
    result[4] += 998557;
    result[5] += 6380;
    result[6] += 8507;
  } else {
    result[0] += 4361213;
    result[1] += 331231;
    result[2] += 82807;
    result[3] += 17707079;
    result[4] += 20467340;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10114008;
    result[1] += 164055;
    result[2] += 221474;
    result[3] += 18603869;
    result[4] += 13846265;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36923204;
    result[1] += 12347;
    result[2] += 104388;
    result[3] += 5098197;
    result[4] += 787964;
    result[5] += 8979;
    result[6] += 14591;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8655506;
    result[1] += 177981;
    result[2] += 234185;
    result[3] += 19156397;
    result[4] += 14725602;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36752514;
    result[1] += 11036;
    result[2] += 90501;
    result[3] += 5169632;
    result[4] += 899498;
    result[5] += 9933;
    result[6] += 16555;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42921704;
    result[1] += 0;
    result[2] += 26323;
    result[3] += 0;
    result[4] += 1645;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19771072;
    result[1] += 83953;
    result[2] += 209883;
    result[3] += 17000603;
    result[4] += 5849590;
    result[5] += 9876;
    result[6] += 24692;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5223608;
    result[1] += 80055;
    result[2] += 160110;
    result[3] += 21434808;
    result[4] += 15991047;
    result[5] += 60041;
    result[6] += 0;
  } else {
    result[0] += 38790524;
    result[1] += 24336;
    result[2] += 105456;
    result[3] += 4016609;
    result[4] += 0;
    result[5] += 0;
    result[6] += 12747;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36050507;
    result[1] += 13843;
    result[2] += 103290;
    result[3] += 5788526;
    result[4] += 967948;
    result[5] += 14907;
    result[6] += 10648;
  } else {
    result[0] += 3974811;
    result[1] += 325581;
    result[2] += 108527;
    result[3] += 18096924;
    result[4] += 20443827;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5183696;
    result[1] += 46880;
    result[2] += 147340;
    result[3] += 21484882;
    result[4] += 16046688;
    result[5] += 40183;
    result[6] += 0;
  } else {
    result[0] += 38713420;
    result[1] += 32426;
    result[2] += 105385;
    result[3] += 4091492;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6948;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8760354;
    result[1] += 210631;
    result[2] += 201057;
    result[3] += 19100445;
    result[4] += 14677184;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36571183;
    result[1] += 19815;
    result[2] += 108986;
    result[3] += 5264400;
    result[4] += 967672;
    result[5] += 8807;
    result[6] += 8807;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36105128;
    result[1] += 18028;
    result[2] += 120898;
    result[3] += 5687525;
    result[4] += 996881;
    result[5] += 7423;
    result[6] += 13786;
  } else {
    result[0] += 4107482;
    result[1] += 386418;
    result[2] += 100182;
    result[3] += 18147345;
    result[4] += 20208243;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35979555;
    result[1] += 16976;
    result[2] += 97617;
    result[3] += 5808254;
    result[4] += 1022863;
    result[5] += 12732;
    result[6] += 11671;
  } else {
    result[0] += 3425172;
    result[1] += 298459;
    result[2] += 113698;
    result[3] += 18575520;
    result[4] += 20536822;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36075805;
    result[1] += 63155;
    result[2] += 74523;
    result[3] += 4578789;
    result[4] += 2153609;
    result[5] += 1263;
    result[6] += 2526;
  } else {
    result[0] += 25664883;
    result[1] += 0;
    result[2] += 230644;
    result[3] += 13978881;
    result[4] += 3048128;
    result[5] += 9044;
    result[6] += 18089;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42923307;
    result[1] += 0;
    result[2] += 23069;
    result[3] += 0;
    result[4] += 1647;
    result[5] += 0;
    result[6] += 1647;
  } else {
    result[0] += 19597820;
    result[1] += 71434;
    result[2] += 280813;
    result[3] += 16829098;
    result[4] += 6123703;
    result[5] += 27096;
    result[6] += 19706;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    result[0] += 36219464;
    result[1] += 46975;
    result[2] += 73637;
    result[3] += 4413168;
    result[4] += 2183731;
    result[5] += 7617;
    result[6] += 5078;
  } else {
    result[0] += 25864842;
    result[1] += 0;
    result[2] += 310875;
    result[3] += 13767344;
    result[4] += 2984404;
    result[5] += 8882;
    result[6] += 13323;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918318;
    result[1] += 0;
    result[2] += 23103;
    result[3] += 0;
    result[4] += 1650;
    result[5] += 0;
    result[6] += 6601;
  } else {
    result[0] += 20029580;
    result[1] += 88485;
    result[2] += 248249;
    result[3] += 16558998;
    result[4] += 5975200;
    result[5] += 29495;
    result[6] += 19663;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36008107;
    result[1] += 12758;
    result[2] += 109508;
    result[3] += 5812457;
    result[4] += 986640;
    result[5] += 10631;
    result[6] += 9568;
  } else {
    result[0] += 3778685;
    result[1] += 401398;
    result[2] += 249144;
    result[3] += 18229042;
    result[4] += 20291402;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42928309;
    result[1] += 0;
    result[2] += 13147;
    result[3] += 0;
    result[4] += 3286;
    result[5] += 0;
    result[6] += 4930;
  } else {
    result[0] += 20071211;
    result[1] += 93987;
    result[2] += 242388;
    result[3] += 16541745;
    result[4] += 5955819;
    result[5] += 24733;
    result[6] += 19786;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5325101;
    result[1] += 39493;
    result[2] += 144811;
    result[3] += 21313569;
    result[4] += 16021379;
    result[5] += 105317;
    result[6] += 0;
  } else {
    result[0] += 38676195;
    result[1] += 18585;
    result[2] += 118481;
    result[3] += 4121310;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15100;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4945436;
    result[1] += 46844;
    result[2] += 127149;
    result[3] += 21508296;
    result[4] += 16281794;
    result[5] += 40152;
    result[6] += 0;
  } else {
    result[0] += 38722114;
    result[1] += 27797;
    result[2] += 105399;
    result[3] += 4087411;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6949;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5159865;
    result[1] += 73808;
    result[2] += 201295;
    result[3] += 21471481;
    result[4] += 15962704;
    result[5] += 80518;
    result[6] += 0;
  } else {
    result[0] += 38734471;
    result[1] += 24311;
    result[2] += 97247;
    result[3] += 4084380;
    result[4] += 0;
    result[5] += 0;
    result[6] += 9261;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42936531;
    result[1] += 0;
    result[2] += 8213;
    result[3] += 0;
    result[4] += 3285;
    result[5] += 0;
    result[6] += 1642;
  } else {
    result[0] += 19812835;
    result[1] += 89102;
    result[2] += 257405;
    result[3] += 16773464;
    result[4] += 5987164;
    result[5] += 17325;
    result[6] += 12375;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4940093;
    result[1] += 67765;
    result[2] += 176189;
    result[3] += 21420624;
    result[4] += 16304340;
    result[5] += 40659;
    result[6] += 0;
  } else {
    result[0] += 38778601;
    result[1] += 32360;
    result[2] += 102861;
    result[3] += 4018513;
    result[4] += 0;
    result[5] += 0;
    result[6] += 17336;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918345;
    result[1] += 0;
    result[2] += 24732;
    result[3] += 0;
    result[4] += 3297;
    result[5] += 0;
    result[6] += 3297;
  } else {
    result[0] += 19844319;
    result[1] += 95985;
    result[2] += 260882;
    result[3] += 16750643;
    result[4] += 5958464;
    result[5] += 22150;
    result[6] += 17228;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1744728;
    result[1] += 73376;
    result[2] += 163058;
    result[3] += 21344389;
    result[4] += 19550743;
    result[5] += 73376;
    result[6] += 0;
  } else {
    result[0] += 38177487;
    result[1] += 23591;
    result[2] += 107846;
    result[3] += 4628391;
    result[4] += 0;
    result[5] += 3370;
    result[6] += 8987;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32398716;
    result[1] += 17688;
    result[2] += 165089;
    result[3] += 8563992;
    result[4] += 1780602;
    result[5] += 8844;
    result[6] += 14740;
  } else {
    result[0] += 34404571;
    result[1] += 54928;
    result[2] += 92042;
    result[3] += 5785312;
    result[4] += 2592033;
    result[5] += 7422;
    result[6] += 13360;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4905889;
    result[1] += 72728;
    result[2] += 171904;
    result[3] += 21335990;
    result[4] += 16430101;
    result[5] += 33058;
    result[6] += 0;
  } else {
    result[0] += 38615706;
    result[1] += 32498;
    result[2] += 102139;
    result[3] += 4190042;
    result[4] += 0;
    result[5] += 0;
    result[6] += 9285;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1691581;
    result[1] += 74264;
    result[2] += 156780;
    result[3] += 21074632;
    result[4] += 19828638;
    result[5] += 123774;
    result[6] += 0;
  } else {
    result[0] += 38238050;
    result[1] += 17944;
    result[2] += 116640;
    result[3] += 4562456;
    result[4] += 0;
    result[5] += 0;
    result[6] += 14580;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8914602;
    result[1] += 247627;
    result[2] += 165085;
    result[3] += 19140714;
    result[4] += 14481642;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36574218;
    result[1] += 18809;
    result[2] += 110646;
    result[3] += 5284479;
    result[4] += 942708;
    result[5] += 8851;
    result[6] += 9958;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42916995;
    result[1] += 0;
    result[2] += 24508;
    result[3] += 0;
    result[4] += 4901;
    result[5] += 0;
    result[6] += 3267;
  } else {
    result[0] += 19891639;
    result[1] += 89826;
    result[2] += 271975;
    result[3] += 16493193;
    result[4] += 6153133;
    result[5] += 29942;
    result[6] += 19961;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8417836;
    result[1] += 289947;
    result[2] += 196416;
    result[3] += 19061723;
    result[4] += 14983749;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36775685;
    result[1] += 17662;
    result[2] += 105972;
    result[3] += 5102122;
    result[4] += 930568;
    result[5] += 5519;
    result[6] += 12142;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915188;
    result[1] += 0;
    result[2] += 26273;
    result[3] += 0;
    result[4] += 3284;
    result[5] += 0;
    result[6] += 4926;
  } else {
    result[0] += 19911116;
    result[1] += 66857;
    result[2] += 252572;
    result[3] += 16664819;
    result[4] += 6002306;
    result[5] += 32190;
    result[6] += 19809;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5173154;
    result[1] += 92025;
    result[2] += 203771;
    result[3] += 21422250;
    result[4] += 16032178;
    result[5] += 26293;
    result[6] += 0;
  } else {
    result[0] += 38777399;
    result[1] += 26723;
    result[2] += 95273;
    result[3] += 4035173;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15104;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1561345;
    result[1] += 25319;
    result[2] += 135035;
    result[3] += 20601326;
    result[4] += 20550688;
    result[5] += 75957;
    result[6] += 0;
  } else {
    result[0] += 38209789;
    result[1] += 23481;
    result[2] += 100634;
    result[3] += 4600113;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15654;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10433627;
    result[1] += 293314;
    result[2] += 276553;
    result[3] += 17942487;
    result[4] += 14003688;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36894748;
    result[1] += 13430;
    result[2] += 81702;
    result[3] += 5086808;
    result[4] += 853957;
    result[5] += 11192;
    result[6] += 7834;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 2826739;
    result[1] += 53334;
    result[2] += 175242;
    result[3] += 21112922;
    result[4] += 18667145;
    result[5] += 114288;
    result[6] += 0;
  } else {
    result[0] += 38271637;
    result[1] += 27224;
    result[2] += 91881;
    result[3] += 4552123;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6806;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5230964;
    result[1] += 33191;
    result[2] += 185871;
    result[3] += 21547857;
    result[4] += 15925234;
    result[5] += 26553;
    result[6] += 0;
  } else {
    result[0] += 38715018;
    result[1] += 28996;
    result[2] += 111346;
    result[3] += 4083872;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10438;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1731841;
    result[1] += 74221;
    result[2] += 181431;
    result[3] += 20641903;
    result[4] += 20287287;
    result[5] += 32987;
    result[6] += 0;
  } else {
    result[0] += 38104206;
    result[1] += 26919;
    result[2] += 102068;
    result[3] += 4700775;
    result[4] += 0;
    result[5] += 3364;
    result[6] += 12337;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36138650;
    result[1] += 39216;
    result[2] += 77167;
    result[3] += 4569356;
    result[4] += 2105041;
    result[5] += 11385;
    result[6] += 8855;
  } else {
    result[0] += 25286738;
    result[1] += 0;
    result[2] += 193406;
    result[3] += 14262583;
    result[4] += 3179957;
    result[5] += 8995;
    result[6] += 17991;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8663939;
    result[1] += 216598;
    result[2] += 108299;
    result[3] += 19123840;
    result[4] += 14836995;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36776786;
    result[1] += 13303;
    result[2] += 99777;
    result[3] += 5126333;
    result[4] += 916842;
    result[5] += 7760;
    result[6] += 8869;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 9007963;
    result[1] += 212713;
    result[2] += 231210;
    result[3] += 19107240;
    result[4] += 14390545;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36743104;
    result[1] += 19896;
    result[2] += 116062;
    result[3] += 5168639;
    result[4] += 878757;
    result[5] += 11053;
    result[6] += 12158;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42912030;
    result[1] += 0;
    result[2] += 32732;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 4909;
  } else {
    result[0] += 19763768;
    result[1] += 84620;
    result[2] += 219016;
    result[3] += 16941439;
    result[4] += 5905984;
    result[5] += 22399;
    result[6] += 12444;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32697866;
    result[1] += 14582;
    result[2] += 163328;
    result[3] += 8131446;
    result[4] += 1916198;
    result[5] += 11666;
    result[6] += 14582;
  } else {
    result[0] += 34429594;
    result[1] += 43287;
    result[2] += 79110;
    result[3] += 5681047;
    result[4] += 2685287;
    result[5] += 19404;
    result[6] += 11941;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35937568;
    result[1] += 12741;
    result[2] += 114674;
    result[3] += 5857931;
    result[4] += 1010830;
    result[5] += 8494;
    result[6] += 7432;
  } else {
    result[0] += 4111903;
    result[1] += 267555;
    result[2] += 140818;
    result[3] += 18573973;
    result[4] += 19855422;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5167227;
    result[1] += 86231;
    result[2] += 205627;
    result[3] += 21524585;
    result[4] += 15919569;
    result[5] += 46432;
    result[6] += 0;
  } else {
    result[0] += 38680806;
    result[1] += 33640;
    result[2] += 99761;
    result[3] += 4121544;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13920;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36034588;
    result[1] += 17016;
    result[2] += 101035;
    result[3] += 5834536;
    result[4] += 941225;
    result[5] += 11698;
    result[6] += 9571;
  } else {
    result[0] += 3445898;
    result[1] += 179186;
    result[2] += 151619;
    result[3] += 17698132;
    result[4] += 21474836;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5006153;
    result[1] += 61133;
    result[2] += 129059;
    result[3] += 21464647;
    result[4] += 16207167;
    result[5] += 81511;
    result[6] += 0;
  } else {
    result[0] += 38709812;
    result[1] += 36968;
    result[2] += 114372;
    result[3] += 4066569;
    result[4] += 0;
    result[5] += 0;
    result[6] += 21950;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36176030;
    result[1] += 8500;
    result[2] += 109440;
    result[3] += 5651608;
    result[4] += 987092;
    result[5] += 7437;
    result[6] += 9562;
  } else {
    result[0] += 3948914;
    result[1] += 279075;
    result[2] += 111630;
    result[3] += 17749182;
    result[4] += 20860871;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36011051;
    result[1] += 12764;
    result[2] += 110626;
    result[3] += 5748322;
    result[4] += 1049887;
    result[5] += 12764;
    result[6] += 4254;
  } else {
    result[0] += 3878260;
    result[1] += 261301;
    result[2] += 55010;
    result[3] += 18318592;
    result[4] += 20436507;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36253177;
    result[1] += 59138;
    result[2] += 85562;
    result[3] += 4417774;
    result[4] += 2118920;
    result[5] += 10066;
    result[6] += 5033;
  } else {
    result[0] += 25455224;
    result[1] += 0;
    result[2] += 188013;
    result[3] += 13990972;
    result[4] += 3265018;
    result[5] += 18342;
    result[6] += 32099;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42921779;
    result[1] += 0;
    result[2] += 18048;
    result[3] += 0;
    result[4] += 8204;
    result[5] += 0;
    result[6] += 1640;
  } else {
    result[0] += 19697249;
    result[1] += 123960;
    result[2] += 252878;
    result[3] += 16853606;
    result[4] += 5989748;
    result[5] += 19833;
    result[6] += 12396;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5111648;
    result[1] += 72272;
    result[2] += 157685;
    result[3] += 21418989;
    result[4] += 16149655;
    result[5] += 39421;
    result[6] += 0;
  } else {
    result[0] += 38711990;
    result[1] += 32534;
    result[2] += 89471;
    result[3] += 4109866;
    result[4] += 0;
    result[5] += 0;
    result[6] += 5809;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42919985;
    result[1] += 0;
    result[2] += 21441;
    result[3] += 0;
    result[4] += 3298;
    result[5] += 0;
    result[6] += 4947;
  } else {
    result[0] += 19635963;
    result[1] += 118081;
    result[2] += 241082;
    result[3] += 16841368;
    result[4] += 6073815;
    result[5] += 14760;
    result[6] += 24600;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42930021;
    result[1] += 0;
    result[2] += 13100;
    result[3] += 0;
    result[4] += 1637;
    result[5] += 0;
    result[6] += 4912;
  } else {
    result[0] += 19874760;
    result[1] += 94487;
    result[2] += 233732;
    result[3] += 16726825;
    result[4] += 5962676;
    result[5] += 22378;
    result[6] += 34811;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8619152;
    result[1] += 210000;
    result[2] += 237391;
    result[3] += 19155700;
    result[4] += 14727428;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36740148;
    result[1] += 13284;
    result[2] += 92993;
    result[3] += 5186597;
    result[4] += 891186;
    result[5] += 15498;
    result[6] += 9963;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1570928;
    result[1] += 98697;
    result[2] += 164495;
    result[3] += 21228093;
    result[4] += 19871009;
    result[5] += 16449;
    result[6] += 0;
  } else {
    result[0] += 38180977;
    result[1] += 34783;
    result[2] += 112204;
    result[3] += 4604876;
    result[4] += 0;
    result[5] += 2244;
    result[6] += 14586;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42924968;
    result[1] += 0;
    result[2] += 19763;
    result[3] += 0;
    result[4] += 3293;
    result[5] += 0;
    result[6] += 1646;
  } else {
    result[0] += 19813254;
    result[1] += 76422;
    result[2] += 288434;
    result[3] += 16872205;
    result[4] += 5854980;
    result[5] += 14791;
    result[6] += 29583;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8177837;
    result[1] += 256415;
    result[2] += 210627;
    result[3] += 19524243;
    result[4] += 14780548;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36709188;
    result[1] += 9959;
    result[2] += 105133;
    result[3] += 5222352;
    result[4] += 880905;
    result[5] += 6639;
    result[6] += 15493;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4877813;
    result[1] += 72118;
    result[2] += 150792;
    result[3] += 21714137;
    result[4] += 16108585;
    result[5] += 26224;
    result[6] += 0;
  } else {
    result[0] += 38809189;
    result[1] += 24410;
    result[2] += 87180;
    result[3] += 4019593;
    result[4] += 0;
    result[5] += 0;
    result[6] += 9299;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32641040;
    result[1] += 20735;
    result[2] += 112565;
    result[3] += 8326886;
    result[4] += 1833633;
    result[5] += 2962;
    result[6] += 11849;
  } else {
    result[0] += 34438526;
    result[1] += 37024;
    result[2] += 82934;
    result[3] += 5826144;
    result[4] += 2554676;
    result[5] += 2961;
    result[6] += 7404;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42931613;
    result[1] += 0;
    result[2] += 14775;
    result[3] += 0;
    result[4] += 1641;
    result[5] += 0;
    result[6] += 1641;
  } else {
    result[0] += 19967547;
    result[1] += 71834;
    result[2] += 232843;
    result[3] += 16841503;
    result[4] += 5796310;
    result[5] += 29724;
    result[6] += 9908;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5149612;
    result[1] += 47555;
    result[2] += 197016;
    result[3] += 21277819;
    result[4] += 16257286;
    result[5] += 20381;
    result[6] += 0;
  } else {
    result[0] += 38730720;
    result[1] += 24260;
    result[2] += 113213;
    result[3] += 4071080;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10397;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5115593;
    result[1] += 39965;
    result[2] += 219810;
    result[3] += 21101824;
    result[4] += 16432512;
    result[5] += 39965;
    result[6] += 0;
  } else {
    result[0] += 38708259;
    result[1] += 22024;
    result[2] += 110121;
    result[3] += 4093039;
    result[4] += 0;
    result[5] += 0;
    result[6] += 16228;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4784617;
    result[1] += 46069;
    result[2] += 210602;
    result[3] += 21580137;
    result[4] += 16282177;
    result[5] += 46069;
    result[6] += 0;
  } else {
    result[0] += 38700473;
    result[1] += 40656;
    result[2] += 117323;
    result[3] += 4085411;
    result[4] += 0;
    result[5] += 0;
    result[6] += 5808;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42928485;
    result[1] += 0;
    result[2] += 17927;
    result[3] += 0;
    result[4] += 3259;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19762810;
    result[1] += 70134;
    result[2] += 263003;
    result[3] += 16727002;
    result[4] += 6096664;
    result[5] += 20038;
    result[6] += 10019;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1499593;
    result[1] += 91135;
    result[2] += 157415;
    result[3] += 21143434;
    result[4] += 20016668;
    result[5] += 41425;
    result[6] += 0;
  } else {
    result[0] += 38180102;
    result[1] += 30265;
    result[2] += 91916;
    result[3] += 4635058;
    result[4] += 0;
    result[5] += 2241;
    result[6] += 10088;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42923417;
    result[1] += 0;
    result[2] += 21332;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 4922;
  } else {
    result[0] += 19760766;
    result[1] += 101629;
    result[2] += 215653;
    result[3] += 17016766;
    result[4] += 5815197;
    result[5] += 9915;
    result[6] += 29745;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42928472;
    result[1] += 0;
    result[2] += 14677;
    result[3] += 0;
    result[4] += 1630;
    result[5] += 0;
    result[6] += 4892;
  } else {
    result[0] += 19850836;
    result[1] += 77571;
    result[2] += 300277;
    result[3] += 16700426;
    result[4] += 5985528;
    result[5] += 17516;
    result[6] += 17516;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35977123;
    result[1] += 26608;
    result[2] += 111756;
    result[3] += 5811345;
    result[4] += 1001552;
    result[5] += 10643;
    result[6] += 10643;
  } else {
    result[0] += 3998809;
    result[1] += 341195;
    result[2] += 259308;
    result[3] += 17673920;
    result[4] += 20676439;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36182798;
    result[1] += 21252;
    result[2] += 83948;
    result[3] += 5671295;
    result[4] += 978688;
    result[5] += 4250;
    result[6] += 7438;
  } else {
    result[0] += 3943788;
    result[1] += 264777;
    result[2] += 139356;
    result[3] += 17489240;
    result[4] += 21112509;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36005166;
    result[1] += 14877;
    result[2] += 113705;
    result[3] += 5766012;
    result[4] += 1024407;
    result[5] += 10626;
    result[6] += 14877;
  } else {
    result[0] += 3636024;
    result[1] += 208966;
    result[2] += 97517;
    result[3] += 17790052;
    result[4] += 21217110;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36162308;
    result[1] += 41586;
    result[2] += 89473;
    result[3] += 4450978;
    result[4] += 2192724;
    result[5] += 7561;
    result[6] += 5040;
  } else {
    result[0] += 25483411;
    result[1] += 0;
    result[2] += 232579;
    result[3] += 13918284;
    result[4] += 3265233;
    result[5] += 18241;
    result[6] += 31922;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42921857;
    result[1] += 0;
    result[2] += 16361;
    result[3] += 0;
    result[4] += 6544;
    result[5] += 0;
    result[6] += 4908;
  } else {
    result[0] += 20132814;
    result[1] += 89634;
    result[2] += 219105;
    result[3] += 16532511;
    result[4] += 5933279;
    result[5] += 9959;
    result[6] += 32367;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4895540;
    result[1] += 46815;
    result[2] += 193949;
    result[3] += 21227384;
    result[4] += 16539168;
    result[5] += 46815;
    result[6] += 0;
  } else {
    result[0] += 38675324;
    result[1] += 19692;
    result[2] += 91510;
    result[3] += 4148087;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15058;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42912180;
    result[1] += 0;
    result[2] += 30971;
    result[3] += 0;
    result[4] += 3260;
    result[5] += 0;
    result[6] += 3260;
  } else {
    result[0] += 20132659;
    result[1] += 87642;
    result[2] += 220357;
    result[3] += 16579395;
    result[4] += 5899570;
    result[5] += 20032;
    result[6] += 10016;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10396352;
    result[1] += 131495;
    result[2] += 254772;
    result[3] += 17875150;
    result[4] += 14291902;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36914679;
    result[1] += 15710;
    result[2] += 79673;
    result[3] += 5063200;
    result[4] += 859576;
    result[5] += 6732;
    result[6] += 10099;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915206;
    result[1] += 0;
    result[2] += 21336;
    result[3] += 0;
    result[4] += 4923;
    result[5] += 0;
    result[6] += 8206;
  } else {
    result[0] += 20284061;
    result[1] += 79302;
    result[2] += 230472;
    result[3] += 16554371;
    result[4] += 5761813;
    result[5] += 24781;
    result[6] += 14869;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5274404;
    result[1] += 60088;
    result[2] += 160235;
    result[3] += 21257851;
    result[4] += 16157035;
    result[5] += 40058;
    result[6] += 0;
  } else {
    result[0] += 38745895;
    result[1] += 27808;
    result[2] += 83426;
    result[3] += 4072843;
    result[4] += 0;
    result[5] += 0;
    result[6] += 19697;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5090331;
    result[1] += 87997;
    result[2] += 148919;
    result[3] += 21268380;
    result[4] += 16306660;
    result[5] += 47383;
    result[6] += 0;
  } else {
    result[0] += 38636788;
    result[1] += 38146;
    result[2] += 106348;
    result[3] += 4157986;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10403;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1474875;
    result[1] += 72933;
    result[2] += 186385;
    result[3] += 21069650;
    result[4] += 20105309;
    result[5] += 40518;
    result[6] += 0;
  } else {
    result[0] += 38220711;
    result[1] += 37103;
    result[2] += 112433;
    result[3] += 4565932;
    result[4] += 0;
    result[5] += 2248;
    result[6] += 11243;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4746441;
    result[1] += 72818;
    result[2] += 145636;
    result[3] += 21673432;
    result[4] += 16278243;
    result[5] += 33099;
    result[6] += 0;
  } else {
    result[0] += 38837124;
    result[1] += 23208;
    result[2] += 117202;
    result[3] += 3955890;
    result[4] += 0;
    result[5] += 0;
    result[6] += 16245;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42903598;
    result[1] += 0;
    result[2] += 39492;
    result[3] += 0;
    result[4] += 4936;
    result[5] += 0;
    result[6] += 1645;
  } else {
    result[0] += 19913501;
    result[1] += 98740;
    result[2] += 298690;
    result[3] += 16647657;
    result[4] += 5946649;
    result[5] += 27153;
    result[6] += 17279;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5266624;
    result[1] += 77166;
    result[2] += 141472;
    result[3] += 21580940;
    result[4] += 15825594;
    result[5] += 57874;
    result[6] += 0;
  } else {
    result[0] += 38774966;
    result[1] += 32660;
    result[2] += 95648;
    result[3] += 4031234;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15163;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4897596;
    result[1] += 79206;
    result[2] += 191415;
    result[3] += 21755359;
    result[4] += 15986492;
    result[5] += 39603;
    result[6] += 0;
  } else {
    result[0] += 38606291;
    result[1] += 34830;
    result[2] += 125390;
    result[3] += 4169228;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13932;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10233708;
    result[1] += 167903;
    result[2] += 226669;
    result[3] += 18326648;
    result[4] += 13994742;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36975613;
    result[1] += 17903;
    result[2] += 101824;
    result[3] += 5101280;
    result[4] += 729553;
    result[5] += 12308;
    result[6] += 11189;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8668909;
    result[1] += 211212;
    result[2] += 202029;
    result[3] += 18880591;
    result[4] += 14986928;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36696896;
    result[1] += 9956;
    result[2] += 131649;
    result[3] += 5192946;
    result[4] += 902736;
    result[5] += 7744;
    result[6] += 7744;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
