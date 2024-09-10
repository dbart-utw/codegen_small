
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7765103768063747;
    result[1] += 0.22348962319362536;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06196121714970789;
    result[1] += 0.9380387828502921;
  } else {
    result[0] += 0.9384977536438188;
    result[1] += 0.06150224635618112;
  }
  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5fc90))) ) ) {
    result[0] += 0.7183716259348256;
    result[1] += 0.2816283740651744;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 0.010270504845942427;
    result[1] += 0.9897294951540576;
  } else {
    result[0] += 0.756066194577911;
    result[1] += 0.24393380542208895;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8039312467336391;
    result[1] += 0.19606875326636083;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05748850806839382;
    result[1] += 0.9425114919316062;
  } else {
    result[0] += 0.934998997004849;
    result[1] += 0.06500100299515103;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.004385690119666687;
    result[1] += 0.9956143098803333;
  } else {
    result[0] += 0.7659566221296906;
    result[1] += 0.23404337787030935;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.799588306041262;
    result[1] += 0.2004116939587381;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8080548615296396;
    result[1] += 0.19194513847036038;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47480238047862816;
    result[1] += 0.5251976195213719;
  } else {
    result[0] += 0.9984068655952741;
    result[1] += 0.0015931344047259112;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397108791425789;
    result[1] += 0.060289120857421066;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7993589298525771;
    result[1] += 0.200641070147423;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8006890701016292;
    result[1] += 0.19931092989837082;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7969481803568744;
    result[1] += 0.2030518196431256;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8032549623644977;
    result[1] += 0.19674503763550233;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.00860280658938377;
    result[1] += 0.9913971934106163;
  } else {
    result[0] += 0.766914580673808;
    result[1] += 0.23308541932619192;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.009304905102292335;
    result[1] += 0.9906950948977077;
  } else {
    result[0] += 0.7667524343987756;
    result[1] += 0.23324756560122442;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.004535288270377733;
    result[1] += 0.9954647117296223;
  } else {
    result[0] += 0.7658258710878624;
    result[1] += 0.2341741289121376;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.809895177214374;
    result[1] += 0.190104822785626;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.49993108336943254;
    result[1] += 0.5000689166305675;
  } else {
    result[0] += 0.9201372804985893;
    result[1] += 0.0798627195014107;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06264297697117584;
    result[1] += 0.9373570230288242;
  } else {
    result[0] += 0.9367748292899573;
    result[1] += 0.06322517071004274;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47228149829738936;
    result[1] += 0.5277185017026107;
  } else {
    result[0] += 0.9982645918898594;
    result[1] += 0.001735408110140568;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8094101922253943;
    result[1] += 0.1905898077746056;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7999282897095733;
    result[1] += 0.20007171029042667;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.797881872785187;
    result[1] += 0.202118127214813;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9406396112513867;
    result[1] += 0.05936038874861331;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.940281873904239;
    result[1] += 0.05971812609576102;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.06021862936207621;
    result[1] += 0.9397813706379238;
  } else {
    result[0] += 0.9354382461832855;
    result[1] += 0.0645617538167145;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8005500632688318;
    result[1] += 0.19944993673116812;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.5087935672457828;
    result[1] += 0.4912064327542171;
  } else {
    result[0] += 0.9182258219624521;
    result[1] += 0.08177417803754795;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.810954829189455;
    result[1] += 0.18904517081054492;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7988584514494891;
    result[1] += 0.20114154855051092;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.004780876494023904;
    result[1] += 0.9952191235059761;
  } else {
    result[0] += 0.8125319467700713;
    result[1] += 0.18746805322992863;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05799850548945221;
    result[1] += 0.9420014945105478;
  } else {
    result[0] += 0.9358033926951077;
    result[1] += 0.06419660730489232;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.0587428527275537;
    result[1] += 0.9412571472724462;
  } else {
    result[0] += 0.935548925354992;
    result[1] += 0.06445107464500802;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.062444794346941127;
    result[1] += 0.9375552056530588;
  } else {
    result[0] += 0.9372101715092538;
    result[1] += 0.06278982849074626;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.5015688120171;
    result[1] += 0.4984311879828999;
  } else {
    result[0] += 0.9217421646999112;
    result[1] += 0.07825783530008883;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.057189918026507316;
    result[1] += 0.9428100819734927;
  } else {
    result[0] += 0.935814836367667;
    result[1] += 0.06418516363233297;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.057028514257128564;
    result[1] += 0.9429714857428715;
  } else {
    result[0] += 0.9354640144965626;
    result[1] += 0.0645359855034374;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.062183273004381784;
    result[1] += 0.9378167269956182;
  } else {
    result[0] += 0.9367599083778718;
    result[1] += 0.06324009162212814;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.802515562426983;
    result[1] += 0.19748443757301698;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47159958440619776;
    result[1] += 0.5284004155938022;
  } else {
    result[0] += 0.9981484716157205;
    result[1] += 0.001851528384279476;
  }
  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
    result[0] += 0.0012450851900393184;
    result[1] += 0.9987549148099607;
  } else {
    result[0] += 0.7624048538334253;
    result[1] += 0.23759514616657473;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.79970506592644;
    result[1] += 0.20029493407356003;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8004093692360176;
    result[1] += 0.19959063076398245;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005381096975054772;
    result[1] += 0.9946189030249453;
  } else {
    result[0] += 0.8112206305741074;
    result[1] += 0.1887793694258926;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.79925386083637;
    result[1] += 0.20074613916363004;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8063664505577945;
    result[1] += 0.19363354944220548;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06140584058026051;
    result[1] += 0.9385941594197394;
  } else {
    result[0] += 0.9381141673732053;
    result[1] += 0.06188583262679472;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
    result[0] += 0.7284856142454841;
    result[1] += 0.271514385754516;
  } else {
    result[0] += 0.22785845776232358;
    result[1] += 0.7721415422376764;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05805120690984807;
    result[1] += 0.9419487930901519;
  } else {
    result[0] += 0.9357255411494761;
    result[1] += 0.06427445885052387;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8090216583035207;
    result[1] += 0.1909783416964793;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8098407137710238;
    result[1] += 0.19015928622897615;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8107541121938928;
    result[1] += 0.1892458878061072;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7975460122699386;
    result[1] += 0.20245398773006135;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8048073684332787;
    result[1] += 0.19519263156672126;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7785162383157848;
    result[1] += 0.22148376168421527;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7783664434356601;
    result[1] += 0.22163355656433997;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06209543449619064;
    result[1] += 0.9379045655038094;
  } else {
    result[0] += 0.9375680530414942;
    result[1] += 0.06243194695850585;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06207435951240915;
    result[1] += 0.9379256404875909;
  } else {
    result[0] += 0.9365889870194742;
    result[1] += 0.06341101298052575;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.800512277902089;
    result[1] += 0.199487722097911;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8117438807089937;
    result[1] += 0.18825611929100627;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005032541244135008;
    result[1] += 0.994967458755865;
  } else {
    result[0] += 0.8110173277220041;
    result[1] += 0.18898267227799592;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9393984747573013;
    result[1] += 0.060601525242698635;
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    result[0] += 0.007924505474562943;
    result[1] += 0.9920754945254371;
  } else {
    result[0] += 0.7667986824344967;
    result[1] += 0.23320131756550333;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9404284849268283;
    result[1] += 0.059571515073171724;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005059920106524634;
    result[1] += 0.9949400798934753;
  } else {
    result[0] += 0.8104536778740273;
    result[1] += 0.1895463221259727;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.803423272676567;
    result[1] += 0.19657672732343304;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.468283547323109;
    result[1] += 0.5317164526768909;
  } else {
    result[0] += 0.9823049510276352;
    result[1] += 0.017695048972364794;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8088529188336352;
    result[1] += 0.19114708116636475;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7992318859859681;
    result[1] += 0.20076811401403197;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7797129359032834;
    result[1] += 0.2202870640967166;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8103900524021055;
    result[1] += 0.18960994759789454;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4739488324393985;
    result[1] += 0.5260511675606016;
  } else {
    result[0] += 0.9981707246477487;
    result[1] += 0.0018292753522512822;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05696763991206079;
    result[1] += 0.9430323600879392;
  } else {
    result[0] += 0.9348195651873453;
    result[1] += 0.06518043481265462;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005553653619384534;
    result[1] += 0.9944463463806155;
  } else {
    result[0] += 0.8104550980495798;
    result[1] += 0.1895449019504202;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7988348797062372;
    result[1] += 0.20116512029376274;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8099145960004217;
    result[1] += 0.19008540399957824;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005160945026378164;
    result[1] += 0.9948390549736218;
  } else {
    result[0] += 0.8091102217110128;
    result[1] += 0.1908897782889872;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9406837897601633;
    result[1] += 0.05931621023983671;
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_2/test_data.csv", "r");
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
