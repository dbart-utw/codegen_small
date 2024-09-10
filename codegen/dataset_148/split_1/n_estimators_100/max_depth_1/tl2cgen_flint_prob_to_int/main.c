
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42912105;
    result[1] += 0;
    result[2] += 29400;
    result[3] += 0;
    result[4] += 8166;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19776071;
    result[1] += 89868;
    result[2] += 212189;
    result[3] += 16668117;
    result[4] += 6143513;
    result[5] += 22467;
    result[6] += 37445;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 2884001;
    result[1] += 75695;
    result[2] += 136252;
    result[3] += 20944967;
    result[4] += 18825491;
    result[5] += 83265;
    result[6] += 0;
  } else {
    result[0] += 38384013;
    result[1] += 17031;
    result[2] += 109003;
    result[3] += 4427134;
    result[4] += 0;
    result[5] += 0;
    result[6] += 12489;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4971026;
    result[1] += 61709;
    result[2] += 130275;
    result[3] += 21502262;
    result[4] += 16256972;
    result[5] += 27426;
    result[6] += 0;
  } else {
    result[0] += 38845716;
    result[1] += 24222;
    result[2] += 123418;
    result[3] += 3940167;
    result[4] += 0;
    result[5] += 0;
    result[6] += 16148;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4905402;
    result[1] += 54808;
    result[2] += 178129;
    result[3] += 21286430;
    result[4] += 16504348;
    result[5] += 20553;
    result[6] += 0;
  } else {
    result[0] += 38658281;
    result[1] += 17303;
    result[2] += 128049;
    result[3] += 4132194;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13843;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4805273;
    result[1] += 33839;
    result[2] += 135359;
    result[3] += 21820004;
    result[4] += 16107819;
    result[5] += 47375;
    result[6] += 0;
  } else {
    result[0] += 38724527;
    result[1] += 21963;
    result[2] += 120223;
    result[3] += 4073710;
    result[4] += 0;
    result[5] += 0;
    result[6] += 9247;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918464;
    result[1] += 0;
    result[2] += 24638;
    result[3] += 0;
    result[4] += 3285;
    result[5] += 0;
    result[6] += 3285;
  } else {
    result[0] += 19719919;
    result[1] += 61880;
    result[2] += 249995;
    result[3] += 16747204;
    result[4] += 6128595;
    result[5] += 22276;
    result[6] += 19801;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36105137;
    result[1] += 13833;
    result[2] += 120247;
    result[3] += 5631418;
    result[4] += 1060945;
    result[5] += 8513;
    result[6] += 9577;
  } else {
    result[0] += 3995318;
    result[1] += 259969;
    result[2] += 150508;
    result[3] += 17814741;
    result[4] += 20729134;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 2864835;
    result[1] += 121907;
    result[2] += 182861;
    result[3] += 21135780;
    result[4] += 18590952;
    result[5] += 53334;
    result[6] += 0;
  } else {
    result[0] += 38288652;
    result[1] += 18149;
    result[2] += 136121;
    result[3] += 4490868;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15880;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36168875;
    result[1] += 42876;
    result[2] += 92058;
    result[3] += 4446548;
    result[4] += 2185441;
    result[5] += 6305;
    result[6] += 7566;
  } else {
    result[0] += 25263978;
    result[1] += 0;
    result[2] += 177402;
    result[3] += 14428761;
    result[4] += 3034042;
    result[5] += 22743;
    result[6] += 22743;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4727978;
    result[1] += 53048;
    result[2] += 172408;
    result[3] += 21391947;
    result[4] += 16544609;
    result[5] += 59679;
    result[6] += 0;
  } else {
    result[0] += 38765261;
    result[1] += 20881;
    result[2] += 114848;
    result[3] += 4033601;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15081;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8683202;
    result[1] += 149227;
    result[2] += 242495;
    result[3] += 18895990;
    result[4] += 14978756;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36846501;
    result[1] += 19876;
    result[2] += 117050;
    result[3] += 5057449;
    result[4] += 894439;
    result[5] += 5521;
    result[6] += 8833;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915355;
    result[1] += 0;
    result[2] += 29415;
    result[3] += 0;
    result[4] += 3268;
    result[5] += 0;
    result[6] += 1634;
  } else {
    result[0] += 19853435;
    result[1] += 82317;
    result[2] += 254435;
    result[3] += 16418558;
    result[4] += 6286048;
    result[5] += 34922;
    result[6] += 19955;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4980341;
    result[1] += 26385;
    result[2] += 158315;
    result[3] += 20429294;
    result[4] += 17315756;
    result[5] += 39578;
    result[6] += 0;
  } else {
    result[0] += 38838050;
    result[1] += 18578;
    result[2] += 98697;
    result[3] += 3982734;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11611;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8921297;
    result[1] += 172963;
    result[2] += 227584;
    result[3] += 18634586;
    result[4] += 14993241;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36722402;
    result[1] += 15504;
    result[2] += 119606;
    result[3] += 5099872;
    result[4] += 973460;
    result[5] += 7752;
    result[6] += 11074;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32805453;
    result[1] += 17729;
    result[2] += 174339;
    result[3] += 8016681;
    result[4] += 1897054;
    result[5] += 17729;
    result[6] += 20684;
  } else {
    result[0] += 34454638;
    result[1] += 38553;
    result[2] += 91934;
    result[3] += 5731071;
    result[4] += 2626061;
    result[5] += 5931;
    result[6] += 1482;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10169634;
    result[1] += 126174;
    result[2] += 269171;
    result[3] += 17874668;
    result[4] += 14510024;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36983881;
    result[1] += 26847;
    result[2] += 107390;
    result[3] += 5037307;
    result[4] += 774109;
    result[5] += 6711;
    result[6] += 13423;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8559965;
    result[1] += 112384;
    result[2] += 262230;
    result[3] += 18824431;
    result[4] += 15190660;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36846170;
    result[1] += 15451;
    result[2] += 102644;
    result[3] += 5069328;
    result[4] += 901729;
    result[5] += 6622;
    result[6] += 7725;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5280311;
    result[1] += 87556;
    result[2] += 121231;
    result[3] += 21343502;
    result[4] += 16076661;
    result[5] += 40410;
    result[6] += 0;
  } else {
    result[0] += 38753393;
    result[1] += 21982;
    result[2] += 118009;
    result[3] += 4042403;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13883;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4712665;
    result[1] += 54246;
    result[2] += 135616;
    result[3] += 21847781;
    result[4] += 16179021;
    result[5] += 20342;
    result[6] += 0;
  } else {
    result[0] += 38789450;
    result[1] += 25423;
    result[2] += 120184;
    result[3] += 4003058;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11556;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42931788;
    result[1] += 0;
    result[2] += 16258;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 1625;
  } else {
    result[0] += 19962559;
    result[1] += 62854;
    result[2] += 276559;
    result[3] += 16362259;
    result[4] += 6250242;
    result[5] += 22627;
    result[6] += 12570;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5003317;
    result[1] += 81575;
    result[2] += 183545;
    result[3] += 21298088;
    result[4] += 16328761;
    result[5] += 54383;
    result[6] += 0;
  } else {
    result[0] += 38857082;
    result[1] += 24257;
    result[2] += 121287;
    result[3] += 3938959;
    result[4] += 0;
    result[5] += 0;
    result[6] += 8085;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42930066;
    result[1] += 0;
    result[2] += 17972;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 1633;
  } else {
    result[0] += 19896629;
    result[1] += 107293;
    result[2] += 291937;
    result[3] += 16316035;
    result[4] += 6297854;
    result[5] += 19961;
    result[6] += 19961;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 9086934;
    result[1] += 176175;
    result[2] += 343078;
    result[3] += 18350043;
    result[4] += 14993441;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36875412;
    result[1] += 12155;
    result[2] += 113816;
    result[3] += 5066487;
    result[4] += 865225;
    result[5] += 4420;
    result[6] += 12155;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32929065;
    result[1] += 26548;
    result[2] += 162241;
    result[3] += 7943919;
    result[4] += 1849549;
    result[5] += 17699;
    result[6] += 20648;
  } else {
    result[0] += 34270692;
    result[1] += 25229;
    result[2] += 114275;
    result[3] += 5823583;
    result[4] += 2704018;
    result[5] += 4452;
    result[6] += 7420;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5009555;
    result[1] += 87886;
    result[2] += 182534;
    result[3] += 21106387;
    result[4] += 16515984;
    result[5] += 47323;
    result[6] += 0;
  } else {
    result[0] += 38761886;
    result[1] += 19655;
    result[2] += 119089;
    result[3] += 4037479;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11562;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8423498;
    result[1] += 110957;
    result[2] += 231160;
    result[3] += 18955183;
    result[4] += 15228872;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36798214;
    result[1] += 7737;
    result[2] += 99484;
    result[3] += 5059339;
    result[4] += 966105;
    result[5] += 8843;
    result[6] += 9948;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42921990;
    result[1] += 0;
    result[2] += 26053;
    result[3] += 0;
    result[4] += 1628;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19716618;
    result[1] += 60195;
    result[2] += 270880;
    result[3] += 16792108;
    result[4] += 6059706;
    result[5] += 27589;
    result[6] += 22573;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42920249;
    result[1] += 0;
    result[2] += 26153;
    result[3] += 0;
    result[4] += 1634;
    result[5] += 0;
    result[6] += 1634;
  } else {
    result[0] += 20007441;
    result[1] += 109711;
    result[2] += 249344;
    result[3] += 16194956;
    result[4] += 6330869;
    result[5] += 17454;
    result[6] += 39895;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8780282;
    result[1] += 121300;
    result[2] += 270593;
    result[3] += 18428330;
    result[4] += 15349166;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36798231;
    result[1] += 17667;
    result[2] += 110418;
    result[3] += 5111294;
    result[4] += 891081;
    result[5] += 11041;
    result[6] += 9937;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4924465;
    result[1] += 53745;
    result[2] += 127646;
    result[3] += 20839963;
    result[4] += 16963542;
    result[5] += 40309;
    result[6] += 0;
  } else {
    result[0] += 38811772;
    result[1] += 18519;
    result[2] += 122690;
    result[3] += 3988589;
    result[4] += 0;
    result[5] += 0;
    result[6] += 8102;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10226112;
    result[1] += 125730;
    result[2] += 268225;
    result[3] += 17468212;
    result[4] += 14861391;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36897144;
    result[1] += 24621;
    result[2] += 129824;
    result[3] += 5088913;
    result[4] += 787903;
    result[5] += 6715;
    result[6] += 14549;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4892486;
    result[1] += 121804;
    result[2] += 115037;
    result[3] += 21078971;
    result[4] += 16694003;
    result[5] += 47368;
    result[6] += 0;
  } else {
    result[0] += 38734817;
    result[1] += 19652;
    result[2] += 129474;
    result[3] += 4055324;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10404;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36074164;
    result[1] += 16955;
    result[2] += 111271;
    result[3] += 5731003;
    result[4] += 994023;
    result[5] += 7418;
    result[6] += 14836;
  } else {
    result[0] += 4134502;
    result[1] += 202388;
    result[2] += 144563;
    result[3] += 17506581;
    result[4] += 20961637;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42908889;
    result[1] += 0;
    result[2] += 34257;
    result[3] += 0;
    result[4] += 4893;
    result[5] += 0;
    result[6] += 1631;
  } else {
    result[0] += 19901615;
    result[1] += 87540;
    result[2] += 292634;
    result[3] += 16480048;
    result[4] += 6152818;
    result[5] += 17508;
    result[6] += 17508;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36058787;
    result[1] += 22341;
    result[2] += 143626;
    result[3] += 5730169;
    result[4] += 974533;
    result[5] += 7447;
    result[6] += 12766;
  } else {
    result[0] += 3993084;
    result[1] += 219551;
    result[2] += 150941;
    result[3] += 17660137;
    result[4] += 20925958;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8612426;
    result[1] += 131201;
    result[2] += 149944;
    result[3] += 18827382;
    result[4] += 15228718;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36863195;
    result[1] += 12139;
    result[2] += 118087;
    result[3] += 5002720;
    result[4] += 942493;
    result[5] += 3310;
    result[6] += 7725;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32846805;
    result[1] += 14688;
    result[2] += 176264;
    result[3] += 7984761;
    result[4] += 1897776;
    result[5] += 8813;
    result[6] += 20564;
  } else {
    result[0] += 34338917;
    result[1] += 37179;
    result[2] += 101128;
    result[3] += 5750913;
    result[4] += 2706662;
    result[5] += 4461;
    result[6] += 10410;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918688;
    result[1] += 0;
    result[2] += 26092;
    result[3] += 0;
    result[4] += 3261;
    result[5] += 0;
    result[6] += 1630;
  } else {
    result[0] += 19836978;
    result[1] += 62561;
    result[2] += 287782;
    result[3] += 16523724;
    result[4] += 6203591;
    result[5] += 22522;
    result[6] += 12512;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42908830;
    result[1] += 0;
    result[2] += 35941;
    result[3] += 0;
    result[4] += 4901;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19860168;
    result[1] += 89842;
    result[2] += 314448;
    result[3] += 16605875;
    result[4] += 6044399;
    result[5] += 14973;
    result[6] += 19964;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4867991;
    result[1] += 61104;
    result[2] += 156155;
    result[3] += 21644571;
    result[4] += 16179113;
    result[5] += 40736;
    result[6] += 0;
  } else {
    result[0] += 38867755;
    result[1] += 21952;
    result[2] += 120158;
    result[3] += 3928253;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11553;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915452;
    result[1] += 0;
    result[2] += 32590;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 1629;
  } else {
    result[0] += 19799992;
    result[1] += 97709;
    result[2] += 273086;
    result[3] += 16537991;
    result[4] += 6203312;
    result[5] += 12526;
    result[6] += 25053;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 35934547;
    result[1] += 29008;
    result[2] += 118558;
    result[3] += 4532966;
    result[4] += 2323240;
    result[5] += 6306;
    result[6] += 5045;
  } else {
    result[0] += 26328099;
    result[1] += 0;
    result[2] += 227319;
    result[3] += 13457291;
    result[4] += 2900591;
    result[5] += 0;
    result[6] += 36371;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36022428;
    result[1] += 53024;
    result[2] += 79536;
    result[3] += 4558826;
    result[4] += 2215657;
    result[5] += 10099;
    result[6] += 10099;
  } else {
    result[0] += 25208014;
    result[1] += 0;
    result[2] += 240119;
    result[3] += 14429821;
    result[4] += 3040003;
    result[5] += 9061;
    result[6] += 22652;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8736469;
    result[1] += 148390;
    result[2] += 333877;
    result[3] += 18205616;
    result[4] += 15525319;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36923083;
    result[1] += 12154;
    result[2] += 118233;
    result[3] += 4972433;
    result[4] += 908297;
    result[5] += 8839;
    result[6] += 6629;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4699207;
    result[1] += 67711;
    result[2] += 196364;
    result[3] += 21159976;
    result[4] += 16799328;
    result[5] += 27084;
    result[6] += 0;
  } else {
    result[0] += 38810405;
    result[1] += 31209;
    result[2] += 134084;
    result[3] += 3955480;
    result[4] += 0;
    result[5] += 0;
    result[6] += 18494;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36093981;
    result[1] += 9549;
    result[2] += 132636;
    result[3] += 5721388;
    result[4] += 976201;
    result[5] += 3183;
    result[6] += 12733;
  } else {
    result[0] += 4063382;
    result[1] += 227322;
    result[2] += 227322;
    result[3] += 17390142;
    result[4] += 21041503;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4851524;
    result[1] += 86753;
    result[2] += 166833;
    result[3] += 21014375;
    result[4] += 16756778;
    result[5] += 73406;
    result[6] += 0;
  } else {
    result[0] += 38870705;
    result[1] += 25493;
    result[2] += 111244;
    result[3] += 3935276;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6952;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5100943;
    result[1] += 40164;
    result[2] += 147271;
    result[3] += 21327565;
    result[4] += 16306951;
    result[5] += 26776;
    result[6] += 0;
  } else {
    result[0] += 38810364;
    result[1] += 23163;
    result[2] += 115817;
    result[3] += 3987588;
    result[4] += 0;
    result[5] += 0;
    result[6] += 12739;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42918624;
    result[1] += 0;
    result[2] += 19609;
    result[3] += 0;
    result[4] += 8170;
    result[5] += 0;
    result[6] += 3268;
  } else {
    result[0] += 19759793;
    result[1] += 67354;
    result[2] += 266923;
    result[3] += 16751295;
    result[4] += 6074371;
    result[5] += 12473;
    result[6] += 17462;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42917048;
    result[1] += 0;
    result[2] += 29361;
    result[3] += 0;
    result[4] += 1631;
    result[5] += 0;
    result[6] += 1631;
  } else {
    result[0] += 19888925;
    result[1] += 87550;
    result[2] += 255146;
    result[3] += 16539501;
    result[4] += 6128520;
    result[5] += 30017;
    result[6] += 20011;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10024403;
    result[1] += 126570;
    result[2] += 286893;
    result[3] += 18048988;
    result[4] += 14462817;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37079176;
    result[1] += 19009;
    result[2] += 96164;
    result[3] += 4933453;
    result[4] += 800623;
    result[5] += 5590;
    result[6] += 15654;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5074166;
    result[1] += 107106;
    result[2] += 174047;
    result[3] += 21073187;
    result[4] += 16514470;
    result[5] += 6694;
    result[6] += 0;
  } else {
    result[0] += 38760562;
    result[1] += 22005;
    result[2] += 134348;
    result[3] += 4020017;
    result[4] += 0;
    result[5] += 0;
    result[6] += 12739;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10356658;
    result[1] += 115256;
    result[2] += 337538;
    result[3] += 17807196;
    result[4] += 14333022;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37113552;
    result[1] += 16828;
    result[2] += 105458;
    result[3] += 4900456;
    result[4] += 797670;
    result[5] += 5609;
    result[6] += 10097;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36178625;
    result[1] += 13842;
    result[2] += 119257;
    result[3] += 5696666;
    result[4] += 923179;
    result[5] += 9583;
    result[6] += 8518;
  } else {
    result[0] += 4235239;
    result[1] += 149319;
    result[2] += 135744;
    result[3] += 17402490;
    result[4] += 21026878;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 2744412;
    result[1] += 115311;
    result[2] += 184498;
    result[3] += 20848310;
    result[4] += 18987952;
    result[5] += 69186;
    result[6] += 0;
  } else {
    result[0] += 38337848;
    result[1] += 20391;
    result[2] += 126878;
    result[3] += 4449827;
    result[4] += 0;
    result[5] += 0;
    result[6] += 14727;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5197557;
    result[1] += 95368;
    result[2] += 170300;
    result[3] += 21246634;
    result[4] += 16205752;
    result[5] += 34060;
    result[6] += 0;
  } else {
    result[0] += 38881607;
    result[1] += 25403;
    result[2] += 114316;
    result[3] += 3908714;
    result[4] += 0;
    result[5] += 0;
    result[6] += 19630;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 9888528;
    result[1] += 182200;
    result[2] += 380965;
    result[3] += 18046150;
    result[4] += 14451827;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36849236;
    result[1] += 17935;
    result[2] += 102010;
    result[3] += 5133020;
    result[4] += 822807;
    result[5] += 6725;
    result[6] += 17935;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42920210;
    result[1] += 0;
    result[2] += 27825;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 1636;
  } else {
    result[0] += 20004195;
    result[1] += 74651;
    result[2] += 253816;
    result[3] += 16221837;
    result[4] += 6340426;
    result[5] += 22395;
    result[6] += 32349;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36075449;
    result[1] += 41723;
    result[2] += 104940;
    result[3] += 4383471;
    result[4] += 2335238;
    result[5] += 6321;
    result[6] += 2528;
  } else {
    result[0] += 25283070;
    result[1] += 0;
    result[2] += 175764;
    result[3] += 14403688;
    result[4] += 3051094;
    result[5] += 0;
    result[6] += 36054;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8535532;
    result[1] += 187594;
    result[2] += 281391;
    result[3] += 18618716;
    result[4] += 15326439;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36774436;
    result[1] += 24277;
    result[2] += 108143;
    result[3] += 5090486;
    result[4] += 925844;
    result[5] += 9931;
    result[6] += 16552;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5059604;
    result[1] += 100521;
    result[2] += 154133;
    result[3] += 21303949;
    result[4] += 16304658;
    result[5] += 26805;
    result[6] += 0;
  } else {
    result[0] += 38793775;
    result[1] += 24317;
    result[2] += 121585;
    result[3] += 3999573;
    result[4] += 0;
    result[5] += 0;
    result[6] += 10421;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4906197;
    result[1] += 40884;
    result[2] += 183982;
    result[3] += 21621340;
    result[4] += 16163195;
    result[5] += 34070;
    result[6] += 0;
  } else {
    result[0] += 38829866;
    result[1] += 20783;
    result[2] += 112001;
    result[3] += 3981247;
    result[4] += 0;
    result[5] += 0;
    result[6] += 5773;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915430;
    result[1] += 0;
    result[2] += 27719;
    result[3] += 0;
    result[4] += 1630;
    result[5] += 0;
    result[6] += 4891;
  } else {
    result[0] += 20178337;
    result[1] += 62572;
    result[2] += 237774;
    result[3] += 16373937;
    result[4] += 6051999;
    result[5] += 20023;
    result[6] += 25028;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42908931;
    result[1] += 0;
    result[2] += 37482;
    result[3] += 0;
    result[4] += 3259;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19942977;
    result[1] += 85172;
    result[2] += 318145;
    result[3] += 16455899;
    result[4] += 6114911;
    result[5] += 15030;
    result[6] += 17535;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8483192;
    result[1] += 149813;
    result[2] += 252810;
    result[3] += 18932687;
    result[4] += 15131168;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36943142;
    result[1] += 8829;
    result[2] += 105958;
    result[3] += 4910520;
    result[4] += 964665;
    result[5] += 5518;
    result[6] += 11037;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42912216;
    result[1] += 0;
    result[2] += 32570;
    result[3] += 0;
    result[4] += 3257;
    result[5] += 0;
    result[6] += 1628;
  } else {
    result[0] += 20202169;
    result[1] += 97800;
    result[2] += 228202;
    result[3] += 16520841;
    result[4] += 5875581;
    result[5] += 12538;
    result[6] += 12538;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 9736701;
    result[1] += 108185;
    result[2] += 324556;
    result[3] += 18100278;
    result[4] += 14679950;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37039177;
    result[1] += 21284;
    result[2] += 105304;
    result[3] += 4979558;
    result[4] += 789783;
    result[5] += 5601;
    result[6] += 8962;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42910233;
    result[1] += 0;
    result[2] += 26293;
    result[3] += 0;
    result[4] += 9859;
    result[5] += 0;
    result[6] += 3286;
  } else {
    result[0] += 19953640;
    result[1] += 84098;
    result[2] += 264663;
    result[3] += 16453652;
    result[4] += 6166409;
    result[5] += 14840;
    result[6] += 12367;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36042813;
    result[1] += 12757;
    result[2] += 127570;
    result[3] += 5715141;
    result[4] += 1039696;
    result[5] += 5315;
    result[6] += 6378;
  } else {
    result[0] += 3769703;
    result[1] += 207888;
    result[2] += 152451;
    result[3] += 17545752;
    result[4] += 21273878;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36174064;
    result[1] += 10610;
    result[2] += 116711;
    result[3] += 5668974;
    result[4] += 963396;
    result[5] += 7427;
    result[6] += 8488;
  } else {
    result[0] += 3982088;
    result[1] += 170660;
    result[2] += 184882;
    result[3] += 17620743;
    result[4] += 20991297;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4987967;
    result[1] += 74955;
    result[2] += 204424;
    result[3] += 21232933;
    result[4] += 16422134;
    result[5] += 27256;
    result[6] += 0;
  } else {
    result[0] += 38673988;
    result[1] += 18474;
    result[2] += 120084;
    result[3] += 4123270;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13855;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4869060;
    result[1] += 93893;
    result[2] += 187787;
    result[3] += 21266928;
    result[4] += 16451522;
    result[5] += 80480;
    result[6] += 0;
  } else {
    result[0] += 38793178;
    result[1] += 24313;
    result[2] += 123884;
    result[3] += 3995560;
    result[4] += 0;
    result[5] += 0;
    result[6] += 12735;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36153697;
    result[1] += 11704;
    result[2] += 121299;
    result[3] += 5644692;
    result[4] += 991678;
    result[5] += 10640;
    result[6] += 15960;
  } else {
    result[0] += 4247017;
    result[1] += 232900;
    result[2] += 137000;
    result[3] += 17645671;
    result[4] += 20687083;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4921592;
    result[1] += 52991;
    result[2] += 185470;
    result[3] += 21382101;
    result[4] += 16387645;
    result[5] += 19871;
    result[6] += 0;
  } else {
    result[0] += 38780714;
    result[1] += 26686;
    result[2] += 142716;
    result[3] += 3979829;
    result[4] += 0;
    result[5] += 0;
    result[6] += 19725;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915366;
    result[1] += 0;
    result[2] += 31038;
    result[3] += 0;
    result[4] += 1633;
    result[5] += 0;
    result[6] += 1633;
  } else {
    result[0] += 19761491;
    result[1] += 79864;
    result[2] += 314466;
    result[3] += 16621815;
    result[4] += 6137093;
    result[5] += 9983;
    result[6] += 24957;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42925263;
    result[1] += 0;
    result[2] += 19527;
    result[3] += 0;
    result[4] += 1627;
    result[5] += 0;
    result[6] += 3254;
  } else {
    result[0] += 19967191;
    result[1] += 87872;
    result[2] += 253575;
    result[3] += 16464836;
    result[4] += 6131004;
    result[5] += 17574;
    result[6] += 27617;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42916747;
    result[1] += 0;
    result[2] += 29632;
    result[3] += 0;
    result[4] += 1646;
    result[5] += 0;
    result[6] += 1646;
  } else {
    result[0] += 19754234;
    result[1] += 71537;
    result[2] += 286150;
    result[3] += 16606581;
    result[4] += 6176898;
    result[5] += 22201;
    result[6] += 32068;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42915355;
    result[1] += 0;
    result[2] += 26146;
    result[3] += 0;
    result[4] += 4902;
    result[5] += 0;
    result[6] += 3268;
  } else {
    result[0] += 19963191;
    result[1] += 62361;
    result[2] += 271896;
    result[3] += 16441009;
    result[4] += 6171302;
    result[5] += 14966;
    result[6] += 24944;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8554291;
    result[1] += 150075;
    result[2] += 253252;
    result[3] += 19143979;
    result[4] += 14848074;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36899133;
    result[1] += 14345;
    result[2] += 126903;
    result[3] += 4980136;
    result[4] += 911498;
    result[5] += 6621;
    result[6] += 11035;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36179935;
    result[1] += 35437;
    result[2] += 108842;
    result[3] += 4309395;
    result[4] += 2302140;
    result[5] += 5062;
    result[6] += 8859;
  } else {
    result[0] += 25651247;
    result[1] += 0;
    result[2] += 175139;
    result[3] += 14047111;
    result[4] += 3040247;
    result[5] += 17963;
    result[6] += 17963;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 4961963;
    result[1] += 33754;
    result[2] += 121517;
    result[3] += 21009019;
    result[4] += 16776161;
    result[5] += 47256;
    result[6] += 0;
  } else {
    result[0] += 38812913;
    result[1] += 18503;
    result[2] += 104083;
    result[3] += 3997981;
    result[4] += 0;
    result[5] += 0;
    result[6] += 16190;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 32987604;
    result[1] += 17621;
    result[2] += 146846;
    result[3] += 7950271;
    result[4] += 1832644;
    result[5] += 5873;
    result[6] += 8810;
  } else {
    result[0] += 34324338;
    result[1] += 32722;
    result[2] += 136839;
    result[3] += 5824592;
    result[4] += 2611844;
    result[5] += 4462;
    result[6] += 14873;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36127725;
    result[1] += 27834;
    result[2] += 103746;
    result[3] += 4419336;
    result[4] += 2264704;
    result[5] += 5060;
    result[6] += 1265;
  } else {
    result[0] += 25838141;
    result[1] += 0;
    result[2] += 188829;
    result[3] += 14058790;
    result[4] += 2814455;
    result[5] += 8991;
    result[6] += 40463;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42926904;
    result[1] += 0;
    result[2] += 16263;
    result[3] += 0;
    result[4] += 1626;
    result[5] += 0;
    result[6] += 4878;
  } else {
    result[0] += 19988397;
    result[1] += 62824;
    result[2] += 294020;
    result[3] += 16595848;
    result[4] += 5970886;
    result[5] += 15077;
    result[6] += 22616;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 10551903;
    result[1] += 154935;
    result[2] += 252789;
    result[3] += 18094802;
    result[4] += 13895242;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 37016050;
    result[1] += 13480;
    result[2] += 98856;
    result[3] += 4960786;
    result[4] += 836908;
    result[5] += 5616;
    result[6] += 17973;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42912099;
    result[1] += 0;
    result[2] += 29405;
    result[3] += 0;
    result[4] += 6534;
    result[5] += 0;
    result[6] += 1633;
  } else {
    result[0] += 19564326;
    result[1] += 99830;
    result[2] += 274534;
    result[3] += 16816485;
    result[4] += 6149572;
    result[5] += 17470;
    result[6] += 27453;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42920454;
    result[1] += 0;
    result[2] += 24348;
    result[3] += 0;
    result[4] += 1623;
    result[5] += 0;
    result[6] += 3246;
  } else {
    result[0] += 19880700;
    result[1] += 37805;
    result[2] += 244476;
    result[3] += 16639501;
    result[4] += 6099302;
    result[5] += 20162;
    result[6] += 27724;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42926639;
    result[1] += 0;
    result[2] += 19743;
    result[3] += 0;
    result[4] += 3290;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 19999560;
    result[1] += 76541;
    result[2] += 291351;
    result[3] += 16621856;
    result[4] += 5915919;
    result[5] += 32098;
    result[6] += 12345;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 38999442;
    result[1] += 18754;
    result[2] += 90257;
    result[3] += 3705245;
    result[4] += 126594;
    result[5] += 2344;
    result[6] += 7033;
  } else {
    result[0] += 7658179;
    result[1] += 81403;
    result[2] += 338137;
    result[3] += 20350843;
    result[4] += 14477277;
    result[5] += 43832;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5135944;
    result[1] += 114281;
    result[2] += 188228;
    result[3] += 21236189;
    result[4] += 16227971;
    result[5] += 47057;
    result[6] += 0;
  } else {
    result[0] += 38749722;
    result[1] += 18517;
    result[2] += 122676;
    result[3] += 4051812;
    result[4] += 0;
    result[5] += 0;
    result[6] += 6943;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42910428;
    result[1] += 0;
    result[2] += 34338;
    result[3] += 0;
    result[4] += 3270;
    result[5] += 0;
    result[6] += 1635;
  } else {
    result[0] += 19879861;
    result[1] += 77256;
    result[2] += 309026;
    result[3] += 16465619;
    result[4] += 6188002;
    result[5] += 9968;
    result[6] += 19937;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42923493;
    result[1] += 0;
    result[2] += 22907;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 3272;
  } else {
    result[0] += 19977286;
    result[1] += 82159;
    result[2] += 258927;
    result[3] += 16444414;
    result[4] += 6147049;
    result[5] += 14938;
    result[6] += 24896;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36073855;
    result[1] += 17011;
    result[2] += 130775;
    result[3] += 5696711;
    result[4] += 1004739;
    result[5] += 6379;
    result[6] += 20201;
  } else {
    result[0] += 3611425;
    result[1] += 262900;
    result[2] += 138368;
    result[3] += 17489815;
    result[4] += 21447162;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 38933804;
    result[1] += 22356;
    result[2] += 75304;
    result[3] += 3771127;
    result[4] += 123547;
    result[5] += 2353;
    result[6] += 21179;
  } else {
    result[0] += 7193057;
    result[1] += 159572;
    result[2] += 398932;
    result[3] += 20897918;
    result[4] += 14238816;
    result[5] += 61374;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36207962;
    result[1] += 12768;
    result[2] += 124491;
    result[3] += 5589362;
    result[4] += 1002318;
    result[5] += 7448;
    result[6] += 5320;
  } else {
    result[0] += 3740115;
    result[1] += 260301;
    result[2] += 137000;
    result[3] += 17426470;
    result[4] += 21385786;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 8789180;
    result[1] += 195522;
    result[2] += 279317;
    result[3] += 18723562;
    result[4] += 14962090;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 36831992;
    result[1] += 18776;
    result[2] += 111551;
    result[3] += 5014311;
    result[4] += 961996;
    result[5] += 5522;
    result[6] += 5522;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 42923501;
    result[1] += 0;
    result[2] += 21264;
    result[3] += 0;
    result[4] += 4907;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 20033881;
    result[1] += 94652;
    result[2] += 291429;
    result[3] += 16506842;
    result[4] += 5997959;
    result[5] += 7472;
    result[6] += 17435;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 36295871;
    result[1] += 45478;
    result[2] += 89694;
    result[3] += 4321749;
    result[4] += 2174139;
    result[5] += 15159;
    result[6] += 7579;
  } else {
    result[0] += 25759859;
    result[1] += 0;
    result[2] += 230523;
    result[3] += 13953445;
    result[4] += 2987764;
    result[5] += 13560;
    result[6] += 4520;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 36028559;
    result[1] += 19172;
    result[2] += 142725;
    result[3] += 5728185;
    result[4] += 1007598;
    result[5] += 7455;
    result[6] += 15976;
  } else {
    result[0] += 4002866;
    result[1] += 270463;
    result[2] += 135231;
    result[3] += 17471970;
    result[4] += 21069140;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 5030443;
    result[1] += 120569;
    result[2] += 147363;
    result[3] += 21146618;
    result[4] += 16471186;
    result[5] += 33491;
    result[6] += 0;
  } else {
    result[0] += 38727431;
    result[1] += 18528;
    result[2] += 119278;
    result[3] += 4071695;
    result[4] += 0;
    result[5] += 0;
    result[6] += 12738;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
