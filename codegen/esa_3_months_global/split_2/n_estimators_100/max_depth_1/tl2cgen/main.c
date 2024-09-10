
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
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.008307057967499394;
    result[1] += 0.9916929420325006;
  } else {
    result[0] += 0.7676100139947131;
    result[1] += 0.2323899860052869;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4679434035262256;
    result[1] += 0.5320565964737743;
  } else {
    result[0] += 0.9899888638894571;
    result[1] += 0.010011136110542941;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.800424739022753;
    result[1] += 0.19957526097724695;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 9.879470460383324e-05;
    result[1] += 0.9999012052953962;
  } else {
    result[0] += 0.7838766759681481;
    result[1] += 0.21612332403185192;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.46997372474404275;
    result[1] += 0.5300262752559572;
  } else {
    result[0] += 0.9983060679893259;
    result[1] += 0.001693932010674092;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8021210448324956;
    result[1] += 0.19787895516750442;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.060091946063438935;
    result[1] += 0.9399080539365611;
  } else {
    result[0] += 0.9351677007463357;
    result[1] += 0.06483229925366424;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.4722066307439006;
    result[1] += 0.5277933692560994;
  } else {
    result[0] += 0.9816314239828694;
    result[1] += 0.01836857601713062;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.46843446169985575;
    result[1] += 0.5315655383001442;
  } else {
    result[0] += 0.9826833559767478;
    result[1] += 0.017316644023252187;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9405189051075049;
    result[1] += 0.05948109489249504;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47212756148930207;
    result[1] += 0.5278724385106979;
  } else {
    result[0] += 0.9983125996439003;
    result[1] += 0.0016874003560996614;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3210727423429489136) ) ) {
    result[0] += 0.720956569833285;
    result[1] += 0.27904343016671496;
  } else {
    result[0] += 0.17751303052866715;
    result[1] += 0.8224869694713328;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005148005148005148;
    result[1] += 0.9948519948519948;
  } else {
    result[0] += 0.8112341455960316;
    result[1] += 0.18876585440396845;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397959737370448;
    result[1] += 0.060204026262955124;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8103947961615251;
    result[1] += 0.18960520383847493;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8037922841424663;
    result[1] += 0.19620771585753374;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.061789786155911436;
    result[1] += 0.9382102138440885;
  } else {
    result[0] += 0.9384914144120943;
    result[1] += 0.0615085855879057;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9405979623877716;
    result[1] += 0.05940203761222839;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8109132002997939;
    result[1] += 0.18908679970020612;
  }
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    result[0] += 0.008321875678413778;
    result[1] += 0.9916781243215862;
  } else {
    result[0] += 0.7563600943411714;
    result[1] += 0.24363990565882862;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.782688818326151;
    result[1] += 0.21731118167384894;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401577794208423;
    result[1] += 0.059842220579157654;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06279623108403921;
    result[1] += 0.9372037689159608;
  } else {
    result[0] += 0.9371775733379621;
    result[1] += 0.06282242666203784;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004271711354361341;
    result[1] += 0.9957282886456387;
  } else {
    result[0] += 0.8101690139191386;
    result[1] += 0.18983098608086132;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9392980163106374;
    result[1] += 0.060701983689362686;
  }
  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
    result[0] += 0.7180749162837785;
    result[1] += 0.2819250837162215;
  } else {
    result[0] += 0.0007604562737642585;
    result[1] += 0.9992395437262357;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.05990387916237556;
    result[1] += 0.9400961208376244;
  } else {
    result[0] += 0.9377836060114066;
    result[1] += 0.06221639398859331;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9393791315442983;
    result[1] += 0.0606208684557017;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8033735247356999;
    result[1] += 0.19662647526430005;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7995621306560531;
    result[1] += 0.20043786934394694;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8001064063566232;
    result[1] += 0.19989359364337678;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9394196389196083;
    result[1] += 0.06058036108039161;
  }
  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7542183792040588;
    result[1] += 0.24578162079594118;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401817811842909;
    result[1] += 0.05981821881570915;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8082749528970502;
    result[1] += 0.19172504710294985;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005707062969204841;
    result[1] += 0.9942929370307951;
  } else {
    result[0] += 0.8106446389599418;
    result[1] += 0.1893553610400582;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5099877700774562;
    result[1] += 0.49001222992254384;
  } else {
    result[0] += 0.9180084247439434;
    result[1] += 0.08199157525605662;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5079856995744846;
    result[1] += 0.49201430042551536;
  } else {
    result[0] += 0.9184841817443873;
    result[1] += 0.08151581825561276;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8109473413097942;
    result[1] += 0.18905265869020582;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.058148741816496395;
    result[1] += 0.9418512581835036;
  } else {
    result[0] += 0.9364963150733187;
    result[1] += 0.06350368492668136;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05868440786817159;
    result[1] += 0.9413155921318284;
  } else {
    result[0] += 0.9354285279447677;
    result[1] += 0.06457147205523234;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.0620248790601244;
    result[1] += 0.9379751209398756;
  } else {
    result[0] += 0.9370794916521306;
    result[1] += 0.06292050834786943;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9393782806168239;
    result[1] += 0.060621719383176044;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005785592739648327;
    result[1] += 0.9942144072603517;
  } else {
    result[0] += 0.8106163477647473;
    result[1] += 0.18938365223525264;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7988451601343267;
    result[1] += 0.20115483986567329;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.803241238599571;
    result[1] += 0.196758761400429;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9403061259213383;
    result[1] += 0.0596938740786617;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.0624229434191309;
    result[1] += 0.9375770565808691;
  } else {
    result[0] += 0.9377985108350309;
    result[1] += 0.06220148916496917;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9402757132093914;
    result[1] += 0.05972428679060865;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8108921344360374;
    result[1] += 0.1891078655639627;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9399281772081436;
    result[1] += 0.060071822791856466;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004615792062351028;
    result[1] += 0.9953842079376489;
  } else {
    result[0] += 0.8112549888613935;
    result[1] += 0.1887450111386066;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06217340908659053;
    result[1] += 0.9378265909134095;
  } else {
    result[0] += 0.9372346855828754;
    result[1] += 0.06276531441712463;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8004628156547395;
    result[1] += 0.19953718434526047;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8094564617786176;
    result[1] += 0.19054353822138237;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.4720699045061176;
    result[1] += 0.5279300954938825;
  } else {
    result[0] += 0.9824131291420384;
    result[1] += 0.017586870857961668;
  }
  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
    result[0] += 0.7174007827341714;
    result[1] += 0.28259921726582854;
  } else {
    result[0] += 0.0005125576627370579;
    result[1] += 0.9994874423372629;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8098762251601345;
    result[1] += 0.19012377483986556;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4727236461553805;
    result[1] += 0.5272763538446196;
  } else {
    result[0] += 0.9982959090224082;
    result[1] += 0.0017040909775917833;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9406615381476116;
    result[1] += 0.05933846185238843;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8051405183540109;
    result[1] += 0.1948594816459891;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8006051771101341;
    result[1] += 0.1993948228898659;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06238808244751781;
    result[1] += 0.9376119175524822;
  } else {
    result[0] += 0.9372718059778157;
    result[1] += 0.06272819402218428;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.8019760195173841;
    result[1] += 0.19802398048261588;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.0634274408340309;
    result[1] += 0.9365725591659692;
  } else {
    result[0] += 0.9376093780382788;
    result[1] += 0.06239062196172116;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5040268720044001;
    result[1] += 0.4959731279955999;
  } else {
    result[0] += 0.9214198260575868;
    result[1] += 0.07858017394241323;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47408504910153676;
    result[1] += 0.5259149508984633;
  } else {
    result[0] += 0.9982066122439474;
    result[1] += 0.0017933877560526836;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005808399251022202;
    result[1] += 0.9941916007489778;
  } else {
    result[0] += 0.8111578663192305;
    result[1] += 0.18884213368076952;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8027893646769431;
    result[1] += 0.19721063532305694;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8040668439572181;
    result[1] += 0.195933156042782;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06291686460807601;
    result[1] += 0.937083135391924;
  } else {
    result[0] += 0.9379581060895543;
    result[1] += 0.062041893910445685;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4732640648758236;
    result[1] += 0.5267359351241764;
  } else {
    result[0] += 0.9982108002602472;
    result[1] += 0.0017891997397527651;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05823197011780481;
    result[1] += 0.9417680298821952;
  } else {
    result[0] += 0.9341415260988535;
    result[1] += 0.06585847390114648;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05868808049535604;
    result[1] += 0.941311919504644;
  } else {
    result[0] += 0.9358503589177251;
    result[1] += 0.06414964108227499;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005131936731645667;
    result[1] += 0.9948680632683543;
  } else {
    result[0] += 0.810782110778004;
    result[1] += 0.18921788922199603;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4714532637122974;
    result[1] += 0.5285467362877025;
  } else {
    result[0] += 0.9982802096285021;
    result[1] += 0.0017197903714979606;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8110436999912073;
    result[1] += 0.18895630000879277;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8100077956941978;
    result[1] += 0.18999220430580221;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05927239093571759;
    result[1] += 0.9407276090642824;
  } else {
    result[0] += 0.9348974174639164;
    result[1] += 0.06510258253608361;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8118365864517187;
    result[1] += 0.18816341354828128;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8091096749979475;
    result[1] += 0.19089032500205252;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9404688359210053;
    result[1] += 0.05953116407899471;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005649289099526066;
    result[1] += 0.9943507109004739;
  } else {
    result[0] += 0.8110468020095778;
    result[1] += 0.18895319799042218;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.0004503924848796809;
    result[1] += 0.9995496075151203;
  } else {
    result[0] += 0.7639074567170115;
    result[1] += 0.23609254328298843;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.46973721125970264;
    result[1] += 0.5302627887402974;
  } else {
    result[0] += 0.9827736249023764;
    result[1] += 0.017226375097623564;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.803274210795481;
    result[1] += 0.19672578920451902;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8063834890400782;
    result[1] += 0.19361651095992186;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05816760547189332;
    result[1] += 0.9418323945281066;
  } else {
    result[0] += 0.93612069323802;
    result[1] += 0.06387930676197996;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.8014478005458162;
    result[1] += 0.19855219945418381;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.0037167695602872623;
    result[1] += 0.9962832304397128;
  } else {
    result[0] += 0.7651616616672017;
    result[1] += 0.23483833833279832;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9403541662421291;
    result[1] += 0.05964583375787093;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8104255967020355;
    result[1] += 0.18957440329796454;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4737670656569769;
    result[1] += 0.5262329343430231;
  } else {
    result[0] += 0.9982331950111006;
    result[1] += 0.0017668049888993503;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4700243794326241;
    result[1] += 0.5299756205673759;
  } else {
    result[0] += 0.9903933297081747;
    result[1] += 0.009606670291825267;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8011628921126842;
    result[1] += 0.19883710788731576;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8107008174642213;
    result[1] += 0.1892991825357787;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7991940046881676;
    result[1] += 0.20080599531183244;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8042880160073522;
    result[1] += 0.19571198399264778;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8071061843640607;
    result[1] += 0.19289381563593933;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8026965273053913;
    result[1] += 0.19730347269460868;
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
