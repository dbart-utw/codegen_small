
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.17412935323383086;
    result[1] += 0.8258706467661692;
  } else {
    result[0] += 0.9516129032258065;
    result[1] += 0.04838709677419355;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.17412935323383086;
    result[1] += 0.8258706467661692;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 0.6304347826086957;
    result[1] += 0.3695652173913043;
  } else {
    result[0] += 0.24561403508771928;
    result[1] += 0.7543859649122807;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e932768))) ) ) {
    result[0] += 0.9767441860465116;
    result[1] += 0.023255813953488372;
  } else {
    result[0] += 0.24545454545454545;
    result[1] += 0.7545454545454545;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23414634146341465;
    result[1] += 0.7658536585365854;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23557692307692307;
    result[1] += 0.7644230769230769;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 0.9206349206349206;
    result[1] += 0.07936507936507936;
  } else {
    result[0] += 0.195;
    result[1] += 0.805;
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
    result[0] += 0.32217573221757323;
    result[1] += 0.6778242677824268;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e937bf2))) ) ) {
    result[0] += 0.98;
    result[1] += 0.02;
  } else {
    result[0] += 0.1596244131455399;
    result[1] += 0.8403755868544601;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4505d1))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2875;
    result[1] += 0.7125;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.6883116883116883;
    result[1] += 0.3116883116883117;
  } else {
    result[0] += 0.1881720430107527;
    result[1] += 0.8118279569892473;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    result[0] += 0.9310344827586207;
    result[1] += 0.06896551724137931;
  } else {
    result[0] += 0.2777777777777778;
    result[1] += 0.7222222222222222;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21524663677130046;
    result[1] += 0.7847533632286996;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9636363636363636;
    result[1] += 0.03636363636363636;
  } else {
    result[0] += 0.1971153846153846;
    result[1] += 0.8028846153846154;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2558139534883721;
    result[1] += 0.7441860465116279;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.15263157894736842;
    result[1] += 0.8473684210526315;
  } else {
    result[0] += 0.8767123287671232;
    result[1] += 0.1232876712328767;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17982456140350878;
    result[1] += 0.8201754385964912;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e4595ff))) ) ) {
    result[0] += 0.9577464788732394;
    result[1] += 0.04225352112676056;
  } else {
    result[0] += 0.24479166666666666;
    result[1] += 0.7552083333333334;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.13023255813953488;
    result[1] += 0.8697674418604651;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24761904761904763;
    result[1] += 0.7523809523809524;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4b25c4))) ) ) {
    result[0] += 0.3080168776371308;
    result[1] += 0.6919831223628692;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9818181818181818;
    result[1] += 0.01818181818181818;
  } else {
    result[0] += 0.20192307692307693;
    result[1] += 0.7980769230769231;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f667a64))) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.3103448275862069;
    result[1] += 0.6896551724137931;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24285714285714285;
    result[1] += 0.7571428571428571;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.15;
    result[1] += 0.85;
  } else {
    result[0] += 0.9206349206349206;
    result[1] += 0.07936507936507936;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9302325581395349;
    result[1] += 0.06976744186046512;
  } else {
    result[0] += 0.17727272727272728;
    result[1] += 0.8227272727272728;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 0.7088607594936709;
    result[1] += 0.2911392405063291;
  } else {
    result[0] += 0.24456521739130435;
    result[1] += 0.7554347826086957;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.32905982905982906;
    result[1] += 0.6709401709401709;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9636363636363636;
    result[1] += 0.03636363636363636;
  } else {
    result[0] += 0.23557692307692307;
    result[1] += 0.7644230769230769;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23853211009174313;
    result[1] += 0.7614678899082569;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    result[0] += 0.9811320754716981;
    result[1] += 0.018867924528301886;
  } else {
    result[0] += 0.19523809523809524;
    result[1] += 0.8047619047619048;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18636363636363637;
    result[1] += 0.8136363636363636;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    result[0] += 0.9298245614035088;
    result[1] += 0.07017543859649122;
  } else {
    result[0] += 0.21359223300970873;
    result[1] += 0.7864077669902912;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d277708))) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.22274881516587677;
    result[1] += 0.7772511848341233;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24019607843137256;
    result[1] += 0.7598039215686274;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2796610169491525;
    result[1] += 0.7203389830508474;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef7342f))) ) ) {
    result[0] += 0.9642857142857143;
    result[1] += 0.03571428571428571;
  } else {
    result[0] += 0.26382978723404255;
    result[1] += 0.7361702127659574;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2765957446808511;
    result[1] += 0.723404255319149;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d939432))) ) ) {
    result[0] += 0.6146788990825688;
    result[1] += 0.3853211009174312;
  } else {
    result[0] += 0.21428571428571427;
    result[1] += 0.7857142857142857;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9830508474576272;
    result[1] += 0.01694915254237288;
  } else {
    result[0] += 0.19117647058823528;
    result[1] += 0.8088235294117647;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
    result[0] += 0.8787878787878788;
    result[1] += 0.12121212121212122;
  } else {
    result[0] += 0.2782608695652174;
    result[1] += 0.7217391304347827;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    result[0] += 0.9682539682539683;
    result[1] += 0.031746031746031744;
  } else {
    result[0] += 0.215;
    result[1] += 0.785;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    result[0] += 0.96875;
    result[1] += 0.03125;
  } else {
    result[0] += 0.3203463203463203;
    result[1] += 0.6796536796536796;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f220e94))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28451882845188287;
    result[1] += 0.7154811715481172;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.17326732673267325;
    result[1] += 0.8267326732673267;
  } else {
    result[0] += 0.8524590163934426;
    result[1] += 0.14754098360655737;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f71ab4c))) ) ) {
    result[0] += 0.32608695652173914;
    result[1] += 0.6739130434782609;
  } else {
    result[0] += 0.8787878787878788;
    result[1] += 0.12121212121212122;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4b9970))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23673469387755103;
    result[1] += 0.763265306122449;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f65c098))) ) ) {
    result[0] += 0.29508196721311475;
    result[1] += 0.7049180327868853;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2627118644067797;
    result[1] += 0.7372881355932204;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25833333333333336;
    result[1] += 0.7416666666666667;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f67b938))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2457627118644068;
    result[1] += 0.7542372881355932;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9736842105263158;
    result[1] += 0.02631578947368421;
  } else {
    result[0] += 0.16444444444444445;
    result[1] += 0.8355555555555556;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 0.96;
    result[1] += 0.04;
  } else {
    result[0] += 0.23109243697478993;
    result[1] += 0.7689075630252101;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f168922))) ) ) {
    result[0] += 0.9565217391304348;
    result[1] += 0.043478260869565216;
  } else {
    result[0] += 0.32083333333333336;
    result[1] += 0.6791666666666667;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9803921568627451;
    result[1] += 0.0196078431372549;
  } else {
    result[0] += 0.17452830188679244;
    result[1] += 0.8254716981132075;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.21761658031088082;
    result[1] += 0.7823834196891192;
  } else {
    result[0] += 0.8571428571428571;
    result[1] += 0.14285714285714285;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.20618556701030927;
    result[1] += 0.7938144329896907;
  } else {
    result[0] += 0.8405797101449275;
    result[1] += 0.15942028985507245;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.24644549763033174;
    result[1] += 0.7535545023696683;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23148148148148148;
    result[1] += 0.7685185185185185;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 0.7341772151898734;
    result[1] += 0.26582278481012656;
  } else {
    result[0] += 0.2554347826086957;
    result[1] += 0.7445652173913043;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22169811320754718;
    result[1] += 0.7783018867924528;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e4595ff))) ) ) {
    result[0] += 0.875;
    result[1] += 0.125;
  } else {
    result[0] += 0.21465968586387435;
    result[1] += 0.7853403141361257;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9795918367346939;
    result[1] += 0.02040816326530612;
  } else {
    result[0] += 0.21495327102803738;
    result[1] += 0.7850467289719626;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20270270270270271;
    result[1] += 0.7972972972972973;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3eb060fe))) ) ) {
    result[0] += 0.8611111111111112;
    result[1] += 0.1388888888888889;
  } else {
    result[0] += 0.29515418502202645;
    result[1] += 0.7048458149779736;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19791666666666666;
    result[1] += 0.8020833333333334;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eb48fda))) ) ) {
    result[0] += 0.6;
    result[1] += 0.4;
  } else {
    result[0] += 0.20945945945945946;
    result[1] += 0.7905405405405406;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 0.9830508474576272;
    result[1] += 0.01694915254237288;
  } else {
    result[0] += 0.20098039215686275;
    result[1] += 0.7990196078431373;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e4ebaf1))) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.25862068965517243;
    result[1] += 0.7413793103448276;
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
    result[0] += 0.28085106382978725;
    result[1] += 0.7191489361702128;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2838983050847458;
    result[1] += 0.7161016949152542;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 0.6767676767676768;
    result[1] += 0.32323232323232326;
  } else {
    result[0] += 0.17073170731707318;
    result[1] += 0.8292682926829268;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 0.9245283018867925;
    result[1] += 0.07547169811320754;
  } else {
    result[0] += 0.20476190476190476;
    result[1] += 0.7952380952380952;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28512396694214875;
    result[1] += 0.7148760330578512;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3ead1f60))) ) ) {
    result[0] += 0.6545454545454545;
    result[1] += 0.34545454545454546;
  } else {
    result[0] += 0.20261437908496732;
    result[1] += 0.7973856209150327;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    result[0] += 0.32217573221757323;
    result[1] += 0.6778242677824268;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 0.875;
    result[1] += 0.125;
  } else {
    result[0] += 0.22613065326633167;
    result[1] += 0.7738693467336684;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
    result[0] += 0.9428571428571428;
    result[1] += 0.05714285714285714;
  } else {
    result[0] += 0.2719298245614035;
    result[1] += 0.7280701754385965;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24056603773584906;
    result[1] += 0.7594339622641509;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e933483))) ) ) {
    result[0] += 0.9210526315789473;
    result[1] += 0.07894736842105263;
  } else {
    result[0] += 0.1657754010695187;
    result[1] += 0.8342245989304813;
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
