
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3125;
    result[1] += 0.6875;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f705e0c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3275862068965517;
    result[1] += 0.6724137931034483;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.7466666666666667;
    result[1] += 0.25333333333333335;
  } else {
    result[0] += 0.21808510638297873;
    result[1] += 0.7819148936170213;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f5e92a3))) ) ) {
    result[0] += 0.3263598326359833;
    result[1] += 0.6736401673640168;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e62031d))) ) ) {
    result[0] += 0.616822429906542;
    result[1] += 0.38317757009345793;
  } else {
    result[0] += 0.23076923076923078;
    result[1] += 0.7692307692307693;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdd590c))) ) ) {
    result[0] += 0.74;
    result[1] += 0.26;
  } else {
    result[0] += 0.18404907975460122;
    result[1] += 0.8159509202453987;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 0.5737704918032787;
    result[1] += 0.4262295081967213;
  } else {
    result[0] += 0.23404255319148937;
    result[1] += 0.7659574468085106;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee51a22))) ) ) {
    result[0] += 0.9041095890410958;
    result[1] += 0.0958904109589041;
  } else {
    result[0] += 0.1736842105263158;
    result[1] += 0.8263157894736842;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19815668202764977;
    result[1] += 0.8018433179723502;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e7a747e))) ) ) {
    result[0] += 0.632;
    result[1] += 0.368;
  } else {
    result[0] += 0.2028985507246377;
    result[1] += 0.7971014492753623;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0e30a9))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30416666666666664;
    result[1] += 0.6958333333333333;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e075e20))) ) ) {
    result[0] += 0.648;
    result[1] += 0.352;
  } else {
    result[0] += 0.15942028985507245;
    result[1] += 0.8405797101449275;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9818181818181818;
    result[1] += 0.01818181818181818;
  } else {
    result[0] += 0.27403846153846156;
    result[1] += 0.7259615384615384;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20930232558139536;
    result[1] += 0.7906976744186046;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28054298642533937;
    result[1] += 0.7194570135746606;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9767441860465116;
    result[1] += 0.023255813953488372;
  } else {
    result[0] += 0.2545454545454545;
    result[1] += 0.7454545454545455;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2905982905982906;
    result[1] += 0.7094017094017094;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eb62585))) ) ) {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
  } else {
    result[0] += 0.3059360730593607;
    result[1] += 0.6940639269406392;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 0.9836065573770492;
    result[1] += 0.01639344262295082;
  } else {
    result[0] += 0.19306930693069307;
    result[1] += 0.806930693069307;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.33476394849785407;
    result[1] += 0.6652360515021459;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.32589285714285715;
    result[1] += 0.6741071428571429;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2838427947598253;
    result[1] += 0.7161572052401747;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    result[0] += 0.9622641509433962;
    result[1] += 0.03773584905660377;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.23783783783783785;
    result[1] += 0.7621621621621621;
  } else {
    result[0] += 0.8974358974358975;
    result[1] += 0.10256410256410256;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f33f09a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3138075313807531;
    result[1] += 0.6861924686192469;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    result[0] += 0.9552238805970149;
    result[1] += 0.04477611940298507;
  } else {
    result[0] += 0.20918367346938777;
    result[1] += 0.7908163265306123;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2916666666666667;
    result[1] += 0.7083333333333334;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    result[0] += 0.9056603773584906;
    result[1] += 0.09433962264150944;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19902912621359223;
    result[1] += 0.8009708737864077;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9649122807017544;
    result[1] += 0.03508771929824561;
  } else {
    result[0] += 0.21844660194174756;
    result[1] += 0.7815533980582524;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17766497461928935;
    result[1] += 0.8223350253807107;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d63c750))) ) ) {
    result[0] += 0.835820895522388;
    result[1] += 0.16417910447761194;
  } else {
    result[0] += 0.30612244897959184;
    result[1] += 0.6938775510204082;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 0.17676767676767677;
    result[1] += 0.8232323232323232;
  } else {
    result[0] += 0.8923076923076924;
    result[1] += 0.1076923076923077;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22110552763819097;
    result[1] += 0.7788944723618091;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.6781609195402298;
    result[1] += 0.3218390804597701;
  } else {
    result[0] += 0.2159090909090909;
    result[1] += 0.7840909090909091;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    result[0] += 0.90625;
    result[1] += 0.09375;
  } else {
    result[0] += 0.19597989949748743;
    result[1] += 0.8040201005025126;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    result[0] += 0.6565656565656566;
    result[1] += 0.3434343434343434;
  } else {
    result[0] += 0.15853658536585366;
    result[1] += 0.8414634146341463;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2857142857142857;
    result[1] += 0.7142857142857143;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22171945701357465;
    result[1] += 0.7782805429864253;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3cb55ef2))) ) ) {
    result[0] += 0.7590361445783133;
    result[1] += 0.24096385542168675;
  } else {
    result[0] += 0.2722222222222222;
    result[1] += 0.7277777777777777;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0d3d86))) ) ) {
    result[0] += 0.746268656716418;
    result[1] += 0.2537313432835821;
  } else {
    result[0] += 0.21428571428571427;
    result[1] += 0.7857142857142857;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f715864))) ) ) {
    result[0] += 0.2827868852459016;
    result[1] += 0.7172131147540983;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19306930693069307;
    result[1] += 0.806930693069307;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42176e))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31950207468879666;
    result[1] += 0.6804979253112033;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2982456140350877;
    result[1] += 0.7017543859649122;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.7011494252873564;
    result[1] += 0.2988505747126437;
  } else {
    result[0] += 0.1590909090909091;
    result[1] += 0.8409090909090909;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.21465968586387435;
    result[1] += 0.7853403141361257;
  } else {
    result[0] += 0.8472222222222222;
    result[1] += 0.1527777777777778;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 0.6210526315789474;
    result[1] += 0.37894736842105264;
  } else {
    result[0] += 0.20238095238095238;
    result[1] += 0.7976190476190477;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2398190045248869;
    result[1] += 0.7601809954751131;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    result[0] += 0.7027027027027027;
    result[1] += 0.2972972972972973;
  } else {
    result[0] += 0.2236842105263158;
    result[1] += 0.7763157894736842;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.3648068669527897;
    result[1] += 0.6351931330472103;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    result[0] += 0.9076923076923077;
    result[1] += 0.09230769230769231;
  } else {
    result[0] += 0.2777777777777778;
    result[1] += 0.7222222222222222;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 0.9375;
    result[1] += 0.0625;
  } else {
    result[0] += 0.2510822510822511;
    result[1] += 0.7489177489177489;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb098b3))) ) ) {
    result[0] += 0.6016260162601627;
    result[1] += 0.3983739837398374;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5588e4))) ) ) {
    result[0] += 0.6666666666666666;
    result[1] += 0.3333333333333333;
  } else {
    result[0] += 0.18902439024390244;
    result[1] += 0.8109756097560976;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.32489451476793246;
    result[1] += 0.6751054852320675;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22026431718061673;
    result[1] += 0.7797356828193832;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2175925925925926;
    result[1] += 0.7824074074074074;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d73fa6e))) ) ) {
    result[0] += 0.8888888888888888;
    result[1] += 0.1111111111111111;
  } else {
    result[0] += 0.25;
    result[1] += 0.75;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.19597989949748743;
    result[1] += 0.8040201005025126;
  } else {
    result[0] += 0.78125;
    result[1] += 0.21875;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 0.719626168224299;
    result[1] += 0.2803738317757009;
  } else {
    result[0] += 0.1987179487179487;
    result[1] += 0.8012820512820513;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 0.6395348837209303;
    result[1] += 0.36046511627906974;
  } else {
    result[0] += 0.22033898305084745;
    result[1] += 0.7796610169491526;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.1794871794871795;
    result[1] += 0.8205128205128205;
  } else {
    result[0] += 0.8823529411764706;
    result[1] += 0.11764705882352941;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21393034825870647;
    result[1] += 0.7860696517412935;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 0.5826771653543307;
    result[1] += 0.41732283464566927;
  } else {
    result[0] += 0.22794117647058823;
    result[1] += 0.7720588235294118;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30434782608695654;
    result[1] += 0.6956521739130435;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.22727272727272727;
    result[1] += 0.7727272727272727;
  } else {
    result[0] += 0.8;
    result[1] += 0.2;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7cd9e8))) ) ) {
    result[0] += 0.2265193370165746;
    result[1] += 0.7734806629834254;
  } else {
    result[0] += 0.8536585365853658;
    result[1] += 0.14634146341463414;
  }
  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ebadaba))) ) ) {
    result[0] += 0.6363636363636364;
    result[1] += 0.36363636363636365;
  } else {
    result[0] += 0.26143790849673204;
    result[1] += 0.738562091503268;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f5a26d4))) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.3103448275862069;
    result[1] += 0.6896551724137931;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f692a84))) ) ) {
    result[0] += 0.2987551867219917;
    result[1] += 0.7012448132780082;
  } else {
    result[0] += 0.9090909090909091;
    result[1] += 0.09090909090909091;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
    result[0] += 0.98;
    result[1] += 0.02;
  } else {
    result[0] += 0.2112676056338028;
    result[1] += 0.7887323943661971;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0e30a9))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3574468085106383;
    result[1] += 0.6425531914893617;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed81301))) ) ) {
    result[0] += 0.9259259259259259;
    result[1] += 0.07407407407407407;
  } else {
    result[0] += 0.1813186813186813;
    result[1] += 0.8186813186813187;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
    result[0] += 0.29914529914529914;
    result[1] += 0.7008547008547008;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e9a3ad2))) ) ) {
    result[0] += 0.8888888888888888;
    result[1] += 0.1111111111111111;
  } else {
    result[0] += 0.2889908256880734;
    result[1] += 0.7110091743119266;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ba93f29))) ) ) {
    result[0] += 0.7397260273972602;
    result[1] += 0.2602739726027397;
  } else {
    result[0] += 0.21578947368421053;
    result[1] += 0.7842105263157895;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 0.5596330275229358;
    result[1] += 0.44036697247706424;
  } else {
    result[0] += 0.12337662337662338;
    result[1] += 0.8766233766233766;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
    result[0] += 0.9552238805970149;
    result[1] += 0.04477611940298507;
  } else {
    result[0] += 0.15306122448979592;
    result[1] += 0.8469387755102041;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e09ff))) ) ) {
    result[0] += 0.6896551724137931;
    result[1] += 0.3103448275862069;
  } else {
    result[0] += 0.2556818181818182;
    result[1] += 0.7443181818181818;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f673238))) ) ) {
    result[0] += 0.33047210300429186;
    result[1] += 0.6695278969957081;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
    result[0] += 0.631578947368421;
    result[1] += 0.3684210526315789;
  } else {
    result[0] += 0.19463087248322147;
    result[1] += 0.8053691275167785;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 0.972972972972973;
    result[1] += 0.02702702702702703;
  } else {
    result[0] += 0.20105820105820105;
    result[1] += 0.798941798941799;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9814814814814815;
    result[1] += 0.018518518518518517;
  } else {
    result[0] += 0.2822966507177033;
    result[1] += 0.7177033492822966;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.2578947368421053;
    result[1] += 0.7421052631578947;
  } else {
    result[0] += 0.8767123287671232;
    result[1] += 0.1232876712328767;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 0.6538461538461539;
    result[1] += 0.34615384615384615;
  } else {
    result[0] += 0.20125786163522014;
    result[1] += 0.7987421383647799;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9807692307692307;
    result[1] += 0.019230769230769232;
  } else {
    result[0] += 0.25118483412322273;
    result[1] += 0.7488151658767772;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23394495412844038;
    result[1] += 0.7660550458715596;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 0.2356020942408377;
    result[1] += 0.7643979057591623;
  } else {
    result[0] += 0.8472222222222222;
    result[1] += 0.1527777777777778;
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7280f1))) ) ) {
    result[0] += 0.3244444444444444;
    result[1] += 0.6755555555555556;
  } else {
    result[0] += 0.8157894736842105;
    result[1] += 0.18421052631578946;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e29fa98))) ) ) {
    result[0] += 0.7117117117117117;
    result[1] += 0.2882882882882883;
  } else {
    result[0] += 0.18421052631578946;
    result[1] += 0.8157894736842105;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 0.6630434782608695;
    result[1] += 0.33695652173913043;
  } else {
    result[0] += 0.2046783625730994;
    result[1] += 0.7953216374269005;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
    result[0] += 0.6568627450980392;
    result[1] += 0.3431372549019608;
  } else {
    result[0] += 0.19254658385093168;
    result[1] += 0.8074534161490683;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17676767676767677;
    result[1] += 0.8232323232323232;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25217391304347825;
    result[1] += 0.7478260869565218;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.6262626262626263;
    result[1] += 0.37373737373737376;
  } else {
    result[0] += 0.22560975609756098;
    result[1] += 0.774390243902439;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 0.6666666666666666;
    result[1] += 0.3333333333333333;
  } else {
    result[0] += 0.24022346368715083;
    result[1] += 0.7597765363128491;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f416628))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3220338983050847;
    result[1] += 0.6779661016949152;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24;
    result[1] += 0.76;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
