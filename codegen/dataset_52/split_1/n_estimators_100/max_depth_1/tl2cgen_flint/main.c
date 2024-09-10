
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
    result[0] += 0.8571428571428571;
    result[1] += 0.14285714285714285;
  } else {
    result[0] += 0.2631578947368421;
    result[1] += 0.7368421052631579;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9607843137254902;
    result[1] += 0.0392156862745098;
  } else {
    result[0] += 0.2028301886792453;
    result[1] += 0.7971698113207547;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.19597989949748743;
    result[1] += 0.8040201005025126;
  } else {
    result[0] += 0.84375;
    result[1] += 0.15625;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28634361233480177;
    result[1] += 0.7136563876651982;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2318181818181818;
    result[1] += 0.7681818181818182;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 0.9803921568627451;
    result[1] += 0.0196078431372549;
  } else {
    result[0] += 0.2358490566037736;
    result[1] += 0.7641509433962265;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9803921568627451;
    result[1] += 0.0196078431372549;
  } else {
    result[0] += 0.16981132075471697;
    result[1] += 0.8301886792452831;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3f3190))) ) ) {
    result[0] += 0.3162393162393162;
    result[1] += 0.6837606837606838;
  } else {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21052631578947367;
    result[1] += 0.7894736842105263;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.94;
    result[1] += 0.06;
  } else {
    result[0] += 0.20657276995305165;
    result[1] += 0.7934272300469484;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b3c60))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20772946859903382;
    result[1] += 0.7922705314009661;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2706422018348624;
    result[1] += 0.7293577981651376;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c71fddf))) ) ) {
    result[0] += 0.6767676767676768;
    result[1] += 0.32323232323232326;
  } else {
    result[0] += 0.22560975609756098;
    result[1] += 0.774390243902439;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f15a21e))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2288135593220339;
    result[1] += 0.7711864406779662;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f58ef88))) ) ) {
    result[0] += 0.8928571428571429;
    result[1] += 0.10714285714285714;
  } else {
    result[0] += 0.3276595744680851;
    result[1] += 0.6723404255319149;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e985682))) ) ) {
    result[0] += 0.6481481481481481;
    result[1] += 0.35185185185185186;
  } else {
    result[0] += 0.16129032258064516;
    result[1] += 0.8387096774193549;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18536585365853658;
    result[1] += 0.8146341463414634;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 0.9310344827586207;
    result[1] += 0.06896551724137931;
  } else {
    result[0] += 0.2692307692307692;
    result[1] += 0.7307692307692307;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 0.9803921568627451;
    result[1] += 0.0196078431372549;
  } else {
    result[0] += 0.2358490566037736;
    result[1] += 0.7641509433962265;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 0.6506024096385542;
    result[1] += 0.3493975903614458;
  } else {
    result[0] += 0.18333333333333332;
    result[1] += 0.8166666666666667;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ac7e282))) ) ) {
    result[0] += 0.6947368421052632;
    result[1] += 0.30526315789473685;
  } else {
    result[0] += 0.19642857142857142;
    result[1] += 0.8035714285714286;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23148148148148148;
    result[1] += 0.7685185185185185;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19047619047619047;
    result[1] += 0.8095238095238095;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0cc4f0))) ) ) {
    result[0] += 0.9795918367346939;
    result[1] += 0.02040816326530612;
  } else {
    result[0] += 0.308411214953271;
    result[1] += 0.6915887850467289;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e175643))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18009478672985782;
    result[1] += 0.8199052132701422;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3389830508474576;
    result[1] += 0.6610169491525424;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 0.9649122807017544;
    result[1] += 0.03508771929824561;
  } else {
    result[0] += 0.22815533980582525;
    result[1] += 0.7718446601941747;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1743119266055046;
    result[1] += 0.8256880733944955;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 0.7108433734939759;
    result[1] += 0.2891566265060241;
  } else {
    result[0] += 0.2388888888888889;
    result[1] += 0.7611111111111111;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    result[0] += 0.9193548387096774;
    result[1] += 0.08064516129032258;
  } else {
    result[0] += 0.22388059701492538;
    result[1] += 0.7761194029850746;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
    result[0] += 0.9736842105263158;
    result[1] += 0.02631578947368421;
  } else {
    result[0] += 0.24444444444444444;
    result[1] += 0.7555555555555555;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e94dd2f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2579185520361991;
    result[1] += 0.7420814479638009;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edb851e))) ) ) {
    result[0] += 0.8955223880597015;
    result[1] += 0.1044776119402985;
  } else {
    result[0] += 0.17346938775510204;
    result[1] += 0.826530612244898;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3daf6168))) ) ) {
    result[0] += 0.5858585858585859;
    result[1] += 0.41414141414141414;
  } else {
    result[0] += 0.18902439024390244;
    result[1] += 0.8109756097560976;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18981481481481483;
    result[1] += 0.8101851851851852;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3dc5e5f4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17475728155339806;
    result[1] += 0.8252427184466019;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.32599118942731276;
    result[1] += 0.6740088105726872;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de38866))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24528301886792453;
    result[1] += 0.7547169811320755;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 0.9761904761904762;
    result[1] += 0.023809523809523808;
  } else {
    result[0] += 0.25339366515837103;
    result[1] += 0.746606334841629;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23076923076923078;
    result[1] += 0.7692307692307693;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ef4e854))) ) ) {
    result[0] += 0.9743589743589743;
    result[1] += 0.02564102564102564;
  } else {
    result[0] += 0.25;
    result[1] += 0.75;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e3230fd))) ) ) {
    result[0] += 0.6607142857142857;
    result[1] += 0.3392857142857143;
  } else {
    result[0] += 0.17880794701986755;
    result[1] += 0.8211920529801324;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.23605150214592274;
    result[1] += 0.7639484978540773;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.23195876288659795;
    result[1] += 0.7680412371134021;
  } else {
    result[0] += 0.855072463768116;
    result[1] += 0.14492753623188406;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.15695067264573992;
    result[1] += 0.8430493273542601;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31555555555555553;
    result[1] += 0.6844444444444444;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edfb5f2))) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.1951219512195122;
    result[1] += 0.8048780487804879;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 0.9393939393939394;
    result[1] += 0.06060606060606061;
  } else {
    result[0] += 0.25217391304347825;
    result[1] += 0.7478260869565218;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 0.6764705882352942;
    result[1] += 0.3235294117647059;
  } else {
    result[0] += 0.21025641025641026;
    result[1] += 0.7897435897435897;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cebc409))) ) ) {
    result[0] += 0.92;
    result[1] += 0.08;
  } else {
    result[0] += 0.23943661971830985;
    result[1] += 0.7605633802816901;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e353cde))) ) ) {
    result[0] += 0.6727272727272727;
    result[1] += 0.32727272727272727;
  } else {
    result[0] += 0.20261437908496732;
    result[1] += 0.7973856209150327;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ddc0443))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17727272727272728;
    result[1] += 0.8227272727272728;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ba93f29))) ) ) {
    result[0] += 0.6891891891891891;
    result[1] += 0.3108108108108108;
  } else {
    result[0] += 0.21693121693121692;
    result[1] += 0.783068783068783;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.20098039215686275;
    result[1] += 0.7990196078431373;
  } else {
    result[0] += 0.9322033898305084;
    result[1] += 0.06779661016949153;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9772727272727273;
    result[1] += 0.022727272727272728;
  } else {
    result[0] += 0.2054794520547945;
    result[1] += 0.7945205479452054;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 0.9811320754716981;
    result[1] += 0.018867924528301886;
  } else {
    result[0] += 0.20952380952380953;
    result[1] += 0.7904761904761904;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3df465e8))) ) ) {
    result[0] += 0.6987951807228916;
    result[1] += 0.30120481927710846;
  } else {
    result[0] += 0.2222222222222222;
    result[1] += 0.7777777777777778;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1891891891891892;
    result[1] += 0.8108108108108109;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e97f8ca))) ) ) {
    result[0] += 0.69;
    result[1] += 0.31;
  } else {
    result[0] += 0.17791411042944785;
    result[1] += 0.8220858895705522;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2107843137254902;
    result[1] += 0.7892156862745098;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.193717277486911;
    result[1] += 0.806282722513089;
  } else {
    result[0] += 0.875;
    result[1] += 0.125;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3c6d1e))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20982142857142858;
    result[1] += 0.7901785714285714;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25316455696202533;
    result[1] += 0.7468354430379747;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ef4e854))) ) ) {
    result[0] += 0.9375;
    result[1] += 0.0625;
  } else {
    result[0] += 0.24242424242424243;
    result[1] += 0.7575757575757576;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9761904761904762;
    result[1] += 0.023809523809523808;
  } else {
    result[0] += 0.19457013574660634;
    result[1] += 0.8054298642533937;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2616033755274262;
    result[1] += 0.7383966244725738;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2807017543859649;
    result[1] += 0.7192982456140351;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 0.9142857142857143;
    result[1] += 0.08571428571428572;
  } else {
    result[0] += 0.2719298245614035;
    result[1] += 0.7280701754385965;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e32c12b))) ) ) {
    result[0] += 0.5673076923076923;
    result[1] += 0.4326923076923077;
  } else {
    result[0] += 0.1509433962264151;
    result[1] += 0.8490566037735849;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0b1ceb))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29646017699115046;
    result[1] += 0.7035398230088495;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
    result[0] += 0.3029045643153527;
    result[1] += 0.6970954356846473;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1943127962085308;
    result[1] += 0.8056872037914692;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.1778846153846154;
    result[1] += 0.8221153846153846;
  } else {
    result[0] += 0.8727272727272727;
    result[1] += 0.12727272727272726;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3203463203463203;
    result[1] += 0.6796536796536796;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 0.7166666666666667;
    result[1] += 0.2833333333333333;
  } else {
    result[0] += 0.21674876847290642;
    result[1] += 0.7832512315270936;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.26495726495726496;
    result[1] += 0.7350427350427351;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9565217391304348;
    result[1] += 0.043478260869565216;
  } else {
    result[0] += 0.20276497695852536;
    result[1] += 0.7972350230414746;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8b3c60))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19724770642201836;
    result[1] += 0.8027522935779816;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22272727272727272;
    result[1] += 0.7772727272727272;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9318181818181818;
    result[1] += 0.06818181818181818;
  } else {
    result[0] += 0.2237442922374429;
    result[1] += 0.776255707762557;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.2742616033755274;
    result[1] += 0.7257383966244726;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df28b6e))) ) ) {
    result[0] += 0.6623376623376623;
    result[1] += 0.33766233766233766;
  } else {
    result[0] += 0.23118279569892472;
    result[1] += 0.7688172043010753;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    result[0] += 0.96875;
    result[1] += 0.03125;
  } else {
    result[0] += 0.23809523809523808;
    result[1] += 0.7619047619047619;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20089285714285715;
    result[1] += 0.7991071428571429;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 0.6987951807228916;
    result[1] += 0.30120481927710846;
  } else {
    result[0] += 0.18888888888888888;
    result[1] += 0.8111111111111111;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9565217391304348;
    result[1] += 0.043478260869565216;
  } else {
    result[0] += 0.23963133640552994;
    result[1] += 0.7603686635944701;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e92f05a))) ) ) {
    result[0] += 0.8428571428571429;
    result[1] += 0.15714285714285714;
  } else {
    result[0] += 0.15544041450777202;
    result[1] += 0.844559585492228;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.24390243902439024;
    result[1] += 0.7560975609756098;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 0.9705882352941176;
    result[1] += 0.029411764705882353;
  } else {
    result[0] += 0.3318777292576419;
    result[1] += 0.6681222707423581;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c02d384))) ) ) {
    result[0] += 0.7380952380952381;
    result[1] += 0.2619047619047619;
  } else {
    result[0] += 0.24581005586592178;
    result[1] += 0.7541899441340782;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f5a3bcd))) ) ) {
    result[0] += 0.31223628691983124;
    result[1] += 0.6877637130801688;
  } else {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 0.9344262295081968;
    result[1] += 0.06557377049180328;
  } else {
    result[0] += 0.1485148514851485;
    result[1] += 0.8514851485148515;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27111111111111114;
    result[1] += 0.7288888888888889;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ddc0443))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22439024390243903;
    result[1] += 0.775609756097561;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19724770642201836;
    result[1] += 0.8027522935779816;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d540cc8))) ) ) {
    result[0] += 0.6701030927835051;
    result[1] += 0.32989690721649484;
  } else {
    result[0] += 0.18674698795180722;
    result[1] += 0.8132530120481928;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9830508474576272;
    result[1] += 0.01694915254237288;
  } else {
    result[0] += 0.14215686274509803;
    result[1] += 0.8578431372549019;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24311926605504589;
    result[1] += 0.7568807339449541;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 0.9791666666666666;
    result[1] += 0.020833333333333332;
  } else {
    result[0] += 0.22790697674418606;
    result[1] += 0.772093023255814;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3daa3d71))) ) ) {
    result[0] += 0.7464788732394366;
    result[1] += 0.2535211267605634;
  } else {
    result[0] += 0.3072916666666667;
    result[1] += 0.6927083333333334;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
