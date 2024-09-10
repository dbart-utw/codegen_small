
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
    result[0] += 4797357;
    result[1] += 86618;
    result[2] += 153248;
    result[3] += 21361565;
    result[4] += 16537556;
    result[5] += 13325;
    result[6] += 0;
  } else {
    result[0] += 38953060;
    result[1] += 32455;
    result[2] += 110115;
    result[3] += 3843609;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10431;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36165182;
    result[1] += 11686;
    result[2] += 115801;
    result[3] += 5622224;
    result[4] += 1014592;
    result[5] += 9561;
    result[6] += 10624;
  } else {
    result[0] += 3550021;
    result[1] += 363388;
    result[2] += 153741;
    result[3] += 16687897;
    result[4] += 22194624;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36027101;
    result[1] += 11679;
    result[2] += 119977;
    result[3] += 5773764;
    result[4] += 1005471;
    result[5] += 4246;
    result[6] += 7432;
  } else {
    result[0] += 3691868;
    result[1] += 394550;
    result[2] += 225457;
    result[3] += 18459341;
    result[4] += 20178455;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36125694;
    result[1] += 10612;
    result[2] += 117801;
    result[3] += 5617312;
    result[4] += 1062333;
    result[5] += 6367;
    result[6] += 9551;
  } else {
    result[0] += 4224093;
    result[1] += 340195;
    result[2] += 212622;
    result[3] += 16896372;
    result[4] += 21276389;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4766889;
    result[1] += 108957;
    result[2] += 217914;
    result[3] += 21110509;
    result[4] += 16697732;
    result[5] += 47668;
    result[6] += 0;
  } else {
    result[0] += 38874459;
    result[1] += 27714;
    result[2] += 103930;
    result[3] += 3934330;
    result[4] += 0;
    result[5] += 0;
    result[6] += 9238;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8569263;
    result[1] += 169130;
    result[2] += 310072;
    result[3] += 18660697;
    result[4] += 15240509;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36893756;
    result[1] += 17652;
    result[2] += 99295;
    result[3] += 5068478;
    result[4] += 855043;
    result[5] += 7722;
    result[6] += 7722;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10062016;
    result[1] += 217466;
    result[2] += 217466;
    result[3] += 18267202;
    result[4] += 14185520;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37027510;
    result[1] += 19031;
    result[2] += 105233;
    result[3] += 4989617;
    result[4] += 793726;
    result[5] += 3358;
    result[6] += 11195;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32824042;
    result[1] += 29307;
    result[2] += 140674;
    result[3] += 8044821;
    result[4] += 1887382;
    result[5] += 5861;
    result[6] += 17584;
  } else {
    result[0] += 34264443;
    result[1] += 35735;
    result[2] += 107206;
    result[3] += 5888922;
    result[4] += 2647409;
    result[5] += 4466;
    result[6] += 1488;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1611852;
    result[1] += 99190;
    result[2] += 247977;
    result[3] += 20937552;
    result[4] += 20003504;
    result[5] += 49595;
    result[6] += 0;
  } else {
    result[0] += 38214489;
    result[1] += 15697;
    result[2] += 109885;
    result[3] += 4599508;
    result[4] += 0;
    result[5] += 3363;
    result[6] += 6727;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 38816977;
    result[1] += 22357;
    result[2] += 72957;
    result[3] += 3890287;
    result[4] += 134147;
    result[5] += 0;
    result[6] += 12944;
  } else {
    result[0] += 6981392;
    result[1] += 110426;
    result[2] += 294469;
    result[3] += 20508606;
    result[4] += 15036373;
    result[5] += 18404;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42916868;
    result[1] += 0;
    result[2] += 26243;
    result[3] += 0;
    result[4] += 6560;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19918329;
    result[1] += 104180;
    result[2] += 282775;
    result[3] += 16542383;
    result[4] += 6082159;
    result[5] += 7441;
    result[6] += 12402;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35955475;
    result[1] += 21194;
    result[2] += 110211;
    result[3] += 5799885;
    result[4] += 1040651;
    result[5] += 11656;
    result[6] += 10597;
  } else {
    result[0] += 3744182;
    result[1] += 303582;
    result[2] += 115650;
    result[3] += 17188542;
    result[4] += 21597715;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4989567;
    result[1] += 98478;
    result[2] += 124739;
    result[3] += 21251618;
    result[4] += 16439312;
    result[5] += 45956;
    result[6] += 0;
  } else {
    result[0] += 38846223;
    result[1] += 24404;
    result[2] += 94131;
    result[3] += 3977940;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6972;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35917431;
    result[1] += 10621;
    result[2] += 152944;
    result[3] += 5838428;
    result[4] += 1015378;
    result[5] += 5310;
    result[6] += 9559;
  } else {
    result[0] += 3969548;
    result[1] += 224426;
    result[2] += 168320;
    result[3] += 17687634;
    result[4] += 20899742;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36165024;
    result[1] += 51723;
    result[2] += 107232;
    result[3] += 4414184;
    result[4] += 2201415;
    result[5] += 5046;
    result[6] += 5046;
  } else {
    result[0] += 25692580;
    result[1] += 0;
    result[2] += 227126;
    result[3] += 13859275;
    result[4] += 3129806;
    result[5] += 18170;
    result[6] += 22712;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 33016696;
    result[1] += 14719;
    result[2] += 123647;
    result[3] += 7810369;
    result[4] += 1960688;
    result[5] += 5887;
    result[6] += 17663;
  } else {
    result[0] += 34453627;
    result[1] += 44567;
    result[2] += 123303;
    result[3] += 5741776;
    result[4] += 2577485;
    result[5] += 1485;
    result[6] += 7427;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36054784;
    result[1] += 46740;
    result[2] += 106114;
    result[3] += 4463107;
    result[4] += 2272609;
    result[5] += 5053;
    result[6] += 1263;
  } else {
    result[0] += 25586269;
    result[1] += 0;
    result[2] += 158218;
    result[3] += 14208064;
    result[4] += 2979037;
    result[5] += 0;
    result[6] += 18082;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 38873848;
    result[1] += 19922;
    result[2] += 93750;
    result[3] += 3812149;
    result[4] += 137110;
    result[5] += 1171;
    result[6] += 11718;
  } else {
    result[0] += 7404899;
    result[1] += 175560;
    result[2] += 300961;
    result[3] += 20609572;
    result[4] += 14421058;
    result[5] += 37620;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 9791972;
    result[1] += 178923;
    result[2] += 211454;
    result[3] += 18136294;
    result[4] += 14631028;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36944203;
    result[1] += 10114;
    result[2] += 71921;
    result[3] += 5082848;
    result[4] += 820357;
    result[5] += 3371;
    result[6] += 16856;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4982701;
    result[1] += 80909;
    result[2] += 215759;
    result[3] += 21400669;
    result[4] += 16242662;
    result[5] += 26969;
    result[6] += 0;
  } else {
    result[0] += 38846724;
    result[1] += 27761;
    result[2] += 115673;
    result[3] += 3943319;
    result[4] += 0;
    result[5] += 1156;
    result[6] += 15037;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10322918;
    result[1] += 241617;
    result[2] += 258281;
    result[3] += 18163004;
    result[4] += 13963850;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37126349;
    result[1] += 21281;
    result[2] += 98567;
    result[3] += 4926135;
    result[4] += 766138;
    result[5] += 4480;
    result[6] += 6720;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10138371;
    result[1] += 190310;
    result[2] += 268165;
    result[3] += 17880558;
    result[4] += 14472266;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36925461;
    result[1] += 25634;
    result[2] += 92508;
    result[3] += 5124759;
    result[4] += 761246;
    result[5] += 4458;
    result[6] += 15603;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8634596;
    result[1] += 186090;
    result[2] += 269831;
    result[3] += 18515998;
    result[4] += 15343156;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36751992;
    result[1] += 19882;
    result[2] += 114874;
    result[3] += 5127362;
    result[4] += 917888;
    result[5] += 7731;
    result[6] += 9941;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42925042;
    result[1] += 0;
    result[2] += 18062;
    result[3] += 0;
    result[4] += 4926;
    result[5] += 0;
    result[6] += 1642;
  } else {
    result[0] += 20095514;
    result[1] += 99053;
    result[2] += 250110;
    result[3] += 16509771;
    result[4] += 5938267;
    result[5] += 19810;
    result[6] += 37145;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36078585;
    result[1] += 43015;
    result[2] += 84765;
    result[3] += 4429327;
    result[4] += 2302592;
    result[5] += 5060;
    result[6] += 6325;
  } else {
    result[0] += 25989228;
    result[1] += 0;
    result[2] += 233813;
    result[3] += 13601629;
    result[4] += 3093527;
    result[5] += 17985;
    result[6] += 13489;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42920049;
    result[1] += 0;
    result[2] += 23040;
    result[3] += 0;
    result[4] += 4937;
    result[5] += 0;
    result[6] += 1645;
  } else {
    result[0] += 19968155;
    result[1] += 115993;
    result[2] += 254198;
    result[3] += 16532773;
    result[4] += 6029193;
    result[5] += 19743;
    result[6] += 29615;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36083969;
    result[1] += 20177;
    result[2] += 113631;
    result[3] += 5730446;
    result[4] += 990827;
    result[5] += 3185;
    result[6] += 7433;
  } else {
    result[0] += 3540502;
    result[1] += 491736;
    result[2] += 126446;
    result[3] += 17463671;
    result[4] += 21327315;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5119253;
    result[1] += 126813;
    result[2] += 200231;
    result[3] += 20790711;
    result[4] += 16712662;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 38739874;
    result[1] += 24334;
    result[2] += 108924;
    result[3] += 4061475;
    result[4] += 0;
    result[5] += 2317;
    result[6] += 12746;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 9854689;
    result[1] += 184513;
    result[2] += 360639;
    result[3] += 18342303;
    result[4] += 14207527;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36954691;
    result[1] += 22381;
    result[2] += 109671;
    result[3] += 5031442;
    result[4] += 821414;
    result[5] += 2238;
    result[6] += 7833;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36220572;
    result[1] += 19074;
    result[2] += 119746;
    result[3] += 5574026;
    result[4] += 992939;
    result[5] += 10597;
    result[6] += 12716;
  } else {
    result[0] += 4179277;
    result[1] += 332606;
    result[2] += 173534;
    result[3] += 16688189;
    result[4] += 21576064;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36028514;
    result[1] += 28709;
    result[2] += 147801;
    result[3] += 5678135;
    result[4] += 1047371;
    result[5] += 8506;
    result[6] += 10633;
  } else {
    result[0] += 4021349;
    result[1] += 469848;
    result[2] += 165828;
    result[3] += 17370572;
    result[4] += 20922073;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4910233;
    result[1] += 118955;
    result[2] += 204868;
    result[3] += 21445097;
    result[4] += 16244083;
    result[5] += 26434;
    result[6] += 0;
  } else {
    result[0] += 38983319;
    result[1] += 26697;
    result[2] += 114916;
    result[3] += 3811970;
    result[4] += 0;
    result[5] += 1160;
    result[6] += 11607;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 7990203;
    result[1] += 223502;
    result[2] += 195564;
    result[3] += 18941811;
    result[4] += 15598591;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36768092;
    result[1] += 19880;
    result[2] += 106026;
    result[3] += 5094806;
    result[4] += 934360;
    result[5] += 7731;
    result[6] += 18775;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915242;
    result[1] += 0;
    result[2] += 26232;
    result[3] += 0;
    result[4] += 6558;
    result[5] += 0;
    result[6] += 1639;
  } else {
    result[0] += 20248695;
    result[1] += 99282;
    result[2] += 297847;
    result[3] += 16478437;
    result[4] += 5783214;
    result[5] += 14892;
    result[6] += 27302;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4717324;
    result[1] += 66723;
    result[2] += 153463;
    result[3] += 21651652;
    result[4] += 16340492;
    result[5] += 20016;
    result[6] += 0;
  } else {
    result[0] += 38934331;
    result[1] += 24335;
    result[2] += 126312;
    result[3] += 3849629;
    result[4] += 0;
    result[5] += 2317;
    result[6] += 12747;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35941731;
    result[1] += 22311;
    result[2] += 143431;
    result[3] += 5816931;
    result[4] += 1002955;
    result[5] += 3187;
    result[6] += 19124;
  } else {
    result[0] += 4036570;
    result[1] += 349184;
    result[2] += 97771;
    result[3] += 17207803;
    result[4] += 21258342;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4933453;
    result[1] += 106525;
    result[2] += 166445;
    result[3] += 21012117;
    result[4] += 16691184;
    result[5] += 39946;
    result[6] += 0;
  } else {
    result[0] += 38777472;
    result[1] += 32459;
    result[2] += 93900;
    result[3] += 4033088;
    result[4] += 0;
    result[5] += 0;
    result[6] += 12751;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4923058;
    result[1] += 53511;
    result[2] += 180601;
    result[3] += 21478180;
    result[4] += 16294253;
    result[5] += 20066;
    result[6] += 0;
  } else {
    result[0] += 38834130;
    result[1] += 18533;
    result[2] += 94982;
    result[3] += 3984651;
    result[4] += 0;
    result[5] += 1158;
    result[6] += 16216;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1701702;
    result[1] += 105847;
    result[2] += 211695;
    result[3] += 20729832;
    result[4] += 20143600;
    result[5] += 56994;
    result[6] += 0;
  } else {
    result[0] += 38290096;
    result[1] += 16854;
    result[2] += 101124;
    result[3] += 4524743;
    result[4] += 0;
    result[5] += 2247;
    result[6] += 14606;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35921892;
    result[1] += 11686;
    result[2] += 120051;
    result[3] += 5821955;
    result[4] += 1053901;
    result[5] += 4249;
    result[6] += 15936;
  } else {
    result[0] += 4164986;
    result[1] += 405317;
    result[2] += 125788;
    result[3] += 16757779;
    result[4] += 21495801;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5128519;
    result[1] += 107123;
    result[2] += 140599;
    result[3] += 21277328;
    result[4] += 16242541;
    result[5] += 53561;
    result[6] += 0;
  } else {
    result[0] += 38889229;
    result[1] += 27795;
    result[2] += 83386;
    result[3] += 3937680;
    result[4] += 0;
    result[5] += 1158;
    result[6] += 10423;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4732637;
    result[1] += 98871;
    result[2] += 204333;
    result[3] += 21408922;
    result[4] += 16465359;
    result[5] += 39548;
    result[6] += 0;
  } else {
    result[0] += 38853753;
    result[1] += 22064;
    result[2] += 124259;
    result[3] += 3931014;
    result[4] += 0;
    result[5] += 1161;
    result[6] += 17419;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4897888;
    result[1] += 67743;
    result[2] += 189683;
    result[3] += 21664519;
    result[4] += 16123063;
    result[5] += 6774;
    result[6] += 0;
  } else {
    result[0] += 38689379;
    result[1] += 23116;
    result[2] += 101710;
    result[3] += 4125064;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10402;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5204189;
    result[1] += 114156;
    result[2] += 174592;
    result[3] += 20991350;
    result[4] += 16438523;
    result[5] += 26860;
    result[6] += 0;
  } else {
    result[0] += 38842691;
    result[1] += 23150;
    result[2] += 116912;
    result[3] += 3950712;
    result[4] += 0;
    result[5] += 1157;
    result[6] += 15048;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 9575748;
    result[1] += 171148;
    result[2] += 273837;
    result[3] += 18193067;
    result[4] += 14735871;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37047594;
    result[1] += 14509;
    result[2] += 107148;
    result[3] += 5003596;
    result[4] += 756733;
    result[5] += 5580;
    result[6] += 14509;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5153960;
    result[1] += 87241;
    result[2] += 181193;
    result[3] += 21125870;
    result[4] += 16387984;
    result[5] += 13421;
    result[6] += 0;
  } else {
    result[0] += 38707958;
    result[1] += 32414;
    result[2] += 112294;
    result[3] += 4078482;
    result[4] += 0;
    result[5] += 1157;
    result[6] += 17365;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42931779;
    result[1] += 0;
    result[2] += 11386;
    result[3] += 0;
    result[4] += 3253;
    result[5] += 0;
    result[6] += 3253;
  } else {
    result[0] += 20170971;
    result[1] += 113051;
    result[2] += 266300;
    result[3] += 16440258;
    result[4] += 5906333;
    result[5] += 20098;
    result[6] += 32659;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 35982886;
    result[1] += 39054;
    result[2] += 85667;
    result[3] += 4477388;
    result[4] += 2354597;
    result[5] += 6299;
    result[6] += 3779;
  } else {
    result[0] += 25400933;
    result[1] += 0;
    result[2] += 178043;
    result[3] += 14371340;
    result[4] += 2958268;
    result[5] += 22826;
    result[6] += 18260;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36294033;
    result[1] += 24406;
    result[2] += 114606;
    result[3] += 5629490;
    result[4] += 868034;
    result[5] += 5305;
    result[6] += 13795;
  } else {
    result[0] += 4002580;
    result[1] += 298064;
    result[2] += 170322;
    result[3] += 17514836;
    result[4] += 20963868;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36111497;
    result[1] += 49441;
    result[2] += 86206;
    result[3] += 4483986;
    result[4] += 2207130;
    result[5] += 6338;
    result[6] += 5070;
  } else {
    result[0] += 25784981;
    result[1] += 0;
    result[2] += 183030;
    result[3] += 14111206;
    result[4] += 2830276;
    result[5] += 26784;
    result[6] += 13392;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5184281;
    result[1] += 94751;
    result[2] += 148895;
    result[3] += 21116132;
    result[4] += 16392074;
    result[5] += 13535;
    result[6] += 0;
  } else {
    result[0] += 38664415;
    result[1] += 34679;
    result[2] += 131782;
    result[3] += 4107234;
    result[4] += 0;
    result[5] += 1155;
    result[6] += 10403;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42903681;
    result[1] += 0;
    result[2] += 36136;
    result[3] += 0;
    result[4] += 8212;
    result[5] += 0;
    result[6] += 1642;
  } else {
    result[0] += 20044170;
    result[1] += 106433;
    result[2] += 252470;
    result[3] += 16457605;
    result[4] += 6056814;
    result[5] += 12376;
    result[6] += 19801;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5154228;
    result[1] += 107240;
    result[2] += 201075;
    result[3] += 20811288;
    result[4] += 16642328;
    result[5] += 33512;
    result[6] += 0;
  } else {
    result[0] += 38863363;
    result[1] += 32421;
    result[2] += 116950;
    result[3] += 3925358;
    result[4] += 0;
    result[5] += 1157;
    result[6] += 10421;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42929977;
    result[1] += 0;
    result[2] += 14771;
    result[3] += 0;
    result[4] += 3282;
    result[5] += 0;
    result[6] += 1641;
  } else {
    result[0] += 20079690;
    result[1] += 71863;
    result[2] += 304800;
    result[3] += 16298176;
    result[4] += 6170360;
    result[5] += 19824;
    result[6] += 4956;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36192936;
    result[1] += 15913;
    result[2] += 113514;
    result[3] += 5569613;
    result[4] += 1035417;
    result[5] += 10608;
    result[6] += 11669;
  } else {
    result[0] += 4202372;
    result[1] += 256415;
    result[2] += 185189;
    result[3] += 16923453;
    result[4] += 21382241;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5043207;
    result[1] += 92294;
    result[2] += 177995;
    result[3] += 21293544;
    result[4] += 16296483;
    result[5] += 46147;
    result[6] += 0;
  } else {
    result[0] += 38722640;
    result[1] += 27870;
    result[2] += 114966;
    result[3] += 4070261;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13935;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8750029;
    result[1] += 193218;
    result[2] += 266825;
    result[3] += 18254531;
    result[4] += 15485068;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36834388;
    result[1] += 16590;
    result[2] += 123876;
    result[3] += 5105472;
    result[4] += 851649;
    result[5] += 7742;
    result[6] += 9954;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 38961480;
    result[1] += 18784;
    result[2] += 58701;
    result[3] += 3796824;
    result[4] += 102140;
    result[5] += 0;
    result[6] += 11740;
  } else {
    result[0] += 7780242;
    result[1] += 124185;
    result[2] += 266999;
    result[3] += 20229873;
    result[4] += 14542161;
    result[5] += 6209;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42921861;
    result[1] += 0;
    result[2] += 24539;
    result[3] += 0;
    result[4] += 3271;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 20036706;
    result[1] += 102101;
    result[2] += 231595;
    result[3] += 16520445;
    result[4] += 6036412;
    result[5] += 4980;
    result[6] += 17431;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4865445;
    result[1] += 81886;
    result[2] += 197893;
    result[3] += 21659081;
    result[4] += 16083949;
    result[5] += 61415;
    result[6] += 0;
  } else {
    result[0] += 38832017;
    result[1] += 27704;
    result[2] += 129289;
    result[3] += 3951425;
    result[4] += 0;
    result[5] += 1154;
    result[6] += 8080;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4990989;
    result[1] += 61114;
    result[2] += 115437;
    result[3] += 21335632;
    result[4] += 16412546;
    result[5] += 33952;
    result[6] += 0;
  } else {
    result[0] += 38820496;
    result[1] += 24262;
    result[2] += 108601;
    result[3] += 3984759;
    result[4] += 0;
    result[5] += 2310;
    result[6] += 9242;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8633327;
    result[1] += 153682;
    result[2] += 216963;
    result[3] += 18740196;
    result[4] += 15205504;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36881143;
    result[1] += 18842;
    result[2] += 97539;
    result[3] += 5063204;
    result[4] += 875641;
    result[5] += 4433;
    result[6] += 8867;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 38945581;
    result[1] += 15278;
    result[2] += 72865;
    result[3] += 3783143;
    result[4] += 122226;
    result[5] += 1175;
    result[6] += 9402;
  } else {
    result[0] += 7577174;
    result[1] += 117331;
    result[2] += 327294;
    result[3] += 20316955;
    result[4] += 14604741;
    result[5] += 6175;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4973976;
    result[1] += 47435;
    result[2] += 162636;
    result[3] += 21136009;
    result[4] += 16575402;
    result[5] += 54212;
    result[6] += 0;
  } else {
    result[0] += 38859503;
    result[1] += 25426;
    result[2] += 116729;
    result[3] += 3939923;
    result[4] += 0;
    result[5] += 0;
    result[6] += 8090;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42920131;
    result[1] += 0;
    result[2] += 22976;
    result[3] += 0;
    result[4] += 6564;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19980396;
    result[1] += 133830;
    result[2] += 260225;
    result[3] += 16243055;
    result[4] += 6304902;
    result[5] += 14870;
    result[6] += 12391;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42920257;
    result[1] += 0;
    result[2] += 21244;
    result[3] += 0;
    result[4] += 8170;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 20005597;
    result[1] += 109756;
    result[2] += 281874;
    result[3] += 16505865;
    result[4] += 6021634;
    result[5] += 9977;
    result[6] += 14966;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5365359;
    result[1] += 93776;
    result[2] += 140664;
    result[3] += 20959065;
    result[4] += 16337219;
    result[5] += 53586;
    result[6] += 0;
  } else {
    result[0] += 38895347;
    result[1] += 20844;
    result[2] += 106540;
    result[3] += 3914201;
    result[4] += 0;
    result[5] += 1158;
    result[6] += 11580;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42913920;
    result[1] += 0;
    result[2] += 32501;
    result[3] += 0;
    result[4] += 1625;
    result[5] += 0;
    result[6] += 1625;
  } else {
    result[0] += 19891049;
    result[1] += 110701;
    result[2] += 249078;
    result[3] += 16720961;
    result[4] += 5920015;
    result[5] += 20127;
    result[6] += 37739;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36128235;
    result[1] += 16992;
    result[2] += 127443;
    result[3] += 5661697;
    result[4] += 1004683;
    result[5] += 2124;
    result[6] += 8496;
  } else {
    result[0] += 3734754;
    result[1] += 365051;
    result[2] += 112323;
    result[3] += 18280638;
    result[4] += 20456905;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 9181836;
    result[1] += 275730;
    result[2] += 248157;
    result[3] += 18271763;
    result[4] += 14972184;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36855724;
    result[1] += 19911;
    result[2] += 106193;
    result[3] += 5103917;
    result[4] += 845121;
    result[5] += 5530;
    result[6] += 13274;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36053148;
    result[1] += 14856;
    result[2] += 133707;
    result[3] += 5735607;
    result[4] += 992191;
    result[5] += 5305;
    result[6] += 14856;
  } else {
    result[0] += 4002580;
    result[1] += 326451;
    result[2] += 227096;
    result[3] += 16975482;
    result[4] += 21418062;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918464;
    result[1] += 0;
    result[2] += 29566;
    result[3] += 0;
    result[4] += 1642;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19908034;
    result[1] += 86632;
    result[2] += 269796;
    result[3] += 16388300;
    result[4] += 6249880;
    result[5] += 22276;
    result[6] += 24752;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 9824706;
    result[1] += 200504;
    result[2] += 233921;
    result[3] += 18379552;
    result[4] += 14310988;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36996352;
    result[1] += 22393;
    result[2] += 109728;
    result[3] += 4983680;
    result[4] += 814004;
    result[5] += 7837;
    result[6] += 15675;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36021827;
    result[1] += 13794;
    result[2] += 108231;
    result[3] += 5752159;
    result[4] += 1039866;
    result[5] += 4244;
    result[6] += 9549;
  } else {
    result[0] += 3665569;
    result[1] += 468851;
    result[2] += 85245;
    result[3] += 17262273;
    result[4] += 21467732;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42916965;
    result[1] += 0;
    result[2] += 31071;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 1635;
  } else {
    result[0] += 19973578;
    result[1] += 89701;
    result[2] += 323922;
    result[3] += 16427869;
    result[4] += 6099715;
    result[5] += 19933;
    result[6] += 14950;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36164141;
    result[1] += 54517;
    result[2] += 81142;
    result[3] += 4442544;
    result[4] += 2200986;
    result[5] += 1267;
    result[6] += 5071;
  } else {
    result[0] += 25714465;
    result[1] += 0;
    result[2] += 214212;
    result[3] += 13986312;
    result[4] += 2985591;
    result[5] += 22313;
    result[6] += 26776;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42903702;
    result[1] += 0;
    result[2] += 34477;
    result[3] += 0;
    result[4] += 9850;
    result[5] += 0;
    result[6] += 1641;
  } else {
    result[0] += 19916858;
    result[1] += 76784;
    result[2] += 265029;
    result[3] += 16647332;
    result[4] += 5989175;
    result[5] += 17338;
    result[6] += 37153;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36149573;
    result[1] += 15942;
    result[2] += 120101;
    result[3] += 5629903;
    result[4] += 1009705;
    result[5] += 4251;
    result[6] += 20194;
  } else {
    result[0] += 3933578;
    result[1] += 333589;
    result[2] += 152895;
    result[3] += 16609986;
    result[4] += 21919622;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1703572;
    result[1] += 122853;
    result[2] += 180185;
    result[3] += 21032562;
    result[4] += 19869547;
    result[5] += 40951;
    result[6] += 0;
  } else {
    result[0] += 38233247;
    result[1] += 29189;
    result[2] += 123496;
    result[3] += 4545776;
    result[4] += 0;
    result[5] += 4490;
    result[6] += 13472;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 35987615;
    result[1] += 23355;
    result[2] += 123147;
    result[3] += 5792159;
    result[4] += 1005347;
    result[5] += 5308;
    result[6] += 12739;
  } else {
    result[0] += 3937876;
    result[1] += 239942;
    result[2] += 155256;
    result[3] += 17247617;
    result[4] += 21368979;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32630405;
    result[1] += 35089;
    result[2] += 137434;
    result[3] += 8123242;
    result[4] += 1982562;
    result[5] += 17544;
    result[6] += 23393;
  } else {
    result[0] += 34236607;
    result[1] += 41739;
    result[2] += 120745;
    result[3] += 5782374;
    result[4] += 2756280;
    result[5] += 2981;
    result[6] += 8944;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36293703;
    result[1] += 58031;
    result[2] += 90832;
    result[3] += 4318306;
    result[4] += 2177445;
    result[5] += 8830;
    result[6] += 2523;
  } else {
    result[0] += 25865197;
    result[1] += 0;
    result[2] += 181701;
    result[3] += 13959211;
    result[4] += 2884510;
    result[5] += 22712;
    result[6] += 36340;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36087237;
    result[1] += 20171;
    result[2] += 128458;
    result[3] += 5677646;
    result[4] += 1017050;
    result[5] += 6369;
    result[6] += 12739;
  } else {
    result[0] += 3964802;
    result[1] += 380959;
    result[2] += 112876;
    result[3] += 17129074;
    result[4] += 21361959;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4913649;
    result[1] += 86204;
    result[2] += 159146;
    result[3] += 21285849;
    result[4] += 16451773;
    result[5] += 53048;
    result[6] += 0;
  } else {
    result[0] += 38739739;
    result[1] += 33642;
    result[2] += 127608;
    result[3] += 4037081;
    result[4] += 0;
    result[5] += 4640;
    result[6] += 6960;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36063249;
    result[1] += 14857;
    result[2] += 125226;
    result[3] += 5727542;
    result[4] += 1006060;
    result[5] += 4244;
    result[6] += 8489;
  } else {
    result[0] += 3530692;
    result[1] += 453743;
    result[2] += 85076;
    result[3] += 17298976;
    result[4] += 21581182;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1601624;
    result[1] += 122573;
    result[2] += 204288;
    result[3] += 21017229;
    result[4] += 19995785;
    result[5] += 8171;
    result[6] += 0;
  } else {
    result[0] += 38239628;
    result[1] += 23583;
    result[2] += 103319;
    result[3] += 4568540;
    result[4] += 0;
    result[5] += 3369;
    result[6] += 11230;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42921969;
    result[1] += 0;
    result[2] += 19555;
    result[3] += 0;
    result[4] += 6518;
    result[5] += 0;
    result[6] += 1629;
  } else {
    result[0] += 19959171;
    result[1] += 97703;
    result[2] += 263049;
    result[3] += 16446838;
    result[4] += 6135309;
    result[5] += 10020;
    result[6] += 37578;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42931702;
    result[1] += 0;
    result[2] += 13069;
    result[3] += 0;
    result[4] += 3267;
    result[5] += 0;
    result[6] += 1633;
  } else {
    result[0] += 20214546;
    result[1] += 82355;
    result[2] += 299474;
    result[3] += 16204080;
    result[4] += 6101798;
    result[5] += 14973;
    result[6] += 32443;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5017791;
    result[1] += 111506;
    result[2] += 157420;
    result[3] += 21192790;
    result[4] += 16450485;
    result[5] += 19677;
    result[6] += 0;
  } else {
    result[0] += 38747922;
    result[1] += 25570;
    result[2] += 97634;
    result[3] += 4064597;
    result[4] += 0;
    result[5] += 1162;
    result[6] += 12785;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36099469;
    result[1] += 13802;
    result[2] += 127406;
    result[3] += 5668511;
    result[4] += 1024557;
    result[5] += 6370;
    result[6] += 9555;
  } else {
    result[0] += 3904515;
    result[1] += 380584;
    result[2] += 140957;
    result[3] += 17577368;
    result[4] += 20946246;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36014853;
    result[1] += 64386;
    result[2] += 100998;
    result[3] += 4532314;
    result[4] += 2230807;
    result[5] += 3787;
    result[6] += 2524;
  } else {
    result[0] += 25543275;
    result[1] += 0;
    result[2] += 203875;
    result[3] += 13872563;
    result[4] += 3262000;
    result[5] += 13591;
    result[6] += 54366;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42923549;
    result[1] += 0;
    result[2] += 22857;
    result[3] += 0;
    result[4] += 1632;
    result[5] += 0;
    result[6] += 1632;
  } else {
    result[0] += 19893637;
    result[1] += 104913;
    result[2] += 244798;
    result[3] += 16546390;
    result[4] += 6109974;
    result[5] += 24979;
    result[6] += 24979;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10184365;
    result[1] += 172060;
    result[2] += 376895;
    result[3] += 17550209;
    result[4] += 14666141;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36940221;
    result[1] += 15716;
    result[2] += 95423;
    result[3] += 5048478;
    result[4] += 831870;
    result[5] += 3367;
    result[6] += 14594;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36199442;
    result[1] += 44376;
    result[2] += 88752;
    result[3] += 4405907;
    result[4] += 2195980;
    result[5] += 5071;
    result[6] += 10143;
  } else {
    result[0] += 25510990;
    result[1] += 0;
    result[2] += 178492;
    result[3] += 14199050;
    result[4] += 3029904;
    result[5] += 22311;
    result[6] += 8924;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42900390;
    result[1] += 0;
    result[2] += 39425;
    result[3] += 0;
    result[4] += 9856;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19949139;
    result[1] += 94041;
    result[2] += 279649;
    result[3] += 16719561;
    result[4] += 5865210;
    result[5] += 14848;
    result[6] += 27222;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42926724;
    result[1] += 0;
    result[2] += 16391;
    result[3] += 0;
    result[4] += 6556;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 20081914;
    result[1] += 96834;
    result[2] += 300434;
    result[3] += 16317796;
    result[4] += 6117932;
    result[5] += 7448;
    result[6] += 27312;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36186872;
    result[1] += 49381;
    result[2] += 86101;
    result[3] += 4405127;
    result[4] += 2215858;
    result[5] += 0;
    result[6] += 6331;
  } else {
    result[0] += 25644272;
    result[1] += 0;
    result[2] += 188297;
    result[3] += 13956402;
    result[4] += 3129318;
    result[5] += 13449;
    result[6] += 17933;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42923393;
    result[1] += 0;
    result[2] += 24636;
    result[3] += 0;
    result[4] += 1642;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 20095991;
    result[1] += 99019;
    result[2] += 274778;
    result[3] += 16231758;
    result[4] += 6228321;
    result[5] += 14852;
    result[6] += 4950;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42930067;
    result[1] += 0;
    result[2] += 14704;
    result[3] += 0;
    result[4] += 1633;
    result[5] += 0;
    result[6] += 3267;
  } else {
    result[0] += 19845383;
    result[1] += 137243;
    result[2] += 286963;
    result[3] += 16708750;
    result[4] += 5943883;
    result[5] += 7485;
    result[6] += 19962;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36168368;
    result[1] += 8463;
    result[2] += 124835;
    result[3] += 5620759;
    result[4] += 1008203;
    result[5] += 10579;
    result[6] += 8463;
  } else {
    result[0] += 4173607;
    result[1] += 547600;
    result[2] += 103600;
    result[3] += 17715630;
    result[4] += 20409234;
    result[5] += 0;
    result[6] += 0;
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
