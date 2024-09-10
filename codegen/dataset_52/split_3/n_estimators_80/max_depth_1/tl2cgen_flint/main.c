
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
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 0.9565217391304348;
    result[1] += 0.043478260869565216;
  } else {
    result[0] += 0.32916666666666666;
    result[1] += 0.6708333333333333;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9344262295081968;
    result[1] += 0.06557377049180328;
  } else {
    result[0] += 0.21782178217821782;
    result[1] += 0.7821782178217822;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.15458937198067632;
    result[1] += 0.8454106280193237;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3302752293577982;
    result[1] += 0.6697247706422018;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 0.6164383561643836;
    result[1] += 0.3835616438356164;
  } else {
    result[0] += 0.21578947368421053;
    result[1] += 0.7842105263157895;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c7559b4))) ) ) {
    result[0] += 0.68;
    result[1] += 0.32;
  } else {
    result[0] += 0.2553191489361702;
    result[1] += 0.7446808510638298;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef4c2f8))) ) ) {
    result[0] += 0.9473684210526315;
    result[1] += 0.05263157894736842;
  } else {
    result[0] += 0.30666666666666664;
    result[1] += 0.6933333333333334;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.34710743801652894;
    result[1] += 0.6528925619834711;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 0.9444444444444444;
    result[1] += 0.05555555555555555;
  } else {
    result[0] += 0.24880382775119617;
    result[1] += 0.7511961722488039;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 0.9696969696969697;
    result[1] += 0.030303030303030304;
  } else {
    result[0] += 0.2182741116751269;
    result[1] += 0.7817258883248731;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29338842975206614;
    result[1] += 0.7066115702479339;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
    result[0] += 0.6947368421052632;
    result[1] += 0.30526315789473685;
  } else {
    result[0] += 0.20833333333333334;
    result[1] += 0.7916666666666666;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
    result[0] += 0.9811320754716981;
    result[1] += 0.018867924528301886;
  } else {
    result[0] += 0.22380952380952382;
    result[1] += 0.7761904761904762;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3305084745762712;
    result[1] += 0.6694915254237288;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9591836734693877;
    result[1] += 0.04081632653061224;
  } else {
    result[0] += 0.24766355140186916;
    result[1] += 0.7523364485981309;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.16842105263157894;
    result[1] += 0.8315789473684211;
  } else {
    result[0] += 0.8082191780821918;
    result[1] += 0.1917808219178082;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24299065420560748;
    result[1] += 0.7570093457943925;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e45b813))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3055555555555556;
    result[1] += 0.6944444444444444;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2742616033755274;
    result[1] += 0.7257383966244726;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2318181818181818;
    result[1] += 0.7681818181818182;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e87a97e))) ) ) {
    result[0] += 0.648936170212766;
    result[1] += 0.35106382978723405;
  } else {
    result[0] += 0.23668639053254437;
    result[1] += 0.7633136094674556;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9672131147540983;
    result[1] += 0.03278688524590164;
  } else {
    result[0] += 0.21782178217821782;
    result[1] += 0.7821782178217822;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 0.9285714285714286;
    result[1] += 0.07142857142857142;
  } else {
    result[0] += 0.3191489361702128;
    result[1] += 0.6808510638297872;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4bf290))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28820960698689957;
    result[1] += 0.7117903930131004;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
    result[0] += 0.6702127659574468;
    result[1] += 0.32978723404255317;
  } else {
    result[0] += 0.23668639053254437;
    result[1] += 0.7633136094674556;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8e3886))) ) ) {
    result[0] += 0.9565217391304348;
    result[1] += 0.043478260869565216;
  } else {
    result[0] += 0.20276497695852536;
    result[1] += 0.7972350230414746;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 0.9696969696969697;
    result[1] += 0.030303030303030304;
  } else {
    result[0] += 0.2826086956521739;
    result[1] += 0.717391304347826;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29310344827586204;
    result[1] += 0.7068965517241379;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.2315270935960591;
    result[1] += 0.7684729064039408;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e7aaa3b))) ) ) {
    result[0] += 0.625;
    result[1] += 0.375;
  } else {
    result[0] += 0.20359281437125748;
    result[1] += 0.7964071856287425;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.15384615384615385;
    result[1] += 0.8461538461538461;
  } else {
    result[0] += 0.7654320987654321;
    result[1] += 0.2345679012345679;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f667a64))) ) ) {
    result[0] += 0.8837209302325582;
    result[1] += 0.11627906976744186;
  } else {
    result[0] += 0.2681818181818182;
    result[1] += 0.7318181818181818;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f65f7a4))) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.32051282051282054;
    result[1] += 0.6794871794871795;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2911392405063291;
    result[1] += 0.7088607594936709;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28085106382978725;
    result[1] += 0.7191489361702128;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9454545454545454;
    result[1] += 0.05454545454545454;
  } else {
    result[0] += 0.2644230769230769;
    result[1] += 0.7355769230769231;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 0.6635514018691588;
    result[1] += 0.3364485981308411;
  } else {
    result[0] += 0.1858974358974359;
    result[1] += 0.8141025641025641;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2645739910313901;
    result[1] += 0.7354260089686099;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
    result[0] += 0.9142857142857143;
    result[1] += 0.08571428571428572;
  } else {
    result[0] += 0.2631578947368421;
    result[1] += 0.7368421052631579;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9411764705882353;
    result[1] += 0.058823529411764705;
  } else {
    result[0] += 0.19339622641509435;
    result[1] += 0.8066037735849056;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29545454545454547;
    result[1] += 0.7045454545454546;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.1951219512195122;
    result[1] += 0.8048780487804879;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.25806451612903225;
    result[1] += 0.7419354838709677;
  } else {
    result[0] += 0.7922077922077922;
    result[1] += 0.2077922077922078;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ee0dd83))) ) ) {
    result[0] += 0.9411764705882353;
    result[1] += 0.058823529411764705;
  } else {
    result[0] += 0.31004366812227074;
    result[1] += 0.6899563318777293;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9387755102040817;
    result[1] += 0.061224489795918366;
  } else {
    result[0] += 0.22897196261682243;
    result[1] += 0.7710280373831776;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.6526315789473685;
    result[1] += 0.3473684210526316;
  } else {
    result[0] += 0.2261904761904762;
    result[1] += 0.7738095238095238;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e924b34))) ) ) {
    result[0] += 0.9833333333333333;
    result[1] += 0.016666666666666666;
  } else {
    result[0] += 0.21182266009852216;
    result[1] += 0.7881773399014779;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27155172413793105;
    result[1] += 0.728448275862069;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4dce08))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.26406926406926406;
    result[1] += 0.7359307359307359;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6db328))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27391304347826084;
    result[1] += 0.7260869565217392;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d1d4413))) ) ) {
    result[0] += 0.6619718309859155;
    result[1] += 0.3380281690140845;
  } else {
    result[0] += 0.19270833333333334;
    result[1] += 0.8072916666666666;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
    result[0] += 0.5959595959595959;
    result[1] += 0.40404040404040403;
  } else {
    result[0] += 0.17682926829268292;
    result[1] += 0.823170731707317;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.16666666666666666;
    result[1] += 0.8333333333333334;
  } else {
    result[0] += 0.8732394366197183;
    result[1] += 0.1267605633802817;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3347457627118644;
    result[1] += 0.6652542372881356;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.16753926701570682;
    result[1] += 0.8324607329842932;
  } else {
    result[0] += 0.8611111111111112;
    result[1] += 0.1388888888888889;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 0.7009345794392523;
    result[1] += 0.29906542056074764;
  } else {
    result[0] += 0.1858974358974359;
    result[1] += 0.8141025641025641;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.1708542713567839;
    result[1] += 0.8291457286432161;
  } else {
    result[0] += 0.875;
    result[1] += 0.125;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e39c62a))) ) ) {
    result[0] += 0.6470588235294118;
    result[1] += 0.35294117647058826;
  } else {
    result[0] += 0.18012422360248448;
    result[1] += 0.8198757763975155;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eea2142))) ) ) {
    result[0] += 0.96;
    result[1] += 0.04;
  } else {
    result[0] += 0.31092436974789917;
    result[1] += 0.6890756302521008;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2648401826484018;
    result[1] += 0.7351598173515982;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
    result[0] += 0.9642857142857143;
    result[1] += 0.03571428571428571;
  } else {
    result[0] += 0.35319148936170214;
    result[1] += 0.6468085106382979;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e45b813))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2422907488986784;
    result[1] += 0.7577092511013216;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3474576271186441;
    result[1] += 0.652542372881356;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 0.9423076923076923;
    result[1] += 0.057692307692307696;
  } else {
    result[0] += 0.21800947867298578;
    result[1] += 0.7819905213270142;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30991735537190085;
    result[1] += 0.6900826446280992;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29017857142857145;
    result[1] += 0.7098214285714286;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2772727272727273;
    result[1] += 0.7227272727272728;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29910714285714285;
    result[1] += 0.7008928571428571;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9354838709677419;
    result[1] += 0.06451612903225806;
  } else {
    result[0] += 0.17412935323383086;
    result[1] += 0.8258706467661692;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28870292887029286;
    result[1] += 0.7112970711297071;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d60bf5d))) ) ) {
    result[0] += 0.9818181818181818;
    result[1] += 0.01818181818181818;
  } else {
    result[0] += 0.1971153846153846;
    result[1] += 0.8028846153846154;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
    result[0] += 0.85;
    result[1] += 0.15;
  } else {
    result[0] += 0.2825112107623318;
    result[1] += 0.7174887892376681;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9777777777777777;
    result[1] += 0.022222222222222223;
  } else {
    result[0] += 0.30275229357798167;
    result[1] += 0.6972477064220184;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 0.9772727272727273;
    result[1] += 0.022727272727272728;
  } else {
    result[0] += 0.3105022831050228;
    result[1] += 0.6894977168949772;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9607843137254902;
    result[1] += 0.0392156862745098;
  } else {
    result[0] += 0.2028301886792453;
    result[1] += 0.7971698113207547;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20192307692307693;
    result[1] += 0.7980769230769231;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9523809523809523;
    result[1] += 0.047619047619047616;
  } else {
    result[0] += 0.205;
    result[1] += 0.795;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 0.6448598130841121;
    result[1] += 0.35514018691588783;
  } else {
    result[0] += 0.19230769230769232;
    result[1] += 0.8076923076923077;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3177966101694915;
    result[1] += 0.6822033898305084;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9852941176470589;
    result[1] += 0.014705882352941176;
  } else {
    result[0] += 0.2153846153846154;
    result[1] += 0.7846153846153846;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
