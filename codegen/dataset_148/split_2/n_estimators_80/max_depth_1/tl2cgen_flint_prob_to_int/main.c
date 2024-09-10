
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
    result[0] += 5817280;
    result[1] += 124834;
    result[2] += 233024;
    result[3] += 26764483;
    result[4] += 20697534;
    result[5] += 49933;
    result[6] += 0;
  } else {
    result[0] += 48563132;
    result[1] += 37676;
    result[2] += 160848;
    result[3] += 4910943;
    result[4] += 0;
    result[5] += 1449;
    result[6] += 13041;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53650154;
    result[1] += 0;
    result[2] += 28728;
    result[3] += 0;
    result[4] += 8208;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24832253;
    result[1] += 139350;
    result[2] += 328247;
    result[3] += 20732253;
    result[4] += 7611632;
    result[5] += 9290;
    result[6] += 34063;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53654455;
    result[1] += 0;
    result[2] += 24476;
    result[3] += 0;
    result[4] += 6119;
    result[5] += 0;
    result[6] += 2039;
  } else {
    result[0] += 25229401;
    result[1] += 134381;
    result[2] += 346892;
    result[3] += 20451034;
    result[4] += 7500379;
    result[5] += 9375;
    result[6] += 15625;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53646324;
    result[1] += 0;
    result[2] += 30574;
    result[3] += 0;
    result[4] += 10191;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24980561;
    result[1] += 140779;
    result[2] += 306586;
    result[3] += 20663320;
    result[4] += 7558301;
    result[5] += 12513;
    result[6] += 25027;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45185474;
    result[1] += 19891;
    result[2] += 140566;
    result[3] += 7089321;
    result[4] += 1222662;
    result[5] += 10608;
    result[6] += 18565;
  } else {
    result[0] += 5341999;
    result[1] += 587619;
    result[2] += 106839;
    result[3] += 21083089;
    result[4] += 26567542;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 44979499;
    result[1] += 22544;
    result[2] += 153835;
    result[3] += 7213005;
    result[4] += 1290357;
    result[5] += 11935;
    result[6] += 15913;
  } else {
    result[0] += 5231688;
    result[1] += 302512;
    result[2] += 71179;
    result[3] += 22225779;
    result[4] += 25855930;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648294;
    result[1] += 0;
    result[2] += 26545;
    result[3] += 0;
    result[4] += 6125;
    result[5] += 0;
    result[6] += 6125;
  } else {
    result[0] += 25127605;
    result[1] += 90476;
    result[2] += 330708;
    result[3] += 20354171;
    result[4] += 7734210;
    result[5] += 24959;
    result[6] += 24959;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45314136;
    result[1] += 58463;
    result[2] += 145369;
    result[3] += 5370763;
    result[4] += 2785718;
    result[5] += 4740;
    result[6] += 7900;
  } else {
    result[0] += 31818748;
    result[1] += 0;
    result[2] += 281881;
    result[3] += 17510459;
    result[4] += 4059089;
    result[5] += 5637;
    result[6] += 11275;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45175915;
    result[1] += 83551;
    result[2] += 122961;
    result[3] += 5528559;
    result[4] += 2766644;
    result[5] += 3152;
    result[6] += 6305;
  } else {
    result[0] += 32380524;
    result[1] += 0;
    result[2] += 255815;
    result[3] += 17293110;
    result[4] += 3672369;
    result[5] += 34108;
    result[6] += 51163;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53639887;
    result[1] += 0;
    result[2] += 38994;
    result[3] += 0;
    result[4] += 6157;
    result[5] += 0;
    result[6] += 2052;
  } else {
    result[0] += 24739838;
    result[1] += 139318;
    result[2] += 294116;
    result[3] += 20572672;
    result[4] += 7894705;
    result[5] += 30959;
    result[6] += 15479;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12757431;
    result[1] += 166085;
    result[2] += 311410;
    result[3] += 22172394;
    result[4] += 18279769;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46153977;
    result[1] += 28014;
    result[2] += 106455;
    result[3] += 6335491;
    result[4] += 1035137;
    result[5] += 8404;
    result[6] += 19610;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53624322;
    result[1] += 0;
    result[2] += 48594;
    result[3] += 0;
    result[4] += 10123;
    result[5] += 0;
    result[6] += 4049;
  } else {
    result[0] += 25094013;
    result[1] += 129594;
    result[2] += 316085;
    result[3] += 20412789;
    result[4] += 7677712;
    result[5] += 18965;
    result[6] += 37930;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 3471189;
    result[1] += 184225;
    result[2] += 252097;
    result[3] += 26363590;
    result[4] += 23348115;
    result[5] += 67872;
    result[6] += 0;
  } else {
    result[0] += 48214155;
    result[1] += 39597;
    result[2] += 121620;
    result[3] += 5297575;
    result[4] += 0;
    result[5] += 1414;
    result[6] += 12727;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45234354;
    result[1] += 17255;
    result[2] += 134065;
    result[3] += 7013860;
    result[4] += 1271627;
    result[5] += 7964;
    result[6] += 7964;
  } else {
    result[0] += 4869457;
    result[1] += 351585;
    result[2] += 210951;
    result[3] += 21306075;
    result[4] += 26949021;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45227442;
    result[1] += 71637;
    result[2] += 128948;
    result[3] += 5469957;
    result[4] += 2782737;
    result[5] += 3183;
    result[6] += 3183;
  } else {
    result[0] += 31928881;
    result[1] += 0;
    result[2] += 274586;
    result[3] += 17480156;
    result[4] += 3948549;
    result[5] += 16475;
    result[6] += 38442;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53642073;
    result[1] += 0;
    result[2] += 34786;
    result[3] += 0;
    result[4] += 10231;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24932480;
    result[1] += 136837;
    result[2] += 301665;
    result[3] += 20590988;
    result[4] += 7669140;
    result[5] += 27989;
    result[6] += 27989;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53635911;
    result[1] += 0;
    result[2] += 38896;
    result[3] += 0;
    result[4] += 12283;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 25387545;
    result[1] += 118096;
    result[2] += 382258;
    result[3] += 20290768;
    result[4] += 7471129;
    result[5] += 6215;
    result[6] += 31077;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45170282;
    result[1] += 21242;
    result[2] += 140729;
    result[3] += 7130752;
    result[4] += 1205496;
    result[5] += 6638;
    result[6] += 11948;
  } else {
    result[0] += 5032068;
    result[1] += 455866;
    result[2] += 157800;
    result[3] += 22056943;
    result[4] += 25984411;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53646211;
    result[1] += 0;
    result[2] += 30659;
    result[3] += 0;
    result[4] += 6131;
    result[5] += 0;
    result[6] += 4087;
  } else {
    result[0] += 25052314;
    result[1] += 87225;
    result[2] += 314633;
    result[3] += 20510375;
    result[4] += 7691390;
    result[5] += 0;
    result[6] += 31151;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45058381;
    result[1] += 18590;
    result[2] += 142085;
    result[3] += 7136147;
    result[4] += 1310639;
    result[5] += 11951;
    result[6] += 9295;
  } else {
    result[0] += 4809104;
    result[1] += 419703;
    result[2] += 227339;
    result[3] += 21824589;
    result[4] += 26406354;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6265054;
    result[1] += 161733;
    result[2] += 144709;
    result[3] += 26575408;
    result[4] += 20514648;
    result[5] += 25536;
    result[6] += 0;
  } else {
    result[0] += 48489144;
    result[1] += 40417;
    result[2] += 151564;
    result[3] += 4978538;
    result[4] += 0;
    result[5] += 1443;
    result[6] += 25982;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45098422;
    result[1] += 64873;
    result[2] += 107595;
    result[3] += 5615546;
    result[4] += 2784829;
    result[5] += 11076;
    result[6] += 4746;
  } else {
    result[0] += 32425432;
    result[1] += 0;
    result[2] += 342206;
    result[3] += 17284213;
    result[4] += 3595969;
    result[5] += 22439;
    result[6] += 16829;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45213396;
    result[1] += 15930;
    result[2] += 160632;
    result[3] += 7061191;
    result[4] += 1218682;
    result[5] += 9292;
    result[6] += 7965;
  } else {
    result[0] += 4808847;
    result[1] += 421212;
    result[2] += 175505;
    result[3] += 22148777;
    result[4] += 26132748;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6037002;
    result[1] += 49687;
    result[2] += 240155;
    result[3] += 26872529;
    result[4] += 20438028;
    result[5] += 49687;
    result[6] += 0;
  } else {
    result[0] += 48426722;
    result[1] += 31907;
    result[2] += 147934;
    result[3] += 5066023;
    result[4] += 0;
    result[5] += 0;
    result[6] += 14503;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45069433;
    result[1] += 23853;
    result[2] += 127217;
    result[3] += 7189111;
    result[4] += 1253622;
    result[5] += 5300;
    result[6] += 18552;
  } else {
    result[0] += 4691105;
    result[1] += 611101;
    result[2] += 179735;
    result[3] += 21118959;
    result[4] += 27086188;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2001137;
    result[1] += 202135;
    result[2] += 293095;
    result[3] += 26176499;
    result[4] += 24953582;
    result[5] += 60640;
    result[6] += 0;
  } else {
    result[0] += 47726232;
    result[1] += 35146;
    result[2] += 143398;
    result[3] += 5766849;
    result[4] += 0;
    result[5] += 2811;
    result[6] += 12652;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2183640;
    result[1] += 132034;
    result[2] += 274224;
    result[3] += 26274783;
    result[4] += 24791939;
    result[5] += 30469;
    result[6] += 0;
  } else {
    result[0] += 47865159;
    result[1] += 36527;
    result[2] += 161564;
    result[3] += 5609791;
    result[4] += 0;
    result[5] += 1404;
    result[6] += 12644;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53660563;
    result[1] += 0;
    result[2] += 16324;
    result[3] += 0;
    result[4] += 4081;
    result[5] += 0;
    result[6] += 6121;
  } else {
    result[0] += 24822862;
    result[1] += 165527;
    result[2] += 343547;
    result[3] += 20709662;
    result[4] += 7595520;
    result[5] += 18738;
    result[6] += 31231;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45104479;
    result[1] += 19897;
    result[2] += 163162;
    result[3] += 7102211;
    result[4] += 1274789;
    result[5] += 9285;
    result[6] += 13265;
  } else {
    result[0] += 4450283;
    result[1] += 443255;
    result[2] += 159571;
    result[3] += 22233689;
    result[4] += 26400290;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 41085182;
    result[1] += 39685;
    result[2] += 151525;
    result[3] += 10062045;
    result[4] += 2323398;
    result[5] += 0;
    result[6] += 25254;
  } else {
    result[0] += 42896771;
    result[1] += 69409;
    result[2] += 166957;
    result[3] += 7040345;
    result[4] += 3498599;
    result[5] += 7503;
    result[6] += 7503;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40875022;
    result[1] += 44141;
    result[2] += 121389;
    result[3] += 10163578;
    result[4] += 2457209;
    result[5] += 3678;
    result[6] += 22070;
  } else {
    result[0] += 42992392;
    result[1] += 33432;
    result[2] += 139302;
    result[3] += 7039407;
    result[4] += 3465840;
    result[5] += 3714;
    result[6] += 13001;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 41229171;
    result[1] += 36544;
    result[2] += 237537;
    result[3] += 9735376;
    result[4] += 2419226;
    result[5] += 18272;
    result[6] += 10963;
  } else {
    result[0] += 43025705;
    result[1] += 57770;
    result[2] += 156538;
    result[3] += 7105726;
    result[4] += 3332032;
    result[5] += 3727;
    result[6] += 5590;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 48624102;
    result[1] += 27939;
    result[2] += 120582;
    result[3] += 4742416;
    result[4] += 152933;
    result[5] += 0;
    result[6] += 19116;
  } else {
    result[0] += 9345900;
    result[1] += 207345;
    result[2] += 368613;
    result[3] += 25319173;
    result[4] += 18415340;
    result[5] += 30717;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 3596807;
    result[1] += 85187;
    result[2] += 246097;
    result[3] += 26237767;
    result[4] += 23473904;
    result[5] += 47326;
    result[6] += 0;
  } else {
    result[0] += 48135015;
    result[1] += 48254;
    result[2] += 106443;
    result[3] += 5381766;
    result[4] += 0;
    result[5] += 0;
    result[6] += 15611;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53617223;
    result[1] += 0;
    result[2] += 55483;
    result[3] += 0;
    result[4] += 10274;
    result[5] += 0;
    result[6] += 4109;
  } else {
    result[0] += 25162540;
    result[1] += 114333;
    result[2] += 336818;
    result[3] += 20391453;
    result[4] += 7626323;
    result[5] += 15450;
    result[6] += 40171;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45324161;
    result[1] += 23856;
    result[2] += 128558;
    result[3] += 6983244;
    result[4] += 1200762;
    result[5] += 15904;
    result[6] += 10602;
  } else {
    result[0] += 4988305;
    result[1] += 466532;
    result[2] += 197379;
    result[3] += 21621973;
    result[4] += 26412900;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6226164;
    result[1] += 167145;
    result[2] += 250718;
    result[3] += 26317037;
    result[4] += 20684238;
    result[5] += 41786;
    result[6] += 0;
  } else {
    result[0] += 48458261;
    result[1] += 37648;
    result[2] += 149146;
    result[3] += 5029001;
    result[4] += 0;
    result[5] += 1448;
    result[6] += 11584;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10154803;
    result[1] += 269078;
    result[2] += 362671;
    result[3] += 23585351;
    result[4] += 19315185;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45874999;
    result[1] += 15177;
    result[2] += 124176;
    result[3] += 6526173;
    result[4] += 1117589;
    result[5] += 8278;
    result[6] += 20696;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6359881;
    result[1] += 133716;
    result[2] += 300861;
    result[3] += 26183321;
    result[4] += 20684238;
    result[5] += 25071;
    result[6] += 0;
  } else {
    result[0] += 48393100;
    result[1] += 36200;
    result[2] += 139010;
    result[3] += 5107195;
    result[4] += 0;
    result[5] += 0;
    result[6] += 11584;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10483414;
    result[1] += 381005;
    result[2] += 323277;
    result[3] += 23749321;
    result[4] += 18750072;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46140496;
    result[1] += 17964;
    result[2] += 107788;
    result[3] += 6289059;
    result[4] += 1112435;
    result[5] += 5527;
    result[6] += 13819;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6485074;
    result[1] += 124873;
    result[2] += 258070;
    result[3] += 25890347;
    result[4] += 20887100;
    result[5] += 41624;
    result[6] += 0;
  } else {
    result[0] += 48741636;
    result[1] += 30429;
    result[2] += 128961;
    result[3] += 4771574;
    result[4] += 0;
    result[5] += 0;
    result[6] += 14490;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6300357;
    result[1] += 150806;
    result[2] += 150806;
    result[3] += 26265454;
    result[4] += 20802910;
    result[5] += 16756;
    result[6] += 0;
  } else {
    result[0] += 48550256;
    result[1] += 28948;
    result[2] += 130266;
    result[3] += 4970383;
    result[4] += 0;
    result[5] += 2894;
    result[6] += 4342;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 40705197;
    result[1] += 76342;
    result[2] += 167226;
    result[3] += 10106318;
    result[4] += 2599286;
    result[5] += 14541;
    result[6] += 18176;
  } else {
    result[0] += 42911180;
    result[1] += 56056;
    result[2] += 136403;
    result[3] += 7180825;
    result[4] += 3393281;
    result[5] += 5605;
    result[6] += 3737;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45039823;
    result[1] += 55128;
    result[2] += 113406;
    result[3] += 5574258;
    result[4] += 2895023;
    result[5] += 3150;
    result[6] += 6300;
  } else {
    result[0] += 32314895;
    result[1] += 0;
    result[2] += 296519;
    result[3] += 17300757;
    result[4] += 3717895;
    result[5] += 17106;
    result[6] += 39916;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45138695;
    result[1] += 58572;
    result[2] += 132975;
    result[3] += 5485220;
    result[4] += 2865295;
    result[5] += 4749;
    result[6] += 1583;
  } else {
    result[0] += 31783250;
    result[1] += 0;
    result[2] += 246425;
    result[3] += 17737014;
    result[4] += 3892398;
    result[5] += 16801;
    result[6] += 11201;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53650240;
    result[1] += 0;
    result[2] += 32756;
    result[3] += 0;
    result[4] += 4094;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 25230695;
    result[1] += 158488;
    result[2] += 264146;
    result[3] += 20289593;
    result[4] += 7675799;
    result[5] += 40398;
    result[6] += 27968;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45075869;
    result[1] += 64746;
    result[2] += 118437;
    result[3] += 5553945;
    result[4] += 2863037;
    result[5] += 4737;
    result[6] += 6316;
  } else {
    result[0] += 32083446;
    result[1] += 0;
    result[2] += 192082;
    result[3] += 17586858;
    result[4] += 3756909;
    result[5] += 39546;
    result[6] += 28247;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10749013;
    result[1] += 301482;
    result[2] += 452223;
    result[3] += 23457664;
    result[4] += 18726706;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46040789;
    result[1] += 17955;
    result[2] += 127070;
    result[3] += 6309303;
    result[4] += 1157442;
    result[5] += 16574;
    result[6] += 17955;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45031736;
    result[1] += 23895;
    result[2] += 139388;
    result[3] += 7245540;
    result[4] += 1226617;
    result[5] += 3982;
    result[6] += 15930;
  } else {
    result[0] += 4599744;
    result[1] += 421350;
    result[2] += 158006;
    result[3] += 21488881;
    result[4] += 27019108;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 1999208;
    result[1] += 104125;
    result[2] += 218663;
    result[3] += 25531564;
    result[4] += 25802290;
    result[5] += 31237;
    result[6] += 0;
  } else {
    result[0] += 47723881;
    result[1] += 37803;
    result[2] += 144214;
    result[3] += 5761589;
    result[4] += 0;
    result[5] += 1400;
    result[6] += 18201;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 11129396;
    result[1] += 326648;
    result[2] += 384979;
    result[3] += 22947090;
    result[4] += 18898976;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45992465;
    result[1] += 30364;
    result[2] += 122837;
    result[3] += 6395855;
    result[4] += 1117963;
    result[5] += 9661;
    result[6] += 17942;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53648191;
    result[1] += 0;
    result[2] += 32757;
    result[3] += 0;
    result[4] += 4094;
    result[5] += 0;
    result[6] += 2047;
  } else {
    result[0] += 25260309;
    result[1] += 105652;
    result[2] += 316957;
    result[3] += 20431361;
    result[4] += 7526198;
    result[5] += 12429;
    result[6] += 34181;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53642106;
    result[1] += 0;
    result[2] += 30671;
    result[3] += 0;
    result[4] += 14313;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24907024;
    result[1] += 112081;
    result[2] += 364265;
    result[3] += 20679057;
    result[4] += 7584188;
    result[5] += 9340;
    result[6] += 31133;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45279292;
    result[1] += 23874;
    result[2] += 151205;
    result[3] += 7007162;
    result[4] += 1218925;
    result[5] += 1326;
    result[6] += 5305;
  } else {
    result[0] += 4599721;
    result[1] += 319671;
    result[2] += 159835;
    result[3] += 21400246;
    result[4] += 27207616;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53660636;
    result[1] += 0;
    result[2] += 20349;
    result[3] += 0;
    result[4] += 6104;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24993131;
    result[1] += 103497;
    result[2] += 363810;
    result[3] += 20351415;
    result[4] += 7781146;
    result[5] += 47044;
    result[6] += 47044;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45104057;
    result[1] += 79135;
    result[2] += 139278;
    result[3] += 5588547;
    result[4] += 2771324;
    result[5] += 1582;
    result[6] += 3165;
  } else {
    result[0] += 31907360;
    result[1] += 0;
    result[2] += 291442;
    result[3] += 17727557;
    result[4] += 3727102;
    result[5] += 11209;
    result[6] += 22418;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 12535966;
    result[1] += 238286;
    result[2] += 445493;
    result[3] += 22222850;
    result[4] += 18244493;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46315939;
    result[1] += 18214;
    result[2] += 116290;
    result[3] += 6226458;
    result[4] += 987770;
    result[5] += 5604;
    result[6] += 16813;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10742068;
    result[1] += 325517;
    result[2] += 372019;
    result[3] += 22995466;
    result[4] += 19252018;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 46174322;
    result[1] += 19330;
    result[2] += 124269;
    result[3] += 6283883;
    result[4] += 1059050;
    result[5] += 8284;
    result[6] += 17950;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
    result[0] += 40606878;
    result[1] += 65983;
    result[2] += 201831;
    result[3] += 10359372;
    result[4] += 2410329;
    result[5] += 34932;
    result[6] += 7762;
  } else {
    result[0] += 43024952;
    result[1] += 43430;
    result[2] += 135719;
    result[3] += 7147903;
    result[4] += 3324227;
    result[5] += 3619;
    result[6] += 7238;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6285317;
    result[1] += 98208;
    result[2] += 253704;
    result[3] += 26843545;
    result[4] += 20181763;
    result[5] += 24552;
    result[6] += 0;
  } else {
    result[0] += 48542199;
    result[1] += 49414;
    result[2] += 130802;
    result[3] += 4939968;
    result[4] += 0;
    result[5] += 2906;
    result[6] += 21800;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2181989;
    result[1] += 172529;
    result[2] += 192826;
    result[3] += 25686583;
    result[4] += 25392268;
    result[5] += 60892;
    result[6] += 0;
  } else {
    result[0] += 47680487;
    result[1] += 43556;
    result[2] += 110999;
    result[3] += 5832376;
    result[4] += 0;
    result[5] += 1405;
    result[6] += 18265;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45090329;
    result[1] += 74273;
    result[2] += 120101;
    result[3] += 5542066;
    result[4] += 2847677;
    result[5] += 9481;
    result[6] += 3160;
  } else {
    result[0] += 32261844;
    result[1] += 0;
    result[2] += 219775;
    result[3] += 17412943;
    result[4] += 3758716;
    result[5] += 16905;
    result[6] += 16905;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 45161741;
    result[1] += 13300;
    result[2] += 144970;
    result[3] += 7132831;
    result[4] += 1207646;
    result[5] += 6650;
    result[6] += 19950;
  } else {
    result[0] += 4830810;
    result[1] += 394002;
    result[2] += 222696;
    result[3] += 22766478;
    result[4] += 25473102;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6344454;
    result[1] += 160512;
    result[2] += 261888;
    result[3] += 26307097;
    result[4] += 20554003;
    result[5] += 59136;
    result[6] += 0;
  } else {
    result[0] += 48596609;
    result[1] += 47696;
    result[2] += 132971;
    result[3] += 4896806;
    result[4] += 0;
    result[5] += 0;
    result[6] += 13008;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53639833;
    result[1] += 0;
    result[2] += 39039;
    result[3] += 0;
    result[4] += 4109;
    result[5] += 0;
    result[6] += 4109;
  } else {
    result[0] += 24842371;
    result[1] += 105080;
    result[2] += 330695;
    result[3] += 20530962;
    result[4] += 7840892;
    result[5] += 9271;
    result[6] += 27815;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53652336;
    result[1] += 0;
    result[2] += 28621;
    result[3] += 0;
    result[4] += 4088;
    result[5] += 0;
    result[6] += 2044;
  } else {
    result[0] += 25141590;
    result[1] += 102771;
    result[2] += 373713;
    result[3] += 20526226;
    result[4] += 7483617;
    result[5] += 18685;
    result[6] += 40485;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53633947;
    result[1] += 0;
    result[2] += 47011;
    result[3] += 0;
    result[4] += 4087;
    result[5] += 0;
    result[6] += 2043;
  } else {
    result[0] += 25046084;
    result[1] += 130837;
    result[2] += 323979;
    result[3] += 20687940;
    result[4] += 7473327;
    result[5] += 6230;
    result[6] += 18691;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53652366;
    result[1] += 0;
    result[2] += 28597;
    result[3] += 0;
    result[4] += 4085;
    result[5] += 0;
    result[6] += 2042;
  } else {
    result[0] += 24989739;
    result[1] += 134085;
    result[2] += 258815;
    result[3] += 20390305;
    result[4] += 7854898;
    result[5] += 18709;
    result[6] += 40537;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53654209;
    result[1] += 0;
    result[2] += 28771;
    result[3] += 0;
    result[4] += 4110;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24696185;
    result[1] += 108140;
    result[2] += 358408;
    result[3] += 20664092;
    result[4] += 7801559;
    result[5] += 24717;
    result[6] += 33986;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 10723640;
    result[1] += 298516;
    result[2] += 287035;
    result[3] += 23008753;
    result[4] += 19369145;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 45986096;
    result[1] += 19359;
    result[2] += 117540;
    result[3] += 6362412;
    result[4] += 1185087;
    result[5] += 2765;
    result[6] += 13828;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6393130;
    result[1] += 143570;
    result[2] += 228024;
    result[3] += 27008229;
    result[4] += 19897245;
    result[5] += 16890;
    result[6] += 0;
  } else {
    result[0] += 48542855;
    result[1] += 44807;
    result[2] += 161886;
    result[3] += 4921641;
    result[4] += 0;
    result[5] += 1445;
    result[6] += 14454;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 6628245;
    result[1] += 93236;
    result[2] += 161044;
    result[3] += 26674025;
    result[4] += 20088160;
    result[5] += 42380;
    result[6] += 0;
  } else {
    result[0] += 48504147;
    result[1] += 39002;
    result[2] += 138674;
    result[3] += 4995155;
    result[4] += 0;
    result[5] += 1444;
    result[6] += 8667;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53664608;
    result[1] += 0;
    result[2] += 22482;
    result[3] += 0;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 25187728;
    result[1] += 84114;
    result[2] += 311536;
    result[3] += 20471065;
    result[4] += 7579683;
    result[5] += 21807;
    result[6] += 31153;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    result[0] += 48640946;
    result[1] += 22093;
    result[2] += 113413;
    result[3] += 4754511;
    result[4] += 139925;
    result[5] += 1472;
    result[6] += 14728;
  } else {
    result[0] += 9831210;
    result[1] += 129458;
    result[2] += 388374;
    result[3] += 25328122;
    result[4] += 17949003;
    result[5] += 60921;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 53627887;
    result[1] += 0;
    result[2] += 46954;
    result[3] += 0;
    result[4] += 12248;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 24836755;
    result[1] += 112355;
    result[2] += 368275;
    result[3] += 20523561;
    result[4] += 7796207;
    result[5] += 24967;
    result[6] += 24967;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 41180147;
    result[1] += 32999;
    result[2] += 175999;
    result[3] += 9962288;
    result[4] += 2306322;
    result[5] += 10999;
    result[6] += 18333;
  } else {
    result[0] += 43090318;
    result[1] += 53951;
    result[2] += 126506;
    result[3] += 7037849;
    result[4] += 3369163;
    result[5] += 3720;
    result[6] += 5581;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    result[0] += 2158746;
    result[1] += 177288;
    result[2] += 271146;
    result[3] += 25988389;
    result[4] += 25028946;
    result[5] += 62572;
    result[6] += 0;
  } else {
    result[0] += 47863710;
    result[1] += 40595;
    result[2] += 137185;
    result[3] += 5628801;
    result[4] += 0;
    result[5] += 2799;
    result[6] += 13998;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    result[0] += 3641731;
    result[1] += 113804;
    result[2] += 218124;
    result[3] += 26364619;
    result[4] += 23263457;
    result[5] += 85353;
    result[6] += 0;
  } else {
    result[0] += 47983396;
    result[1] += 29795;
    result[2] += 150395;
    result[3] += 5516409;
    result[4] += 0;
    result[5] += 0;
    result[6] += 7094;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45054285;
    result[1] += 53826;
    result[2] += 120317;
    result[3] += 5547286;
    result[4] += 2892377;
    result[5] += 9498;
    result[6] += 9498;
  } else {
    result[0] += 32515742;
    result[1] += 0;
    result[2] += 218376;
    result[3] += 17229367;
    result[4] += 3656411;
    result[5] += 5599;
    result[6] += 61593;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 45151425;
    result[1] += 58506;
    result[2] += 124919;
    result[3] += 5577119;
    result[4] += 2771956;
    result[5] += 3162;
    result[6] += 0;
  } else {
    result[0] += 32505768;
    result[1] += 0;
    result[2] += 326126;
    result[3] += 16930438;
    result[4] += 3879775;
    result[5] += 11245;
    result[6] += 33737;
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
