
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8036765945571982;
    result[1] += 0.19632340544280175;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.4998135573262158;
    result[1] += 0.5001864426737842;
  } else {
    result[0] += 0.9219562185690741;
    result[1] += 0.07804378143092591;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8023604651162791;
    result[1] += 0.19763953488372094;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea463a6))) ) ) {
    result[0] += 0.7199454415234243;
    result[1] += 0.2800545584765757;
  } else {
    result[0] += 0.17131294964028776;
    result[1] += 0.8286870503597122;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7996046311335642;
    result[1] += 0.20039536886643583;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05602148875318853;
    result[1] += 0.9439785112468114;
  } else {
    result[0] += 0.9361240781150734;
    result[1] += 0.06387592188492666;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4736227422932416;
    result[1] += 0.5263772577067584;
  } else {
    result[0] += 0.9986411938911793;
    result[1] += 0.001358806108820626;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
    result[0] += 0.7291994560969604;
    result[1] += 0.27080054390303965;
  } else {
    result[0] += 0.2292562999385372;
    result[1] += 0.7707437000614629;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005601810996431723;
    result[1] += 0.9943981890035682;
  } else {
    result[0] += 0.8098382962750078;
    result[1] += 0.19016170372499222;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7992862587485274;
    result[1] += 0.2007137412514725;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9400527726017709;
    result[1] += 0.05994722739822913;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 9.824630348283146e-05;
    result[1] += 0.9999017536965171;
  } else {
    result[0] += 0.7826597731026146;
    result[1] += 0.2173402268973854;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005594512779246657;
    result[1] += 0.9944054872207534;
  } else {
    result[0] += 0.8119357279878918;
    result[1] += 0.1880642720121082;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 0.009420201774644463;
    result[1] += 0.9905797982253556;
  } else {
    result[0] += 0.7666041109124626;
    result[1] += 0.23339588908753733;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8014398714978246;
    result[1] += 0.19856012850217541;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05572850609170222;
    result[1] += 0.9442714939082978;
  } else {
    result[0] += 0.9359613069290489;
    result[1] += 0.06403869307095114;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005174793008279669;
    result[1] += 0.9948252069917203;
  } else {
    result[0] += 0.8118811300389507;
    result[1] += 0.18811886996104932;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 0.47208622613153356;
    result[1] += 0.5279137738684664;
  } else {
    result[0] += 0.9904200860376159;
    result[1] += 0.009579913962384081;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9389906202065998;
    result[1] += 0.06100937979340021;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7995693760570779;
    result[1] += 0.20043062394292213;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.008838151353341926;
    result[1] += 0.9911618486466581;
  } else {
    result[0] += 0.766962339196858;
    result[1] += 0.233037660803142;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.056326341585782376;
    result[1] += 0.9436736584142176;
  } else {
    result[0] += 0.935358615972419;
    result[1] += 0.06464138402758106;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0.00019904458598726116;
    result[1] += 0.9998009554140127;
  } else {
    result[0] += 0.7829018950040801;
    result[1] += 0.21709810499591986;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.006055263863871537;
    result[1] += 0.9939447361361284;
  } else {
    result[0] += 0.8105087788252272;
    result[1] += 0.18949122117477282;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05706914145984558;
    result[1] += 0.9429308585401545;
  } else {
    result[0] += 0.9365799354182944;
    result[1] += 0.06342006458170554;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9406121019671306;
    result[1] += 0.059387898032869375;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.777387344334186;
    result[1] += 0.22261265566581395;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.060905147100611894;
    result[1] += 0.9390948528993881;
  } else {
    result[0] += 0.9378464663045217;
    result[1] += 0.06215353369547829;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05713130379527468;
    result[1] += 0.9428686962047254;
  } else {
    result[0] += 0.934956819957546;
    result[1] += 0.06504318004245403;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.5093636602426282;
    result[1] += 0.49063633975737175;
  } else {
    result[0] += 0.919195043137924;
    result[1] += 0.08080495686207595;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8049414975466713;
    result[1] += 0.19505850245332867;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8035117056856187;
    result[1] += 0.19648829431438128;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.0614289780814119;
    result[1] += 0.9385710219185881;
  } else {
    result[0] += 0.9386508184756542;
    result[1] += 0.06134918152434574;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.0050115797866281935;
    result[1] += 0.9949884202133719;
  } else {
    result[0] += 0.8090658614389529;
    result[1] += 0.1909341385610471;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0.0003496678155752036;
    result[1] += 0.9996503321844248;
  } else {
    result[0] += 0.78437869956554;
    result[1] += 0.21562130043445998;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.00853398354160317;
    result[1] += 0.9914660164583968;
  } else {
    result[0] += 0.7665343731786517;
    result[1] += 0.23346562682134828;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0.00019899507487189692;
    result[1] += 0.9998010049251281;
  } else {
    result[0] += 0.7843068361489071;
    result[1] += 0.21569316385109288;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9403691819248746;
    result[1] += 0.05963081807512533;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.010290334435869165;
    result[1] += 0.9897096655641309;
  } else {
    result[0] += 0.7670861213755451;
    result[1] += 0.23291387862445487;
  }
  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
    result[0] += 0.0011755485893416929;
    result[1] += 0.9988244514106583;
  } else {
    result[0] += 0.7628056585451978;
    result[1] += 0.23719434145480225;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9387670722201511;
    result[1] += 0.06123292777984885;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06278103477716432;
    result[1] += 0.9372189652228357;
  } else {
    result[0] += 0.9371928287905014;
    result[1] += 0.06280717120949858;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9398976547581024;
    result[1] += 0.06010234524189767;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.5046555847414436;
    result[1] += 0.4953444152585565;
  } else {
    result[0] += 0.9213811196208691;
    result[1] += 0.07861888037913088;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8014018284213157;
    result[1] += 0.1985981715786843;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9415398594949412;
    result[1] += 0.058460140505058725;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8007486655729371;
    result[1] += 0.1992513344270629;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8083552558665865;
    result[1] += 0.19164474413341345;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8107640822163483;
    result[1] += 0.18923591778365167;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8095429801683849;
    result[1] += 0.19045701983161506;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8069449221961159;
    result[1] += 0.19305507780388406;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8035035512106664;
    result[1] += 0.1964964487893336;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005018387986515477;
    result[1] += 0.9949816120134846;
  } else {
    result[0] += 0.8111653447223917;
    result[1] += 0.1888346552776083;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8087417976321136;
    result[1] += 0.1912582023678864;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.009208103130755065;
    result[1] += 0.990791896869245;
  } else {
    result[0] += 0.7659954512675431;
    result[1] += 0.23400454873245688;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0.000149655791679138;
    result[1] += 0.9998503442083209;
  } else {
    result[0] += 0.7853881278538812;
    result[1] += 0.2146118721461187;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9393070846888945;
    result[1] += 0.06069291531110552;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7983778592833424;
    result[1] += 0.2016221407166576;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9391923150189131;
    result[1] += 0.06080768498108689;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.0610542789525918;
    result[1] += 0.9389457210474081;
  } else {
    result[0] += 0.937009239477262;
    result[1] += 0.062990760522738;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8006616847511742;
    result[1] += 0.19933831524882586;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9390041493775934;
    result[1] += 0.06099585062240664;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06301043448183094;
    result[1] += 0.936989565518169;
  } else {
    result[0] += 0.9381750749026093;
    result[1] += 0.06182492509739069;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8001986693771946;
    result[1] += 0.1998013306228054;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7992147806004619;
    result[1] += 0.2007852193995381;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7993791297410728;
    result[1] += 0.20062087025892716;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8077443354751437;
    result[1] += 0.19225566452485626;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.004398642704536886;
    result[1] += 0.9956013572954631;
  } else {
    result[0] += 0.7652591255826312;
    result[1] += 0.23474087441736877;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05877504073612576;
    result[1] += 0.9412249592638743;
  } else {
    result[0] += 0.9367083347761349;
    result[1] += 0.06329166522386509;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9394083612654079;
    result[1] += 0.060591638734592036;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.055815656127776815;
    result[1] += 0.9441843438722232;
  } else {
    result[0] += 0.9355509930387054;
    result[1] += 0.06444900696129464;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8034858488923959;
    result[1] += 0.19651415110760412;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.00642216032188177;
    result[1] += 0.9935778396781182;
  } else {
    result[0] += 0.8103413936923005;
    result[1] += 0.1896586063076995;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.062055283188035326;
    result[1] += 0.9379447168119647;
  } else {
    result[0] += 0.9371162558363801;
    result[1] += 0.06288374416361985;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06372297335843459;
    result[1] += 0.9362770266415654;
  } else {
    result[0] += 0.9379397525925;
    result[1] += 0.06206024740750002;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.056638739816995486;
    result[1] += 0.9433612601830045;
  } else {
    result[0] += 0.9365285510990757;
    result[1] += 0.06347144890092431;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 4.9785920541670816e-05;
    result[1] += 0.9999502140794583;
  } else {
    result[0] += 0.7835148520461938;
    result[1] += 0.21648514795380622;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8085208094069363;
    result[1] += 0.19147919059306373;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06180100269957578;
    result[1] += 0.9381989973004242;
  } else {
    result[0] += 0.9371181755355908;
    result[1] += 0.06288182446440913;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8075566250423447;
    result[1] += 0.19244337495765534;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 4.964750273061265e-05;
    result[1] += 0.9999503524972694;
  } else {
    result[0] += 0.7844664376650908;
    result[1] += 0.21553356233490914;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06238955051863235;
    result[1] += 0.9376104494813676;
  } else {
    result[0] += 0.9376608996539793;
    result[1] += 0.06233910034602076;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8109448071355736;
    result[1] += 0.18905519286442646;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005151688609044075;
    result[1] += 0.994848311390956;
  } else {
    result[0] += 0.8105133397904376;
    result[1] += 0.1894866602095624;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8003087115628089;
    result[1] += 0.19969128843719108;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 9.98302885095338e-05;
    result[1] += 0.9999001697114904;
  } else {
    result[0] += 0.7863884073734181;
    result[1] += 0.21361159262658191;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8093898251545765;
    result[1] += 0.19061017484542353;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8031899445883623;
    result[1] += 0.1968100554116376;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.810869577958423;
    result[1] += 0.18913042204157704;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7998889332384638;
    result[1] += 0.2001110667615362;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 0.009169298032547972;
    result[1] += 0.990830701967452;
  } else {
    result[0] += 0.7667858650023321;
    result[1] += 0.23321413499766785;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.009370816599732263;
    result[1] += 0.9906291834002677;
  } else {
    result[0] += 0.7668742991017399;
    result[1] += 0.2331257008982601;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9391160716713342;
    result[1] += 0.060883928328665814;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9404266583407429;
    result[1] += 0.05957334165925705;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8002301189911768;
    result[1] += 0.19976988100882315;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.00519222693085939;
    result[1] += 0.9948077730691406;
  } else {
    result[0] += 0.8097518885699695;
    result[1] += 0.19024811143003045;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8075026582382016;
    result[1] += 0.1924973417617985;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9396182049243273;
    result[1] += 0.06038179507567263;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8027779067607727;
    result[1] += 0.19722209323922735;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8004174472120077;
    result[1] += 0.19958255278799233;
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_0/test_data.csv", "r");
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
