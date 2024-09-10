
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
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8024849047840223;
    result[1] += 0.1975150952159777;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05759354365370506;
    result[1] += 0.9424064563462949;
  } else {
    result[0] += 0.9366218587237335;
    result[1] += 0.06337814127626652;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9405595829600065;
    result[1] += 0.05944041703999348;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.939997555908591;
    result[1] += 0.06000244409140902;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0.0001001001001001001;
    result[1] += 0.9998998998998999;
  } else {
    result[0] += 0.782534828406388;
    result[1] += 0.21746517159361195;
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    result[0] += 0.003744617112900206;
    result[1] += 0.9962553828870998;
  } else {
    result[0] += 0.7646631992333981;
    result[1] += 0.23533680076660185;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8063454265303264;
    result[1] += 0.19365457346967363;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005189313857389967;
    result[1] += 0.99481068614261;
  } else {
    result[0] += 0.809651411650884;
    result[1] += 0.19034858834911608;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 9.965618615775574e-05;
    result[1] += 0.9999003438138423;
  } else {
    result[0] += 0.7826744706528945;
    result[1] += 0.21732552934710553;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06121021997127523;
    result[1] += 0.9387897800287248;
  } else {
    result[0] += 0.93891843724764;
    result[1] += 0.06108156275236;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47350557657927456;
    result[1] += 0.5264944234207255;
  } else {
    result[0] += 0.9984716384730279;
    result[1] += 0.0015283615269721074;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8029769786512416;
    result[1] += 0.19702302134875832;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    result[0] += 0.47129703726188177;
    result[1] += 0.5287029627381182;
  } else {
    result[0] += 0.9900390469360109;
    result[1] += 0.009960953063989163;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8023866514838139;
    result[1] += 0.197613348516186;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8085204516528298;
    result[1] += 0.19147954834717015;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.4729593362236508;
    result[1] += 0.5270406637763493;
  } else {
    result[0] += 0.9837942280200143;
    result[1] += 0.016205771979985704;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005349034095282075;
    result[1] += 0.9946509659047179;
  } else {
    result[0] += 0.8077843047592247;
    result[1] += 0.19221569524077525;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9406873576503383;
    result[1] += 0.059312642349661764;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05669336384439359;
    result[1] += 0.9433066361556064;
  } else {
    result[0] += 0.9362961421038024;
    result[1] += 0.06370385789619762;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06184472461844725;
    result[1] += 0.9381552753815527;
  } else {
    result[0] += 0.9378785244932726;
    result[1] += 0.06212147550672739;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7978696995063937;
    result[1] += 0.20213030049360622;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05627921232089495;
    result[1] += 0.943720787679105;
  } else {
    result[0] += 0.9355135913990412;
    result[1] += 0.06448640860095874;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06253920580911286;
    result[1] += 0.9374607941908871;
  } else {
    result[0] += 0.9380492243996305;
    result[1] += 0.061950775600369566;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004419889502762431;
    result[1] += 0.9955801104972376;
  } else {
    result[0] += 0.8098464609693803;
    result[1] += 0.19015353903061974;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7989117891432792;
    result[1] += 0.20108821085672082;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8063205812833757;
    result[1] += 0.19367941871662436;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8072462077012835;
    result[1] += 0.19275379229871645;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.00556280211770122;
    result[1] += 0.9944371978822988;
  } else {
    result[0] += 0.8123980902553756;
    result[1] += 0.18760190974462446;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8065825619849172;
    result[1] += 0.19341743801508285;
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    result[0] += 0.0039582809751193765;
    result[1] += 0.9960417190248806;
  } else {
    result[0] += 0.7655056353933704;
    result[1] += 0.23449436460662962;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.061464599502818;
    result[1] += 0.938535400497182;
  } else {
    result[0] += 0.9370859776314966;
    result[1] += 0.06291402236850337;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8098990785432207;
    result[1] += 0.1901009214567793;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8064414493260984;
    result[1] += 0.19355855067390162;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7971925002454108;
    result[1] += 0.20280749975458917;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.4684731825826948;
    result[1] += 0.5315268174173052;
  } else {
    result[0] += 0.9828679919589011;
    result[1] += 0.01713200804109895;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8096389917068828;
    result[1] += 0.19036100829311717;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7987528246383596;
    result[1] += 0.2012471753616404;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401653094628462;
    result[1] += 0.05983469053715388;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.4715148577607099;
    result[1] += 0.5284851422392901;
  } else {
    result[0] += 0.9825933061517093;
    result[1] += 0.017406693848290695;
  }
  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7128912806510925293) ) ) {
    result[0] += 0.045718093968677105;
    result[1] += 0.9542819060313229;
  } else {
    result[0] += 0.7588058714989948;
    result[1] += 0.24119412850100522;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401999225317178;
    result[1] += 0.05980007746828218;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.00814950980392157;
    result[1] += 0.9918504901960784;
  } else {
    result[0] += 0.7652907234798048;
    result[1] += 0.2347092765201953;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8027149321266969;
    result[1] += 0.19728506787330316;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.060365024183796856;
    result[1] += 0.9396349758162031;
  } else {
    result[0] += 0.9377715272362704;
    result[1] += 0.06222847276372953;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06484531788405468;
    result[1] += 0.9351546821159453;
  } else {
    result[0] += 0.9377287083802924;
    result[1] += 0.062271291619707535;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.055219568567026193;
    result[1] += 0.9447804314329739;
  } else {
    result[0] += 0.9361034292035398;
    result[1] += 0.06389657079646018;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005158972791195353;
    result[1] += 0.9948410272088046;
  } else {
    result[0] += 0.8087527583454622;
    result[1] += 0.19124724165453777;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.47192020510133426;
    result[1] += 0.5280797948986657;
  } else {
    result[0] += 0.9827509310260242;
    result[1] += 0.01724906897397587;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.056596506768857476;
    result[1] += 0.9434034932311425;
  } else {
    result[0] += 0.9361824228554044;
    result[1] += 0.06381757714459556;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397937611735356;
    result[1] += 0.06020623882646437;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7985225604328273;
    result[1] += 0.20147743956717262;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.009352119608687627;
    result[1] += 0.9906478803913124;
  } else {
    result[0] += 0.7650118963767353;
    result[1] += 0.23498810362326478;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
    result[0] += 0.7276746526216628;
    result[1] += 0.2723253473783373;
  } else {
    result[0] += 0.23057953144266338;
    result[1] += 0.7694204685573366;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.777822780252914;
    result[1] += 0.2221772197470861;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.46923729366477457;
    result[1] += 0.5307627063352254;
  } else {
    result[0] += 0.9827491570610837;
    result[1] += 0.017250842938916332;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7979781623022115;
    result[1] += 0.20202183769778848;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004897646833747848;
    result[1] += 0.9951023531662522;
  } else {
    result[0] += 0.8107965380665982;
    result[1] += 0.1892034619334018;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06028476219327476;
    result[1] += 0.9397152378067253;
  } else {
    result[0] += 0.9389678873552983;
    result[1] += 0.061032112644701694;
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
    result[0] += 0.7179379170111966;
    result[1] += 0.2820620829888034;
  } else {
    result[0] += 0.023893183415319746;
    result[1] += 0.9761068165846802;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7996347221981401;
    result[1] += 0.20036527780185992;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4718264073251341;
    result[1] += 0.5281735926748659;
  } else {
    result[0] += 0.9983919457456477;
    result[1] += 0.0016080542543522338;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47547761748891526;
    result[1] += 0.5245223825110847;
  } else {
    result[0] += 0.9984583821125961;
    result[1] += 0.0015416178874039386;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
    result[0] += 0.7165068603377477;
    result[1] += 0.2834931396622523;
  } else {
    result[0] += 0.0002543881963876876;
    result[1] += 0.9997456118036123;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4742939179427911;
    result[1] += 0.5257060820572089;
  } else {
    result[0] += 0.9983218347939586;
    result[1] += 0.0016781652060413948;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8033315141029065;
    result[1] += 0.1966684858970935;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7994512015097748;
    result[1] += 0.20054879849022525;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8098147302880283;
    result[1] += 0.19018526971197172;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9404440515453402;
    result[1] += 0.05955594845465982;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06085753803596127;
    result[1] += 0.9391424619640387;
  } else {
    result[0] += 0.9380446651504719;
    result[1] += 0.0619553348495281;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 9.943323058566172e-05;
    result[1] += 0.9999005667694143;
  } else {
    result[0] += 0.782256327714995;
    result[1] += 0.21774367228500505;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.800249644603169;
    result[1] += 0.1997503553968309;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9400542544780393;
    result[1] += 0.059945745521960796;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.0560221931108885;
    result[1] += 0.9439778068891115;
  } else {
    result[0] += 0.9359773801952271;
    result[1] += 0.06402261980477283;
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    result[0] += 0.005375664052618264;
    result[1] += 0.9946243359473818;
  } else {
    result[0] += 0.765872928054529;
    result[1] += 0.23412707194547105;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.938761922878339;
    result[1] += 0.06123807712166091;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.79865899719325;
    result[1] += 0.20134100280675005;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8013293472266566;
    result[1] += 0.1986706527733434;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.0618242466068553;
    result[1] += 0.9381757533931447;
  } else {
    result[0] += 0.9382946896035901;
    result[1] += 0.06170531039640987;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8037570291961907;
    result[1] += 0.19624297080380926;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9404886680732322;
    result[1] += 0.05951133192676785;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5016390537786835;
    result[1] += 0.49836094622131655;
  } else {
    result[0] += 0.9200016846183813;
    result[1] += 0.07999831538161871;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8080975404174617;
    result[1] += 0.19190245958253827;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06050213169114164;
    result[1] += 0.9394978683088584;
  } else {
    result[0] += 0.9378864276523977;
    result[1] += 0.06211357234760232;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8011973132892503;
    result[1] += 0.19880268671074974;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.806467032358479;
    result[1] += 0.19353296764152098;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47106296547054843;
    result[1] += 0.5289370345294516;
  } else {
    result[0] += 0.9983446989566941;
    result[1] += 0.0016553010433059392;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06259334177741649;
    result[1] += 0.9374066582225835;
  } else {
    result[0] += 0.938815143773971;
    result[1] += 0.06118485622602897;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.004585035062032827;
    result[1] += 0.9954149649379672;
  } else {
    result[0] += 0.8096198257974514;
    result[1] += 0.19038017420254857;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06148634582994266;
    result[1] += 0.9385136541700574;
  } else {
    result[0] += 0.9379483575588474;
    result[1] += 0.06205164244115253;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
    result[0] += 0.7213166160584095;
    result[1] += 0.2786833839415906;
  } else {
    result[0] += 0.03409308561578242;
    result[1] += 0.9659069143842176;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.058203500673206385;
    result[1] += 0.9417964993267937;
  } else {
    result[0] += 0.9367780314034724;
    result[1] += 0.06322196859652764;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8029452893358012;
    result[1] += 0.19705471066419872;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0.00010121457489878542;
    result[1] += 0.9998987854251012;
  } else {
    result[0] += 0.7849773755656109;
    result[1] += 0.21502262443438913;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.0048216007714561235;
    result[1] += 0.9951783992285439;
  } else {
    result[0] += 0.8110997157675741;
    result[1] += 0.18890028423242594;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06304554983800267;
    result[1] += 0.9369544501619973;
  } else {
    result[0] += 0.9376431397043514;
    result[1] += 0.062356860295648554;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06110552000455728;
    result[1] += 0.9388944799954427;
  } else {
    result[0] += 0.9387409049528482;
    result[1] += 0.06125909504715178;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.4998183121691563;
    result[1] += 0.5001816878308437;
  } else {
    result[0] += 0.9204534659108902;
    result[1] += 0.07954653408910985;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8030149120312056;
    result[1] += 0.19698508796879444;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.003246339910884787;
    result[1] += 0.9967536600891153;
  } else {
    result[0] += 0.7648382637544927;
    result[1] += 0.23516173624550732;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8093307118866224;
    result[1] += 0.19066928811337758;
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
