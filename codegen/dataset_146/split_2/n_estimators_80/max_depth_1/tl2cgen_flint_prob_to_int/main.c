
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15929136;
    result[1] += 7396184;
    result[2] += 1510893;
    result[3] += 4935586;
    result[4] += 7856647;
    result[5] += 16058642;
  } else {
    result[0] += 588351;
    result[1] += 0;
    result[2] += 46038519;
    result[3] += 5540311;
    result[4] += 0;
    result[5] += 1519908;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16278847;
    result[1] += 7182267;
    result[2] += 1971885;
    result[3] += 5397495;
    result[4] += 7239840;
    result[5] += 15616754;
  } else {
    result[0] += 930706;
    result[1] += 783753;
    result[2] += 43841192;
    result[3] += 4947441;
    result[4] += 244922;
    result[5] += 2939074;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16848074;
    result[1] += 7003288;
    result[2] += 2037842;
    result[3] += 5123307;
    result[4] += 7319010;
    result[5] += 15355570;
  } else {
    result[0] += 791699;
    result[1] += 445330;
    result[2] += 42603304;
    result[3] += 6580998;
    result[4] += 742217;
    result[5] += 2523540;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    result[0] += 1098547;
    result[1] += 885925;
    result[2] += 673303;
    result[3] += 6484975;
    result[4] += 11198099;
    result[5] += 33346239;
  } else {
    result[0] += 18176753;
    result[1] += 7588510;
    result[2] += 16166121;
    result[3] += 4702282;
    result[4] += 3713181;
    result[5] += 3340241;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16272951;
    result[1] += 7749746;
    result[2] += 1107106;
    result[3] += 4610416;
    result[4] += 8174390;
    result[5] += 15772478;
  } else {
    result[0] += 1127178;
    result[1] += 1085431;
    result[2] += 38783287;
    result[3] += 7138796;
    result[4] += 375726;
    result[5] += 5176671;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16195461;
    result[1] += 7550197;
    result[2] += 1873140;
    result[3] += 5028662;
    result[4] += 7132343;
    result[5] += 15907286;
  } else {
    result[0] += 195225;
    result[1] += 341645;
    result[2] += 44950737;
    result[3] += 6003192;
    result[4] += 195225;
    result[5] += 2001064;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16779932;
    result[1] += 7477068;
    result[2] += 1898248;
    result[3] += 4897769;
    result[4] += 6868469;
    result[5] += 15765601;
  } else {
    result[0] += 383137;
    result[1] += 431029;
    result[2] += 42815574;
    result[3] += 6561223;
    result[4] += 622597;
    result[5] += 2873528;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15669506;
    result[1] += 7152533;
    result[2] += 2111290;
    result[3] += 5687557;
    result[4] += 7367971;
    result[5] += 15698231;
  } else {
    result[0] += 690826;
    result[1] += 789516;
    result[2] += 42979279;
    result[3] += 5773336;
    result[4] += 296068;
    result[5] += 3158064;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16780867;
    result[1] += 7565264;
    result[2] += 978518;
    result[3] += 4279194;
    result[4] += 7448426;
    result[5] += 16634819;
  } else {
    result[0] += 513528;
    result[1] += 0;
    result[2] += 42996357;
    result[3] += 7796299;
    result[4] += 140053;
    result[5] += 2240852;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16634842;
    result[1] += 7438572;
    result[2] += 1715512;
    result[3] += 4668442;
    result[4] += 7691681;
    result[5] += 15538039;
  } else {
    result[0] += 266305;
    result[1] += 213044;
    result[2] += 44472937;
    result[3] += 6125015;
    result[4] += 159783;
    result[5] += 2450006;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17805618;
    result[1] += 7521597;
    result[2] += 975855;
    result[3] += 3918437;
    result[4] += 7146268;
    result[5] += 16319314;
  } else {
    result[0] += 730144;
    result[1] += 214748;
    result[2] += 39857296;
    result[3] += 8117488;
    result[4] += 429496;
    result[5] += 4337916;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17727877;
    result[1] += 7765481;
    result[2] += 839099;
    result[3] += 4271777;
    result[4] += 7460354;
    result[5] += 15622501;
  } else {
    result[0] += 657225;
    result[1] += 205382;
    result[2] += 39187058;
    result[3] += 8913618;
    result[4] += 657225;
    result[5] += 4066581;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 15770398;
    result[1] += 7745312;
    result[2] += 1443043;
    result[3] += 4726702;
    result[4] += 7524438;
    result[5] += 16477195;
  } else {
    result[0] += 545970;
    result[1] += 227487;
    result[2] += 41766737;
    result[3] += 6779132;
    result[4] += 727960;
    result[5] += 3639802;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1121918;
    result[1] += 32997;
    result[2] += 329975;
    result[3] += 6995490;
    result[4] += 10130262;
    result[5] += 35076446;
  } else {
    result[0] += 18276099;
    result[1] += 8173058;
    result[2] += 16732113;
    result[3] += 4397004;
    result[4] += 3406839;
    result[5] += 2701976;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16305399;
    result[1] += 7258157;
    result[2] += 1570903;
    result[3] += 5105437;
    result[4] += 7854518;
    result[5] += 15592674;
  } else {
    result[0] += 1135233;
    result[1] += 236507;
    result[2] += 43990303;
    result[3] += 5108551;
    result[4] += 189205;
    result[5] += 3027289;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16225304;
    result[1] += 7796761;
    result[2] += 1292280;
    result[3] += 5011178;
    result[4] += 7107544;
    result[5] += 16254021;
  } else {
    result[0] += 444511;
    result[1] += 0;
    result[2] += 44846254;
    result[3] += 7161571;
    result[4] += 0;
    result[5] += 1234753;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16304012;
    result[1] += 7155410;
    result[2] += 1806777;
    result[3] += 4975806;
    result[4] += 7227108;
    result[5] += 16217975;
  } else {
    result[0] += 843512;
    result[1] += 297710;
    result[2] += 43316848;
    result[3] += 6003824;
    result[4] += 347328;
    result[5] += 2877866;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17019091;
    result[1] += 7814736;
    result[2] += 1449387;
    result[3] += 4318277;
    result[4] += 7665315;
    result[5] += 15420283;
  } else {
    result[0] += 783753;
    result[1] += 87083;
    result[2] += 39274741;
    result[3] += 7881073;
    result[4] += 1132087;
    result[5] += 4528351;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17074558;
    result[1] += 7852141;
    result[2] += 831403;
    result[3] += 4295583;
    result[4] += 7498025;
    result[5] += 16135380;
  } else {
    result[0] += 1202847;
    result[1] += 521233;
    result[2] += 38972257;
    result[3] += 8860976;
    result[4] += 441044;
    result[5] += 3688732;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16479563;
    result[1] += 8103711;
    result[2] += 997845;
    result[3] += 4626372;
    result[4] += 8179306;
    result[5] += 15300291;
  } else {
    result[0] += 1010580;
    result[1] += 968473;
    result[2] += 39538963;
    result[3] += 7158278;
    result[4] += 505290;
    result[5] += 4505504;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17632003;
    result[1] += 7789116;
    result[2] += 1080131;
    result[3] += 4457443;
    result[4] += 7134952;
    result[5] += 15593445;
  } else {
    result[0] += 827865;
    result[1] += 206966;
    result[2] += 40027306;
    result[3] += 7450791;
    result[4] += 1117618;
    result[5] += 4056541;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15907818;
    result[1] += 7415026;
    result[2] += 1379539;
    result[3] += 4900240;
    result[4] += 7946724;
    result[5] += 16137741;
  } else {
    result[0] += 935830;
    result[1] += 394033;
    result[2] += 43885502;
    result[3] += 5762742;
    result[4] += 246271;
    result[5] += 2462710;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1748108;
    result[1] += 504261;
    result[2] += 168087;
    result[3] += 5647734;
    result[4] += 10219709;
    result[5] += 35399190;
  } else {
    result[0] += 17906781;
    result[1] += 8196883;
    result[2] += 16609911;
    result[3] += 4605551;
    result[4] += 3691091;
    result[5] += 2676872;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16495864;
    result[1] += 7900492;
    result[2] += 528713;
    result[3] += 4063541;
    result[4] += 8036446;
    result[5] += 16662031;
  } else {
    result[0] += 1266204;
    result[1] += 84413;
    result[2] += 40180904;
    result[3] += 9158882;
    result[4] += 84413;
    result[5] += 2912271;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16295814;
    result[1] += 7285694;
    result[2] += 1336429;
    result[3] += 5431938;
    result[4] += 7285694;
    result[5] += 16051520;
  } else {
    result[0] += 147762;
    result[1] += 0;
    result[2] += 46003434;
    result[3] += 5565725;
    result[4] += 0;
    result[5] += 1970168;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    result[0] += 8748236;
    result[1] += 9390467;
    result[2] += 1215032;
    result[3] += 6734753;
    result[4] += 8835024;
    result[5] += 18763577;
  } else {
    result[0] += 20508282;
    result[1] += 0;
    result[2] += 29337377;
    result[3] += 3345762;
    result[4] += 123917;
    result[5] += 371751;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16113594;
    result[1] += 7646117;
    result[2] += 1373911;
    result[3] += 5122301;
    result[4] += 7317572;
    result[5] += 16113594;
  } else {
    result[0] += 654188;
    result[1] += 348900;
    result[2] += 42129756;
    result[3] += 7065238;
    result[4] += 305288;
    result[5] += 3183718;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16462699;
    result[1] += 7677800;
    result[2] += 1351522;
    result[3] += 4989132;
    result[4] += 7433376;
    result[5] += 15772559;
  } else {
    result[0] += 294984;
    result[1] += 0;
    result[2] += 45476702;
    result[3] += 6587976;
    result[4] += 0;
    result[5] += 1327428;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16972988;
    result[1] += 7954722;
    result[2] += 1209234;
    result[3] += 4618401;
    result[4] += 7357389;
    result[5] += 15574355;
  } else {
    result[0] += 376421;
    result[1] += 329368;
    result[2] += 43476662;
    result[3] += 6022741;
    result[4] += 282315;
    result[5] += 3199581;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1383870;
    result[1] += 248387;
    result[2] += 0;
    result[3] += 7309676;
    result[4] += 10006450;
    result[5] += 34738706;
  } else {
    result[0] += 18165780;
    result[1] += 7940439;
    result[2] += 16334617;
    result[3] += 4310524;
    result[4] += 3629915;
    result[5] += 3305815;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16563360;
    result[1] += 7539811;
    result[2] += 1332336;
    result[3] += 4557195;
    result[4] += 7660932;
    result[5] += 16033454;
  } else {
    result[0] += 838860;
    result[1] += 880803;
    result[2] += 39594229;
    result[3] += 7088373;
    result[4] += 587202;
    result[5] += 4697620;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16145139;
    result[1] += 7682445;
    result[2] += 1275406;
    result[3] += 4951576;
    result[4] += 7472378;
    result[5] += 16160144;
  } else {
    result[0] += 1505647;
    result[1] += 172074;
    result[2] += 39964188;
    result[3] += 7227108;
    result[4] += 860370;
    result[5] += 3957702;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16586716;
    result[1] += 7159223;
    result[2] += 1417668;
    result[3] += 5032721;
    result[4] += 7414404;
    result[5] += 16076356;
  } else {
    result[0] += 568390;
    result[1] += 0;
    result[2] += 44386151;
    result[3] += 7234064;
    result[4] += 0;
    result[5] += 1498484;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16050485;
    result[1] += 7376089;
    result[2] += 1940325;
    result[3] += 4993484;
    result[4] += 7675698;
    result[5] += 15651006;
  } else {
    result[0] += 101010;
    result[1] += 353536;
    result[2] += 45101197;
    result[3] += 5353557;
    result[4] += 202021;
    result[5] += 2575768;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1630915;
    result[1] += 1364643;
    result[2] += 898667;
    result[3] += 7389047;
    result[4] += 10384607;
    result[5] += 32019207;
  } else {
    result[0] += 18530651;
    result[1] += 8053899;
    result[2] += 16057670;
    result[3] += 4511520;
    result[4] += 3208192;
    result[5] += 3325157;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16447976;
    result[1] += 7495457;
    result[2] += 1849346;
    result[3] += 5141743;
    result[4] += 7047131;
    result[5] += 15705435;
  } else {
    result[0] += 216044;
    result[1] += 378078;
    result[2] += 44289149;
    result[3] += 5833205;
    result[4] += 216044;
    result[5] += 2754569;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16295034;
    result[1] += 7195771;
    result[2] += 1687184;
    result[3] += 5494166;
    result[4] += 7080408;
    result[5] += 15934524;
  } else {
    result[0] += 292042;
    result[1] += 292042;
    result[2] += 44195719;
    result[3] += 6084212;
    result[4] += 194694;
    result[5] += 2628379;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    result[0] += 1672042;
    result[1] += 363487;
    result[2] += 145394;
    result[3] += 6215634;
    result[4] += 9741462;
    result[5] += 35549069;
  } else {
    result[0] += 17746076;
    result[1] += 8752807;
    result[2] += 16383459;
    result[3] += 4488619;
    result[4] += 3494710;
    result[5] += 2821417;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16189296;
    result[1] += 7399182;
    result[2] += 2136585;
    result[3] += 5305615;
    result[4] += 7026355;
    result[5] += 15630055;
  } else {
    result[0] += 496183;
    result[1] += 545802;
    result[2] += 43515322;
    result[3] += 6003824;
    result[4] += 694657;
    result[5] += 2431300;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1940497;
    result[1] += 272350;
    result[2] += 442569;
    result[3] += 7727945;
    result[4] += 10417406;
    result[5] += 32886322;
  } else {
    result[0] += 18391422;
    result[1] += 8724771;
    result[2] += 16375471;
    result[3] += 4180619;
    result[4] += 3784039;
    result[5] += 2230765;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17479518;
    result[1] += 7765291;
    result[2] += 791755;
    result[3] += 3654254;
    result[4] += 7613030;
    result[5] += 16383241;
  } else {
    result[0] += 1115039;
    result[1] += 330382;
    result[2] += 40058829;
    result[3] += 7887872;
    result[4] += 454275;
    result[5] += 3840691;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17172738;
    result[1] += 7160259;
    result[2] += 1396399;
    result[3] += 4426882;
    result[4] += 7026561;
    result[5] += 16504249;
  } else {
    result[0] += 885925;
    result[1] += 974518;
    result[2] += 40663984;
    result[3] += 6555849;
    result[4] += 708740;
    result[5] += 3898072;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16040481;
    result[1] += 7278154;
    result[2] += 1783861;
    result[3] += 5351584;
    result[4] += 7335237;
    result[5] += 15897772;
  } else {
    result[0] += 655951;
    result[1] += 50457;
    result[2] += 45664302;
    result[3] += 5398983;
    result[4] += 151373;
    result[5] += 1766022;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17170995;
    result[1] += 7320966;
    result[2] += 1050078;
    result[3] += 4407370;
    result[4] += 7690712;
    result[5] += 16046968;
  } else {
    result[0] += 1077332;
    result[1] += 448888;
    result[2] += 41073318;
    result[3] += 7990219;
    result[4] += 0;
    result[5] += 3097332;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17748042;
    result[1] += 7855206;
    result[2] += 1358419;
    result[3] += 4651109;
    result[4] += 7072639;
    result[5] += 15001673;
  } else {
    result[0] += 766958;
    result[1] += 180460;
    result[2] += 42588751;
    result[3] += 6225897;
    result[4] += 766958;
    result[5] += 3158064;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1707117;
    result[1] += 1149691;
    result[2] += 905817;
    result[3] += 6758790;
    result[4] += 10382059;
    result[5] += 32783616;
  } else {
    result[0] += 17895697;
    result[1] += 7861032;
    result[2] += 17258316;
    result[3] += 3938687;
    result[4] += 3856972;
    result[5] += 2876386;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17339743;
    result[1] += 7317552;
    result[2] += 781340;
    result[3] += 4282345;
    result[4] += 7422732;
    result[5] += 16543377;
  } else {
    result[0] += 899783;
    result[1] += 342774;
    result[2] += 39590480;
    result[3] += 7583890;
    result[4] += 1028324;
    result[5] += 4241837;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15725802;
    result[1] += 7563769;
    result[2] += 1780548;
    result[3] += 5398622;
    result[4] += 7606502;
    result[5] += 15611847;
  } else {
    result[0] += 253959;
    result[1] += 304751;
    result[2] += 45154043;
    result[3] += 5129986;
    result[4] += 152375;
    result[5] += 2691973;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16068924;
    result[1] += 7426332;
    result[2] += 1688453;
    result[3] += 5136904;
    result[4] += 7068609;
    result[5] += 16297866;
  } else {
    result[0] += 799807;
    result[1] += 299927;
    result[2] += 44089398;
    result[3] += 6248497;
    result[4] += 99975;
    result[5] += 2149483;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17535078;
    result[1] += 7813402;
    result[2] += 405695;
    result[3] += 3861623;
    result[4] += 8234124;
    result[5] += 15837165;
  } else {
    result[0] += 856936;
    result[1] += 42846;
    result[2] += 40276030;
    result[3] += 9083530;
    result[4] += 85693;
    result[5] += 3342053;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15848534;
    result[1] += 7349412;
    result[2] += 1906481;
    result[3] += 5035438;
    result[4] += 7596817;
    result[5] += 15950407;
  } else {
    result[0] += 991582;
    result[1] += 424963;
    result[2] += 42307505;
    result[3] += 6988293;
    result[4] += 283309;
    result[5] += 2691437;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 15731633;
    result[1] += 7620009;
    result[2] += 1590514;
    result[3] += 5060727;
    result[4] += 7591091;
    result[5] += 16093114;
  } else {
    result[0] += 771782;
    result[1] += 964727;
    result[2] += 41386814;
    result[3] += 6126020;
    result[4] += 434127;
    result[5] += 4003619;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15836386;
    result[1] += 6961049;
    result[2] += 1479222;
    result[3] += 5365808;
    result[4] += 7468625;
    result[5] += 16575998;
  } else {
    result[0] += 620936;
    result[1] += 0;
    result[2] += 45280571;
    result[3] += 6209361;
    result[4] += 0;
    result[5] += 1576222;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16009666;
    result[1] += 7299371;
    result[2] += 1367732;
    result[3] += 5542915;
    result[4] += 7947244;
    result[5] += 15520162;
  } else {
    result[0] += 489399;
    result[1] += 0;
    result[2] += 45416244;
    result[3] += 6362189;
    result[4] += 0;
    result[5] += 1419257;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17637328;
    result[1] += 7560944;
    result[2] += 862854;
    result[3] += 4241148;
    result[4] += 7692566;
    result[5] += 15692249;
  } else {
    result[0] += 650752;
    result[1] += 0;
    result[2] += 42856708;
    result[3] += 7623102;
    result[4] += 46482;
    result[5] += 2510045;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16869145;
    result[1] += 7584220;
    result[2] += 1072516;
    result[3] += 4305386;
    result[4] += 8105157;
    result[5] += 15750664;
  } else {
    result[0] += 609157;
    result[1] += 243663;
    result[2] += 40407455;
    result[3] += 7269280;
    result[4] += 730989;
    result[5] += 4426545;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16419814;
    result[1] += 7744629;
    result[2] += 1185708;
    result[3] += 4457664;
    result[4] += 7459458;
    result[5] += 16419814;
  } else {
    result[0] += 429840;
    result[1] += 128952;
    result[2] += 40834857;
    result[3] += 7694146;
    result[4] += 945649;
    result[5] += 3653645;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    result[0] += 1308578;
    result[1] += 636605;
    result[2] += 707339;
    result[3] += 7639269;
    result[4] += 10221060;
    result[5] += 33174236;
  } else {
    result[0] += 18485367;
    result[1] += 8358177;
    result[2] += 15515374;
    result[3] += 4706546;
    result[4] += 3489336;
    result[5] += 3132287;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1769537;
    result[1] += 467424;
    result[2] += 834687;
    result[3] += 7612348;
    result[4] += 10350123;
    result[5] += 32652969;
  } else {
    result[0] += 18435126;
    result[1] += 8541886;
    result[2] += 15732419;
    result[3] += 4521193;
    result[4] += 3687025;
    result[5] += 2769439;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16353913;
    result[1] += 7328475;
    result[2] += 825955;
    result[3] += 4820575;
    result[4] += 7628823;
    result[5] += 16729348;
  } else {
    result[0] += 858306;
    result[1] += 0;
    result[2] += 43215748;
    result[3] += 7424353;
    result[4] += 0;
    result[5] += 2188682;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16452265;
    result[1] += 7293125;
    result[2] += 1951480;
    result[3] += 4885824;
    result[4] += 7464058;
    result[5] += 15640335;
  } else {
    result[0] += 660295;
    result[1] += 101583;
    result[2] += 43376325;
    result[3] += 7009289;
    result[4] += 406335;
    result[5] += 2133261;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16208496;
    result[1] += 7350695;
    result[2] += 1791465;
    result[3] += 5417050;
    result[4] += 7364913;
    result[5] += 15554469;
  } else {
    result[0] += 1176002;
    result[1] += 715827;
    result[2] += 42949672;
    result[3] += 5777753;
    result[4] += 204522;
    result[5] += 2863311;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16657570;
    result[1] += 7271615;
    result[2] += 1942906;
    result[3] += 4828695;
    result[4] += 7228756;
    result[5] += 15757546;
  } else {
    result[0] += 1457795;
    result[1] += 502688;
    result[2] += 41723113;
    result[3] += 6585214;
    result[4] += 351881;
    result[5] += 3066397;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    result[0] += 8574511;
    result[1] += 9180419;
    result[2] += 826237;
    result[3] += 5563334;
    result[4] += 9400749;
    result[5] += 20141839;
  } else {
    result[0] += 19617522;
    result[1] += 0;
    result[2] += 28283104;
    result[3] += 4375130;
    result[4] += 366946;
    result[5] += 1044386;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16077721;
    result[1] += 7726396;
    result[2] += 1207249;
    result[3] += 4985229;
    result[4] += 8038860;
    result[5] += 15651633;
  } else {
    result[0] += 667239;
    result[1] += 0;
    result[2] += 46296134;
    result[3] += 5543217;
    result[4] += 0;
    result[5] += 1180500;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 18118633;
    result[1] += 7448095;
    result[2] += 516806;
    result[3] += 3997651;
    result[4] += 7265693;
    result[5] += 16340210;
  } else {
    result[0] += 539360;
    result[1] += 0;
    result[2] += 40244573;
    result[3] += 9252103;
    result[4] += 82978;
    result[5] += 3568075;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    result[0] += 2617431;
    result[1] += 356922;
    result[2] += 386666;
    result[3] += 8328191;
    result[4] += 10588700;
    result[5] += 31409179;
  } else {
    result[0] += 18677634;
    result[1] += 8796792;
    result[2] += 18233351;
    result[3] += 3465403;
    result[4] += 2576838;
    result[5] += 1937071;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17108246;
    result[1] += 8065101;
    result[2] += 827575;
    result[3] += 4318440;
    result[4] += 7372946;
    result[5] += 15994780;
  } else {
    result[0] += 597471;
    result[1] += 384088;
    result[2] += 41140187;
    result[3] += 8193896;
    result[4] += 170706;
    result[5] += 3200740;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15884091;
    result[1] += 7429655;
    result[2] += 1878763;
    result[3] += 5024269;
    result[4] += 8212473;
    result[5] += 15257837;
  } else {
    result[0] += 305619;
    result[1] += 254682;
    result[2] += 44314771;
    result[3] += 5857699;
    result[4] += 203746;
    result[5] += 2750572;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16762876;
    result[1] += 6796923;
    result[2] += 2193943;
    result[3] += 5319954;
    result[4] += 7585595;
    result[5] += 15027796;
  } else {
    result[0] += 992367;
    result[1] += 645038;
    result[2] += 43167993;
    result[3] += 5755732;
    result[4] += 248091;
    result[5] += 2877866;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16618886;
    result[1] += 7584560;
    result[2] += 717252;
    result[3] += 4196688;
    result[4] += 8240770;
    result[5] += 16328933;
  } else {
    result[0] += 656722;
    result[1] += 41045;
    result[2] += 42317577;
    result[3] += 7429176;
    result[4] += 164180;
    result[5] += 3078388;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17205140;
    result[1] += 7405116;
    result[2] += 1469269;
    result[3] += 4451885;
    result[4] += 7640199;
    result[5] += 15515481;
  } else {
    result[0] += 366464;
    result[1] += 183232;
    result[2] += 42418299;
    result[3] += 6642174;
    result[4] += 137424;
    result[5] += 3939496;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16151937;
    result[1] += 7846915;
    result[2] += 1625538;
    result[3] += 5349498;
    result[4] += 7108034;
    result[5] += 15605166;
  } else {
    result[0] += 810031;
    result[1] += 675026;
    result[2] += 42121640;
    result[3] += 6075236;
    result[4] += 225008;
    result[5] += 3780147;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16225623;
    result[1] += 7932847;
    result[2] += 1842839;
    result[3] += 4635892;
    result[4] += 7198590;
    result[5] += 15851297;
  } else {
    result[0] += 1223497;
    result[1] += 244699;
    result[2] += 42871369;
    result[3] += 6166429;
    result[4] += 538339;
    result[5] += 2642755;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16464041;
    result[1] += 7287127;
    result[2] += 1689353;
    result[3] += 5225543;
    result[4] += 8031588;
    result[5] += 14989435;
  } else {
    result[0] += 898111;
    result[1] += 399160;
    result[2] += 43159232;
    result[3] += 6885519;
    result[4] += 99790;
    result[5] += 2245277;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16317379;
    result[1] += 7532218;
    result[2] += 1617168;
    result[3] += 5186595;
    result[4] += 7838169;
    result[5] += 15195559;
  } else {
    result[0] += 1129263;
    result[1] += 658737;
    result[2] += 40653502;
    result[3] += 6399162;
    result[4] += 470526;
    result[5] += 4375897;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16686333;
    result[1] += 7558520;
    result[2] += 1324540;
    result[3] += 4808658;
    result[4] += 7587314;
    result[5] += 15721722;
  } else {
    result[0] += 538339;
    result[1] += 0;
    result[2] += 46443983;
    result[3] += 5285511;
    result[4] += 0;
    result[5] += 1419257;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15930080;
    result[1] += 6898741;
    result[2] += 2504729;
    result[3] += 5295714;
    result[4] += 7442625;
    result[5] += 15615200;
  } else {
    result[0] += 399531;
    result[1] += 849005;
    result[2] += 44198209;
    result[3] += 5193913;
    result[4] += 199765;
    result[5] += 2846664;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16336341;
    result[1] += 7334382;
    result[2] += 1269128;
    result[3] += 5017485;
    result[4] += 7983704;
    result[5] += 15746049;
  } else {
    result[0] += 361529;
    result[1] += 316338;
    result[2] += 42841214;
    result[3] += 6552717;
    result[4] += 451911;
    result[5] += 3163380;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17040871;
    result[1] += 7116802;
    result[2] += 1153255;
    result[3] += 5083430;
    result[4] += 7647906;
    result[5] += 15644825;
  } else {
    result[0] += 1292158;
    result[1] += 1125428;
    result[2] += 40265318;
    result[3] += 6043966;
    result[4] += 500190;
    result[5] += 4460030;
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
