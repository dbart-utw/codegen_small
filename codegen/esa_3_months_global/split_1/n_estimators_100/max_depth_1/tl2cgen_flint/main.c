
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
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8002185804989187;
    result[1] += 0.19978141950108133;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8026571519740087;
    result[1] += 0.19734284802599136;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.47245738902416184;
    result[1] += 0.5275426109758382;
  } else {
    result[0] += 0.9823123190020049;
    result[1] += 0.0176876809979951;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7993985658107795;
    result[1] += 0.20060143418922044;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8089729944679009;
    result[1] += 0.19102700553209903;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8109611825614356;
    result[1] += 0.18903881743856443;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06083866922536148;
    result[1] += 0.9391613307746385;
  } else {
    result[0] += 0.9382473302809023;
    result[1] += 0.06175266971909761;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8110075064508562;
    result[1] += 0.1889924935491438;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4729610853655219;
    result[1] += 0.5270389146344782;
  } else {
    result[0] += 0.99834285515627;
    result[1] += 0.0016571448437300825;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8024787436695628;
    result[1] += 0.1975212563304372;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9408634667790229;
    result[1] += 0.05913653322097709;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7995799753539258;
    result[1] += 0.20042002464607428;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4745584924086918;
    result[1] += 0.5254415075913083;
  } else {
    result[0] += 0.9983366870994382;
    result[1] += 0.0016633129005618043;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.0558964396314605;
    result[1] += 0.9441035603685395;
  } else {
    result[0] += 0.9362320244032344;
    result[1] += 0.0637679755967656;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8057352735086654;
    result[1] += 0.1942647264913346;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8001144052372176;
    result[1] += 0.19988559476278248;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 0.4721434881837591;
    result[1] += 0.5278565118162409;
  } else {
    result[0] += 0.9906935469190862;
    result[1] += 0.009306453080913808;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8074939621276646;
    result[1] += 0.19250603787233547;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8093347155600068;
    result[1] += 0.1906652844399932;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9392099741275695;
    result[1] += 0.060790025872430584;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47385224847147356;
    result[1] += 0.5261477515285264;
  } else {
    result[0] += 0.998662728499;
    result[1] += 0.0013372715010000465;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05825411211168746;
    result[1] += 0.9417458878883126;
  } else {
    result[0] += 0.9361165437695662;
    result[1] += 0.06388345623043379;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.004327918208618203;
    result[1] += 0.9956720817913818;
  } else {
    result[0] += 0.7656698981823417;
    result[1] += 0.23433010181765837;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 0.008929867866995789;
    result[1] += 0.9910701321330042;
  } else {
    result[0] += 0.7560918232249735;
    result[1] += 0.24390817677502655;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7981170942841602;
    result[1] += 0.20188290571583978;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8024138071160287;
    result[1] += 0.19758619288397122;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9396468024143995;
    result[1] += 0.06035319758560051;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
    result[0] += 0.7234277288603518;
    result[1] += 0.2765722711396482;
  } else {
    result[0] += 0.03862094951017332;
    result[1] += 0.9613790504898266;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005380447225826147;
    result[1] += 0.9946195527741738;
  } else {
    result[0] += 0.8120736818624746;
    result[1] += 0.1879263181375254;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8029474270982128;
    result[1] += 0.19705257290178727;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8034894665287767;
    result[1] += 0.19651053347122324;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7981792344928775;
    result[1] += 0.20182076550712247;
  }
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
    result[0] += 0.7169076261470865;
    result[1] += 0.2830923738529136;
  } else {
    result[0] += 0.000791765637371338;
    result[1] += 0.9992082343626286;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0.0001002707309736288;
    result[1] += 0.9998997292690264;
  } else {
    result[0] += 0.7841337606305276;
    result[1] += 0.2158662393694724;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8027237376702336;
    result[1] += 0.1972762623297664;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.799064664192478;
    result[1] += 0.200935335807522;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8097877676342713;
    result[1] += 0.19021223236572876;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.056945725707257075;
    result[1] += 0.9430542742927429;
  } else {
    result[0] += 0.9350298904018598;
    result[1] += 0.06497010959814015;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8037506971556051;
    result[1] += 0.19624930284439487;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8032605162967777;
    result[1] += 0.19673948370322222;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4729172892837413;
    result[1] += 0.5270827107162587;
  } else {
    result[0] += 0.9983863290727777;
    result[1] += 0.0016136709272222803;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7781706994318278;
    result[1] += 0.2218293005681722;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005016658369394554;
    result[1] += 0.9949833416306054;
  } else {
    result[0] += 0.8134786766560866;
    result[1] += 0.18652132334391336;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8002610061440384;
    result[1] += 0.19973899385596156;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7990508341329757;
    result[1] += 0.2009491658670243;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8089015351108301;
    result[1] += 0.19109846488916993;
  }
  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
    result[0] += 0.0009123492994460736;
    result[1] += 0.9990876507005539;
  } else {
    result[0] += 0.7646442071572441;
    result[1] += 0.23535579284275585;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.8001456807395032;
    result[1] += 0.19985431926049682;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.00527684307127562;
    result[1] += 0.9947231569287244;
  } else {
    result[0] += 0.8106544293695132;
    result[1] += 0.18934557063048682;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0.0002491156394798465;
    result[1] += 0.9997508843605202;
  } else {
    result[0] += 0.7823433755078221;
    result[1] += 0.21765662449217799;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4726970969409503;
    result[1] += 0.5273029030590497;
  } else {
    result[0] += 0.998389283520864;
    result[1] += 0.001610716479136007;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.061210180219447026;
    result[1] += 0.938789819780553;
  } else {
    result[0] += 0.9377847014069031;
    result[1] += 0.06221529859309693;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
    result[0] += 0.7291445825704282;
    result[1] += 0.2708554174295718;
  } else {
    result[0] += 0.2331696337221199;
    result[1] += 0.76683036627788;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8072584600294261;
    result[1] += 0.1927415399705738;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47547803174545883;
    result[1] += 0.5245219682545412;
  } else {
    result[0] += 0.9984721428488121;
    result[1] += 0.0015278571511878798;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05817992358457798;
    result[1] += 0.941820076415422;
  } else {
    result[0] += 0.9352416089762191;
    result[1] += 0.0647583910237809;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8043238409365419;
    result[1] += 0.19567615906345814;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8098188583865759;
    result[1] += 0.19018114161342414;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8039959182726872;
    result[1] += 0.1960040817273128;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7992590448625181;
    result[1] += 0.2007409551374819;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8082416077661304;
    result[1] += 0.19175839223386962;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8028030003947888;
    result[1] += 0.1971969996052112;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.057426804281638356;
    result[1] += 0.9425731957183616;
  } else {
    result[0] += 0.9358376577038459;
    result[1] += 0.06416234229615414;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05658813095284001;
    result[1] += 0.94341186904716;
  } else {
    result[0] += 0.9357195184320013;
    result[1] += 0.06428048156799868;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 0.003267152550892184;
    result[1] += 0.9967328474491078;
  } else {
    result[0] += 0.7658322446358584;
    result[1] += 0.23416775536414164;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 0.4715792774017447;
    result[1] += 0.5284207225982553;
  } else {
    result[0] += 0.9907396899611884;
    result[1] += 0.009260310038811594;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 0.004209600402111083;
    result[1] += 0.995790399597889;
  } else {
    result[0] += 0.7655111711432431;
    result[1] += 0.23448882885675693;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8021586491034642;
    result[1] += 0.1978413508965357;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.4731482344172179;
    result[1] += 0.5268517655827821;
  } else {
    result[0] += 0.9818894990474056;
    result[1] += 0.018110500952594418;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005090824945042231;
    result[1] += 0.9949091750549578;
  } else {
    result[0] += 0.8114234810790536;
    result[1] += 0.18857651892094637;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8051923177378071;
    result[1] += 0.1948076822621929;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.7995335573181855;
    result[1] += 0.20046644268181452;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005076532574417352;
    result[1] += 0.9949234674255827;
  } else {
    result[0] += 0.8113427690287175;
    result[1] += 0.1886572309712825;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.004620613281399168;
    result[1] += 0.9953793867186008;
  } else {
    result[0] += 0.8122178983759164;
    result[1] += 0.18778210162408362;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    result[0] += 0.469700587803086;
    result[1] += 0.530299412196914;
  } else {
    result[0] += 0.9903284671532847;
    result[1] += 0.009671532846715328;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06190183341661221;
    result[1] += 0.9380981665833877;
  } else {
    result[0] += 0.9383917080663687;
    result[1] += 0.06160829193363132;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.807588582102621;
    result[1] += 0.19241141789737903;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 0.003612581750233572;
    result[1] += 0.9963874182497664;
  } else {
    result[0] += 0.7677072657267112;
    result[1] += 0.23229273427328884;
  }
  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
    result[0] += 0.04384105960264901;
    result[1] += 0.9561589403973509;
  } else {
    result[0] += 0.7583379257136559;
    result[1] += 0.2416620742863441;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
    result[0] += 0.7216585911488143;
    result[1] += 0.2783414088511857;
  } else {
    result[0] += 0.036443426826941426;
    result[1] += 0.9635565731730585;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8004228622924682;
    result[1] += 0.1995771377075318;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06229795002472141;
    result[1] += 0.9377020499752786;
  } else {
    result[0] += 0.937801269673691;
    result[1] += 0.06219873032630892;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8051211347584023;
    result[1] += 0.19487886524159767;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.8002744496592442;
    result[1] += 0.1997255503407558;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05755630717195787;
    result[1] += 0.9424436928280421;
  } else {
    result[0] += 0.9361490133126678;
    result[1] += 0.0638509866873322;
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7998289827942825;
    result[1] += 0.20017101720571753;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.0059974023989609595;
    result[1] += 0.994002597601039;
  } else {
    result[0] += 0.8104788064466903;
    result[1] += 0.18952119355330962;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397142391038364;
    result[1] += 0.060285760896163575;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005269790353992439;
    result[1] += 0.9947302096460076;
  } else {
    result[0] += 0.8117248625075569;
    result[1] += 0.18827513749244304;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8093269951292619;
    result[1] += 0.1906730048707381;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005560668814235312;
    result[1] += 0.9944393311857647;
  } else {
    result[0] += 0.8107036437436944;
    result[1] += 0.1892963562563056;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06375626331855094;
    result[1] += 0.9362437366814491;
  } else {
    result[0] += 0.9381121470744994;
    result[1] += 0.06188785292550062;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05598003455557689;
    result[1] += 0.9440199654444231;
  } else {
    result[0] += 0.9360143974527584;
    result[1] += 0.06398560254724164;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005268622851209476;
    result[1] += 0.9947313771487906;
  } else {
    result[0] += 0.8098876035577549;
    result[1] += 0.19011239644224512;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.4703511587117961;
    result[1] += 0.5296488412882039;
  } else {
    result[0] += 0.9830707604171329;
    result[1] += 0.016929239582867118;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8067970286341171;
    result[1] += 0.19320297136588296;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4737262012692656;
    result[1] += 0.5262737987307343;
  } else {
    result[0] += 0.9983885926269418;
    result[1] += 0.0016114073730581961;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8114073822794878;
    result[1] += 0.1885926177205121;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 0.0038813071240766245;
    result[1] += 0.9961186928759234;
  } else {
    result[0] += 0.7655742970108425;
    result[1] += 0.23442570298915752;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.803201976156237;
    result[1] += 0.19679802384376305;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
