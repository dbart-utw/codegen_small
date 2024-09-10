
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 21178105;
    result[1] += 322164;
    result[2] += 576505;
    result[3] += 34827725;
    result[4] += 28994844;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73933245;
    result[1] += 26819;
    result[2] += 167623;
    result[3] += 10108829;
    result[4] += 1624832;
    result[5] += 11174;
    result[6] += 26819;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72114133;
    result[1] += 25504;
    result[2] += 257170;
    result[3] += 11525934;
    result[4] += 1951098;
    result[5] += 14877;
    result[6] += 10626;
  } else {
    result[0] += 8077435;
    result[1] += 612770;
    result[2] += 278532;
    result[3] += 33953081;
    result[4] += 42977526;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 65139600;
    result[1] += 76669;
    result[2] += 336166;
    result[3] += 16336504;
    result[4] += 3975019;
    result[5] += 0;
    result[6] += 35385;
  } else {
    result[0] += 68591822;
    result[1] += 68280;
    result[2] += 187028;
    result[3] += 11658086;
    result[4] += 5367410;
    result[5] += 2968;
    result[6] += 23749;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17471053;
    result[1] += 485307;
    result[2] += 522638;
    result[3] += 36080711;
    result[4] += 31339635;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73490779;
    result[1] += 24291;
    result[2] += 203165;
    result[3] += 10301826;
    result[4] += 1830699;
    result[5] += 24291;
    result[6] += 24291;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72137824;
    result[1] += 101299;
    result[2] += 220326;
    result[3] += 8833306;
    result[4] += 4593927;
    result[5] += 5064;
    result[6] += 7597;
  } else {
    result[0] += 51812161;
    result[1] += 0;
    result[2] += 304830;
    result[3] += 27954718;
    result[4] += 5764876;
    result[5] += 17931;
    result[6] += 44827;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 19524094;
    result[1] += 283441;
    result[2] += 483517;
    result[3] += 35580202;
    result[4] += 30028090;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 74027369;
    result[1] += 22399;
    result[2] += 201599;
    result[3] += 10082219;
    result[4] += 1541116;
    result[5] += 8959;
    result[6] += 15679;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85850239;
    result[1] += 0;
    result[2] += 42558;
    result[3] += 0;
    result[4] += 6547;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 40653018;
    result[1] += 114459;
    result[2] += 477743;
    result[3] += 32387054;
    result[4] += 12207351;
    result[5] += 24882;
    result[6] += 34835;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85837272;
    result[1] += 0;
    result[2] += 45738;
    result[3] += 0;
    result[4] += 13068;
    result[5] += 0;
    result[6] += 3267;
  } else {
    result[0] += 40461102;
    result[1] += 194692;
    result[2] += 489227;
    result[3] += 32873086;
    result[4] += 11836307;
    result[5] += 24960;
    result[6] += 19968;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71830357;
    result[1] += 29708;
    result[2] += 252520;
    result[3] += 11698693;
    result[4] += 2039260;
    result[5] += 16976;
    result[6] += 31830;
  } else {
    result[0] += 7366864;
    result[1] += 540426;
    result[2] += 312878;
    result[3] += 36407669;
    result[4] += 41271506;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9807829;
    result[1] += 175139;
    result[2] += 242501;
    result[3] += 43421203;
    result[4] += 32225727;
    result[5] += 26944;
    result[6] += 0;
  } else {
    result[0] += 77453795;
    result[1] += 50904;
    result[2] += 263778;
    result[3] += 8100786;
    result[4] += 0;
    result[5] += 2313;
    result[6] += 27766;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10163351;
    result[1] += 163048;
    result[2] += 407621;
    result[3] += 42256717;
    result[4] += 32854257;
    result[5] += 54349;
    result[6] += 0;
  } else {
    result[0] += 77408300;
    result[1] += 55451;
    result[2] += 265706;
    result[3] += 8153714;
    result[4] += 0;
    result[5] += 2310;
    result[6] += 13862;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9973997;
    result[1] += 204945;
    result[2] += 314249;
    result[3] += 42519288;
    result[4] += 32845876;
    result[5] += 40989;
    result[6] += 0;
  } else {
    result[0] += 77483227;
    result[1] += 55399;
    result[2] += 193898;
    result[3] += 8141428;
    result[4] += 0;
    result[5] += 0;
    result[6] += 25391;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72073364;
    result[1] += 33954;
    result[2] += 288616;
    result[3] += 11306957;
    result[4] += 2166742;
    result[5] += 8488;
    result[6] += 21221;
  } else {
    result[0] += 8126765;
    result[1] += 568305;
    result[2] += 255737;
    result[3] += 34240394;
    result[4] += 42708143;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 3288642;
    result[1] += 312421;
    result[2] += 246648;
    result[3] += 41223135;
    result[4] += 40713395;
    result[5] += 115102;
    result[6] += 0;
  } else {
    result[0] += 76431027;
    result[1] += 60593;
    result[2] += 231153;
    result[3] += 9147396;
    result[4] += 0;
    result[5] += 4488;
    result[6] += 24686;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85834263;
    result[1] += 0;
    result[2] += 55320;
    result[3] += 0;
    result[4] += 9762;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 40440947;
    result[1] += 160719;
    result[2] += 497224;
    result[3] += 32651093;
    result[4] += 12109181;
    result[5] += 15067;
    result[6] += 25112;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85830783;
    result[1] += 0;
    result[2] += 55503;
    result[3] += 0;
    result[4] += 6529;
    result[5] += 0;
    result[6] += 6529;
  } else {
    result[0] += 40106349;
    result[1] += 159905;
    result[2] += 549675;
    result[3] += 32905595;
    result[4] += 12107860;
    result[5] += 34979;
    result[6] += 34979;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10819886;
    result[1] += 224314;
    result[2] += 263899;
    result[3] += 42764943;
    result[4] += 31760326;
    result[5] += 65974;
    result[6] += 0;
  } else {
    result[0] += 77706512;
    result[1] += 71989;
    result[2] += 227578;
    result[3] += 7870042;
    result[4] += 0;
    result[5] += 2322;
    result[6] += 20900;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10172116;
    result[1] += 278506;
    result[2] += 159146;
    result[3] += 42346242;
    result[4] += 32877023;
    result[5] += 66311;
    result[6] += 0;
  } else {
    result[0] += 77727736;
    result[1] += 64964;
    result[2] += 176332;
    result[3] += 7902470;
    result[4] += 0;
    result[5] += 4640;
    result[6] += 23201;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85833540;
    result[1] += 0;
    result[2] += 59225;
    result[3] += 0;
    result[4] += 6580;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39998781;
    result[1] += 217304;
    result[2] += 563015;
    result[3] += 32625256;
    result[4] += 12440663;
    result[5] += 29632;
    result[6] += 24693;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85814474;
    result[1] += 0;
    result[2] += 62021;
    result[3] += 0;
    result[4] += 13057;
    result[5] += 0;
    result[6] += 9792;
  } else {
    result[0] += 40153008;
    result[1] += 159952;
    result[2] += 584825;
    result[3] += 32770213;
    result[4] += 12171364;
    result[5] += 39988;
    result[6] += 19994;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17020480;
    result[1] += 455397;
    result[2] += 512322;
    result[3] += 37703114;
    result[4] += 30208031;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73893759;
    result[1] += 44081;
    result[2] += 189550;
    result[3] += 9971227;
    result[4] += 1780891;
    result[5] += 6612;
    result[6] += 13224;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85843374;
    result[1] += 0;
    result[2] += 46093;
    result[3] += 0;
    result[4] += 9877;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39816641;
    result[1] += 172686;
    result[2] += 488456;
    result[3] += 32879565;
    result[4] += 12463052;
    result[5] += 24669;
    result[6] += 54272;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10138764;
    result[1] += 306831;
    result[2] += 280150;
    result[3] += 42742895;
    result[4] += 32377343;
    result[5] += 53361;
    result[6] += 0;
  } else {
    result[0] += 77675852;
    result[1] += 62580;
    result[2] += 236413;
    result[3] += 7896685;
    result[4] += 0;
    result[5] += 0;
    result[6] += 27813;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72349050;
    result[1] += 36151;
    result[2] += 231792;
    result[3] += 11174953;
    result[4] += 2066994;
    result[5] += 19138;
    result[6] += 21265;
  } else {
    result[0] += 8462717;
    result[1] += 580774;
    result[2] += 276559;
    result[3] += 33740245;
    result[4] += 42839049;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17128300;
    result[1] += 386768;
    result[2] += 423603;
    result[3] += 36374615;
    result[4] += 31586058;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73470969;
    result[1] += 44236;
    result[2] += 185795;
    result[3] += 10267400;
    result[4] += 1911037;
    result[5] += 11059;
    result[6] += 8847;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 65710566;
    result[1] += 75309;
    result[2] += 266480;
    result[3] += 16000404;
    result[4] += 3794447;
    result[5] += 11586;
    result[6] += 40551;
  } else {
    result[0] += 69238971;
    result[1] += 71902;
    result[2] += 236678;
    result[3] += 11300653;
    result[4] += 5030168;
    result[5] += 17975;
    result[6] += 2995;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10808616;
    result[1] += 94931;
    result[2] += 447533;
    result[3] += 41810496;
    result[4] += 32697082;
    result[5] += 40684;
    result[6] += 0;
  } else {
    result[0] += 77706019;
    result[1] += 62403;
    result[2] += 224189;
    result[3] += 7885932;
    result[4] += 0;
    result[5] += 4622;
    result[6] += 16178;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 5948132;
    result[1] += 237331;
    result[2] += 430164;
    result[3] += 42393426;
    result[4] += 36875457;
    result[5] += 14833;
    result[6] += 0;
  } else {
    result[0] += 77060886;
    result[1] += 54670;
    result[2] += 225517;
    result[3] += 8528657;
    result[4] += 0;
    result[5] += 2277;
    result[6] += 27335;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72021956;
    result[1] += 123792;
    result[2] += 179372;
    result[3] += 9097483;
    result[4] += 4466634;
    result[5] += 7579;
    result[6] += 2526;
  } else {
    result[0] += 51328001;
    result[1] += 0;
    result[2] += 506407;
    result[3] += 28413069;
    result[4] += 5606652;
    result[5] += 18085;
    result[6] += 27128;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72455528;
    result[1] += 85967;
    result[2] += 214919;
    result[3] += 8758582;
    result[4] += 4366649;
    result[5] += 15170;
    result[6] += 2528;
  } else {
    result[0] += 50717310;
    result[1] += 0;
    result[2] += 342623;
    result[3] += 28176283;
    result[4] += 6609029;
    result[5] += 18032;
    result[6] += 36065;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 16775382;
    result[1] += 523666;
    result[2] += 487551;
    result[3] += 36710819;
    result[4] += 31401926;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73651766;
    result[1] += 31040;
    result[2] += 192892;
    result[3] += 10147931;
    result[4] += 1838023;
    result[5] += 8868;
    result[6] += 28823;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72396806;
    result[1] += 90773;
    result[2] += 224411;
    result[3] += 8762151;
    result[4] += 4412594;
    result[5] += 7564;
    result[6] += 5042;
  } else {
    result[0] += 50348508;
    result[1] += 0;
    result[2] += 264081;
    result[3] += 28875948;
    result[4] += 6319744;
    result[5] += 9106;
    result[6] += 81956;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72194200;
    result[1] += 34065;
    result[2] += 255494;
    result[3] += 11263044;
    result[4] += 2118474;
    result[5] += 12774;
    result[6] += 21291;
  } else {
    result[0] += 8467415;
    result[1] += 462849;
    result[2] += 217811;
    result[3] += 35230983;
    result[4] += 41520286;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72562888;
    result[1] += 113965;
    result[2] += 177279;
    result[3] += 8527127;
    result[4] += 4502890;
    result[5] += 5065;
    result[6] += 10130;
  } else {
    result[0] += 51277839;
    result[1] += 0;
    result[2] += 484091;
    result[3] += 27673896;
    result[4] += 6391800;
    result[5] += 8964;
    result[6] += 62752;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 65354931;
    result[1] += 40453;
    result[2] += 283171;
    result[3] += 16285276;
    result[4] += 3883501;
    result[5] += 23116;
    result[6] += 28895;
  } else {
    result[0] += 68648083;
    result[1] += 74992;
    result[2] += 182981;
    result[3] += 11557835;
    result[4] += 5408455;
    result[5] += 5999;
    result[6] += 20997;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85843520;
    result[1] += 0;
    result[2] += 42690;
    result[3] += 0;
    result[4] += 9851;
    result[5] += 0;
    result[6] += 3283;
  } else {
    result[0] += 40294728;
    result[1] += 168410;
    result[2] += 554764;
    result[3] += 32795500;
    result[4] += 12031456;
    result[5] += 19813;
    result[6] += 34672;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17311013;
    result[1] += 299757;
    result[2] += 318492;
    result[3] += 37151232;
    result[4] += 30818849;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73893524;
    result[1] += 33110;
    result[2] += 203076;
    result[3] += 9999332;
    result[4] += 1728361;
    result[5] += 11036;
    result[6] += 30903;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 9522019;
    result[1] += 241403;
    result[2] += 321871;
    result[3] += 43305072;
    result[4] += 32428511;
    result[5] += 80467;
    result[6] += 0;
  } else {
    result[0] += 77857064;
    result[1] += 32419;
    result[2] += 208409;
    result[3] += 7787558;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13893;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10215274;
    result[1] += 214212;
    result[2] += 227601;
    result[3] += 41905385;
    result[4] += 33229765;
    result[5] += 107106;
    result[6] += 0;
  } else {
    result[0] += 77708749;
    result[1] += 34745;
    result[2] += 243216;
    result[3] += 7901053;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11581;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 72062129;
    result[1] += 113131;
    result[2] += 238832;
    result[3] += 8970055;
    result[4] += 4507654;
    result[5] += 5028;
    result[6] += 2514;
  } else {
    result[0] += 51224802;
    result[1] += 0;
    result[2] += 460240;
    result[3] += 28139123;
    result[4] += 5955516;
    result[5] += 46024;
    result[6] += 73638;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85837360;
    result[1] += 0;
    result[2] += 45673;
    result[3] += 0;
    result[4] += 13049;
    result[5] += 0;
    result[6] += 3262;
  } else {
    result[0] += 39987971;
    result[1] += 225129;
    result[2] += 515296;
    result[3] += 32848870;
    result[4] += 12252038;
    result[5] += 35020;
    result[6] += 35020;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 72180224;
    result[1] += 27573;
    result[2] += 222713;
    result[3] += 11400784;
    result[4] += 2044717;
    result[5] += 4242;
    result[6] += 19089;
  } else {
    result[0] += 8555597;
    result[1] += 743965;
    result[2] += 400596;
    result[3] += 33879022;
    result[4] += 42320164;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 71915288;
    result[1] += 42356;
    result[2] += 222372;
    result[3] += 11766685;
    result[4] += 1916639;
    result[5] += 19060;
    result[6] += 16942;
  } else {
    result[0] += 7859497;
    result[1] += 876523;
    result[2] += 262957;
    result[3] += 34476608;
    result[4] += 42423758;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 65671604;
    result[1] += 81681;
    result[2] += 303386;
    result[3] += 15997826;
    result[4] += 3768999;
    result[5] += 40840;
    result[6] += 35006;
  } else {
    result[0] += 68395305;
    result[1] += 77610;
    result[2] += 229845;
    result[3] += 11635530;
    result[4] += 5534190;
    result[5] += 14925;
    result[6] += 11940;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10210223;
    result[1] += 186853;
    result[2] += 306974;
    result[3] += 42322378;
    result[4] += 32752795;
    result[5] += 120120;
    result[6] += 0;
  } else {
    result[0] += 77572226;
    result[1] += 46351;
    result[2] += 222489;
    result[3] += 8025831;
    result[4] += 0;
    result[5] += 2317;
    result[6] += 30128;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 20935391;
    result[1] += 296488;
    result[2] += 675335;
    result[3] += 34689170;
    result[4] += 29302959;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73702693;
    result[1] += 40386;
    result[2] += 183981;
    result[3] += 10334396;
    result[4] += 1606475;
    result[5] += 8974;
    result[6] += 22436;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 17387646;
    result[1] += 346294;
    result[2] += 637911;
    result[3] += 36160471;
    result[4] += 31367021;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73563786;
    result[1] += 31004;
    result[2] += 192673;
    result[3] += 10353454;
    result[4] += 1716348;
    result[5] += 19931;
    result[6] += 22146;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 85837458;
    result[1] += 0;
    result[2] += 39086;
    result[3] += 0;
    result[4] += 22800;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 39965663;
    result[1] += 265802;
    result[2] += 581756;
    result[3] += 33054798;
    result[4] += 11936037;
    result[5] += 35105;
    result[6] += 60181;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 19975046;
    result[1] += 481927;
    result[2] += 681345;
    result[3] += 36327330;
    result[4] += 28433697;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 73912296;
    result[1] += 33614;
    result[2] += 188243;
    result[3] += 10073245;
    result[4] += 1660572;
    result[5] += 17927;
    result[6] += 13445;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 10483934;
    result[1] += 185556;
    result[2] += 344604;
    result[3] += 42068280;
    result[4] += 32790461;
    result[5] += 26508;
    result[6] += 0;
  } else {
    result[0] += 77673484;
    result[1] += 48728;
    result[2] += 192594;
    result[3] += 7945091;
    result[4] += 0;
    result[5] += 4640;
    result[6] += 34806;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
