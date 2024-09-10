
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
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.007983910287664554;
    result[1] += 0.9920160897123355;
  } else {
    result[0] += 0.7669967582929971;
    result[1] += 0.23300324170700298;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4710716391509434;
    result[1] += 0.5289283608490566;
  } else {
    result[0] += 0.990569896382476;
    result[1] += 0.009430103617524086;
  }
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    result[0] += 0.0007784625364904313;
    result[1] += 0.9992215374635096;
  } else {
    result[0] += 0.7618482431201523;
    result[1] += 0.23815175687984763;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.49775696714472223;
    result[1] += 0.5022430328552777;
  } else {
    result[0] += 0.9212791348519891;
    result[1] += 0.07872086514801085;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005612146838362483;
    result[1] += 0.9943878531616375;
  } else {
    result[0] += 0.8085901081825911;
    result[1] += 0.1914098918174089;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06150601379467594;
    result[1] += 0.9384939862053241;
  } else {
    result[0] += 0.9379007996887397;
    result[1] += 0.062099200311260254;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.79752054185457;
    result[1] += 0.20247945814542997;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8046841225887109;
    result[1] += 0.19531587741128908;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.0035362465269007325;
    result[1] += 0.9964637534730992;
  } else {
    result[0] += 0.7660355016489232;
    result[1] += 0.23396449835107677;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8062114989733059;
    result[1] += 0.19378850102669404;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.056519306099608285;
    result[1] += 0.9434806939003917;
  } else {
    result[0] += 0.9356073429738077;
    result[1] += 0.06439265702619233;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05733499855893938;
    result[1] += 0.9426650014410606;
  } else {
    result[0] += 0.9349825277652839;
    result[1] += 0.06501747223471611;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.47034248462032874;
    result[1] += 0.5296575153796713;
  } else {
    result[0] += 0.9903023388476897;
    result[1] += 0.009697661152310326;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8024109958132756;
    result[1] += 0.19758900418672443;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8028623977091506;
    result[1] += 0.1971376022908494;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05546514522027149;
    result[1] += 0.9445348547797285;
  } else {
    result[0] += 0.9349472386006971;
    result[1] += 0.06505276139930298;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8033000156811727;
    result[1] += 0.1966999843188273;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7988459272437416;
    result[1] += 0.20115407275625843;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005371223953373205;
    result[1] += 0.9946287760466268;
  } else {
    result[0] += 0.8101744476216759;
    result[1] += 0.1898255523783241;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.060675139150092136;
    result[1] += 0.9393248608499079;
  } else {
    result[0] += 0.9364712094997881;
    result[1] += 0.06352879050021193;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8090757482664794;
    result[1] += 0.1909242517335206;
  }
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    result[0] += 0.0009007270153766969;
    result[1] += 0.9990992729846233;
  } else {
    result[0] += 0.7626521265958446;
    result[1] += 0.23734787340415542;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.009495221759372703;
    result[1] += 0.9905047782406273;
  } else {
    result[0] += 0.7641814066002353;
    result[1] += 0.23581859339976474;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.807712502187737;
    result[1] += 0.192287497812263;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8006865068302202;
    result[1] += 0.19931349316977975;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.009061606762756188;
    result[1] += 0.9909383932372439;
  } else {
    result[0] += 0.7646252158319314;
    result[1] += 0.23537478416806853;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8033031204513955;
    result[1] += 0.19669687954860446;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7976441743334124;
    result[1] += 0.20235582566658764;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7977367611513952;
    result[1] += 0.2022632388486047;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.0613549292569131;
    result[1] += 0.9386450707430869;
  } else {
    result[0] += 0.9383038780816775;
    result[1] += 0.06169612191832251;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.807815720442196;
    result[1] += 0.192184279557804;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7982384565082782;
    result[1] += 0.2017615434917218;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0.00029877502240812666;
    result[1] += 0.9997012249775918;
  } else {
    result[0] += 0.7823241423860198;
    result[1] += 0.2176758576139802;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.47061102501660396;
    result[1] += 0.5293889749833961;
  } else {
    result[0] += 0.9897336418912787;
    result[1] += 0.010266358108721299;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8015580679029891;
    result[1] += 0.1984419320970109;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5071217103677059;
    result[1] += 0.4928782896322941;
  } else {
    result[0] += 0.9180513229165544;
    result[1] += 0.08194867708344551;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.46697084824344337;
    result[1] += 0.5330291517565566;
  } else {
    result[0] += 0.9897328491912627;
    result[1] += 0.010267150808737323;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.4994362247649302;
    result[1] += 0.5005637752350698;
  } else {
    result[0] += 0.9209783332804619;
    result[1] += 0.07902166671953811;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8018873399649461;
    result[1] += 0.19811266003505393;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9396855820402504;
    result[1] += 0.06031441795974961;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.47056743528185657;
    result[1] += 0.5294325647181434;
  } else {
    result[0] += 0.9829505915100905;
    result[1] += 0.017049408489909535;
  }
  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7526245466692116;
    result[1] += 0.2473754533307883;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005828349396213478;
    result[1] += 0.9941716506037865;
  } else {
    result[0] += 0.8104621599563147;
    result[1] += 0.1895378400436853;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8074070602570561;
    result[1] += 0.19259293974294384;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.0571522195878872;
    result[1] += 0.9428477804121128;
  } else {
    result[0] += 0.9348705082215356;
    result[1] += 0.06512949177846435;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8055954843459664;
    result[1] += 0.19440451565403358;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7984330278412212;
    result[1] += 0.2015669721587788;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004933455713630105;
    result[1] += 0.9950665442863699;
  } else {
    result[0] += 0.808869093725794;
    result[1] += 0.19113090627420604;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.46932944985019526;
    result[1] += 0.5306705501498048;
  } else {
    result[0] += 0.9827048099782543;
    result[1] += 0.017295190021745743;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0056029985702693305;
    result[1] += 0.9943970014297306;
  } else {
    result[0] += 0.8092699245961765;
    result[1] += 0.1907300754038235;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.46920399727543316;
    result[1] += 0.5307960027245668;
  } else {
    result[0] += 0.9823240515958697;
    result[1] += 0.017675948404130355;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8069359173940168;
    result[1] += 0.19306408260598323;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8015642600829163;
    result[1] += 0.19843573991708377;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8072157818855275;
    result[1] += 0.19278421811447258;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4739573444718689;
    result[1] += 0.5260426555281311;
  } else {
    result[0] += 0.9982897630100172;
    result[1] += 0.0017102369899828977;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.797930755447662;
    result[1] += 0.20206924455233802;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    result[0] += 0.0011838989739542227;
    result[1] += 0.9988161010260458;
  } else {
    result[0] += 0.7619047619047619;
    result[1] += 0.23809523809523808;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7838334562368824;
    result[1] += 0.21616654376311759;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.00503558988338634;
    result[1] += 0.9949644101166136;
  } else {
    result[0] += 0.8101711451207184;
    result[1] += 0.18982885487928156;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7998660886931527;
    result[1] += 0.20013391130684738;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7964290052228835;
    result[1] += 0.2035709947771165;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.802044053477738;
    result[1] += 0.19795594652226206;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0055254934837283744;
    result[1] += 0.9944745065162717;
  } else {
    result[0] += 0.8087988351201869;
    result[1] += 0.19120116487981306;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05615389045671831;
    result[1] += 0.9438461095432817;
  } else {
    result[0] += 0.9359802313267023;
    result[1] += 0.06401976867329776;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9404858492817257;
    result[1] += 0.059514150718274234;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7972636168600986;
    result[1] += 0.20273638313990136;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.809128922309287;
    result[1] += 0.19087107769071296;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7761415749936696;
    result[1] += 0.22385842500633035;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
    result[0] += 0.7261148200453631;
    result[1] += 0.2738851799546369;
  } else {
    result[0] += 0.23036159600997505;
    result[1] += 0.7696384039900249;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.057006534194339584;
    result[1] += 0.9429934658056605;
  } else {
    result[0] += 0.9354657726860286;
    result[1] += 0.06453422731397145;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.009083044982698962;
    result[1] += 0.990916955017301;
  } else {
    result[0] += 0.7646804452920566;
    result[1] += 0.2353195547079434;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.05898668287771424;
    result[1] += 0.9410133171222858;
  } else {
    result[0] += 0.9374170551900001;
    result[1] += 0.06258294480999993;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8068804848569777;
    result[1] += 0.1931195151430223;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005621414913957935;
    result[1] += 0.994378585086042;
  } else {
    result[0] += 0.8093069655536647;
    result[1] += 0.1906930344463353;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8065944824531754;
    result[1] += 0.19340551754682456;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.939441722002841;
    result[1] += 0.060558277997158995;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8024242776582757;
    result[1] += 0.19757572234172432;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05594849125504517;
    result[1] += 0.9440515087449548;
  } else {
    result[0] += 0.9356189026499688;
    result[1] += 0.06438109735003114;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9394102168340461;
    result[1] += 0.060589783165953856;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.05987887098617301;
    result[1] += 0.9401211290138269;
  } else {
    result[0] += 0.9379607647132325;
    result[1] += 0.06203923528676746;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7966062498193276;
    result[1] += 0.20339375018067238;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0064516129032258064;
    result[1] += 0.9935483870967742;
  } else {
    result[0] += 0.8103096410978184;
    result[1] += 0.18969035890218156;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8102126115156766;
    result[1] += 0.18978738848432342;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.004308160162189559;
    result[1] += 0.9956918398378104;
  } else {
    result[0] += 0.7659091914855954;
    result[1] += 0.23409080851440456;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8064689334780731;
    result[1] += 0.19353106652192692;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8019324233193033;
    result[1] += 0.1980675766806967;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.802594145174588;
    result[1] += 0.19740585482541195;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7970415261931335;
    result[1] += 0.2029584738068665;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05806352675062779;
    result[1] += 0.9419364732493722;
  } else {
    result[0] += 0.9350661043125359;
    result[1] += 0.06493389568746408;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8014759633793992;
    result[1] += 0.19852403662060084;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4711945518129947;
    result[1] += 0.5288054481870054;
  } else {
    result[0] += 0.9900113765642776;
    result[1] += 0.009988623435722412;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8016470807034674;
    result[1] += 0.19835291929653265;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8025015692930044;
    result[1] += 0.19749843070699555;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.939222268372565;
    result[1] += 0.06077773162743509;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9396377038255974;
    result[1] += 0.060362296174402634;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.05966537479913035;
    result[1] += 0.9403346252008696;
  } else {
    result[0] += 0.9374517105766889;
    result[1] += 0.06254828942331117;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.4700342465753425;
    result[1] += 0.5299657534246576;
  } else {
    result[0] += 0.9907660116448326;
    result[1] += 0.009233988355167394;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8091300633170652;
    result[1] += 0.1908699366829348;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8040580181582662;
    result[1] += 0.1959419818417338;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.057366288030138705;
    result[1] += 0.9426337119698613;
  } else {
    result[0] += 0.9352513489302307;
    result[1] += 0.06474865106976938;
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
