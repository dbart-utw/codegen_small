
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26677384;
    result[1] += 11963569;
    result[2] += 2773164;
    result[3] += 8594518;
    result[4] += 11184333;
    result[5] += 24706375;
  } else {
    result[0] += 637471;
    result[1] += 557787;
    result[2] += 70360967;
    result[3] += 9163659;
    result[4] += 239051;
    result[5] += 4940407;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25660658;
    result[1] += 11518268;
    result[2] += 3251124;
    result[3] += 7988476;
    result[4] += 12586495;
    result[5] += 24894322;
  } else {
    result[0] += 1600608;
    result[1] += 381097;
    result[2] += 67378013;
    result[3] += 11432920;
    result[4] += 685975;
    result[5] += 4420729;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26405539;
    result[1] += 12439386;
    result[2] += 2152489;
    result[3] += 7108220;
    result[4] += 12914936;
    result[5] += 24878773;
  } else {
    result[0] += 2279968;
    result[1] += 924311;
    result[2] += 61127798;
    result[3] += 13001981;
    result[4] += 1787002;
    result[5] += 6778284;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26633660;
    result[1] += 11278776;
    result[2] += 2385449;
    result[3] += 7156348;
    result[4] += 12251483;
    result[5] += 26193626;
  } else {
    result[0] += 1845643;
    result[1] += 0;
    result[2] += 72672230;
    result[3] += 9228219;
    result[4] += 0;
    result[5] += 2153251;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26091030;
    result[1] += 11138952;
    result[2] += 3004281;
    result[3] += 8596867;
    result[4] += 11578039;
    result[5] += 25490174;
  } else {
    result[0] += 309826;
    result[1] += 309826;
    result[2] += 73583749;
    result[3] += 7590744;
    result[4] += 619652;
    result[5] += 3485546;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26651584;
    result[1] += 11938721;
    result[2] += 1659531;
    result[3] += 6885818;
    result[4] += 12954255;
    result[5] += 25809434;
  } else {
    result[0] += 2719935;
    result[1] += 759051;
    result[2] += 59016266;
    result[3] += 13915947;
    result[4] += 1328340;
    result[5] += 8159805;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1969191;
    result[1] += 372549;
    result[2] += 585435;
    result[3] += 11282937;
    result[4] += 17296956;
    result[5] += 54392274;
  } else {
    result[0] += 29497813;
    result[1] += 13398372;
    result[2] += 26288622;
    result[3] += 7113706;
    result[4] += 5749800;
    result[5] += 3851029;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27677423;
    result[1] += 11987530;
    result[2] += 2438141;
    result[3] += 7720782;
    result[4] += 11219967;
    result[5] += 24855500;
  } else {
    result[0] += 588927;
    result[1] += 0;
    result[2] += 72774666;
    result[3] += 9422846;
    result[4] += 0;
    result[5] += 3112904;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25668961;
    result[1] += 12192756;
    result[2] += 3071107;
    result[3] += 8067387;
    result[4] += 11940650;
    result[5] += 24958481;
  } else {
    result[0] += 1593679;
    result[1] += 717155;
    result[2] += 68050131;
    result[3] += 11076075;
    result[4] += 239051;
    result[5] += 4223251;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    result[0] += 5185650;
    result[1] += 1152366;
    result[2] += 480152;
    result[3] += 11571683;
    result[4] += 17621609;
    result[5] += 49887881;
  } else {
    result[0] += 29811626;
    result[1] += 13972432;
    result[2] += 28623687;
    result[3] += 5572002;
    result[4] += 4978032;
    result[5] += 2941564;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26816351;
    result[1] += 11954001;
    result[2] += 2381640;
    result[3] += 8129636;
    result[4] += 11770798;
    result[5] += 24846918;
  } else {
    result[0] += 1678033;
    result[1] += 399531;
    result[2] += 68080225;
    result[3] += 11506517;
    result[4] += 159812;
    result[5] += 4075224;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 25944818;
    result[1] += 12700426;
    result[2] += 2294117;
    result[3] += 7237114;
    result[4] += 11872651;
    result[5] += 25850216;
  } else {
    result[0] += 2589930;
    result[1] += 575540;
    result[2] += 65395733;
    result[3] += 12230225;
    result[4] += 287770;
    result[5] += 4820147;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25996161;
    result[1] += 11644600;
    result[2] += 2870312;
    result[3] += 8284234;
    result[4] += 12087981;
    result[5] += 25016055;
  } else {
    result[0] += 1200340;
    result[1] += 525148;
    result[2] += 70670029;
    result[3] += 9377657;
    result[4] += 150042;
    result[5] += 3976126;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25331634;
    result[1] += 10817292;
    result[2] += 3902441;
    result[3] += 8740555;
    result[4] += 12506068;
    result[5] += 24601353;
  } else {
    result[0] += 970614;
    result[1] += 1132383;
    result[2] += 70369520;
    result[3] += 8169335;
    result[4] += 404422;
    result[5] += 4853070;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26243192;
    result[1] += 11926634;
    result[2] += 2366942;
    result[3] += 8318770;
    result[4] += 12202395;
    result[5] += 24841410;
  } else {
    result[0] += 947419;
    result[1] += 1026370;
    result[2] += 69635315;
    result[3] += 9553144;
    result[4] += 315806;
    result[5] += 4421289;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27277166;
    result[1] += 11367369;
    result[2] += 3028285;
    result[3] += 8158290;
    result[4] += 12429529;
    result[5] += 23638704;
  } else {
    result[0] += 251412;
    result[1] += 502825;
    result[2] += 71652625;
    result[3] += 8883249;
    result[4] += 251412;
    result[5] += 4357820;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26334106;
    result[1] += 12261382;
    result[2] += 3599458;
    result[3] += 8011698;
    result[4] += 11750491;
    result[5] += 23942207;
  } else {
    result[0] += 609755;
    result[1] += 685975;
    result[2] += 70121915;
    result[3] += 8993897;
    result[4] += 533536;
    result[5] += 4954265;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26787546;
    result[1] += 11349097;
    result[2] += 2825787;
    result[3] += 8339519;
    result[4] += 11969392;
    result[5] += 24628001;
  } else {
    result[0] += 395121;
    result[1] += 79024;
    result[2] += 71516934;
    result[3] += 9482908;
    result[4] += 395121;
    result[5] += 4030236;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    result[0] += 2082749;
    result[1] += 1632425;
    result[2] += 1970168;
    result[3] += 10695200;
    result[4] += 17168611;
    result[5] += 52350191;
  } else {
    result[0] += 28372814;
    result[1] += 12780781;
    result[2] += 27826182;
    result[3] += 6819887;
    result[4] += 5258081;
    result[5] += 4841599;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26457752;
    result[1] += 11850622;
    result[2] += 1814111;
    result[3] += 7044406;
    result[4] += 11921302;
    result[5] += 26811150;
  } else {
    result[0] += 1237532;
    result[1] += 727960;
    result[2] += 66535595;
    result[3] += 12011349;
    result[4] += 363980;
    result[5] += 5022927;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
    result[0] += 5161752;
    result[1] += 1850439;
    result[2] += 1071307;
    result[3] += 12904380;
    result[4] += 14608732;
    result[5] += 50302734;
  } else {
    result[0] += 30213453;
    result[1] += 12820379;
    result[2] += 28109452;
    result[3] += 5666775;
    result[4] += 5554562;
    result[5] += 3534721;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26387533;
    result[1] += 12261344;
    result[2] += 2424296;
    result[3] += 8018826;
    result[4] += 11795134;
    result[5] += 25012211;
  } else {
    result[0] += 903411;
    result[1] += 602274;
    result[2] += 68282827;
    result[3] += 11744345;
    result[4] += 526989;
    result[5] += 3839497;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 25648011;
    result[1] += 12322508;
    result[2] += 2220917;
    result[3] += 7235891;
    result[4] += 12370269;
    result[5] += 26101747;
  } else {
    result[0] += 1258086;
    result[1] += 559149;
    result[2] += 67587198;
    result[3] += 11182990;
    result[4] += 419362;
    result[5] += 4892558;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25161971;
    result[1] += 12592454;
    result[2] += 2270770;
    result[3] += 8165598;
    result[4] += 12156649;
    result[5] += 25551901;
  } else {
    result[0] += 1589257;
    result[1] += 0;
    result[2] += 71596032;
    result[3] += 10171245;
    result[4] += 0;
    result[5] += 2542811;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27809668;
    result[1] += 12327240;
    result[2] += 807140;
    result[3] += 5943491;
    result[4] += 12669664;
    result[5] += 26342139;
  } else {
    result[0] += 1503565;
    result[1] += 0;
    result[2] += 66091505;
    result[3] += 12943737;
    result[4] += 261489;
    result[5] += 5099047;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25753591;
    result[1] += 11371415;
    result[2] += 2848643;
    result[3] += 8291174;
    result[4] += 11834609;
    result[5] += 25799911;
  } else {
    result[0] += 307607;
    result[1] += 999723;
    result[2] += 70672783;
    result[3] += 9305121;
    result[4] += 384509;
    result[5] += 4229600;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25890007;
    result[1] += 11188181;
    result[2] += 3282483;
    result[3] += 8206207;
    result[4] += 12852539;
    result[5] += 24479926;
  } else {
    result[0] += 1160801;
    result[1] += 1083415;
    result[2] += 69493344;
    result[3] += 8667321;
    result[4] += 232160;
    result[5] += 5262302;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27455545;
    result[1] += 11167152;
    result[2] += 1778208;
    result[3] += 7563315;
    result[4] += 12589719;
    result[5] += 25345404;
  } else {
    result[0] += 1499489;
    result[1] += 1071064;
    result[2] += 64620871;
    result[3] += 13566812;
    result[4] += 642638;
    result[5] += 4498469;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26364247;
    result[1] += 11435095;
    result[2] += 3131037;
    result[3] += 8009104;
    result[4] += 11911557;
    result[5] += 25048303;
  } else {
    result[0] += 165191;
    result[1] += 247786;
    result[2] += 72931848;
    result[3] += 8920316;
    result[4] += 247786;
    result[5] += 3386416;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    result[0] += 4703559;
    result[1] += 712660;
    result[2] += 950214;
    result[3] += 12827889;
    result[4] += 17816512;
    result[5] += 48888510;
  } else {
    result[0] += 30511629;
    result[1] += 13092676;
    result[2] += 29088512;
    result[3] += 5550156;
    result[4] += 4610899;
    result[5] += 3045470;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26241042;
    result[1] += 12917194;
    result[2] += 2320310;
    result[3] += 6745646;
    result[4] += 11792920;
    result[5] += 25882231;
  } else {
    result[0] += 1182420;
    result[1] += 208662;
    result[2] += 64476675;
    result[3] += 11337322;
    result[4] += 2434394;
    result[5] += 6259871;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26092214;
    result[1] += 11767980;
    result[2] += 2003550;
    result[3] += 8912345;
    result[4] += 11376481;
    result[5] += 25746774;
  } else {
    result[0] += 391876;
    result[1] += 0;
    result[2] += 73672796;
    result[3] += 9718539;
    result[4] += 0;
    result[5] += 2116133;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    result[0] += 14326343;
    result[1] += 15559348;
    result[2] += 998146;
    result[3] += 9012679;
    result[4] += 14179557;
    result[5] += 31823271;
  } else {
    result[0] += 31692337;
    result[1] += 0;
    result[2] += 43989507;
    result[3] += 7776151;
    result[4] += 361681;
    result[5] += 2079668;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26983251;
    result[1] += 10857166;
    result[2] += 3193284;
    result[3] += 7869164;
    result[4] += 11723914;
    result[5] += 25272563;
  } else {
    result[0] += 162074;
    result[1] += 81037;
    result[2] += 71717850;
    result[3] += 10048602;
    result[4] += 324148;
    result[5] += 3565633;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27758821;
    result[1] += 13502978;
    result[2] += 1627157;
    result[3] += 7212922;
    result[4] += 11608676;
    result[5] += 24188789;
  } else {
    result[0] += 932964;
    result[1] += 466482;
    result[2] += 62908442;
    result[3] += 14460944;
    result[4] += 1199525;
    result[5] += 5930986;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26952126;
    result[1] += 12402321;
    result[2] += 1664903;
    result[3] += 6249418;
    result[4] += 12764256;
    result[5] += 25866319;
  } else {
    result[0] += 1357019;
    result[1] += 407105;
    result[2] += 63237117;
    result[3] += 13502345;
    result[4] += 1424870;
    result[5] += 5970886;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26177560;
    result[1] += 11173898;
    result[2] += 2973698;
    result[3] += 7997447;
    result[4] += 12345355;
    result[5] += 25231384;
  } else {
    result[0] += 847969;
    result[1] += 423984;
    result[2] += 72077437;
    result[3] += 8564495;
    result[4] += 423984;
    result[5] += 3561473;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25956343;
    result[1] += 11806610;
    result[2] += 2980088;
    result[3] += 8257802;
    result[4] += 11738364;
    result[5] += 25160136;
  } else {
    result[0] += 409044;
    result[1] += 654471;
    result[2] += 70764699;
    result[3] += 8998979;
    result[4] += 327235;
    result[5] += 4744916;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26878575;
    result[1] += 11331403;
    result[2] += 1705802;
    result[3] += 7237476;
    result[4] += 12890994;
    result[5] += 25855093;
  } else {
    result[0] += 1980768;
    result[1] += 1122435;
    result[2] += 62658323;
    result[3] += 13073074;
    result[4] += 1056410;
    result[5] += 6008332;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27021694;
    result[1] += 11834818;
    result[2] += 2417130;
    result[3] += 7730257;
    result[4] += 11469968;
    result[5] += 25425476;
  } else {
    result[0] += 973363;
    result[1] += 0;
    result[2] += 72272254;
    result[3] += 10463659;
    result[4] += 0;
    result[5] += 2190068;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 5817207;
    result[1] += 467075;
    result[2] += 1953222;
    result[3] += 14521787;
    result[4] += 17281776;
    result[5] += 45858276;
  } else {
    result[0] += 30676148;
    result[1] += 15414688;
    result[2] += 30124529;
    result[3] += 3983915;
    result[4] += 3830687;
    result[5] += 1869375;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26335771;
    result[1] += 11433467;
    result[2] += 2875482;
    result[3] += 8398235;
    result[4] += 11981178;
    result[5] += 24875209;
  } else {
    result[0] += 485307;
    result[1] += 404422;
    result[2] += 72068095;
    result[3] += 8411988;
    result[4] += 161769;
    result[5] += 4367763;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27154486;
    result[1] += 11396061;
    result[2] += 1274398;
    result[3] += 6788621;
    result[4] += 12400875;
    result[5] += 26884902;
  } else {
    result[0] += 1040415;
    result[1] += 390155;
    result[2] += 63140245;
    result[3] += 13785511;
    result[4] += 520207;
    result[5] += 7022807;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26933956;
    result[1] += 12077801;
    result[2] += 2571699;
    result[3] += 8289137;
    result[4] += 11251184;
    result[5] += 24775566;
  } else {
    result[0] += 395849;
    result[1] += 316679;
    result[2] += 73786350;
    result[3] += 8075330;
    result[4] += 316679;
    result[5] += 3008456;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27077496;
    result[1] += 12031741;
    result[2] += 1798684;
    result[3] += 6878753;
    result[4] += 12639405;
    result[5] += 25473263;
  } else {
    result[0] += 2659422;
    result[1] += 864312;
    result[2] += 63427225;
    result[3] += 12166857;
    result[4] += 332427;
    result[5] += 6449099;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27724886;
    result[1] += 12595702;
    result[2] += 2127167;
    result[3] += 7265832;
    result[4] += 12332794;
    result[5] += 23852962;
  } else {
    result[0] += 2091704;
    result[1] += 697234;
    result[2] += 64285062;
    result[3] += 12550229;
    result[4] += 697234;
    result[5] += 5577879;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26418144;
    result[1] += 12136195;
    result[2] += 1938099;
    result[3] += 7913906;
    result[4] += 12043905;
    result[5] += 25449094;
  } else {
    result[0] += 545145;
    result[1] += 0;
    result[2] += 71258296;
    result[3] += 10591397;
    result[4] += 0;
    result[5] += 3504506;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26317998;
    result[1] += 11730440;
    result[2] += 3205546;
    result[3] += 8222922;
    result[4] += 11196182;
    result[5] += 25226254;
  } else {
    result[0] += 1599189;
    result[1] += 913822;
    result[2] += 69222079;
    result[3] += 9366683;
    result[4] += 304607;
    result[5] += 4492962;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27219134;
    result[1] += 11877440;
    result[2] += 1296149;
    result[3] += 6669277;
    result[4] += 12725829;
    result[5] += 26111515;
  } else {
    result[0] += 1163750;
    result[1] += 0;
    result[2] += 69243164;
    result[3] += 11637506;
    result[4] += 145468;
    result[5] += 3709455;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25640238;
    result[1] += 12115467;
    result[2] += 3227760;
    result[3] += 7910286;
    result[4] += 12592812;
    result[5] += 24412780;
  } else {
    result[0] += 738389;
    result[1] += 82043;
    result[2] += 70475203;
    result[3] += 9763153;
    result[4] += 738389;
    result[5] += 4102165;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
