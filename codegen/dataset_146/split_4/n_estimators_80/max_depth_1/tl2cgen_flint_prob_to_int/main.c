
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
    result[0] += 15871468;
    result[1] += 7679742;
    result[2] += 1322622;
    result[3] += 5489593;
    result[4] += 7821960;
    result[5] += 15501703;
  } else {
    result[0] += 664064;
    result[1] += 0;
    result[2] += 46178049;
    result[3] += 5465764;
    result[4] += 0;
    result[5] += 1379211;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16888886;
    result[1] += 8026120;
    result[2] += 1800914;
    result[3] += 4778803;
    result[4] += 7813414;
    result[5] += 14378951;
  } else {
    result[0] += 464599;
    result[1] += 412977;
    result[2] += 45634027;
    result[3] += 4026531;
    result[4] += 103244;
    result[5] += 3045709;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17082919;
    result[1] += 7650812;
    result[2] += 1664489;
    result[3] += 4818259;
    result[4] += 7125183;
    result[5] += 15345426;
  } else {
    result[0] += 420525;
    result[1] += 186900;
    result[2] += 41912376;
    result[3] += 6634958;
    result[4] += 1074676;
    result[5] += 3457654;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16460061;
    result[1] += 7291892;
    result[2] += 1890490;
    result[3] += 5046046;
    result[4] += 7405606;
    result[5] += 15592994;
  } else {
    result[0] += 818868;
    result[1] += 614151;
    result[2] += 43144154;
    result[3] += 6141516;
    result[4] += 614151;
    result[5] += 2354248;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16029593;
    result[1] += 7979364;
    result[2] += 1799963;
    result[3] += 5357370;
    result[4] += 7086469;
    result[5] += 15434330;
  } else {
    result[0] += 1189598;
    result[1] += 517216;
    result[2] += 43653087;
    result[3] += 5327331;
    result[4] += 310330;
    result[5] += 2689526;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16372047;
    result[1] += 7977599;
    result[2] += 1796756;
    result[3] += 4743437;
    result[4] += 7215775;
    result[5] += 15581474;
  } else {
    result[0] += 246045;
    result[1] += 442881;
    result[2] += 46108894;
    result[3] += 4379606;
    result[4] += 49209;
    result[5] += 2460453;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16902850;
    result[1] += 8143300;
    result[2] += 851011;
    result[3] += 4695236;
    result[4] += 7072199;
    result[5] += 16022493;
  } else {
    result[0] += 1058100;
    result[1] += 0;
    result[2] += 43106087;
    result[3] += 7314693;
    result[4] += 184017;
    result[5] += 2024191;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16496763;
    result[1] += 7711075;
    result[2] += 1379570;
    result[3] += 5082629;
    result[4] += 7551335;
    result[5] += 15465716;
  } else {
    result[0] += 332869;
    result[1] += 0;
    result[2] += 46506621;
    result[3] += 5135700;
    result[4] += 47552;
    result[5] += 1664347;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 2271914;
    result[1] += 279620;
    result[2] += 349525;
    result[3] += 7444889;
    result[4] += 11499383;
    result[5] += 31841757;
  } else {
    result[0] += 18798641;
    result[1] += 8828181;
    result[2] += 16465129;
    result[3] += 4144839;
    result[4] += 2953605;
    result[5] += 2496694;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16265681;
    result[1] += 7741341;
    result[2] += 1610317;
    result[3] += 5170743;
    result[4] += 8155001;
    result[5] += 14744005;
  } else {
    result[0] += 1351185;
    result[1] += 900790;
    result[2] += 42066898;
    result[3] += 5810096;
    result[4] += 180158;
    result[5] += 3377962;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17086175;
    result[1] += 7228213;
    result[2] += 1781905;
    result[3] += 4828389;
    result[4] += 7486877;
    result[5] += 15275529;
  } else {
    result[0] += 344779;
    result[1] += 147762;
    result[2] += 45363129;
    result[3] += 4974675;
    result[4] += 0;
    result[5] += 2856744;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17160051;
    result[1] += 7716768;
    result[2] += 900790;
    result[3] += 4458911;
    result[4] += 7866900;
    result[5] += 15583669;
  } else {
    result[0] += 816043;
    result[1] += 386547;
    result[2] += 40200893;
    result[3] += 7258494;
    result[4] += 773094;
    result[5] += 4252017;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16243863;
    result[1] += 8264159;
    result[2] += 898278;
    result[3] += 5120185;
    result[4] += 7425766;
    result[5] += 15734839;
  } else {
    result[0] += 952512;
    result[1] += 692736;
    result[2] += 41347719;
    result[3] += 7360327;
    result[4] += 346368;
    result[5] += 2987426;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17522765;
    result[1] += 8511921;
    result[2] += 967607;
    result[3] += 4036737;
    result[4] += 7604789;
    result[5] += 15043271;
  } else {
    result[0] += 1642193;
    result[1] += 589505;
    result[2] += 37644125;
    result[3] += 8421504;
    result[4] += 589505;
    result[5] += 4800257;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16803055;
    result[1] += 7973330;
    result[2] += 1195999;
    result[3] += 4857825;
    result[4] += 7722318;
    result[5] += 15134562;
  } else {
    result[0] += 1759492;
    result[1] += 360921;
    result[2] += 41054834;
    result[3] += 6722165;
    result[4] += 721843;
    result[5] += 3067833;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    result[0] += 1517400;
    result[1] += 867086;
    result[2] += 903214;
    result[3] += 8309576;
    result[4] += 11344378;
    result[5] += 30745433;
  } else {
    result[0] += 18452928;
    result[1] += 8808540;
    result[2] += 15832869;
    result[3] += 4082790;
    result[4] += 3552349;
    result[5] += 2957612;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17710431;
    result[1] += 7465720;
    result[2] += 1081553;
    result[3] += 4761837;
    result[4] += 7826237;
    result[5] += 14841311;
  } else {
    result[0] += 857621;
    result[1] += 257286;
    result[2] += 40436842;
    result[3] += 7589948;
    result[4] += 643215;
    result[5] += 3902176;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17011582;
    result[1] += 7865570;
    result[2] += 960331;
    result[3] += 4039488;
    result[4] += 8078977;
    result[5] += 15731140;
  } else {
    result[0] += 2470264;
    result[1] += 411710;
    result[2] += 37383342;
    result[3] += 8275387;
    result[4] += 1029277;
    result[5] += 4117108;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16673184;
    result[1] += 7856991;
    result[2] += 1368273;
    result[3] += 5035809;
    result[4] += 7814673;
    result[5] += 14938158;
  } else {
    result[0] += 1157956;
    result[1] += 0;
    result[2] += 46265640;
    result[3] += 5263440;
    result[4] += 0;
    result[5] += 1000053;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1894838;
    result[1] += 498641;
    result[2] += 132971;
    result[3] += 7280169;
    result[4] += 10537961;
    result[5] += 33342509;
  } else {
    result[0] += 18809709;
    result[1] += 8359870;
    result[2] += 16335187;
    result[3] += 4246814;
    result[4] += 3477706;
    result[5] += 2457802;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17151979;
    result[1] += 8165395;
    result[2] += 945140;
    result[3] += 4322856;
    result[4] += 7731560;
    result[5] += 15370157;
  } else {
    result[0] += 2366807;
    result[1] += 867829;
    result[2] += 37553351;
    result[3] += 7100423;
    result[4] += 1104510;
    result[5] += 4694168;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 4473924;
    result[1] += 426088;
    result[2] += 1118481;
    result[3] += 8734804;
    result[4] += 11158180;
    result[5] += 27775613;
  } else {
    result[0] += 18971986;
    result[1] += 10106929;
    result[2] += 18494343;
    result[3] += 2464638;
    result[4] += 2426427;
    result[5] += 1222766;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15868246;
    result[1] += 8090811;
    result[2] += 1737815;
    result[3] += 5498333;
    result[4] += 7435569;
    result[5] += 15056316;
  } else {
    result[0] += 558711;
    result[1] += 406335;
    result[2] += 46423842;
    result[3] += 4266523;
    result[4] += 0;
    result[5] += 2031678;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    result[0] += 9024764;
    result[1] += 9417888;
    result[2] += 1059726;
    result[3] += 6307079;
    result[4] += 8990579;
    result[5] += 18887053;
  } else {
    result[0] += 21283665;
    result[1] += 0;
    result[2] += 28580012;
    result[3] += 2931283;
    result[4] += 159308;
    result[5] += 732820;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16970491;
    result[1] += 7346337;
    result[2] += 1252045;
    result[3] += 4766822;
    result[4] += 7904477;
    result[5] += 15446918;
  } else {
    result[0] += 1440695;
    result[1] += 720347;
    result[2] += 41059819;
    result[3] += 7076356;
    result[4] += 593227;
    result[5] += 2796644;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16661511;
    result[1] += 7963438;
    result[2] += 1013795;
    result[3] += 4275572;
    result[4] += 7787125;
    result[5] += 15985647;
  } else {
    result[0] += 2061364;
    result[1] += 595505;
    result[2] += 40585975;
    result[3] += 6550558;
    result[4] += 595505;
    result[5] += 3298183;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16082476;
    result[1] += 8203836;
    result[2] += 1537295;
    result[3] += 4464069;
    result[4] += 7819513;
    result[5] += 15579899;
  } else {
    result[0] += 2383095;
    result[1] += 404676;
    result[2] += 39568375;
    result[3] += 6699645;
    result[4] += 674460;
    result[5] += 3956837;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17056610;
    result[1] += 7826654;
    result[2] += 1822843;
    result[3] += 4846449;
    result[4] += 7132238;
    result[5] += 15002294;
  } else {
    result[0] += 962997;
    result[1] += 722247;
    result[2] += 44249719;
    result[3] += 4333487;
    result[4] += 144449;
    result[5] += 3274190;
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    result[0] += 6258004;
    result[1] += 1241466;
    result[2] += 633401;
    result[3] += 7828839;
    result[4] += 11401222;
    result[5] += 26324156;
  } else {
    result[0] += 18265907;
    result[1] += 9658519;
    result[2] += 19872355;
    result[3] += 2895572;
    result[4] += 1685778;
    result[5] += 1308957;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16980804;
    result[1] += 7570483;
    result[2] += 1025483;
    result[3] += 4388467;
    result[4] += 7781612;
    result[5] += 15940240;
  } else {
    result[0] += 593696;
    result[1] += 424068;
    result[2] += 41261879;
    result[3] += 6827505;
    result[4] += 508882;
    result[5] += 4071059;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17052870;
    result[1] += 7053883;
    result[2] += 1723963;
    result[3] += 5071325;
    result[4] += 8145726;
    result[5] += 14639321;
  } else {
    result[0] += 492994;
    result[1] += 394395;
    result[2] += 45207587;
    result[3] += 5275040;
    result[4] += 197197;
    result[5] += 2119875;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15837193;
    result[1] += 8039545;
    result[2] += 1821348;
    result[3] += 4894873;
    result[4] += 7313852;
    result[5] += 15780276;
  } else {
    result[0] += 509848;
    result[1] += 305909;
    result[2] += 44050946;
    result[3] += 5455383;
    result[4] += 50984;
    result[5] += 3314017;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 15899638;
    result[1] += 8362796;
    result[2] += 737460;
    result[3] += 4292017;
    result[4] += 8126809;
    result[5] += 16268368;
  } else {
    result[0] += 633743;
    result[1] += 0;
    result[2] += 44452549;
    result[3] += 5930024;
    result[4] += 45267;
    result[5] += 2625506;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17064976;
    result[1] += 7223046;
    result[2] += 1365761;
    result[3] += 5125124;
    result[4] += 7265286;
    result[5] += 15642894;
  } else {
    result[0] += 1165958;
    result[1] += 0;
    result[2] += 45313388;
    result[3] += 5193815;
    result[4] += 105996;
    result[5] += 1907932;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1710207;
    result[1] += 201200;
    result[2] += 201200;
    result[3] += 7377364;
    result[4] += 12072050;
    result[5] += 32125067;
  } else {
    result[0] += 18694760;
    result[1] += 8440110;
    result[2] += 16097803;
    result[3] += 4478086;
    result[4] += 3462609;
    result[5] += 2513721;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16586949;
    result[1] += 6856697;
    result[2] += 1920444;
    result[3] += 4708645;
    result[4] += 7966288;
    result[5] += 15648065;
  } else {
    result[0] += 663433;
    result[1] += 306200;
    result[2] += 45878987;
    result[3] += 4950235;
    result[4] += 0;
    result[5] += 1888234;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1923317;
    result[1] += 1193783;
    result[2] += 762694;
    result[3] += 6499487;
    result[4] += 9682909;
    result[5] += 33624898;
  } else {
    result[0] += 18715986;
    result[1] += 8035486;
    result[2] += 15953787;
    result[3] += 4017743;
    result[4] += 3917299;
    result[5] += 3046788;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16277393;
    result[1] += 7770686;
    result[2] += 1939133;
    result[3] += 5322000;
    result[4] += 7629143;
    result[5] += 14748734;
  } else {
    result[0] += 675636;
    result[1] += 415776;
    result[2] += 45319596;
    result[3] += 4677481;
    result[4] += 415776;
    result[5] += 2182824;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16738075;
    result[1] += 7386956;
    result[2] += 1779132;
    result[3] += 5550892;
    result[4] += 7785482;
    result[5] += 14446552;
  } else {
    result[0] += 611238;
    result[1] += 407492;
    result[2] += 45129755;
    result[3] += 4788032;
    result[4] += 101873;
    result[5] += 2648698;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16944940;
    result[1] += 8449467;
    result[2] += 1165443;
    result[3] += 3971709;
    result[4] += 7606054;
    result[5] += 15549474;
  } else {
    result[0] += 1944890;
    result[1] += 567259;
    result[2] += 38290038;
    result[3] += 6928673;
    result[4] += 567259;
    result[5] += 5388968;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17115969;
    result[1] += 7359866;
    result[2] += 1839966;
    result[3] += 4792471;
    result[4] += 6817861;
    result[5] += 15760955;
  } else {
    result[0] += 657186;
    result[1] += 606633;
    result[2] += 42211601;
    result[3] += 6217996;
    result[4] += 454975;
    result[5] += 3538697;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17322831;
    result[1] += 8197547;
    result[2] += 1079825;
    result[3] += 4319301;
    result[4] += 8273591;
    result[5] += 14493993;
  } else {
    result[0] += 2195536;
    result[1] += 248551;
    result[2] += 38774010;
    result[3] += 6918012;
    result[4] += 1035630;
    result[5] += 4515349;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15823563;
    result[1] += 7491559;
    result[2] += 1883757;
    result[3] += 4984712;
    result[4] += 7621972;
    result[5] += 15881525;
  } else {
    result[0] += 1772009;
    result[1] += 95784;
    result[2] += 42911359;
    result[3] += 5268135;
    result[4] += 526813;
    result[5] += 3112989;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16709320;
    result[1] += 7204018;
    result[2] += 1929647;
    result[3] += 5231489;
    result[4] += 7761472;
    result[5] += 14851141;
  } else {
    result[0] += 752622;
    result[1] += 200699;
    result[2] += 46461912;
    result[3] += 3612589;
    result[4] += 50174;
    result[5] += 2609092;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 15699471;
    result[1] += 7807228;
    result[2] += 2054533;
    result[3] += 4973388;
    result[4] += 7679705;
    result[5] += 15472764;
  } else {
    result[0] += 569486;
    result[1] += 258857;
    result[2] += 44989471;
    result[3] += 4866525;
    result[4] += 51771;
    result[5] += 2950978;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16546282;
    result[1] += 8228978;
    result[2] += 1059904;
    result[3] += 5019823;
    result[4] += 7478212;
    result[5] += 15353889;
  } else {
    result[0] += 1229475;
    result[1] += 455361;
    result[2] += 41346801;
    result[3] += 7058099;
    result[4] += 546433;
    result[5] += 3050920;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16307435;
    result[1] += 8341992;
    result[2] += 2027567;
    result[3] += 4692370;
    result[4] += 7820617;
    result[5] += 14497107;
  } else {
    result[0] += 911577;
    result[1] += 431799;
    result[2] += 43467832;
    result[3] += 4989684;
    result[4] += 719666;
    result[5] += 3166530;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1561680;
    result[1] += 485856;
    result[2] += 208224;
    result[3] += 7461360;
    result[4] += 11001168;
    result[5] += 32968801;
  } else {
    result[0] += 19451132;
    result[1] += 8513963;
    result[2] += 15652595;
    result[3] += 4207862;
    result[4] += 3323720;
    result[5] += 2537816;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16435720;
    result[1] += 7983482;
    result[2] += 1435562;
    result[3] += 4482469;
    result[4] += 7807699;
    result[5] += 15542156;
  } else {
    result[0] += 1017326;
    result[1] += 739873;
    result[2] += 41571658;
    result[3] += 5410327;
    result[4] += 323694;
    result[5] += 4624211;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17036162;
    result[1] += 7648889;
    result[2] += 1043030;
    result[3] += 4737096;
    result[4] += 7504024;
    result[5] += 15717888;
  } else {
    result[0] += 814893;
    result[1] += 0;
    result[2] += 45586092;
    result[3] += 5464578;
    result[4] += 0;
    result[5] += 1821526;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16676839;
    result[1] += 7901064;
    result[2] += 1677721;
    result[3] += 4846751;
    result[4] += 8087478;
    result[5] += 14497235;
  } else {
    result[0] += 893130;
    result[1] += 396947;
    result[2] += 44259598;
    result[3] += 5606877;
    result[4] += 248091;
    result[5] += 2282445;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    result[0] += 1776411;
    result[1] += 559240;
    result[2] += 789516;
    result[3] += 8158332;
    result[4] += 11316396;
    result[5] += 31087194;
  } else {
    result[0] += 19313233;
    result[1] += 8101809;
    result[2] += 15564886;
    result[3] += 3882817;
    result[4] += 3866008;
    result[5] += 2958336;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17111542;
    result[1] += 8076288;
    result[2] += 1303593;
    result[3] += 4330329;
    result[4] += 8256094;
    result[5] += 14609241;
  } else {
    result[0] += 604681;
    result[1] += 431915;
    result[2] += 38958774;
    result[3] += 7904052;
    result[4] += 561490;
    result[5] += 5226177;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16778103;
    result[1] += 7600580;
    result[2] += 1932110;
    result[3] += 4759242;
    result[4] += 7373273;
    result[5] += 15243781;
  } else {
    result[0] += 1025541;
    result[1] += 307662;
    result[2] += 43893171;
    result[3] += 4871321;
    result[4] += 410216;
    result[5] += 3179178;
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
    result[0] += 4610158;
    result[1] += 228873;
    result[2] += 163480;
    result[3] += 4839031;
    result[4] += 13830474;
    result[5] += 30015072;
  } else {
    result[0] += 17384230;
    result[1] += 9172668;
    result[2] += 16928969;
    result[3] += 5716056;
    result[4] += 2040244;
    result[5] += 2444920;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17241701;
    result[1] += 7996582;
    result[2] += 1382308;
    result[3] += 4756331;
    result[4] += 7238541;
    result[5] += 15071625;
  } else {
    result[0] += 972912;
    result[1] += 309563;
    result[2] += 40818109;
    result[3] += 6368155;
    result[4] += 884466;
    result[5] += 4333883;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 17117407;
    result[1] += 7673833;
    result[2] += 803075;
    result[3] += 4372300;
    result[4] += 7525115;
    result[5] += 16195357;
  } else {
    result[0] += 706409;
    result[1] += 0;
    result[2] += 42914352;
    result[3] += 6843338;
    result[4] += 88301;
    result[5] += 3134690;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16806649;
    result[1] += 7844084;
    result[2] += 1236215;
    result[3] += 4782978;
    result[4] += 7461446;
    result[5] += 15555716;
  } else {
    result[0] += 1822991;
    result[1] += 957070;
    result[2] += 40789428;
    result[3] += 6972941;
    result[4] += 364598;
    result[5] += 2780061;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    result[0] += 9526826;
    result[1] += 8596952;
    result[2] += 1122867;
    result[3] += 6438941;
    result[4] += 9632095;
    result[5] += 18369406;
  } else {
    result[0] += 20368262;
    result[1] += 0;
    result[2] += 28849971;
    result[3] += 3496045;
    result[4] += 334404;
    result[5] += 638408;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17921225;
    result[1] += 8026258;
    result[2] += 382932;
    result[3] += 4135667;
    result[4] += 7260394;
    result[5] += 15960613;
  } else {
    result[0] += 1341161;
    result[1] += 40641;
    result[2] += 41210227;
    result[3] += 7721837;
    result[4] += 162564;
    result[5] += 3210658;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16332691;
    result[1] += 7714651;
    result[2] += 1620363;
    result[3] += 5004485;
    result[4] += 7858046;
    result[5] += 15156852;
  } else {
    result[0] += 1290077;
    result[1] += 297710;
    result[2] += 43217612;
    result[3] += 5507640;
    result[4] += 297710;
    result[5] += 3076339;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16712825;
    result[1] += 7483568;
    result[2] += 2003249;
    result[3] += 4664709;
    result[4] += 7569421;
    result[5] += 15253315;
  } else {
    result[0] += 599855;
    result[1] += 599855;
    result[2] += 42889687;
    result[3] += 6048545;
    result[4] += 699831;
    result[5] += 2849314;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17508953;
    result[1] += 7895603;
    result[2] += 497242;
    result[3] += 3691646;
    result[4] += 8392845;
    result[5] += 15700799;
  } else {
    result[0] += 1105197;
    result[1] += 127522;
    result[2] += 40807290;
    result[3] += 8203965;
    result[4] += 340060;
    result[5] += 3103054;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16709242;
    result[1] += 7387095;
    result[2] += 1567815;
    result[3] += 5070682;
    result[4] += 7429468;
    result[5] += 15522786;
  } else {
    result[0] += 995175;
    result[1] += 261888;
    result[2] += 44835268;
    result[3] += 5552030;
    result[4] += 314265;
    result[5] += 1728462;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16206888;
    result[1] += 7379668;
    result[2] += 1915875;
    result[3] += 5336068;
    result[4] += 7266135;
    result[5] += 15582454;
  } else {
    result[0] += 1029474;
    result[1] += 926526;
    result[2] += 42826136;
    result[3] += 5353267;
    result[4] += 257368;
    result[5] += 3294318;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16786144;
    result[1] += 7814486;
    result[2] += 1400035;
    result[3] += 5071558;
    result[4] += 6900176;
    result[5] += 15714688;
  } else {
    result[0] += 653494;
    result[1] += 452419;
    result[2] += 44387360;
    result[3] += 5479300;
    result[4] += 50268;
    result[5] += 2664247;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16822049;
    result[1] += 7567109;
    result[2] += 1912875;
    result[3] += 4599339;
    result[4] += 7806218;
    result[5] += 14979500;
  } else {
    result[0] += 585290;
    result[1] += 425665;
    result[2] += 43683946;
    result[3] += 5107988;
    result[4] += 532082;
    result[5] += 3352117;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16152235;
    result[1] += 7262021;
    result[2] += 1397651;
    result[3] += 4870165;
    result[4] += 8068913;
    result[5] += 15936103;
  } else {
    result[0] += 585677;
    result[1] += 0;
    result[2] += 46170898;
    result[3] += 5271096;
    result[4] += 97612;
    result[5] += 1561806;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16728688;
    result[1] += 7284391;
    result[2] += 2046970;
    result[3] += 5011548;
    result[4] += 7905540;
    result[5] += 14709952;
  } else {
    result[0] += 1102081;
    result[1] += 944640;
    result[2] += 43243561;
    result[3] += 4565764;
    result[4] += 262400;
    result[5] += 3568643;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 16698660;
    result[1] += 8229626;
    result[2] += 1002518;
    result[3] += 4309331;
    result[4] += 7735848;
    result[5] += 15711105;
  } else {
    result[0] += 1257613;
    result[1] += 260195;
    result[2] += 39983439;
    result[3] += 7805877;
    result[4] += 780587;
    result[5] += 3599376;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16452727;
    result[1] += 7507276;
    result[2] += 2142881;
    result[3] += 5378776;
    result[4] += 7349076;
    result[5] += 14856352;
  } else {
    result[0] += 1031499;
    result[1] += 785904;
    result[2] += 42930025;
    result[3] += 5108378;
    result[4] += 294714;
    result[5] += 3536569;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17537278;
    result[1] += 8117427;
    result[2] += 1029822;
    result[3] += 4361602;
    result[4] += 7526793;
    result[5] += 15114165;
  } else {
    result[0] += 712475;
    result[1] += 502923;
    result[2] += 40443437;
    result[3] += 7501943;
    result[4] += 544833;
    result[5] += 3981478;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    result[0] += 16317990;
    result[1] += 8204072;
    result[2] += 1051804;
    result[3] += 4973531;
    result[4] += 7648119;
    result[5] += 15491573;
  } else {
    result[0] += 985477;
    result[1] += 599855;
    result[2] += 42161291;
    result[3] += 6212791;
    result[4] += 557008;
    result[5] += 3170666;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17518469;
    result[1] += 8117946;
    result[2] += 784634;
    result[3] += 3892993;
    result[4] += 8208481;
    result[5] += 15164566;
  } else {
    result[0] += 762119;
    result[1] += 465739;
    result[2] += 40900418;
    result[3] += 7070776;
    result[4] += 338719;
    result[5] += 4149317;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    result[0] += 8891310;
    result[1] += 9641180;
    result[2] += 642745;
    result[3] += 5249087;
    result[4] += 9426931;
    result[5] += 19835835;
  } else {
    result[0] += 20306057;
    result[1] += 0;
    result[2] += 28599665;
    result[3] += 3600783;
    result[4] += 206602;
    result[5] += 973982;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16945525;
    result[1] += 7778039;
    result[2] += 1890794;
    result[3] += 4282934;
    result[4] += 7162098;
    result[5] += 15627699;
  } else {
    result[0] += 448222;
    result[1] += 149407;
    result[2] += 45121061;
    result[3] += 4930447;
    result[4] += 0;
    result[5] += 3037952;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 17128398;
    result[1] += 7577671;
    result[2] += 1615616;
    result[3] += 4818255;
    result[4] += 7434697;
    result[5] += 15112451;
  } else {
    result[0] += 651664;
    result[1] += 0;
    result[2] += 45165330;
    result[3] += 6416384;
    result[4] += 0;
    result[5] += 1453712;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17956104;
    result[1] += 8170103;
    result[2] += 1102435;
    result[3] += 4288926;
    result[4] += 8034186;
    result[5] += 14135335;
  } else {
    result[0] += 1098241;
    result[1] += 591360;
    result[2] += 40381478;
    result[3] += 6082565;
    result[4] += 1098241;
    result[5] += 4435204;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    result[0] += 16732902;
    result[1] += 7770873;
    result[2] += 1843455;
    result[3] += 4580277;
    result[4] += 7742512;
    result[5] += 15017070;
  } else {
    result[0] += 619466;
    result[1] += 206488;
    result[2] += 45117805;
    result[3] += 5110598;
    result[4] += 154866;
    result[5] += 2477865;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    result[0] += 17774164;
    result[1] += 8552867;
    result[2] += 1169752;
    result[3] += 4238454;
    result[4] += 7428689;
    result[5] += 14523163;
  } else {
    result[0] += 914176;
    result[1] += 581748;
    result[2] += 39309588;
    result[3] += 7022537;
    result[4] += 540195;
    result[5] += 5318844;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
