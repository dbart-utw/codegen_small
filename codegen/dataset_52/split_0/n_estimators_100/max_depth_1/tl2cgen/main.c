
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
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22608695652173913;
    result[1] += 0.7739130434782608;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9827586206896551;
    result[1] += 0.017241379310344827;
  } else {
    result[0] += 0.22926829268292684;
    result[1] += 0.7707317073170732;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2606837606837607;
    result[1] += 0.7393162393162394;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2791666666666667;
    result[1] += 0.7208333333333333;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3644067796610169;
    result[1] += 0.635593220338983;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1945549994707107544) ) ) {
    result[0] += 0.6633663366336634;
    result[1] += 0.33663366336633666;
  } else {
    result[0] += 0.16666666666666666;
    result[1] += 0.8333333333333334;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 0.9230769230769231;
    result[1] += 0.07692307692307693;
  } else {
    result[0] += 0.3037974683544304;
    result[1] += 0.6962025316455697;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    result[0] += 0.9841269841269841;
    result[1] += 0.015873015873015872;
  } else {
    result[0] += 0.23;
    result[1] += 0.77;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.8980399966239929199) ) ) {
    result[0] += 0.9230769230769231;
    result[1] += 0.07692307692307693;
  } else {
    result[0] += 0.27232142857142855;
    result[1] += 0.7276785714285714;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.208955223880597;
    result[1] += 0.7910447761194029;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23043478260869565;
    result[1] += 0.7695652173913043;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1897749975323677063) ) ) {
    result[0] += 0.9411764705882353;
    result[1] += 0.058823529411764705;
  } else {
    result[0] += 0.23076923076923078;
    result[1] += 0.7692307692307693;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
    result[0] += 0.9791666666666666;
    result[1] += 0.020833333333333332;
  } else {
    result[0] += 0.16279069767441862;
    result[1] += 0.8372093023255814;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
    result[0] += 0.98;
    result[1] += 0.02;
  } else {
    result[0] += 0.14084507042253522;
    result[1] += 0.8591549295774648;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5434100180864334106) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2838983050847458;
    result[1] += 0.7161016949152542;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 0.9714285714285714;
    result[1] += 0.02857142857142857;
  } else {
    result[0] += 0.24561403508771928;
    result[1] += 0.7543859649122807;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    result[0] += 0.8035714285714286;
    result[1] += 0.19642857142857142;
  } else {
    result[0] += 0.19806763285024154;
    result[1] += 0.8019323671497585;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9846153846153847;
    result[1] += 0.015384615384615385;
  } else {
    result[0] += 0.16161616161616163;
    result[1] += 0.8383838383838383;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.2692307692307692;
    result[1] += 0.7307692307692307;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.18407960199004975;
    result[1] += 0.8159203980099502;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    result[0] += 0.8846153846153846;
    result[1] += 0.11538461538461539;
  } else {
    result[0] += 0.32489451476793246;
    result[1] += 0.6751054852320675;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2356020942408377;
    result[1] += 0.7643979057591623;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3389830508474576;
    result[1] += 0.6610169491525424;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.96875;
    result[1] += 0.03125;
  } else {
    result[0] += 0.2562814070351759;
    result[1] += 0.7437185929648241;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1897749975323677063) ) ) {
    result[0] += 0.9272727272727272;
    result[1] += 0.07272727272727272;
  } else {
    result[0] += 0.20673076923076922;
    result[1] += 0.7932692307692307;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4828200042247772217) ) ) {
    result[0] += 0.8888888888888888;
    result[1] += 0.1111111111111111;
  } else {
    result[0] += 0.27312775330396477;
    result[1] += 0.7268722466960352;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
    result[0] += 0.8787878787878788;
    result[1] += 0.12121212121212122;
  } else {
    result[0] += 0.2565217391304348;
    result[1] += 0.7434782608695653;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.06798500008881092072) ) ) {
    result[0] += 0.7213114754098361;
    result[1] += 0.2786885245901639;
  } else {
    result[0] += 0.21782178217821782;
    result[1] += 0.7821782178217822;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25118483412322273;
    result[1] += 0.7488151658767772;
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.001109999953769147396) ) ) {
    result[0] += 0.5967741935483871;
    result[1] += 0.4032258064516129;
  } else {
    result[0] += 0.14388489208633093;
    result[1] += 0.8561151079136691;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22624434389140272;
    result[1] += 0.7737556561085973;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22966507177033493;
    result[1] += 0.7703349282296651;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2875100076198577881) ) ) {
    result[0] += 0.8787878787878788;
    result[1] += 0.12121212121212122;
  } else {
    result[0] += 0.19796954314720813;
    result[1] += 0.8020304568527918;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    result[0] += 0.6153846153846154;
    result[1] += 0.38461538461538464;
  } else {
    result[0] += 0.19186046511627908;
    result[1] += 0.8081395348837209;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19248826291079812;
    result[1] += 0.8075117370892019;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.98;
    result[1] += 0.02;
  } else {
    result[0] += 0.18779342723004694;
    result[1] += 0.812206572769953;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8993699848651885986) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3067226890756303;
    result[1] += 0.6932773109243697;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    result[0] += 0.6363636363636364;
    result[1] += 0.36363636363636365;
  } else {
    result[0] += 0.17647058823529413;
    result[1] += 0.8235294117647058;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04088499955832958221) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.15763546798029557;
    result[1] += 0.8423645320197044;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9846153846153847;
    result[1] += 0.015384615384615385;
  } else {
    result[0] += 0.1717171717171717;
    result[1] += 0.8282828282828283;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03749000001698732376) ) ) {
    result[0] += 0.9791666666666666;
    result[1] += 0.020833333333333332;
  } else {
    result[0] += 0.17674418604651163;
    result[1] += 0.8232558139534883;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.3146551724137931;
    result[1] += 0.6853448275862069;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.001010000007227063179) ) ) {
    result[0] += 0.6203703703703703;
    result[1] += 0.37962962962962965;
  } else {
    result[0] += 0.1870967741935484;
    result[1] += 0.8129032258064516;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1151049993932247162) ) ) {
    result[0] += 0.7313432835820896;
    result[1] += 0.26865671641791045;
  } else {
    result[0] += 0.20918367346938777;
    result[1] += 0.7908163265306123;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9280749857425689697) ) ) {
    result[0] += 0.3374485596707819;
    result[1] += 0.6625514403292181;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.296137339055794;
    result[1] += 0.703862660944206;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19626168224299065;
    result[1] += 0.8037383177570093;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 0.9848484848484849;
    result[1] += 0.015151515151515152;
  } else {
    result[0] += 0.2182741116751269;
    result[1] += 0.7817258883248731;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9622641509433962;
    result[1] += 0.03773584905660377;
  } else {
    result[0] += 0.22857142857142856;
    result[1] += 0.7714285714285715;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.01197500014677643776) ) ) {
    result[0] += 0.6153846153846154;
    result[1] += 0.38461538461538464;
  } else {
    result[0] += 0.20853080568720378;
    result[1] += 0.7914691943127962;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2875100076198577881) ) ) {
    result[0] += 0.8088235294117647;
    result[1] += 0.19117647058823528;
  } else {
    result[0] += 0.14871794871794872;
    result[1] += 0.8512820512820513;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    result[0] += 0.9705882352941176;
    result[1] += 0.029411764705882353;
  } else {
    result[0] += 0.2925764192139738;
    result[1] += 0.7074235807860262;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21171171171171171;
    result[1] += 0.7882882882882883;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.9175949990749359131) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2827868852459016;
    result[1] += 0.7172131147540983;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
    result[0] += 0.9242424242424242;
    result[1] += 0.07575757575757576;
  } else {
    result[0] += 0.2131979695431472;
    result[1] += 0.7868020304568528;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7614249885082244873) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3114754098360656;
    result[1] += 0.6885245901639344;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02878000028431415558) ) ) {
    result[0] += 0.9827586206896551;
    result[1] += 0.017241379310344827;
  } else {
    result[0] += 0.17073170731707318;
    result[1] += 0.8292682926829268;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
    result[0] += 0.90625;
    result[1] += 0.09375;
  } else {
    result[0] += 0.2813852813852814;
    result[1] += 0.7186147186147186;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
    result[0] += 0.921875;
    result[1] += 0.078125;
  } else {
    result[0] += 0.17587939698492464;
    result[1] += 0.8241206030150754;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
    result[0] += 0.620253164556962;
    result[1] += 0.379746835443038;
  } else {
    result[0] += 0.20108695652173914;
    result[1] += 0.7989130434782609;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.33905579399141633;
    result[1] += 0.6609442060085837;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.26359832635983266;
    result[1] += 0.7364016736401674;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.21875;
    result[1] += 0.78125;
  } else {
    result[0] += 0.8450704225352113;
    result[1] += 0.15492957746478872;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6457199752330780029) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2803347280334728;
    result[1] += 0.7196652719665272;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24519230769230768;
    result[1] += 0.7548076923076923;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06778999976813793182) ) ) {
    result[0] += 0.6739130434782609;
    result[1] += 0.32608695652173914;
  } else {
    result[0] += 0.21052631578947367;
    result[1] += 0.7894736842105263;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6096349954605102539) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.35064935064935066;
    result[1] += 0.6493506493506493;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25688073394495414;
    result[1] += 0.7431192660550459;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2131849974393844604) ) ) {
    result[0] += 0.6857142857142857;
    result[1] += 0.3142857142857143;
  } else {
    result[0] += 0.1962025316455696;
    result[1] += 0.8037974683544303;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.32751091703056767;
    result[1] += 0.6724890829694323;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.18421052631578946;
    result[1] += 0.8157894736842105;
  } else {
    result[0] += 0.8493150684931506;
    result[1] += 0.1506849315068493;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1419200003147125244) ) ) {
    result[0] += 0.5943396226415094;
    result[1] += 0.4056603773584906;
  } else {
    result[0] += 0.1464968152866242;
    result[1] += 0.8535031847133758;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9836065573770492;
    result[1] += 0.01639344262295082;
  } else {
    result[0] += 0.12376237623762376;
    result[1] += 0.8762376237623762;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22897196261682243;
    result[1] += 0.7710280373831776;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18181818181818182;
    result[1] += 0.8181818181818182;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
    result[0] += 0.7053571428571429;
    result[1] += 0.29464285714285715;
  } else {
    result[0] += 0.2185430463576159;
    result[1] += 0.7814569536423841;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 0.9803921568627451;
    result[1] += 0.0196078431372549;
  } else {
    result[0] += 0.23113207547169812;
    result[1] += 0.7688679245283019;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3333333333333333;
    result[1] += 0.6666666666666666;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.2830049991607666016) ) ) {
    result[0] += 0.8913043478260869;
    result[1] += 0.10869565217391304;
  } else {
    result[0] += 0.3225806451612903;
    result[1] += 0.6774193548387096;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1133700013160705566) ) ) {
    result[0] += 0.9821428571428571;
    result[1] += 0.017857142857142856;
  } else {
    result[0] += 0.2753623188405797;
    result[1] += 0.7246376811594203;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.18446601941747573;
    result[1] += 0.8155339805825242;
  } else {
    result[0] += 0.7894736842105263;
    result[1] += 0.21052631578947367;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 0.98;
    result[1] += 0.02;
  } else {
    result[0] += 0.23943661971830985;
    result[1] += 0.7605633802816901;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18;
    result[1] += 0.82;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    result[0] += 0.21025641025641026;
    result[1] += 0.7897435897435897;
  } else {
    result[0] += 0.8676470588235294;
    result[1] += 0.1323529411764706;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    result[0] += 0.7916666666666666;
    result[1] += 0.20833333333333334;
  } else {
    result[0] += 0.2558139534883721;
    result[1] += 0.7441860465116279;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25102880658436216;
    result[1] += 0.7489711934156379;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2178549915552139282) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2037914691943128;
    result[1] += 0.7962085308056872;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
    result[0] += 0.3153526970954357;
    result[1] += 0.6846473029045643;
  } else {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    result[0] += 0.9552238805970149;
    result[1] += 0.04477611940298507;
  } else {
    result[0] += 0.2193877551020408;
    result[1] += 0.7806122448979592;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.34334763948497854;
    result[1] += 0.6566523605150214;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.24034334763948498;
    result[1] += 0.759656652360515;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3727349936962127686) ) ) {
    result[0] += 0.5882352941176471;
    result[1] += 0.4117647058823529;
  } else {
    result[0] += 0.20496894409937888;
    result[1] += 0.7950310559006211;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06778999976813793182) ) ) {
    result[0] += 0.7093023255813954;
    result[1] += 0.29069767441860467;
  } else {
    result[0] += 0.24858757062146894;
    result[1] += 0.751412429378531;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1705899983644485474) ) ) {
    result[0] += 0.7232142857142857;
    result[1] += 0.2767857142857143;
  } else {
    result[0] += 0.1986754966887417;
    result[1] += 0.8013245033112583;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
    result[0] += 0.9629629629629629;
    result[1] += 0.037037037037037035;
  } else {
    result[0] += 0.2838983050847458;
    result[1] += 0.7161016949152542;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21428571428571427;
    result[1] += 0.7857142857142857;
  }
  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.08117499947547912598) ) ) {
    result[0] += 0.7384615384615385;
    result[1] += 0.26153846153846155;
  } else {
    result[0] += 0.2777777777777778;
    result[1] += 0.7222222222222222;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 0.8846153846153846;
    result[1] += 0.11538461538461539;
  } else {
    result[0] += 0.2320675105485232;
    result[1] += 0.7679324894514767;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03301499970257282257) ) ) {
    result[0] += 0.6746987951807228;
    result[1] += 0.3253012048192771;
  } else {
    result[0] += 0.25;
    result[1] += 0.75;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
