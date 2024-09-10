
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9710360;
    result[1] += 33239312;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 42209161;
    result[1] += 740511;
  } else {
    result[0] += 9846998;
    result[1] += 33102674;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 11196282;
    result[1] += 31753390;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 11990117;
    result[1] += 30959555;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 15651152;
    result[1] += 27298520;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e47396d))) ) ) {
    result[0] += 28491367;
    result[1] += 14458305;
  } else {
    result[0] += 7158278;
    result[1] += 35791394;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 39645851;
    result[1] += 3303820;
  } else {
    result[0] += 13048001;
    result[1] += 29901671;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 42267932;
    result[1] += 681740;
  } else {
    result[0] += 9878424;
    result[1] += 33071248;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f65e5f3))) ) ) {
    result[0] += 39645851;
    result[1] += 3303820;
  } else {
    result[0] += 11696116;
    result[1] += 31253556;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 41564199;
    result[1] += 1385473;
  } else {
    result[0] += 8974558;
    result[1] += 33975114;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9897098;
    result[1] += 33052574;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 40423221;
    result[1] += 2526451;
  } else {
    result[0] += 9911462;
    result[1] += 33038209;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    result[0] += 42054888;
    result[1] += 894784;
  } else {
    result[0] += 6991807;
    result[1] += 35957865;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 42090679;
    result[1] += 858993;
  } else {
    result[0] += 6049249;
    result[1] += 36900423;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0b1ceb))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12193339;
    result[1] += 30756333;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 41722539;
    result[1] += 1227133;
  } else {
    result[0] += 10549042;
    result[1] += 32400630;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3d1244))) ) ) {
    result[0] += 34513130;
    result[1] += 8436542;
  } else {
    result[0] += 8506940;
    result[1] += 34442732;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 42288908;
    result[1] += 660764;
  } else {
    result[0] += 6941361;
    result[1] += 36008311;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 41468649;
    result[1] += 1481023;
  } else {
    result[0] += 11563373;
    result[1] += 31386299;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 41564199;
    result[1] += 1385473;
  } else {
    result[0] += 7906158;
    result[1] += 35043514;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 37993941;
    result[1] += 4955731;
  } else {
    result[0] += 13954113;
    result[1] += 28995559;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10119032;
    result[1] += 32830640;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 14559211;
    result[1] += 28390461;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 41607495;
    result[1] += 1342177;
  } else {
    result[0] += 11007202;
    result[1] += 31942470;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 39826060;
    result[1] += 3123612;
  } else {
    result[0] += 8879018;
    result[1] += 34070654;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef7342f))) ) ) {
    result[0] += 38177487;
    result[1] += 4772185;
  } else {
    result[0] += 11730747;
    result[1] += 31218925;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eddbdf9))) ) ) {
    result[0] += 37743651;
    result[1] += 5206020;
  } else {
    result[0] += 11017524;
    result[1] += 31932148;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d8b3bb8))) ) ) {
    result[0] += 30980091;
    result[1] += 11969580;
  } else {
    result[0] += 9355374;
    result[1] += 33594298;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10788306;
    result[1] += 32161366;
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3a917d6b))) ) ) {
    result[0] += 25631256;
    result[1] += 17318416;
  } else {
    result[0] += 6179809;
    result[1] += 36769863;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9717120;
    result[1] += 33232552;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9864039;
    result[1] += 33085633;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e933483))) ) ) {
    result[0] += 37743651;
    result[1] += 5206020;
  } else {
    result[0] += 8502727;
    result[1] += 34446945;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
    result[0] += 26430567;
    result[1] += 16519104;
  } else {
    result[0] += 8240344;
    result[1] += 34709328;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8267307;
    result[1] += 34682365;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 42090679;
    result[1] += 858993;
  } else {
    result[0] += 8065666;
    result[1] += 34884006;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f663d1c))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13173639;
    result[1] += 29776033;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
    result[0] += 27331610;
    result[1] += 15618062;
  } else {
    result[0] += 7579354;
    result[1] += 35370318;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d277708))) ) ) {
    result[0] += 40086361;
    result[1] += 2863311;
  } else {
    result[0] += 6770391;
    result[1] += 36179281;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 42288908;
    result[1] += 660764;
  } else {
    result[0] += 7375196;
    result[1] += 35574476;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d198f1d))) ) ) {
    result[0] += 42054888;
    result[1] += 894784;
  } else {
    result[0] += 7591104;
    result[1] += 35358567;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 41564199;
    result[1] += 1385473;
  } else {
    result[0] += 13514336;
    result[1] += 29435336;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3a8461fa))) ) ) {
    result[0] += 26644704;
    result[1] += 16304968;
  } else {
    result[0] += 8035745;
    result[1] += 34913927;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3debbc2c))) ) ) {
    result[0] += 31410954;
    result[1] += 11538718;
  } else {
    result[0] += 8984370;
    result[1] += 33965302;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6d9652))) ) ) {
    result[0] += 14493305;
    result[1] += 28456367;
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4b9970))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12719001;
    result[1] += 30230671;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8429375;
    result[1] += 34520297;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 42298920;
    result[1] += 650752;
  } else {
    result[0] += 9374801;
    result[1] += 33574871;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 41328930;
    result[1] += 1620742;
  } else {
    result[0] += 9817068;
    result[1] += 33132604;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3c4432ca))) ) ) {
    result[0] += 26430567;
    result[1] += 16519104;
  } else {
    result[0] += 8956329;
    result[1] += 33993343;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e933483))) ) ) {
    result[0] += 34738706;
    result[1] += 8210966;
  } else {
    result[0] += 6387387;
    result[1] += 36562285;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 41686447;
    result[1] += 1263225;
  } else {
    result[0] += 12566061;
    result[1] += 30383611;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9092948;
    result[1] += 33856724;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12145604;
    result[1] += 30804068;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    result[0] += 39695909;
    result[1] += 3253763;
  } else {
    result[0] += 9156783;
    result[1] += 33792889;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42ecc0))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 13377766;
    result[1] += 29571905;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cebc409))) ) ) {
    result[0] += 42209161;
    result[1] += 740511;
  } else {
    result[0] += 7332870;
    result[1] += 35616801;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
    result[0] += 38923141;
    result[1] += 4026531;
  } else {
    result[0] += 12085405;
    result[1] += 30864267;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    result[0] += 39594229;
    result[1] += 3355443;
  } else {
    result[0] += 7553962;
    result[1] += 35395710;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3cb55ef2))) ) ) {
    result[0] += 26639670;
    result[1] += 16310002;
  } else {
    result[0] += 8636619;
    result[1] += 34313053;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 14562335;
    result[1] += 28387337;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 11321461;
    result[1] += 31628211;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 9395240;
    result[1] += 33554431;
  } else {
    result[0] += 36295498;
    result[1] += 6654174;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8589934;
    result[1] += 34359738;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f254de8))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 12040284;
    result[1] += 30909388;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10530929;
    result[1] += 32418743;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 28944344;
    result[1] += 14005328;
  } else {
    result[0] += 9042036;
    result[1] += 33907636;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1c110a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 15060274;
    result[1] += 27889398;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 11032943;
    result[1] += 31916729;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e5a4d2b))) ) ) {
    result[0] += 29451204;
    result[1] += 13498468;
  } else {
    result[0] += 8426834;
    result[1] += 34522838;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 14066486;
    result[1] += 28883186;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 7911781;
    result[1] += 35037891;
  } else {
    result[0] += 36477804;
    result[1] += 6471868;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e11537a))) ) ) {
    result[0] += 25526692;
    result[1] += 17422980;
  } else {
    result[0] += 6291990;
    result[1] += 36657682;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 42245579;
    result[1] += 704092;
  } else {
    result[0] += 5315553;
    result[1] += 37634119;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9834270;
    result[1] += 33115402;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 7809031;
    result[1] += 35140641;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
    result[0] += 30294858;
    result[1] += 12654814;
  } else {
    result[0] += 9386352;
    result[1] += 33563320;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 42107522;
    result[1] += 842150;
  } else {
    result[0] += 9927047;
    result[1] += 33022625;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 14316557;
    result[1] += 28633115;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e90e608))) ) ) {
    result[0] += 38281230;
    result[1] += 4668442;
  } else {
    result[0] += 13854733;
    result[1] += 29094939;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de82e88))) ) ) {
    result[0] += 42182714;
    result[1] += 766958;
  } else {
    result[0] += 11826721;
    result[1] += 31122951;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 7922755;
    result[1] += 35026917;
  } else {
    result[0] += 33907636;
    result[1] += 9042036;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 42090679;
    result[1] += 858993;
  } else {
    result[0] += 10283724;
    result[1] += 32665948;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 7730941;
    result[1] += 35218731;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 9030444;
    result[1] += 33919228;
  } else {
    result[0] += 37265157;
    result[1] += 5684515;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3d1244))) ) ) {
    result[0] += 34001824;
    result[1] += 8947848;
  } else {
    result[0] += 10987125;
    result[1] += 31962547;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 10781605;
    result[1] += 32168067;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e5f1561))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 8752776;
    result[1] += 34196895;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    result[0] += 13544295;
    result[1] += 29405377;
  } else {
    result[0] += 40997415;
    result[1] += 1952257;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 41026553;
    result[1] += 1923119;
  } else {
    result[0] += 9422632;
    result[1] += 33527040;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
    result[0] += 41518017;
    result[1] += 1431655;
  } else {
    result[0] += 14746668;
    result[1] += 28203004;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
    result[0] += 41518017;
    result[1] += 1431655;
  } else {
    result[0] += 10322668;
    result[1] += 32627004;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebed71f))) ) ) {
    result[0] += 25264513;
    result[1] += 17685159;
  } else {
    result[0] += 8803349;
    result[1] += 34146323;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 30464302;
    result[1] += 12485370;
  } else {
    result[0] += 10676754;
    result[1] += 32272918;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e2eaf25))) ) ) {
    result[0] += 31061817;
    result[1] += 11887855;
  } else {
    result[0] += 8533047;
    result[1] += 34416625;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
    result[0] += 41358944;
    result[1] += 1590728;
  } else {
    result[0] += 12193339;
    result[1] += 30756333;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    result[0] += 9203501;
    result[1] += 33746171;
  }
  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3da63f14))) ) ) {
    result[0] += 31716681;
    result[1] += 11232991;
  } else {
    result[0] += 11930464;
    result[1] += 31019208;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 37993941;
    result[1] += 4955731;
  } else {
    result[0] += 9967223;
    result[1] += 32982449;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d073abc))) ) ) {
    result[0] += 28978092;
    result[1] += 13971580;
  } else {
    result[0] += 10737418;
    result[1] += 32212254;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
