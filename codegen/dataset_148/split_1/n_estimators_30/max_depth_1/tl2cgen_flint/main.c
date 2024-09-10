
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
    result[0] += 0.7603829160530191;
    result[1] += 0.0008100147275405008;
    result[2] += 0.003166421207658321;
    result[3] += 0.18917525773195876;
    result[4] += 0.04631811487481591;
    result[5] += 0.00014727540500736376;
    result[6] += 0;
  } else {
    result[0] += 0.7994986631016043;
    result[1] += 0.0008689839572192515;
    result[2] += 0.0026069518716577544;
    result[3] += 0.13506016042780752;
    result[4] += 0.0616644385026738;
    result[5] += 0.00016711229946524066;
    result[6] += 0.00013368983957219254;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11497659906396256;
    result[1] += 0.0017160686427457098;
    result[2] += 0.0046801872074883;
    result[3] += 0.49422776911076444;
    result[4] += 0.3833073322932917;
    result[5] += 0.00109204368174727;
    result[6] += 0;
  } else {
    result[0] += 0.9036667565381504;
    result[1] += 0.0005931517929361014;
    result[2] += 0.0028579131841466703;
    result[3] += 0.09250471825289835;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00037746023186842814;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11925724347686889;
    result[1] += 0.0019209220425804386;
    result[2] += 0.004161997758924283;
    result[3] += 0.4899951976948935;
    result[4] += 0.3830638706579158;
    result[5] += 0.0016007683688170323;
    result[6] += 0;
  } else {
    result[0] += 0.9015381311572223;
    result[1] += 0.00042949561109172416;
    result[2] += 0.0029796258019488364;
    result[3] += 0.09462325181864548;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00042949561109172416;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    result[0] += 0.24364201125994953;
    result[1] += 0.0021355076684139;
    result[2] += 0.007183071248301301;
    result[3] += 0.41622985827994563;
    result[4] += 0.33080955154338965;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.864794388380401;
    result[1] += 0.000495449685780594;
    result[2] += 0.0021121802393804273;
    result[3] += 0.1131189861534851;
    result[4] += 0.019166079949933506;
    result[5] += 0.00013038149625805106;
    result[6] += 0.00018253409476127149;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 0.8410701015605648;
    result[1] += 0.0004211047807778053;
    result[2] += 0.0029229625959871193;
    result[3] += 0.13195442160019816;
    result[4] += 0.022987366856576666;
    result[5] += 0.00032202130294773344;
    result[6] += 0.00032202130294773344;
  } else {
    result[0] += 0.08881789137380192;
    result[1] += 0.005750798722044728;
    result[2] += 0.0038338658146964857;
    result[3] += 0.4054313099041534;
    result[4] += 0.49616613418530353;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 0.9995032859544551;
    result[1] += 0;
    result[2] += 0.0004202965000764175;
    result[3] += 0;
    result[4] += 3.8208772734219776e-05;
    result[5] += 0;
    result[6] += 3.8208772734219776e-05;
  } else {
    result[0] += 0.4625461680517083;
    result[1] += 0.0016735918744228996;
    result[2] += 0.006521237303785781;
    result[3] += 0.38475300092336107;
    result[4] += 0.14375577100646356;
    result[5] += 0.000288550323176362;
    result[6] += 0.00046168051708217917;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11271766169154229;
    result[1] += 0.0009328358208955224;
    result[2] += 0.0029539800995024876;
    result[3] += 0.4982898009950249;
    result[4] += 0.3833955223880597;
    result[5] += 0.0017101990049751244;
    result[6] += 0;
  } else {
    result[0] += 0.9019639581310025;
    result[1] += 0.0005935038307974533;
    result[2] += 0.0031563612819682746;
    result[3] += 0.09398942484083306;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00029675191539872665;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 0.9994639506834628;
    result[1] += 0;
    result[2] += 0.0004211816058505954;
    result[3] += 0;
    result[4] += 7.657847379101735e-05;
    result[5] += 0;
    result[6] += 3.8289236895508674e-05;
  } else {
    result[0] += 0.4647068975435771;
    result[1] += 0.0012656043260656964;
    result[2] += 0.006500604038428349;
    result[3] += 0.38330552838980614;
    result[4] += 0.14335845366162342;
    result[5] += 0.00034516481619973537;
    result[6] += 0.000517747224299603;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.10814651089359015;
    result[1] += 0.001420903062835491;
    result[2] += 0.004262709188506473;
    result[3] += 0.5006315124723714;
    result[4] += 0.38459109567413957;
    result[5] += 0.000947268708556994;
    result[6] += 0;
  } else {
    result[0] += 0.9044018726793306;
    result[1] += 0.0005112199321960933;
    result[2] += 0.003282570090943335;
    result[3] += 0.09169671204864661;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00010762524888338805;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 0.9993585631815266;
    result[1] += 0;
    result[2] += 0.000565973663358865;
    result[3] += 0;
    result[4] += 3.773157755725767e-05;
    result[5] += 0;
    result[6] += 3.773157755725767e-05;
  } else {
    result[0] += 0.46178737424251337;
    result[1] += 0.002294522562805201;
    result[2] += 0.006295228569747602;
    result[3] += 0.38324410190033537;
    result[4] += 0.14531976231099605;
    result[5] += 0.0005883391186680002;
    result[6] += 0.0004706712949344002;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 0.999395062195168;
    result[1] += 0;
    result[2] += 0.0005293205792279482;
    result[3] += 0;
    result[4] += 3.7808612801996296e-05;
    result[5] += 0;
    result[6] += 3.7808612801996296e-05;
  } else {
    result[0] += 0.4629054014427307;
    result[1] += 0.0017594275995542787;
    result[2] += 0.007565538678083398;
    result[3] += 0.38378980704944;
    result[4] += 0.14304146384376284;
    result[5] += 0.00023459034660723715;
    result[6] += 0.0007037710398217114;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 0.8404809122459098;
    result[1] += 0.0002974714923153198;
    result[2] += 0.002751611303916708;
    result[3] += 0.13254833911750125;
    result[4] += 0.023401090728805155;
    result[5] += 0.00022310361923648983;
    result[6] += 0.0002974714923153198;
  } else {
    result[0] += 0.08354430379746836;
    result[1] += 0.0031645569620253164;
    result[2] += 0.005379746835443038;
    result[3] += 0.42120253164556964;
    result[4] += 0.48670886075949366;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.1175820707070707;
    result[1] += 0.0015782828282828283;
    result[2] += 0.003787878787878788;
    result[3] += 0.49510732323232326;
    result[4] += 0.38115530303030304;
    result[5] += 0.0007891414141414141;
    result[6] += 0;
  } else {
    result[0] += 0.9061457324292326;
    result[1] += 0.0005381552039608223;
    result[2] += 0.0028253148207943173;
    result[3] += 0.09008718114304165;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0004036164029706167;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 0.20406379724710508;
    result[1] += 0.004369674459252786;
    result[2] += 0.003932707013327507;
    result[3] += 0.4411186366615687;
    result[4] += 0.3465151846187459;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8561005061274825;
    result[1] += 0.00048814325720011306;
    result[2] += 0.0020296482799373123;
    result[3] += 0.11900418775531177;
    result[4] += 0.02183798782211032;
    result[5] += 0.00023122575341057985;
    result[6] += 0.0003083010045474398;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.12077983832620068;
    result[1] += 0.0020605484228879384;
    result[2] += 0.003804089396100809;
    result[3] += 0.49262957679505476;
    result[4] += 0.3791409098113806;
    result[5] += 0.001585037248375337;
    result[6] += 0;
  } else {
    result[0] += 0.9011319942996961;
    result[1] += 0.0005915409642117716;
    result[2] += 0.0030114812723508375;
    result[3] += 0.09499610120728133;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0002688822564598962;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11909937888198759;
    result[1] += 0.0006211180124223604;
    result[2] += 0.004968944099378883;
    result[3] += 0.4950310559006212;
    result[4] += 0.3785714285714286;
    result[5] += 0.0017080745341614908;
    result[6] += 0;
  } else {
    result[0] += 0.9043173232595791;
    result[1] += 0.0005126821370750136;
    result[2] += 0.002995143011332974;
    result[3] += 0.09193200215866164;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0002428494333513222;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 0.21859850154252974;
    result[1] += 0.0035257822829440283;
    result[2] += 0.004186866460996034;
    result[3] += 0.4263992948435434;
    result[4] += 0.3472895548699868;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8521123145629075;
    result[1] += 0.00035932446999640676;
    result[2] += 0.0027975976592577384;
    result[3] += 0.1227093065037729;
    result[4] += 0.021610800266926748;
    result[5] += 0.00012833016785585957;
    result[6] += 0.000282326369282891;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    result[0] += 0.7716347790563083;
    result[1] += 0.0008170490910328862;
    result[2] += 0.004425682576428134;
    result[3] += 0.17573364199632327;
    result[4] += 0.04684414788588548;
    result[5] += 6.808742425274052e-05;
    result[6] += 0.0004766119697691836;
  } else {
    result[0] += 0.801964391073474;
    result[1] += 0.000728837677437268;
    result[2] += 0.0026724048172699828;
    result[3] += 0.13427966542879952;
    result[4] += 0.06000763544233507;
    result[5] += 3.4706556068441337e-05;
    result[6] += 0.000312359004615972;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 0.21688011757295822;
    result[1] += 0.003149275666596683;
    result[2] += 0.004408985933235356;
    result[3] += 0.42515221499055217;
    result[4] += 0.3504094058366576;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8546351033895243;
    result[1] += 0.00043885690683326023;
    result[2] += 0.002865477450499523;
    result[3] += 0.11965304489248008;
    result[4] += 0.02189121511732969;
    result[5] += 0.00012907556083331185;
    result[6] += 0.00038722668249993554;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11808176100628931;
    result[1] += 0.0015723270440251573;
    result[2] += 0.0031446540880503146;
    result[3] += 0.48474842767295595;
    result[4] += 0.39135220125786163;
    result[5] += 0.00110062893081761;
    result[6] += 0;
  } else {
    result[0] += 0.90255788906839;
    result[1] += 0.0005385029617662898;
    result[2] += 0.0033117932148626823;
    result[3] += 0.09318793753365645;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00040387722132471737;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.10760989443831731;
    result[1] += 0.0017331022530329288;
    result[2] += 0.0037813140066172996;
    result[3] += 0.51804001890657;
    result[4] += 0.36820545139435956;
    result[5] += 0.0006302190011028833;
    result[6] += 0;
  } else {
    result[0] += 0.9026996474039781;
    result[1] += 0.00037682017602885364;
    result[2] += 0.002691572685920383;
    result[3] += 0.09377439237746615;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00045756735660646515;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 0.8390983768804434;
    result[1] += 0.0002474267616785431;
    result[2] += 0.0027959224069675375;
    result[3] += 0.133659936658749;
    result[4] += 0.023777711797307997;
    result[5] += 7.422802850356295e-05;
    result[6] += 0.0003463974663499604;
  } else {
    result[0] += 0.0927367055771725;
    result[1] += 0.004215304798962386;
    result[2] += 0.0038910505836575876;
    result[3] += 0.4182879377431907;
    result[4] += 0.4808690012970169;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    result[0] += 0.838712070628385;
    result[1] += 0.0002720280930830675;
    result[2] += 0.0028439300640502514;
    result[3] += 0.13272497959789303;
    result[4] += 0.025076044216930042;
    result[5] += 0.00024729826643915233;
    result[6] += 0.00012364913321957617;
  } else {
    result[0] += 0.09826967025791708;
    result[1] += 0.0035912504080966375;
    result[2] += 0.002285341168788769;
    result[3] += 0.406137773424747;
    result[4] += 0.48971596474045054;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    result[0] += 0.20051085568326948;
    result[1] += 0.0023414218816517666;
    result[2] += 0.004044274159216688;
    result[3] += 0.43018305661983824;
    result[4] += 0.36292039165602386;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.856785732694191;
    result[1] += 0.0002319468068656255;
    result[2] += 0.0027575898149579917;
    result[3] += 0.11816401216432143;
    result[4] += 0.021931859182516365;
    result[5] += 2.5771867429513944e-05;
    result[6] += 0.00010308746971805578;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11082802547770701;
    result[1] += 0.0017515923566878981;
    result[2] += 0.003821656050955414;
    result[3] += 0.4988853503184713;
    result[4] += 0.3839171974522293;
    result[5] += 0.0007961783439490446;
    result[6] += 0;
  } else {
    result[0] += 0.9030897367006986;
    result[1] += 0.00037614185921547554;
    result[2] += 0.002982267598065556;
    result[3] += 0.09328318108543794;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00026867275658248256;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    result[0] += 0.8428145039747038;
    result[1] += 0.001034309524513136;
    result[2] += 0.002068619049026272;
    result[3] += 0.10251484972960195;
    result[4] += 0.05130175241585154;
    result[5] += 0.00014775850350187656;
    result[6] += 0.00011820680280150123;
  } else {
    result[0] += 0.5955905185798572;
    result[1] += 0;
    result[2] += 0.005382465583272954;
    result[3] += 0.32429355139219546;
    result[4] += 0.07400890177000312;
    result[5] += 0.00031052686057343965;
    result[6] += 0.00041403581409791955;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    result[0] += 0.9994653631711602;
    result[1] += 0;
    result[2] += 0.0004964484839227068;
    result[3] += 0;
    result[4] += 3.818834491713129e-05;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.4660390435485734;
    result[1] += 0.0010973778445188865;
    result[2] += 0.007219591082361095;
    result[3] += 0.3837934619383158;
    result[4] += 0.1407531477417119;
    result[5] += 0.0002887836432944438;
    result[6] += 0.0008085942012244426;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11441932969602495;
    result[1] += 0.0012470771628994544;
    result[2] += 0.004208885424785659;
    result[3] += 0.5007014809041309;
    result[4] += 0.3780202650038971;
    result[5] += 0.0014029618082618861;
    result[6] += 0;
  } else {
    result[0] += 0.9007954698665228;
    result[1] += 0.0005393016044222731;
    result[2] += 0.0032088445463125254;
    result[3] += 0.09505190777942564;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00040447620331670486;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11185231151101459;
    result[1] += 0.0012410797393732546;
    result[2] += 0.004188644120384734;
    result[3] += 0.49379460130313374;
    result[4] += 0.38799255352156375;
    result[5] += 0.000930809804529941;
    result[6] += 0;
  } else {
    result[0] += 0.9028984724995952;
    result[1] += 0.00032385167593242293;
    result[2] += 0.002941652723052842;
    result[3] += 0.09359313434447024;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00024288875694931721;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    result[0] += 0.11579113424830415;
    result[1] += 0.0011042751222590313;
    result[2] += 0.003786086133459536;
    result[3] += 0.49660829783877586;
    result[4] += 0.3814481779460483;
    result[5] += 0.0012620287111531788;
    result[6] += 0;
  } else {
    result[0] += 0.9048464788353381;
    result[1] += 0.0003767390543849735;
    result[2] += 0.002664083313150884;
    result[3] += 0.09184359947256532;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00026909932456069534;
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  result[6] /= 30;
  
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
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
