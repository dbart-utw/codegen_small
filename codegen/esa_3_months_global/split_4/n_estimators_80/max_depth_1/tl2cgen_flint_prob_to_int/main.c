
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 210511;
    result[1] += 53476579;
  } else {
    result[0] += 41053627;
    result[1] += 12633464;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3058125;
    result[1] += 50628965;
  } else {
    result[0] += 50300106;
    result[1] += 3386984;
  }
  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
    result[0] += 59555;
    result[1] += 53627536;
  } else {
    result[0] += 40890287;
    result[1] += 12796803;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43328885;
    result[1] += 10358205;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 26904710;
    result[1] += 26782380;
  } else {
    result[0] += 49474746;
    result[1] += 4212344;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 25372406;
    result[1] += 28314684;
  } else {
    result[0] += 53606162;
    result[1] += 80929;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3116633;
    result[1] += 50570457;
  } else {
    result[0] += 50245377;
    result[1] += 3441713;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 225976;
    result[1] += 53461114;
  } else {
    result[0] += 43534410;
    result[1] += 10152681;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43472300;
    result[1] += 10214790;
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
    result[0] += 38530006;
    result[1] += 15157085;
  } else {
    result[0] += 1541375;
    result[1] += 52145716;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3237535;
    result[1] += 50449555;
  } else {
    result[0] += 50365686;
    result[1] += 3321405;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43006101;
    result[1] += 10680989;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43116339;
    result[1] += 10570751;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43285436;
    result[1] += 10401654;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 581400;
    result[1] += 53105690;
  } else {
    result[0] += 41131181;
    result[1] += 12555909;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50499351;
    result[1] += 3187739;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 256312;
    result[1] += 53430778;
  } else {
    result[0] += 43481675;
    result[1] += 10205416;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3283452;
    result[1] += 50403639;
  } else {
    result[0] += 50342961;
    result[1] += 3344129;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 281680;
    result[1] += 53405410;
  } else {
    result[0] += 43514674;
    result[1] += 10172416;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 42758831;
    result[1] += 10928260;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 535619;
    result[1] += 53151471;
  } else {
    result[0] += 40544871;
    result[1] += 13142219;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3360381;
    result[1] += 50326710;
  } else {
    result[0] += 50364705;
    result[1] += 3322385;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3049031;
    result[1] += 50638059;
  } else {
    result[0] += 50169275;
    result[1] += 3517815;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 563867;
    result[1] += 53123224;
  } else {
    result[0] += 40501556;
    result[1] += 13185534;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 26950620;
    result[1] += 26736471;
  } else {
    result[0] += 49451081;
    result[1] += 4236009;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 260125;
    result[1] += 53426965;
  } else {
    result[0] += 43521940;
    result[1] += 10165150;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 42024448;
    result[1] += 11662643;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 25401061;
    result[1] += 28286029;
  } else {
    result[0] += 53603162;
    result[1] += 83928;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50512317;
    result[1] += 3174774;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3306791;
    result[1] += 50380299;
  } else {
    result[0] += 50368300;
    result[1] += 3318790;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43070337;
    result[1] += 10616753;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 25269940;
    result[1] += 28417150;
  } else {
    result[0] += 52751738;
    result[1] += 935352;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 213299;
    result[1] += 53473791;
  } else {
    result[0] += 41105743;
    result[1] += 12581347;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 26731716;
    result[1] += 26955374;
  } else {
    result[0] += 49520286;
    result[1] += 4166804;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50417564;
    result[1] += 3269526;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3275746;
    result[1] += 50411344;
  } else {
    result[0] += 50339476;
    result[1] += 3347614;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43509011;
    result[1] += 10178079;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3294481;
    result[1] += 50392610;
  } else {
    result[0] += 50391040;
    result[1] += 3296050;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 289898;
    result[1] += 53397192;
  } else {
    result[0] += 43440377;
    result[1] += 10246713;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43059795;
    result[1] += 10627295;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 42840123;
    result[1] += 10846967;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50500425;
    result[1] += 3186665;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3345299;
    result[1] += 50341791;
  } else {
    result[0] += 50336133;
    result[1] += 3350957;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3035969;
    result[1] += 50651121;
  } else {
    result[0] += 50164398;
    result[1] += 3522693;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50444845;
    result[1] += 3242245;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43463523;
    result[1] += 10223567;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43078307;
    result[1] += 10608783;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43166579;
    result[1] += 10520511;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 26839594;
    result[1] += 26847496;
  } else {
    result[0] += 49447666;
    result[1] += 4239424;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 41995658;
    result[1] += 11691432;
  }
  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
    result[0] += 884510;
    result[1] += 52802580;
  } else {
    result[0] += 40602298;
    result[1] += 13084792;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 42899561;
    result[1] += 10787529;
  } else {
    result[0] += 0;
    result[1] += 53687091;
  }
  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
    result[0] += 52741;
    result[1] += 53634349;
  } else {
    result[0] += 40954356;
    result[1] += 12732734;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43188547;
    result[1] += 10498544;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3329180;
    result[1] += 50357910;
  } else {
    result[0] += 50347389;
    result[1] += 3339701;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43094080;
    result[1] += 10593010;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 16091;
    result[1] += 53670999;
  } else {
    result[0] += 41957503;
    result[1] += 11729587;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 224905;
    result[1] += 53462185;
  } else {
    result[0] += 43395242;
    result[1] += 10291848;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 25178418;
    result[1] += 28508672;
  } else {
    result[0] += 53160149;
    result[1] += 526941;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43386764;
    result[1] += 10300326;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50497101;
    result[1] += 3189989;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 25451218;
    result[1] += 28235872;
  } else {
    result[0] += 53604296;
    result[1] += 82794;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43416886;
    result[1] += 10270205;
  }
  if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e23c8))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 39627502;
    result[1] += 14059588;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3211777;
    result[1] += 50475313;
  } else {
    result[0] += 50421234;
    result[1] += 3265856;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43113059;
    result[1] += 10574031;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43460544;
    result[1] += 10226546;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 42740283;
    result[1] += 10946807;
  } else {
    result[0] += 0;
    result[1] += 53687091;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 246318;
    result[1] += 53440772;
  } else {
    result[0] += 43504280;
    result[1] += 10182810;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50424580;
    result[1] += 3262511;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 226356;
    result[1] += 53460734;
  } else {
    result[0] += 40936670;
    result[1] += 12750420;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 220206;
    result[1] += 53466885;
  } else {
    result[0] += 43476740;
    result[1] += 10210351;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 228001;
    result[1] += 53459089;
  } else {
    result[0] += 43589357;
    result[1] += 10097733;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3267483;
    result[1] += 50419607;
  } else {
    result[0] += 50392382;
    result[1] += 3294708;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 42824718;
    result[1] += 10862372;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 25070928;
    result[1] += 28616162;
  } else {
    result[0] += 53173038;
    result[1] += 514052;
  }
  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
    result[0] += 52741;
    result[1] += 53634349;
  } else {
    result[0] += 41007365;
    result[1] += 12679725;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3120008;
    result[1] += 50567082;
  } else {
    result[0] += 50172450;
    result[1] += 3514640;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 41693937;
    result[1] += 11993153;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 269732;
    result[1] += 53417358;
  } else {
    result[0] += 43491059;
    result[1] += 10196031;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_4/test_data.csv", "r");
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
