
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.061079841567646447;
    result[1] += 0.9389201584323535;
  } else {
    result[0] += 0.938119379942;
    result[1] += 0.06188062005800004;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9405041171150956;
    result[1] += 0.059495882884904365;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005431067223699203;
    result[1] += 0.9945689327763008;
  } else {
    result[0] += 0.8115079598190683;
    result[1] += 0.18849204018093169;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.055920163687603754;
    result[1] += 0.9440798363123962;
  } else {
    result[0] += 0.9362573745803224;
    result[1] += 0.06374262541967753;
  }
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    result[0] += 0.007079390305569602;
    result[1] += 0.9929206096944304;
  } else {
    result[0] += 0.7558081623494256;
    result[1] += 0.2441918376505744;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7771449475194867;
    result[1] += 0.22285505248051327;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.4724608718389302;
    result[1] += 0.5275391281610698;
  } else {
    result[0] += 0.9828557378514909;
    result[1] += 0.017144262148509098;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8071983936118051;
    result[1] += 0.1928016063881949;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0.000250689395838556;
    result[1] += 0.9997493106041614;
  } else {
    result[0] += 0.784491690966226;
    result[1] += 0.21550830903377402;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.003134796238244514;
    result[1] += 0.9968652037617555;
  } else {
    result[0] += 0.7652234095565029;
    result[1] += 0.23477659044349702;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7985829549726713;
    result[1] += 0.20141704502732874;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.055692925858671714;
    result[1] += 0.9443070741413283;
  } else {
    result[0] += 0.9367860546707737;
    result[1] += 0.06321394532922635;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.006091646296511853;
    result[1] += 0.9939083537034882;
  } else {
    result[0] += 0.8114669149291223;
    result[1] += 0.18853308507087777;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.803175469037436;
    result[1] += 0.19682453096256405;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8080159665729059;
    result[1] += 0.19198403342709416;
  }
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    result[0] += 0.009203336209375898;
    result[1] += 0.9907966637906241;
  } else {
    result[0] += 0.760314696800473;
    result[1] += 0.23968530319952697;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.009569673396307958;
    result[1] += 0.990430326603692;
  } else {
    result[0] += 0.7657446372038611;
    result[1] += 0.2342553627961389;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8100289804162641;
    result[1] += 0.18997101958373583;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8080489041439153;
    result[1] += 0.19195109585608475;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.0011103853690398431;
    result[1] += 0.9988896146309602;
  } else {
    result[0] += 0.7616772413793104;
    result[1] += 0.23832275862068966;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5076761834520506;
    result[1] += 0.49232381654794943;
  } else {
    result[0] += 0.918760827255812;
    result[1] += 0.08123917274418804;
  }
  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
    result[0] += 0.7189713781560578;
    result[1] += 0.2810286218439422;
  } else {
    result[0] += 0.0007741935483870968;
    result[1] += 0.9992258064516129;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8091160577182309;
    result[1] += 0.19088394228176905;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7985384593165997;
    result[1] += 0.20146154068340025;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05478816915557445;
    result[1] += 0.9452118308444255;
  } else {
    result[0] += 0.9362970227283715;
    result[1] += 0.06370297727162856;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.46917398427863993;
    result[1] += 0.53082601572136;
  } else {
    result[0] += 0.9903773971200437;
    result[1] += 0.009622602879956322;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8040378805484546;
    result[1] += 0.19596211945154543;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9392518920094023;
    result[1] += 0.0607481079905977;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.056888187278607734;
    result[1] += 0.9431118127213922;
  } else {
    result[0] += 0.9353114454832107;
    result[1] += 0.06468855451678929;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.804363855939338;
    result[1] += 0.19563614406066202;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.008308531746031746;
    result[1] += 0.9916914682539683;
  } else {
    result[0] += 0.767840516094706;
    result[1] += 0.23215948390529395;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06299723361633121;
    result[1] += 0.9370027663836688;
  } else {
    result[0] += 0.9375698081792639;
    result[1] += 0.062430191820736065;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.061050107522789124;
    result[1] += 0.9389498924772108;
  } else {
    result[0] += 0.9380333719872511;
    result[1] += 0.061966628012748846;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.000718719372754002;
    result[1] += 0.999281280627246;
  } else {
    result[0] += 0.7632892885713498;
    result[1] += 0.23671071142865024;
  }
  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8832333683967590332) ) ) {
    result[0] += 0.013817663817663818;
    result[1] += 0.9861823361823362;
  } else {
    result[0] += 0.7559390751698444;
    result[1] += 0.2440609248301556;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.060768849773307425;
    result[1] += 0.9392311502266926;
  } else {
    result[0] += 0.9384795857454222;
    result[1] += 0.061520414254577764;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06221360257068431;
    result[1] += 0.9377863974293157;
  } else {
    result[0] += 0.9382983600408427;
    result[1] += 0.061701639959157305;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4737232685050273;
    result[1] += 0.5262767314949727;
  } else {
    result[0] += 0.9986289113788737;
    result[1] += 0.0013710886211263842;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5000491313575977;
    result[1] += 0.49995086864240235;
  } else {
    result[0] += 0.9222086252004389;
    result[1] += 0.07779137479956115;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.803102133659833;
    result[1] += 0.196897866340167;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.802817966573006;
    result[1] += 0.19718203342699409;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4738850400519593;
    result[1] += 0.5261149599480407;
  } else {
    result[0] += 0.9983431345094744;
    result[1] += 0.0016568654905255297;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06316836607809002;
    result[1] += 0.9368316339219099;
  } else {
    result[0] += 0.9373470929466965;
    result[1] += 0.06265290705330348;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8091683437075865;
    result[1] += 0.19083165629241353;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004891815616180621;
    result[1] += 0.9951081843838194;
  } else {
    result[0] += 0.8120893019972351;
    result[1] += 0.18791069800276494;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.004565630944831959;
    result[1] += 0.995434369055168;
  } else {
    result[0] += 0.7661762265612037;
    result[1] += 0.2338237734387964;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7779650542165291;
    result[1] += 0.222034945783471;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.8016642748020925;
    result[1] += 0.19833572519790751;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7986585316578447;
    result[1] += 0.20134146834215524;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06010444568631607;
    result[1] += 0.9398955543136839;
  } else {
    result[0] += 0.9374978398667284;
    result[1] += 0.06250216013327159;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47307179947258243;
    result[1] += 0.5269282005274175;
  } else {
    result[0] += 0.9983064806115229;
    result[1] += 0.0016935193884771084;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06049420494969973;
    result[1] += 0.9395057950503003;
  } else {
    result[0] += 0.938124679429419;
    result[1] += 0.061875320570580976;
  }
  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8832333683967590332) ) ) {
    result[0] += 0.01529420094880691;
    result[1] += 0.984705799051193;
  } else {
    result[0] += 0.7547427331078673;
    result[1] += 0.24525726689213262;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06353057124445624;
    result[1] += 0.9364694287555437;
  } else {
    result[0] += 0.9361187220962739;
    result[1] += 0.06388127790372607;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9399763814798224;
    result[1] += 0.06002361852017755;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.810140716619995;
    result[1] += 0.18985928338000502;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.00547966350235394;
    result[1] += 0.994520336497646;
  } else {
    result[0] += 0.811422476940567;
    result[1] += 0.18857752305943298;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.060071818772204605;
    result[1] += 0.9399281812277954;
  } else {
    result[0] += 0.9383659487122589;
    result[1] += 0.061634051287741146;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8070779190427223;
    result[1] += 0.19292208095727775;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9403288266865956;
    result[1] += 0.05967117331340444;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.8011979645000491;
    result[1] += 0.1988020354999509;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.010114550329027541;
    result[1] += 0.9898854496709725;
  } else {
    result[0] += 0.7670581965939117;
    result[1] += 0.23294180340608833;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.79979638349318;
    result[1] += 0.20020361650682;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8084761098625259;
    result[1] += 0.1915238901374741;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06085880224697705;
    result[1] += 0.939141197753023;
  } else {
    result[0] += 0.9373043146239023;
    result[1] += 0.06269568537609775;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4745152329505868;
    result[1] += 0.5254847670494132;
  } else {
    result[0] += 0.998465883337401;
    result[1] += 0.001534116662598933;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.056003541117376494;
    result[1] += 0.9439964588826235;
  } else {
    result[0] += 0.9364656740364733;
    result[1] += 0.06353432596352672;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.062322838390564066;
    result[1] += 0.9376771616094359;
  } else {
    result[0] += 0.9381228514878989;
    result[1] += 0.06187714851210111;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8008823206304603;
    result[1] += 0.1991176793695397;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06402572445154785;
    result[1] += 0.9359742755484521;
  } else {
    result[0] += 0.937355471761005;
    result[1] += 0.06264452823899502;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8073906670637632;
    result[1] += 0.1926093329362368;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005037105394701426;
    result[1] += 0.9949628946052985;
  } else {
    result[0] += 0.8098069221884107;
    result[1] += 0.19019307781158937;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.802938443670151;
    result[1] += 0.197061556329849;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05616685197254917;
    result[1] += 0.9438331480274508;
  } else {
    result[0] += 0.9366247905037606;
    result[1] += 0.06337520949623945;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.804482848609621;
    result[1] += 0.19551715139037898;
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4225954264402389526) ) ) {
    result[0] += 0.7163419207143376;
    result[1] += 0.2836580792856625;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3155513107776641846) ) ) {
    result[0] += 0.7160717521290089;
    result[1] += 0.28392824787099114;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.009419536363080312;
    result[1] += 0.9905804636369197;
  } else {
    result[0] += 0.7673671418503865;
    result[1] += 0.23263285814961351;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401851347672202;
    result[1] += 0.05981486523277974;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7988463270703174;
    result[1] += 0.20115367292968253;
  } else {
    result[0] += 0;
    result[1] += 1;
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
