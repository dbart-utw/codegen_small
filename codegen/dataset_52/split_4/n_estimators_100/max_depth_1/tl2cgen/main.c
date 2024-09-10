
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2102803738317757;
    result[1] += 0.7897196261682243;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.19289340101522842;
    result[1] += 0.8071065989847716;
  } else {
    result[0] += 0.8636363636363636;
    result[1] += 0.13636363636363635;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
    result[0] += 0.651685393258427;
    result[1] += 0.34831460674157305;
  } else {
    result[0] += 0.19540229885057472;
    result[1] += 0.8045977011494253;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.9092949926853179932) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27755102040816326;
    result[1] += 0.7224489795918367;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 0.9571428571428572;
    result[1] += 0.04285714285714286;
  } else {
    result[0] += 0.22279792746113988;
    result[1] += 0.7772020725388601;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1501450017094612122) ) ) {
    result[0] += 0.75;
    result[1] += 0.25;
  } else {
    result[0] += 0.24043715846994534;
    result[1] += 0.7595628415300546;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2857299968600273132) ) ) {
    result[0] += 0.9733333333333334;
    result[1] += 0.02666666666666667;
  } else {
    result[0] += 0.2074468085106383;
    result[1] += 0.7925531914893617;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.07206000015139579773) ) ) {
    result[0] += 0.6634615384615384;
    result[1] += 0.33653846153846156;
  } else {
    result[0] += 0.20754716981132076;
    result[1] += 0.7924528301886793;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
    result[0] += 0.9285714285714286;
    result[1] += 0.07142857142857142;
  } else {
    result[0] += 0.17098445595854922;
    result[1] += 0.8290155440414507;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2152049988508224487) ) ) {
    result[0] += 0.7142857142857143;
    result[1] += 0.2857142857142857;
  } else {
    result[0] += 0.189873417721519;
    result[1] += 0.810126582278481;
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3683699965476989746) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2928870292887029;
    result[1] += 0.7071129707112971;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 0.9682539682539683;
    result[1] += 0.031746031746031744;
  } else {
    result[0] += 0.24;
    result[1] += 0.76;
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.325709998607635498) ) ) {
    result[0] += 0.9705882352941176;
    result[1] += 0.029411764705882353;
  } else {
    result[0] += 0.32751091703056767;
    result[1] += 0.6724890829694323;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9347826086956522;
    result[1] += 0.06521739130434782;
  } else {
    result[0] += 0.22580645161290322;
    result[1] += 0.7741935483870968;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    result[0] += 0.7032967032967034;
    result[1] += 0.2967032967032967;
  } else {
    result[0] += 0.2441860465116279;
    result[1] += 0.7558139534883721;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2857299968600273132) ) ) {
    result[0] += 0.9848484848484849;
    result[1] += 0.015151515151515152;
  } else {
    result[0] += 0.116751269035533;
    result[1] += 0.883248730964467;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22274881516587677;
    result[1] += 0.7772511848341233;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
    result[0] += 0.875;
    result[1] += 0.125;
  } else {
    result[0] += 0.178743961352657;
    result[1] += 0.821256038647343;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3080168776371308;
    result[1] += 0.6919831223628692;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1898399963974952698) ) ) {
    result[0] += 0.6476190476190476;
    result[1] += 0.3523809523809524;
  } else {
    result[0] += 0.2088607594936709;
    result[1] += 0.7911392405063291;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
    result[0] += 0.9;
    result[1] += 0.1;
  } else {
    result[0] += 0.18719211822660098;
    result[1] += 0.812807881773399;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22596153846153846;
    result[1] += 0.7740384615384616;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.06431499868631362915) ) ) {
    result[0] += 0.6129032258064516;
    result[1] += 0.3870967741935484;
  } else {
    result[0] += 0.2158273381294964;
    result[1] += 0.7841726618705036;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.133385002613067627) ) ) {
    result[0] += 0.6818181818181818;
    result[1] += 0.3181818181818182;
  } else {
    result[0] += 0.2342857142857143;
    result[1] += 0.7657142857142857;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    result[0] += 0.9807692307692307;
    result[1] += 0.019230769230769232;
  } else {
    result[0] += 0.23222748815165878;
    result[1] += 0.7677725118483413;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.007724999915808439255) ) ) {
    result[0] += 0.6466165413533834;
    result[1] += 0.3533834586466165;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3559322033898305;
    result[1] += 0.6440677966101694;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 0.9821428571428571;
    result[1] += 0.017857142857142856;
  } else {
    result[0] += 0.19806763285024154;
    result[1] += 0.8019323671497585;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 0.9428571428571428;
    result[1] += 0.05714285714285714;
  } else {
    result[0] += 0.20207253886010362;
    result[1] += 0.7979274611398963;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.01243499992415308952) ) ) {
    result[0] += 0.5161290322580645;
    result[1] += 0.4838709677419355;
  } else {
    result[0] += 0.1366906474820144;
    result[1] += 0.8633093525179856;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1691542288557214;
    result[1] += 0.8308457711442786;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    result[0] += 0.7333333333333333;
    result[1] += 0.26666666666666666;
  } else {
    result[0] += 0.24855491329479767;
    result[1] += 0.7514450867052023;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.2604166666666667;
    result[1] += 0.7395833333333334;
  } else {
    result[0] += 0.9154929577464789;
    result[1] += 0.08450704225352113;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    result[0] += 0.8387096774193549;
    result[1] += 0.16129032258064516;
  } else {
    result[0] += 0.18407960199004975;
    result[1] += 0.8159203980099502;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1664250046014785767) ) ) {
    result[0] += 0.6666666666666666;
    result[1] += 0.3333333333333333;
  } else {
    result[0] += 0.21176470588235294;
    result[1] += 0.788235294117647;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24880382775119617;
    result[1] += 0.7511961722488039;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.16326530612244897;
    result[1] += 0.8367346938775511;
  } else {
    result[0] += 0.8805970149253731;
    result[1] += 0.11940298507462686;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3648068669527897;
    result[1] += 0.6351931330472103;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2948717948717949;
    result[1] += 0.7051282051282052;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    result[0] += 0.9272727272727272;
    result[1] += 0.07272727272727272;
  } else {
    result[0] += 0.22596153846153846;
    result[1] += 0.7740384615384616;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
    result[0] += 0.6513761467889908;
    result[1] += 0.3486238532110092;
  } else {
    result[0] += 0.15584415584415584;
    result[1] += 0.8441558441558441;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.08698000013828277588) ) ) {
    result[0] += 0.6938775510204082;
    result[1] += 0.30612244897959184;
  } else {
    result[0] += 0.2606060606060606;
    result[1] += 0.7393939393939394;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5845049917697906494) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27467811158798283;
    result[1] += 0.7253218884120172;
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.350210970464135;
    result[1] += 0.6497890295358649;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22325581395348837;
    result[1] += 0.7767441860465116;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    result[0] += 0.9152542372881356;
    result[1] += 0.0847457627118644;
  } else {
    result[0] += 0.25980392156862747;
    result[1] += 0.7401960784313726;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.07860999926924705505) ) ) {
    result[0] += 0.7333333333333333;
    result[1] += 0.26666666666666666;
  } else {
    result[0] += 0.19653179190751446;
    result[1] += 0.8034682080924855;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30638297872340425;
    result[1] += 0.6936170212765957;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.06015999987721443176) ) ) {
    result[0] += 0.9622641509433962;
    result[1] += 0.03773584905660377;
  } else {
    result[0] += 0.2714285714285714;
    result[1] += 0.7285714285714285;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
    result[0] += 0.7115384615384616;
    result[1] += 0.28846153846153844;
  } else {
    result[0] += 0.24528301886792453;
    result[1] += 0.7547169811320755;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3347457627118644;
    result[1] += 0.6652542372881356;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2591699957847595215) ) ) {
    result[0] += 0.9838709677419355;
    result[1] += 0.016129032258064516;
  } else {
    result[0] += 0.16417910447761194;
    result[1] += 0.835820895522388;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06945999991148710251) ) ) {
    result[0] += 0.6923076923076923;
    result[1] += 0.3076923076923077;
  } else {
    result[0] += 0.21081081081081082;
    result[1] += 0.7891891891891892;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3472803347280335;
    result[1] += 0.6527196652719666;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.29310344827586204;
    result[1] += 0.7068965517241379;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2575107296137339;
    result[1] += 0.7424892703862661;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27510917030567683;
    result[1] += 0.7248908296943232;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    result[0] += 0.7272727272727273;
    result[1] += 0.2727272727272727;
  } else {
    result[0] += 0.1774193548387097;
    result[1] += 0.8225806451612904;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    result[0] += 0.20833333333333334;
    result[1] += 0.7916666666666666;
  } else {
    result[0] += 0.8169014084507042;
    result[1] += 0.18309859154929578;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21717171717171718;
    result[1] += 0.7828282828282829;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
    result[0] += 0.6893203883495146;
    result[1] += 0.3106796116504854;
  } else {
    result[0] += 0.1875;
    result[1] += 0.8125;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5636099874973297119) ) ) {
    result[0] += 0.31223628691983124;
    result[1] += 0.6877637130801688;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4536300003528594971) ) ) {
    result[0] += 0.891566265060241;
    result[1] += 0.10843373493975904;
  } else {
    result[0] += 0.17777777777777778;
    result[1] += 0.8222222222222222;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0914500020444393158) ) ) {
    result[0] += 0.9607843137254902;
    result[1] += 0.0392156862745098;
  } else {
    result[0] += 0.21226415094339623;
    result[1] += 0.7877358490566038;
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    result[0] += 0.6530612244897959;
    result[1] += 0.3469387755102041;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9395299851894378662) ) ) {
    result[0] += 0.9696969696969697;
    result[1] += 0.030303030303030304;
  } else {
    result[0] += 0.30434782608695654;
    result[1] += 0.6956521739130435;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    result[0] += 0.9642857142857143;
    result[1] += 0.03571428571428571;
  } else {
    result[0] += 0.2680851063829787;
    result[1] += 0.7319148936170212;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 0.9811320754716981;
    result[1] += 0.018867924528301886;
  } else {
    result[0] += 0.16666666666666666;
    result[1] += 0.8333333333333334;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30864197530864196;
    result[1] += 0.691358024691358;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22115384615384615;
    result[1] += 0.7788461538461539;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2626728110599078;
    result[1] += 0.7373271889400922;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9272800087928771973) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.34177215189873417;
    result[1] += 0.6582278481012658;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    result[0] += 0.9487179487179487;
    result[1] += 0.05128205128205128;
  } else {
    result[0] += 0.22321428571428573;
    result[1] += 0.7767857142857143;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
    result[0] += 0.9193548387096774;
    result[1] += 0.08064516129032258;
  } else {
    result[0] += 0.19900497512437812;
    result[1] += 0.8009950248756219;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4149949997663497925) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30638297872340425;
    result[1] += 0.6936170212765957;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3236514522821577;
    result[1] += 0.6763485477178424;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2875100076198577881) ) ) {
    result[0] += 0.8295454545454546;
    result[1] += 0.17045454545454544;
  } else {
    result[0] += 0.14857142857142858;
    result[1] += 0.8514285714285714;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
    result[0] += 0.671875;
    result[1] += 0.328125;
  } else {
    result[0] += 0.2518518518518518;
    result[1] += 0.7481481481481481;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1359499990940093994) ) ) {
    result[0] += 0.7380952380952381;
    result[1] += 0.2619047619047619;
  } else {
    result[0] += 0.2569832402234637;
    result[1] += 0.7430167597765364;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19248826291079812;
    result[1] += 0.8075117370892019;
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4998099952936172485) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2056451612903226;
    result[1] += 0.7943548387096774;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3326350003480911255) ) ) {
    result[0] += 0.6339285714285714;
    result[1] += 0.36607142857142855;
  } else {
    result[0] += 0.2251655629139073;
    result[1] += 0.7748344370860927;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2171945701357466;
    result[1] += 0.7828054298642534;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    result[0] += 0.25906735751295334;
    result[1] += 0.7409326424870466;
  } else {
    result[0] += 0.8;
    result[1] += 0.2;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23255813953488372;
    result[1] += 0.7674418604651163;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.18974358974358974;
    result[1] += 0.8102564102564103;
  } else {
    result[0] += 0.8382352941176471;
    result[1] += 0.16176470588235295;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 0.9420289855072463;
    result[1] += 0.057971014492753624;
  } else {
    result[0] += 0.17010309278350516;
    result[1] += 0.8298969072164949;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    result[0] += 0.7586206896551724;
    result[1] += 0.2413793103448276;
  } else {
    result[0] += 0.24431818181818182;
    result[1] += 0.7556818181818182;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    result[0] += 0.17989417989417988;
    result[1] += 0.8201058201058201;
  } else {
    result[0] += 0.8918918918918919;
    result[1] += 0.10810810810810811;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1035000011324882507) ) ) {
    result[0] += 0.9090909090909091;
    result[1] += 0.09090909090909091;
  } else {
    result[0] += 0.2009132420091324;
    result[1] += 0.7990867579908676;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28708133971291866;
    result[1] += 0.7129186602870813;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.05680000036954879761) ) ) {
    result[0] += 0.6790123456790124;
    result[1] += 0.32098765432098764;
  } else {
    result[0] += 0.23076923076923078;
    result[1] += 0.7692307692307693;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    result[0] += 0.20218579234972678;
    result[1] += 0.7978142076502732;
  } else {
    result[0] += 0.85;
    result[1] += 0.15;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    result[0] += 0.9230769230769231;
    result[1] += 0.07692307692307693;
  } else {
    result[0] += 0.2777777777777778;
    result[1] += 0.7222222222222222;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.22959183673469388;
    result[1] += 0.7704081632653061;
  } else {
    result[0] += 0.8507462686567164;
    result[1] += 0.14925373134328357;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18981481481481483;
    result[1] += 0.8101851851851852;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.275;
    result[1] += 0.725;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1674641148325359;
    result[1] += 0.8325358851674641;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    result[0] += 0.9464285714285714;
    result[1] += 0.05357142857142857;
  } else {
    result[0] += 0.1642512077294686;
    result[1] += 0.8357487922705314;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
