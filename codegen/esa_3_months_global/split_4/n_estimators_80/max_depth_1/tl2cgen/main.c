
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
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    result[0] += 0.003921080475508807;
    result[1] += 0.9960789195244912;
  } else {
    result[0] += 0.7646833949239029;
    result[1] += 0.23531660507609714;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.056962025316455694;
    result[1] += 0.9430379746835443;
  } else {
    result[0] += 0.9369125015528593;
    result[1] += 0.06308749844714066;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.0011092985318107667;
    result[1] += 0.9988907014681893;
  } else {
    result[0] += 0.7616409633900737;
    result[1] += 0.23835903660992633;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8070633904508012;
    result[1] += 0.19293660954919878;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5011392892019058;
    result[1] += 0.4988607107980943;
  } else {
    result[0] += 0.9215389626080835;
    result[1] += 0.07846103739191645;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.472597897026831;
    result[1] += 0.5274021029731689;
  } else {
    result[0] += 0.9984925788497218;
    result[1] += 0.0015074211502782932;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05805182026894064;
    result[1] += 0.9419481797310594;
  } else {
    result[0] += 0.9358930952759333;
    result[1] += 0.06410690472406669;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0042091442693852335;
    result[1] += 0.9957908557306148;
  } else {
    result[0] += 0.8108915764308817;
    result[1] += 0.18910842356911828;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.809734694714397;
    result[1] += 0.19026530528560298;
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
    result[0] += 0.7176772904843399;
    result[1] += 0.28232270951566;
  } else {
    result[0] += 0.02871034961796712;
    result[1] += 0.9712896503820329;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06030379458782925;
    result[1] += 0.9396962054121707;
  } else {
    result[0] += 0.9381340082182066;
    result[1] += 0.0618659917817934;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8010510684702661;
    result[1] += 0.19894893152973386;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.803104413797911;
    result[1] += 0.19689558620208897;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8062540822991509;
    result[1] += 0.19374591770084912;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.010829436377061285;
    result[1] += 0.9891705636229388;
  } else {
    result[0] += 0.7661279588260088;
    result[1] += 0.23387204117399116;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.940623726049735;
    result[1] += 0.059376273950264985;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004774188580448928;
    result[1] += 0.995225811419551;
  } else {
    result[0] += 0.8099093131364055;
    result[1] += 0.19009068686359454;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.061159062885326756;
    result[1] += 0.9388409371146732;
  } else {
    result[0] += 0.9377107302999756;
    result[1] += 0.06228926970002433;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005246711160834844;
    result[1] += 0.9947532888391651;
  } else {
    result[0] += 0.8105239716594682;
    result[1] += 0.18947602834053176;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7964452921796428;
    result[1] += 0.2035547078203572;
  }
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    result[0] += 0.009976696766676377;
    result[1] += 0.9900233032333237;
  } else {
    result[0] += 0.7552070798783556;
    result[1] += 0.2447929201216444;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06259197675974237;
    result[1] += 0.9374080232402576;
  } else {
    result[0] += 0.9381157400666957;
    result[1] += 0.061884259933304216;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.056792637706776304;
    result[1] += 0.9432073622932237;
  } else {
    result[0] += 0.9344755762537108;
    result[1] += 0.06552442374628921;
  }
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    result[0] += 0.010502841522192647;
    result[1] += 0.9894971584778074;
  } else {
    result[0] += 0.7544002759239895;
    result[1] += 0.2455997240760105;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5019944195551364;
    result[1] += 0.49800558044486365;
  } else {
    result[0] += 0.921098168312653;
    result[1] += 0.078901831687347;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004845222072678331;
    result[1] += 0.9951547779273217;
  } else {
    result[0] += 0.8106593181085281;
    result[1] += 0.18934068189147196;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7827663449898745;
    result[1] += 0.21723365501012545;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4731316467641828;
    result[1] += 0.5268683532358173;
  } else {
    result[0] += 0.9984367038769744;
    result[1] += 0.001563296123025615;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9408652243993009;
    result[1] += 0.059134775600699144;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06159379140639788;
    result[1] += 0.9384062085936021;
  } else {
    result[0] += 0.938182703680512;
    result[1] += 0.06181729631948793;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8022475562469525;
    result[1] += 0.19775244375304743;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.4706893170335366;
    result[1] += 0.5293106829664634;
  } else {
    result[0] += 0.9825776963222065;
    result[1] += 0.017422303677793547;
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    result[0] += 0.0039730087658447375;
    result[1] += 0.9960269912341553;
  } else {
    result[0] += 0.7656541396656392;
    result[1] += 0.2343458603343608;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.4979170154721924;
    result[1] += 0.5020829845278076;
  } else {
    result[0] += 0.9223872115172116;
    result[1] += 0.07761278848278838;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9391003225258869;
    result[1] += 0.060899677474113054;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.061015529841656514;
    result[1] += 0.9389844701583435;
  } else {
    result[0] += 0.9376458171314298;
    result[1] += 0.06235418286857016;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8104184957565116;
    result[1] += 0.18958150424348844;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.061364493026762154;
    result[1] += 0.9386355069732378;
  } else {
    result[0] += 0.9386062717770035;
    result[1] += 0.06139372822299652;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005399776294982065;
    result[1] += 0.9946002237050179;
  } else {
    result[0] += 0.809140084274437;
    result[1] += 0.19085991572556305;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8020511868575539;
    result[1] += 0.1979488131424461;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7979594785976474;
    result[1] += 0.20204052140235268;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9406437334093701;
    result[1] += 0.059356266590629814;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06231106408706167;
    result[1] += 0.9376889359129383;
  } else {
    result[0] += 0.9375835468419293;
    result[1] += 0.06241645315807062;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05654933641084824;
    result[1] += 0.9434506635891518;
  } else {
    result[0] += 0.9343847271218095;
    result[1] += 0.0656152728781905;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9396084766701511;
    result[1] += 0.0603915233298489;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8095712102492637;
    result[1] += 0.19042878975073632;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8023960093610448;
    result[1] += 0.19760399063895517;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8040402046231833;
    result[1] += 0.19595979537681674;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.4999264063741892;
    result[1] += 0.5000735936258107;
  } else {
    result[0] += 0.9210345592663419;
    result[1] += 0.07896544073365803;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7822300933024777;
    result[1] += 0.2177699066975223;
  }
  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8832333683967590332) ) ) {
    result[0] += 0.016475287069395907;
    result[1] += 0.9835247129306041;
  } else {
    result[0] += 0.7562767408608572;
    result[1] += 0.24372325913914286;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7990666081371439;
    result[1] += 0.20093339186285608;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.0009823826052786692;
    result[1] += 0.9990176173947213;
  } else {
    result[0] += 0.7628343381635051;
    result[1] += 0.23716566183649493;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8044493765759904;
    result[1] += 0.19555062342400967;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.062010814080992176;
    result[1] += 0.9379891859190078;
  } else {
    result[0] += 0.9377932148177022;
    result[1] += 0.06220678518229783;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8026898027593966;
    result[1] += 0.1973101972406034;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0.0002997302427814966;
    result[1] += 0.9997002697572185;
  } else {
    result[0] += 0.7815194118113536;
    result[1] += 0.21848058818864632;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.00418919948206261;
    result[1] += 0.9958108005179374;
  } else {
    result[0] += 0.8082993740531527;
    result[1] += 0.19170062594684736;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4689845983583879;
    result[1] += 0.5310154016416121;
  } else {
    result[0] += 0.9901849540451606;
    result[1] += 0.009815045954839442;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8081414728568839;
    result[1] += 0.19185852714311613;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9405818087876378;
    result[1] += 0.05941819121236225;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4740658822676263;
    result[1] += 0.5259341177323736;
  } else {
    result[0] += 0.9984578279724496;
    result[1] += 0.0015421720275503815;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8087025223854393;
    result[1] += 0.19129747761456078;
  }
  if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9927334785461425781) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7381197492999066;
    result[1] += 0.26188025070009335;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.059824024628950416;
    result[1] += 0.9401759753710496;
  } else {
    result[0] += 0.9391686756195333;
    result[1] += 0.06083132438046673;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8030433117915279;
    result[1] += 0.1969566882084721;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8095157308497818;
    result[1] += 0.1904842691502182;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7960998241392077;
    result[1] += 0.2039001758607923;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.00458804025137834;
    result[1] += 0.9954119597486216;
  } else {
    result[0] += 0.8103303774989304;
    result[1] += 0.1896696225010696;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9392309943709714;
    result[1] += 0.060769005629028636;
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    result[0] += 0.004216223019319111;
    result[1] += 0.9957837769806809;
  } else {
    result[0] += 0.7625049122981806;
    result[1] += 0.23749508770181935;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004101659830566949;
    result[1] += 0.995898340169433;
  } else {
    result[0] += 0.8098173904371954;
    result[1] += 0.19018260956280467;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0042468531200979456;
    result[1] += 0.995753146879902;
  } else {
    result[0] += 0.8119150584134771;
    result[1] += 0.18808494158652295;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06086161929600792;
    result[1] += 0.939138380703992;
  } else {
    result[0] += 0.9386312668800466;
    result[1] += 0.06136873311995334;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7976725382616229;
    result[1] += 0.20232746173837712;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4669824360935513;
    result[1] += 0.5330175639064487;
  } else {
    result[0] += 0.9904250244201631;
    result[1] += 0.009574975579836897;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.0009823826052786692;
    result[1] += 0.9990176173947213;
  } else {
    result[0] += 0.7638217010221137;
    result[1] += 0.2361782989778864;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05811468940691832;
    result[1] += 0.9418853105930817;
  } else {
    result[0] += 0.9345347172760026;
    result[1] += 0.06546528272399749;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7766101084657275;
    result[1] += 0.22338989153427247;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005024162000460229;
    result[1] += 0.9949758379995398;
  } else {
    result[0] += 0.810084112478444;
    result[1] += 0.18991588752155603;
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
