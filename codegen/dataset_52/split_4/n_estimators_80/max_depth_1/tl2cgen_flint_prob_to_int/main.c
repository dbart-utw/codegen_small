
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
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12284334;
    result[1] += 41402756;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df4341a))) ) ) {
    result[0] += 39415839;
    result[1] += 14271252;
  } else {
    result[0] += 11087551;
    result[1] += 42599539;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0e5c92))) ) ) {
    result[0] += 40577452;
    result[1] += 13109638;
  } else {
    result[0] += 12435992;
    result[1] += 41251098;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
    result[0] += 38028356;
    result[1] += 15658734;
  } else {
    result[0] += 9644387;
    result[1] += 44042703;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 11069503;
    result[1] += 42617587;
  } else {
    result[0] += 47462500;
    result[1] += 6224590;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0ee4e2))) ) ) {
    result[0] += 36275061;
    result[1] += 17412029;
  } else {
    result[0] += 15339168;
    result[1] += 38347922;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 17000912;
    result[1] += 36686178;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 11422785;
    result[1] += 42264305;
  } else {
    result[0] += 43665500;
    result[1] += 10021590;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 10851646;
    result[1] += 42835445;
  } else {
    result[0] += 46528812;
    result[1] += 7158278;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16606600;
    result[1] += 37080490;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 18813425;
    result[1] += 34873666;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 34839495;
    result[1] += 18847595;
  } else {
    result[0] += 9212577;
    result[1] += 44474513;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14898809;
    result[1] += 38788281;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 49919576;
    result[1] += 3767515;
  } else {
    result[0] += 12248996;
    result[1] += 41438094;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3dacd9e8))) ) ) {
    result[0] += 38837470;
    result[1] += 14849620;
  } else {
    result[0] += 13342354;
    result[1] += 40344737;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 10190605;
    result[1] += 43496485;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 9336885;
    result[1] += 44350205;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    result[0] += 33802983;
    result[1] += 19884107;
  } else {
    result[0] += 12815628;
    result[1] += 40871462;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f1b9faa))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14786698;
    result[1] += 38900392;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 10737418;
    result[1] += 42949672;
  } else {
    result[0] += 42633866;
    result[1] += 11053224;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 11012736;
    result[1] += 42674354;
  } else {
    result[0] += 44212898;
    result[1] += 9474192;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 51722929;
    result[1] += 1964161;
  } else {
    result[0] += 9195026;
    result[1] += 44492064;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 35791394;
    result[1] += 17895697;
  } else {
    result[0] += 10914408;
    result[1] += 42772682;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 11811160;
    result[1] += 41875931;
  } else {
    result[0] += 46869682;
    result[1] += 6817408;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 11196773;
    result[1] += 42490318;
  } else {
    result[0] += 44503772;
    result[1] += 9183318;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebfd60e))) ) ) {
    result[0] += 37695191;
    result[1] += 15991899;
  } else {
    result[0] += 12389328;
    result[1] += 41297762;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14503147;
    result[1] += 39183943;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edb851e))) ) ) {
    result[0] += 50166626;
    result[1] += 3520464;
  } else {
    result[0] += 15149327;
    result[1] += 38537763;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 49782575;
    result[1] += 3904515;
  } else {
    result[0] += 13163661;
    result[1] += 40523429;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e986984))) ) ) {
    result[0] += 31129489;
    result[1] += 22557601;
  } else {
    result[0] += 9693502;
    result[1] += 43993588;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13296335;
    result[1] += 40390755;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15447700;
    result[1] += 38239390;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 50278386;
    result[1] += 3408704;
  } else {
    result[0] += 11005853;
    result[1] += 42681237;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 10586186;
    result[1] += 43100904;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    result[0] += 34429765;
    result[1] += 19257326;
  } else {
    result[0] += 10046707;
    result[1] += 43640384;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16918201;
    result[1] += 36768890;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df4341a))) ) ) {
    result[0] += 38347922;
    result[1] += 15339168;
  } else {
    result[0] += 10497475;
    result[1] += 43189615;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14104235;
    result[1] += 39582855;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3cb866e4))) ) ) {
    result[0] += 37800094;
    result[1] += 15886996;
  } else {
    result[0] += 11713547;
    result[1] += 41973544;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 10854767;
    result[1] += 42832324;
  } else {
    result[0] += 46305116;
    result[1] += 7381975;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 9431516;
    result[1] += 44255575;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ec176de))) ) ) {
    result[0] += 34608207;
    result[1] += 19078883;
  } else {
    result[0] += 11720421;
    result[1] += 41966669;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16176459;
    result[1] += 37510631;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15541000;
    result[1] += 38146091;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 8775774;
    result[1] += 44911316;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12509613;
    result[1] += 41177477;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15763443;
    result[1] += 37923647;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e1f9f02))) ) ) {
    result[0] += 37726064;
    result[1] += 15961027;
  } else {
    result[0] += 13634816;
    result[1] += 40052274;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    result[0] += 52634403;
    result[1] += 1052688;
  } else {
    result[0] += 14434736;
    result[1] += 39252354;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 11005853;
    result[1] += 42681237;
  } else {
    result[0] += 46017506;
    result[1] += 7669584;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    result[0] += 35082653;
    result[1] += 18604437;
  } else {
    result[0] += 9610652;
    result[1] += 44076439;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13138613;
    result[1] += 40548478;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 40409638;
    result[1] += 13277452;
  } else {
    result[0] += 10737418;
    result[1] += 42949672;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12176453;
    result[1] += 41510637;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 9597692;
    result[1] += 44089398;
  } else {
    result[0] += 45378374;
    result[1] += 8308716;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 34300086;
    result[1] += 19387005;
  } else {
    result[0] += 9005576;
    result[1] += 44681514;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 50433328;
    result[1] += 3253763;
  } else {
    result[0] += 10355885;
    result[1] += 43331205;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 10049800;
    result[1] += 43637290;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f66f640))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15172438;
    result[1] += 38514652;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e84b1ee))) ) ) {
    result[0] += 51955249;
    result[1] += 1731841;
  } else {
    result[0] += 10683998;
    result[1] += 43003092;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e9859c9))) ) ) {
    result[0] += 33884475;
    result[1] += 19802615;
  } else {
    result[0] += 8757468;
    result[1] += 44929622;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15696649;
    result[1] += 37990441;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e410b))) ) ) {
    result[0] += 40111045;
    result[1] += 13576046;
  } else {
    result[0] += 10371369;
    result[1] += 43315721;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d60bf5d))) ) ) {
    result[0] += 50758704;
    result[1] += 2928386;
  } else {
    result[0] += 12647439;
    result[1] += 41039651;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3d85f5ae))) ) ) {
    result[0] += 34672913;
    result[1] += 19014178;
  } else {
    result[0] += 12859183;
    result[1] += 40827907;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 51402534;
    result[1] += 2284557;
  } else {
    result[0] += 8947848;
    result[1] += 44739242;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 18354561;
    result[1] += 35332530;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    result[0] += 51581715;
    result[1] += 2105376;
  } else {
    result[0] += 12662049;
    result[1] += 41025041;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e4bd512))) ) ) {
    result[0] += 33436697;
    result[1] += 20250394;
  } else {
    result[0] += 9007901;
    result[1] += 44679189;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
    result[0] += 52674127;
    result[1] += 1012963;
  } else {
    result[0] += 9970459;
    result[1] += 43716631;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 52728393;
    result[1] += 958698;
  } else {
    result[0] += 11930464;
    result[1] += 41756626;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
    result[0] += 52009369;
    result[1] += 1677721;
  } else {
    result[0] += 17198462;
    result[1] += 36488629;
  }
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16502179;
    result[1] += 37184911;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee17c1c))) ) ) {
    result[0] += 47551423;
    result[1] += 6135667;
  } else {
    result[0] += 10014172;
    result[1] += 43672918;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13594585;
    result[1] += 40092505;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e924b34))) ) ) {
    result[0] += 50107951;
    result[1] += 3579139;
  } else {
    result[0] += 10314268;
    result[1] += 43372822;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 11901079;
    result[1] += 41786011;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 51769695;
    result[1] += 1917396;
  } else {
    result[0] += 8818169;
    result[1] += 44868921;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 47830317;
    result[1] += 5856773;
  } else {
    result[0] += 13421772;
    result[1] += 40265318;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14950835;
    result[1] += 38736255;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
