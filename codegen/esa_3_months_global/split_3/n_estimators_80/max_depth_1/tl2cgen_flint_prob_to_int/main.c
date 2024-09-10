
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 280135;
    result[1] += 53406955;
  } else {
    result[0] += 43535741;
    result[1] += 10151349;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 42776597;
    result[1] += 10910493;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3266529;
    result[1] += 50420561;
  } else {
    result[0] += 50319934;
    result[1] += 3367156;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50481580;
    result[1] += 3205510;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 437143;
    result[1] += 53249947;
  } else {
    result[0] += 41157728;
    result[1] += 12529362;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43054920;
    result[1] += 10632170;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3205954;
    result[1] += 50481137;
  } else {
    result[0] += 50351010;
    result[1] += 3336080;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43072344;
    result[1] += 10614746;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43056490;
    result[1] += 10630600;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43097445;
    result[1] += 10589645;
  }
  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
    result[0] += 2425354;
    result[1] += 51261736;
  } else {
    result[0] += 40616110;
    result[1] += 13070980;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3107002;
    result[1] += 50580089;
  } else {
    result[0] += 50231404;
    result[1] += 3455686;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3296288;
    result[1] += 50390802;
  } else {
    result[0] += 50303366;
    result[1] += 3383724;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 42788863;
    result[1] += 10898227;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43018884;
    result[1] += 10668206;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43276313;
    result[1] += 10410777;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50471969;
    result[1] += 3215121;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43459049;
    result[1] += 10228041;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 511043;
    result[1] += 53176047;
  } else {
    result[0] += 40566697;
    result[1] += 13120393;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 286833;
    result[1] += 53400257;
  } else {
    result[0] += 43413946;
    result[1] += 10273144;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43079205;
    result[1] += 10607885;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3283896;
    result[1] += 50403194;
  } else {
    result[0] += 50330737;
    result[1] += 3356353;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43255651;
    result[1] += 10431440;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 204273;
    result[1] += 53482817;
  } else {
    result[0] += 41010575;
    result[1] += 12676515;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43007043;
    result[1] += 10680047;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 41745126;
    result[1] += 11941964;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43025993;
    result[1] += 10661098;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3101691;
    result[1] += 50585399;
  } else {
    result[0] += 50252395;
    result[1] += 3434695;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43007243;
    result[1] += 10679847;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50481106;
    result[1] += 3205984;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 537065;
    result[1] += 53150026;
  } else {
    result[0] += 41095686;
    result[1] += 12591404;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3227131;
    result[1] += 50459959;
  } else {
    result[0] += 50315971;
    result[1] += 3371119;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 42800793;
    result[1] += 10886298;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 41658999;
    result[1] += 12028092;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43172523;
    result[1] += 10514568;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43021861;
    result[1] += 10665229;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 41795655;
    result[1] += 11891436;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 302555;
    result[1] += 53384535;
  } else {
    result[0] += 43426792;
    result[1] += 10260298;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3096479;
    result[1] += 50590611;
  } else {
    result[0] += 50259552;
    result[1] += 3427539;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50483029;
    result[1] += 3204061;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 237899;
    result[1] += 53449191;
  } else {
    result[0] += 40994088;
    result[1] += 12693002;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 50444590;
    result[1] += 3242500;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 25430140;
    result[1] += 28256950;
  } else {
    result[0] += 53598842;
    result[1] += 88248;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43080614;
    result[1] += 10606477;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43029243;
    result[1] += 10657847;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43107437;
    result[1] += 10579653;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43355902;
    result[1] += 10331188;
  }
  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36bc04))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 40467933;
    result[1] += 13219157;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43430180;
    result[1] += 10256910;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3317020;
    result[1] += 50370070;
  } else {
    result[0] += 50315853;
    result[1] += 3371237;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43433100;
    result[1] += 10253991;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43074682;
    result[1] += 10612408;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 552558;
    result[1] += 53134532;
  } else {
    result[0] += 40596994;
    result[1] += 13090097;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 500647;
    result[1] += 53186443;
  } else {
    result[0] += 41207397;
    result[1] += 12479694;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3074870;
    result[1] += 50612220;
  } else {
    result[0] += 50224937;
    result[1] += 3462153;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 25373742;
    result[1] += 28313348;
  } else {
    result[0] += 53594574;
    result[1] += 92516;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 26651502;
    result[1] += 27035588;
  } else {
    result[0] += 49452788;
    result[1] += 4234302;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3089601;
    result[1] += 50597489;
  } else {
    result[0] += 50194192;
    result[1] += 3492898;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3248598;
    result[1] += 50438492;
  } else {
    result[0] += 50335866;
    result[1] += 3351224;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43043673;
    result[1] += 10643417;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 25373307;
    result[1] += 28313784;
  } else {
    result[0] += 53603859;
    result[1] += 83231;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 26868897;
    result[1] += 26818193;
  } else {
    result[0] += 49371172;
    result[1] += 4315919;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 43052940;
    result[1] += 10634151;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3301011;
    result[1] += 50386079;
  } else {
    result[0] += 50352098;
    result[1] += 3334992;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3196445;
    result[1] += 50490645;
  } else {
    result[0] += 50300745;
    result[1] += 3386345;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 231482;
    result[1] += 53455609;
  } else {
    result[0] += 41045914;
    result[1] += 12641176;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 26713394;
    result[1] += 26973696;
  } else {
    result[0] += 49433611;
    result[1] += 4253479;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 25235459;
    result[1] += 28451631;
  } else {
    result[0] += 52732806;
    result[1] += 954284;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 42956683;
    result[1] += 10730407;
  } else {
    result[0] += 0;
    result[1] += 53687091;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 25289393;
    result[1] += 28397697;
  } else {
    result[0] += 53605577;
    result[1] += 81514;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3082984;
    result[1] += 50604106;
  } else {
    result[0] += 50171639;
    result[1] += 3515452;
  }
  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36bc04))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 40504672;
    result[1] += 13182419;
  }
  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
    result[0] += 782268;
    result[1] += 52904822;
  } else {
    result[0] += 40615188;
    result[1] += 13071902;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 243976;
    result[1] += 53443114;
  } else {
    result[0] += 43420073;
    result[1] += 10267017;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 3278298;
    result[1] += 50408792;
  } else {
    result[0] += 50334659;
    result[1] += 3352431;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 3119268;
    result[1] += 50567822;
  } else {
    result[0] += 50231625;
    result[1] += 3455465;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 53687091;
  } else {
    result[0] += 42923768;
    result[1] += 10763323;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 286396;
    result[1] += 53400694;
  } else {
    result[0] += 43457871;
    result[1] += 10229219;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 288112;
    result[1] += 53398978;
  } else {
    result[0] += 43527006;
    result[1] += 10160084;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 194579;
    result[1] += 53492511;
  } else {
    result[0] += 41074756;
    result[1] += 12612334;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_3/test_data.csv", "r");
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
