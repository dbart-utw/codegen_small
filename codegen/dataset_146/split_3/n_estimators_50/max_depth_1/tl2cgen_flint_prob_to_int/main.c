
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
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2636297;
    result[1] += 933688;
    result[2] += 384459;
    result[3] += 11478876;
    result[4] += 16531779;
    result[5] += 53934244;
  } else {
    result[0] += 30046337;
    result[1] += 13719668;
    result[2] += 24648003;
    result[3] += 7663001;
    result[4] += 5661667;
    result[5] += 4160667;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2067843;
    result[1] += 782427;
    result[2] += 335326;
    result[3] += 11345196;
    result[4] += 15592659;
    result[5] += 55775892;
  } else {
    result[0] += 29460158;
    result[1] += 13398104;
    result[2] += 25568701;
    result[3] += 7208336;
    result[4] += 6555407;
    result[5] += 3708637;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 26779813;
    result[1] += 12552278;
    result[2] += 1626697;
    result[3] += 7235162;
    result[4] += 12819348;
    result[5] += 24886045;
  } else {
    result[0] += 2200837;
    result[1] += 1133764;
    result[2] += 62290364;
    result[3] += 12071259;
    result[4] += 666920;
    result[5] += 7536200;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2865113;
    result[1] += 1081174;
    result[2] += 973057;
    result[3] += 10487396;
    result[4] += 15785153;
    result[5] += 54707450;
  } else {
    result[0] += 29721120;
    result[1] += 12896843;
    result[2] += 25316025;
    result[3] += 6687252;
    result[4] += 6050370;
    result[5] += 5227732;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26767566;
    result[1] += 11468537;
    result[2] += 2935945;
    result[3] += 7959165;
    result[4] += 12019027;
    result[5] += 24749103;
  } else {
    result[0] += 1191942;
    result[1] += 1271405;
    result[2] += 69053220;
    result[3] += 9773931;
    result[4] += 1033017;
    result[5] += 3575828;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    result[0] += 4302300;
    result[1] += 488897;
    result[2] += 391118;
    result[3] += 13591359;
    result[4] += 17551431;
    result[5] += 49574238;
  } else {
    result[0] += 30172530;
    result[1] += 13854733;
    result[2] += 27121689;
    result[3] += 6325595;
    result[4] += 4954116;
    result[5] += 3470680;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26846497;
    result[1] += 11451672;
    result[2] += 2951461;
    result[3] += 7697412;
    result[4] += 11758624;
    result[5] += 25193678;
  } else {
    result[0] += 1084587;
    result[1] += 1156893;
    result[2] += 66449073;
    result[3] += 9399760;
    result[4] += 650752;
    result[5] += 7158278;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26695891;
    result[1] += 12261210;
    result[2] += 2149846;
    result[3] += 7843394;
    result[4] += 12072212;
    result[5] += 24876790;
  } else {
    result[0] += 1154949;
    result[1] += 1371502;
    result[2] += 66481762;
    result[3] += 9672699;
    result[4] += 433105;
    result[5] += 6785326;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26296187;
    result[1] += 13171079;
    result[2] += 1953825;
    result[3] += 7999189;
    result[4] += 11401144;
    result[5] += 25077919;
  } else {
    result[0] += 1656461;
    result[1] += 0;
    result[2] += 70044645;
    result[3] += 10648679;
    result[4] += 236637;
    result[5] += 3312922;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26164345;
    result[1] += 11605525;
    result[2] += 3391674;
    result[3] += 7775471;
    result[4] += 11651670;
    result[5] += 25310658;
  } else {
    result[0] += 467267;
    result[1] += 856657;
    result[2] += 70090128;
    result[3] += 10669275;
    result[4] += 778779;
    result[5] += 3037238;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25615520;
    result[1] += 12138444;
    result[2] += 2972217;
    result[3] += 7895660;
    result[4] += 12138444;
    result[5] += 25139058;
  } else {
    result[0] += 991146;
    result[1] += 578168;
    result[2] += 67976116;
    result[3] += 11398182;
    result[4] += 660764;
    result[5] += 4294967;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27889092;
    result[1] += 11888695;
    result[2] += 2772462;
    result[3] += 7612524;
    result[4] += 10995868;
    result[5] += 24740703;
  } else {
    result[0] += 587345;
    result[1] += 954437;
    result[2] += 69013149;
    result[3] += 9838044;
    result[4] += 1321528;
    result[5] += 4184839;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 28025770;
    result[1] += 12250785;
    result[2] += 1965879;
    result[3] += 6760707;
    result[4] += 11483613;
    result[5] += 25412589;
  } else {
    result[0] += 1658555;
    result[1] += 552851;
    result[2] += 63370635;
    result[3] += 12577378;
    result[4] += 691064;
    result[5] += 7048860;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27275022;
    result[1] += 12222831;
    result[2] += 2965168;
    result[3] += 7514778;
    result[4] += 11000548;
    result[5] += 24920996;
  } else {
    result[0] += 416582;
    result[1] += 249949;
    result[2] += 69985888;
    result[3] += 9914667;
    result[4] += 1166431;
    result[5] += 4165826;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27415656;
    result[1] += 12235463;
    result[2] += 2533836;
    result[3] += 7510200;
    result[4] += 12098499;
    result[5] += 24105689;
  } else {
    result[0] += 1131317;
    result[1] += 0;
    result[2] += 70868980;
    result[3] += 10747519;
    result[4] += 0;
    result[5] += 3151528;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26455086;
    result[1] += 12225801;
    result[2] += 2686488;
    result[3] += 8287135;
    result[4] += 11155759;
    result[5] += 25089074;
  } else {
    result[0] += 1468364;
    result[1] += 571030;
    result[2] += 69910483;
    result[3] += 9952250;
    result[4] += 326303;
    result[5] += 3670912;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 27364661;
    result[1] += 12434075;
    result[2] += 1575467;
    result[3] += 6786630;
    result[4] += 12022030;
    result[5] += 25716480;
  } else {
    result[0] += 2211137;
    result[1] += 804050;
    result[2] += 62648898;
    result[3] += 11792733;
    result[4] += 1273079;
    result[5] += 7169446;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25442328;
    result[1] += 11908200;
    result[2] += 2793847;
    result[3] += 8404441;
    result[4] += 11633395;
    result[5] += 25717132;
  } else {
    result[0] += 719157;
    result[1] += 958876;
    result[2] += 70077884;
    result[3] += 9109325;
    result[4] += 878970;
    result[5] += 4155131;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2513594;
    result[1] += 819650;
    result[2] += 327860;
    result[3] += 12185467;
    result[4] += 15627998;
    result[5] += 54424776;
  } else {
    result[0] += 29618643;
    result[1] += 13621408;
    result[2] += 24761397;
    result[3] += 6969092;
    result[4] += 6335538;
    result[5] += 4593265;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26464407;
    result[1] += 11553577;
    result[2] += 2500573;
    result[3] += 8288939;
    result[4] += 11553577;
    result[5] += 25538269;
  } else {
    result[0] += 461824;
    result[1] += 384853;
    result[2] += 71428846;
    result[3] += 9544371;
    result[4] += 307882;
    result[5] += 3771566;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27344091;
    result[1] += 11669863;
    result[2] += 2791614;
    result[3] += 8283314;
    result[4] += 11646981;
    result[5] += 24163481;
  } else {
    result[0] += 801299;
    result[1] += 801299;
    result[2] += 71395818;
    result[3] += 8333518;
    result[4] += 400649;
    result[5] += 4166759;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27301342;
    result[1] += 13722016;
    result[2] += 2021440;
    result[3] += 7086933;
    result[4] += 11415195;
    result[5] += 24352416;
  } else {
    result[0] += 1627417;
    result[1] += 495301;
    result[2] += 65733519;
    result[3] += 12948583;
    result[4] += 495301;
    result[5] += 4599223;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2857708;
    result[1] += 784468;
    result[2] += 168100;
    result[3] += 9917928;
    result[4] += 15465244;
    result[5] += 56705895;
  } else {
    result[0] += 29163519;
    result[1] += 14086136;
    result[2] += 25537643;
    result[3] += 6677872;
    result[4] += 5530112;
    result[5] += 4904062;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27892738;
    result[1] += 11456363;
    result[2] += 2829020;
    result[3] += 7715510;
    result[4] += 10965376;
    result[5] += 25040337;
  } else {
    result[0] += 2087831;
    result[1] += 671088;
    result[2] += 64648205;
    result[3] += 10588287;
    result[4] += 1342177;
    result[5] += 6561755;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26813440;
    result[1] += 12064901;
    result[2] += 2156085;
    result[3] += 7500423;
    result[4] += 11514411;
    result[5] += 25850083;
  } else {
    result[0] += 953554;
    result[1] += 0;
    result[2] += 72231734;
    result[3] += 9932856;
    result[4] += 0;
    result[5] += 2781199;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27169058;
    result[1] += 13224515;
    result[2] += 1488057;
    result[3] += 6552255;
    result[4] += 12384482;
    result[5] += 25080976;
  } else {
    result[0] += 1171041;
    result[1] += 0;
    result[2] += 67920413;
    result[3] += 11985955;
    result[4] += 206654;
    result[5] += 4615281;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26509880;
    result[1] += 11525038;
    result[2] += 2978638;
    result[3] += 7584071;
    result[4] += 11914553;
    result[5] += 25387163;
  } else {
    result[0] += 877337;
    result[1] += 717821;
    result[2] += 69229927;
    result[3] += 9810231;
    result[4] += 1276127;
    result[5] += 3987899;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25920820;
    result[1] += 11765798;
    result[2] += 2682241;
    result[3] += 7979104;
    result[4] += 11901037;
    result[5] += 25650342;
  } else {
    result[0] += 592409;
    result[1] += 0;
    result[2] += 72358562;
    result[3] += 10578737;
    result[4] += 84629;
    result[5] += 2285007;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 28487892;
    result[1] += 12828022;
    result[2] += 1452229;
    result[3] += 6099361;
    result[4] += 12198723;
    result[5] += 24833116;
  } else {
    result[0] += 1681662;
    result[1] += 403599;
    result[2] += 64306793;
    result[3] += 12309773;
    result[4] += 739931;
    result[5] += 6457585;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26548216;
    result[1] += 11368023;
    result[2] += 2967556;
    result[3] += 8720050;
    result[4] += 11619124;
    result[5] += 24676373;
  } else {
    result[0] += 969700;
    result[1] += 727275;
    result[2] += 69091195;
    result[3] += 10181860;
    result[4] += 1050509;
    result[5] += 3878803;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26836221;
    result[1] += 12140753;
    result[2] += 2414088;
    result[3] += 7429766;
    result[4] += 12304817;
    result[5] += 24773699;
  } else {
    result[0] += 3181457;
    result[1] += 961835;
    result[2] += 62667309;
    result[3] += 11763993;
    result[4] += 961835;
    result[5] += 6362914;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    result[0] += 14758398;
    result[1] += 14321112;
    result[2] += 2077107;
    result[3] += 9920923;
    result[4] += 14266451;
    result[5] += 30555351;
  } else {
    result[0] += 32358993;
    result[1] += 0;
    result[2] += 47058346;
    result[3] += 5154981;
    result[4] += 408315;
    result[5] += 918709;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    result[0] += 4575992;
    result[1] += 795824;
    result[2] += 397912;
    result[3] += 14026413;
    result[4] += 17756842;
    result[5] += 48346360;
  } else {
    result[0] += 28716270;
    result[1] += 14579882;
    result[2] += 28161902;
    result[3] += 5931739;
    result[4] += 5266497;
    result[5] += 3243053;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26189375;
    result[1] += 11775067;
    result[2] += 2188087;
    result[3] += 8143294;
    result[4] += 11910413;
    result[5] += 25693107;
  } else {
    result[0] += 1434468;
    result[1] += 0;
    result[2] += 72060944;
    result[3] += 9788137;
    result[4] += 0;
    result[5] += 2615795;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25778817;
    result[1] += 12393662;
    result[2] += 3673030;
    result[3] += 8405156;
    result[4] += 11807779;
    result[5] += 23840899;
  } else {
    result[0] += 423566;
    result[1] += 338853;
    result[2] += 68617820;
    result[3] += 10758596;
    result[4] += 677706;
    result[5] += 5082801;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25973291;
    result[1] += 12186412;
    result[2] += 2903704;
    result[3] += 8436747;
    result[4] += 11614817;
    result[5] += 24784373;
  } else {
    result[0] += 1526742;
    result[1] += 482129;
    result[2] += 69024825;
    result[3] += 11892519;
    result[4] += 241064;
    result[5] += 2732065;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26578618;
    result[1] += 11822902;
    result[2] += 3001550;
    result[3] += 8271449;
    result[4] += 11662514;
    result[5] += 24562309;
  } else {
    result[0] += 478547;
    result[1] += 717821;
    result[2] += 73377342;
    result[3] += 7497250;
    result[4] += 319031;
    result[5] += 3509351;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26050698;
    result[1] += 11779446;
    result[2] += 3556486;
    result[3] += 7973778;
    result[4] += 12300460;
    result[5] += 24238475;
  } else {
    result[0] += 664598;
    result[1] += 249224;
    result[2] += 68453637;
    result[3] += 9968976;
    result[4] += 1079972;
    result[5] += 5482936;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27538319;
    result[1] += 11874321;
    result[2] += 2549419;
    result[3] += 7717160;
    result[4] += 11782450;
    result[5] += 24437674;
  } else {
    result[0] += 1028261;
    result[1] += 553679;
    result[2] += 68656199;
    result[3] += 10361707;
    result[4] += 949164;
    result[5] += 4350335;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 25847644;
    result[1] += 12248440;
    result[2] += 2495476;
    result[3] += 8379307;
    result[4] += 11103726;
    result[5] += 25824750;
  } else {
    result[0] += 1599615;
    result[1] += 879788;
    result[2] += 68223595;
    result[3] += 10557461;
    result[4] += 639846;
    result[5] += 3999038;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 27121056;
    result[1] += 12216475;
    result[2] += 2064080;
    result[3] += 7200280;
    result[4] += 12240476;
    result[5] += 25056976;
  } else {
    result[0] += 3237585;
    result[1] += 1102156;
    result[2] += 63649555;
    result[3] += 10539374;
    result[4] += 1102156;
    result[5] += 6268516;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 28022042;
    result[1] += 13142028;
    result[2] += 2356994;
    result[3] += 7213830;
    result[4] += 11475466;
    result[5] += 23688982;
  } else {
    result[0] += 916823;
    result[1] += 282099;
    result[2] += 61779825;
    result[3] += 13752358;
    result[4] += 1481023;
    result[5] += 7687215;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 27370001;
    result[1] += 12555046;
    result[2] += 2145771;
    result[3] += 7578682;
    result[4] += 10637548;
    result[5] += 25612295;
  } else {
    result[0] += 1373743;
    result[1] += 0;
    result[2] += 70545746;
    result[3] += 10666710;
    result[4] += 242425;
    result[5] += 3070719;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    result[0] += 3830575;
    result[1] += 1154420;
    result[2] += 314841;
    result[3] += 11754094;
    result[4] += 16056933;
    result[5] += 52788480;
  } else {
    result[0] += 29791369;
    result[1] += 14195345;
    result[2] += 26801457;
    result[3] += 6437737;
    result[4] += 5387227;
    result[5] += 3286208;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26135381;
    result[1] += 12488670;
    result[2] += 2497734;
    result[3] += 7720268;
    result[4] += 12261603;
    result[5] += 24795687;
  } else {
    result[0] += 1070653;
    result[1] += 658863;
    result[2] += 69921902;
    result[3] += 9882954;
    result[4] += 247073;
    result[5] += 4117897;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26812381;
    result[1] += 11898985;
    result[2] += 2470456;
    result[3] += 8408616;
    result[4] += 12238956;
    result[5] += 24069948;
  } else {
    result[0] += 497486;
    result[1] += 580400;
    result[2] += 72052636;
    result[3] += 9452244;
    result[4] += 248743;
    result[5] += 3067833;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    result[0] += 3877588;
    result[1] += 1346384;
    result[2] += 269276;
    result[3] += 12063607;
    result[4] += 16372038;
    result[5] += 51970450;
  } else {
    result[0] += 30414376;
    result[1] += 13957646;
    result[2] += 26187203;
    result[3] += 6885772;
    result[4] += 5077924;
    result[5] += 3376421;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26428807;
    result[1] += 12447854;
    result[2] += 3272138;
    result[3] += 7711262;
    result[4] += 11967330;
    result[5] += 24071953;
  } else {
    result[0] += 881429;
    result[1] += 721169;
    result[2] += 70754778;
    result[3] += 9054688;
    result[4] += 480779;
    result[5] += 4006499;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 26970598;
    result[1] += 12551610;
    result[2] += 1347348;
    result[3] += 7445870;
    result[4] += 12433422;
    result[5] += 25150496;
  } else {
    result[0] += 1297137;
    result[1] += 0;
    result[2] += 68892428;
    result[3] += 11025671;
    result[4] += 0;
    result[5] += 4684108;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 26128199;
    result[1] += 11792373;
    result[2] += 3075265;
    result[3] += 8231538;
    result[4] += 10959970;
    result[5] += 25711998;
  } else {
    result[0] += 1237074;
    result[1] += 773171;
    result[2] += 68812257;
    result[3] += 8891471;
    result[4] += 463902;
    result[5] += 5721468;
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
