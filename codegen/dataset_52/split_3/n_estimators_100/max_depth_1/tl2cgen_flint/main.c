
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2523364485981308;
    result[1] += 0.7476635514018691;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 0.9722222222222222;
    result[1] += 0.027777777777777776;
  } else {
    result[0] += 0.3039647577092511;
    result[1] += 0.6960352422907489;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.34309623430962344;
    result[1] += 0.6569037656903766;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9538461538461539;
    result[1] += 0.046153846153846156;
  } else {
    result[0] += 0.2222222222222222;
    result[1] += 0.7777777777777778;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5227d0))) ) ) {
    result[0] += 0.9705882352941176;
    result[1] += 0.029411764705882353;
  } else {
    result[0] += 0.2445414847161572;
    result[1] += 0.7554585152838428;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3181818181818182;
    result[1] += 0.6818181818181818;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.2146341463414634;
    result[1] += 0.7853658536585366;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d8e2eb2))) ) ) {
    result[0] += 0.6363636363636364;
    result[1] += 0.36363636363636365;
  } else {
    result[0] += 0.2073170731707317;
    result[1] += 0.7926829268292683;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7cd9e8))) ) ) {
    result[0] += 0.15343915343915343;
    result[1] += 0.8465608465608465;
  } else {
    result[0] += 0.8513513513513513;
    result[1] += 0.14864864864864866;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2672413793103448;
    result[1] += 0.7327586206896551;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 0.6666666666666666;
    result[1] += 0.3333333333333333;
  } else {
    result[0] += 0.19653179190751446;
    result[1] += 0.8034682080924855;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 0.7346938775510204;
    result[1] += 0.2653061224489796;
  } else {
    result[0] += 0.18181818181818182;
    result[1] += 0.8181818181818182;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2912621359223301;
    result[1] += 0.7087378640776699;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22119815668202766;
    result[1] += 0.7788018433179723;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23043478260869565;
    result[1] += 0.7695652173913043;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4666ba))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3206751054852321;
    result[1] += 0.679324894514768;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23348017621145375;
    result[1] += 0.7665198237885462;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d540cc8))) ) ) {
    result[0] += 0.7291666666666666;
    result[1] += 0.2708333333333333;
  } else {
    result[0] += 0.2754491017964072;
    result[1] += 0.7245508982035929;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.94;
    result[1] += 0.06;
  } else {
    result[0] += 0.2300469483568075;
    result[1] += 0.7699530516431925;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9056603773584906;
    result[1] += 0.09433962264150944;
  } else {
    result[0] += 0.23809523809523808;
    result[1] += 0.7619047619047619;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    result[0] += 0.6506024096385542;
    result[1] += 0.3493975903614458;
  } else {
    result[0] += 0.18888888888888888;
    result[1] += 0.8111111111111111;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2850678733031674;
    result[1] += 0.7149321266968326;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 0.6538461538461539;
    result[1] += 0.34615384615384615;
  } else {
    result[0] += 0.2138364779874214;
    result[1] += 0.7861635220125787;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30303030303030304;
    result[1] += 0.696969696969697;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
    result[0] += 0.7128712871287128;
    result[1] += 0.2871287128712871;
  } else {
    result[0] += 0.25925925925925924;
    result[1] += 0.7407407407407407;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.23684210526315788;
    result[1] += 0.7631578947368421;
  } else {
    result[0] += 0.8493150684931506;
    result[1] += 0.1506849315068493;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.26609442060085836;
    result[1] += 0.7339055793991416;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2028985507246377;
    result[1] += 0.7971014492753623;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e971de6))) ) ) {
    result[0] += 0.6509433962264151;
    result[1] += 0.3490566037735849;
  } else {
    result[0] += 0.1910828025477707;
    result[1] += 0.8089171974522293;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 0.775;
    result[1] += 0.225;
  } else {
    result[0] += 0.23497267759562843;
    result[1] += 0.7650273224043715;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d8e2eb2))) ) ) {
    result[0] += 0.6893203883495146;
    result[1] += 0.3106796116504854;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2916666666666667;
    result[1] += 0.7083333333333334;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3d1d97f6))) ) ) {
    result[0] += 0.7029702970297029;
    result[1] += 0.297029702970297;
  } else {
    result[0] += 0.22839506172839505;
    result[1] += 0.7716049382716049;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0b544c))) ) ) {
    result[0] += 0.9354838709677419;
    result[1] += 0.06451612903225806;
  } else {
    result[0] += 0.3448275862068966;
    result[1] += 0.6551724137931034;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27155172413793105;
    result[1] += 0.728448275862069;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f508312))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3025210084033613;
    result[1] += 0.6974789915966386;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eea2142))) ) ) {
    result[0] += 0.9705882352941176;
    result[1] += 0.029411764705882353;
  } else {
    result[0] += 0.2838427947598253;
    result[1] += 0.7161572052401747;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9701492537313433;
    result[1] += 0.029850746268656716;
  } else {
    result[0] += 0.17346938775510204;
    result[1] += 0.826530612244898;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2920353982300885;
    result[1] += 0.7079646017699115;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9852941176470589;
    result[1] += 0.014705882352941176;
  } else {
    result[0] += 0.18974358974358974;
    result[1] += 0.8102564102564103;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2300469483568075;
    result[1] += 0.7699530516431925;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27149321266968324;
    result[1] += 0.7285067873303167;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 0.9384615384615385;
    result[1] += 0.06153846153846154;
  } else {
    result[0] += 0.20202020202020202;
    result[1] += 0.797979797979798;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d8e94ee))) ) ) {
    result[0] += 0.7227722772277227;
    result[1] += 0.27722772277227725;
  } else {
    result[0] += 0.2345679012345679;
    result[1] += 0.7654320987654321;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4b9970))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.358974358974359;
    result[1] += 0.6410256410256411;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22580645161290322;
    result[1] += 0.7741935483870968;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 0.6991150442477876;
    result[1] += 0.3008849557522124;
  } else {
    result[0] += 0.24;
    result[1] += 0.76;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.301255230125523;
    result[1] += 0.698744769874477;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9827586206896551;
    result[1] += 0.017241379310344827;
  } else {
    result[0] += 0.3073170731707317;
    result[1] += 0.6926829268292682;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31196581196581197;
    result[1] += 0.688034188034188;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.651685393258427;
    result[1] += 0.34831460674157305;
  } else {
    result[0] += 0.15517241379310345;
    result[1] += 0.8448275862068966;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2131979695431472;
    result[1] += 0.7868020304568528;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18309859154929578;
    result[1] += 0.8169014084507042;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7bb742))) ) ) {
    result[0] += 0.23809523809523808;
    result[1] += 0.7619047619047619;
  } else {
    result[0] += 0.8108108108108109;
    result[1] += 0.1891891891891892;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3157894736842105;
    result[1] += 0.6842105263157895;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
    result[0] += 0.32599118942731276;
    result[1] += 0.6740088105726872;
  } else {
    result[0] += 0.8888888888888888;
    result[1] += 0.1111111111111111;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d134acb))) ) ) {
    result[0] += 0.7647058823529411;
    result[1] += 0.23529411764705882;
  } else {
    result[0] += 0.22564102564102564;
    result[1] += 0.7743589743589744;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.6823529411764706;
    result[1] += 0.3176470588235294;
  } else {
    result[0] += 0.21348314606741572;
    result[1] += 0.7865168539325843;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27751196172248804;
    result[1] += 0.722488038277512;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d8f1024))) ) ) {
    result[0] += 0.5892857142857143;
    result[1] += 0.4107142857142857;
  } else {
    result[0] += 0.16556291390728478;
    result[1] += 0.8344370860927153;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.17412935323383086;
    result[1] += 0.8258706467661692;
  } else {
    result[0] += 0.8225806451612904;
    result[1] += 0.1774193548387097;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.18333333333333332;
    result[1] += 0.8166666666666667;
  } else {
    result[0] += 0.8674698795180723;
    result[1] += 0.13253012048192772;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f663d1c))) ) ) {
    result[0] += 0.9090909090909091;
    result[1] += 0.09090909090909091;
  } else {
    result[0] += 0.34347826086956523;
    result[1] += 0.6565217391304348;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f673b10))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2956521739130435;
    result[1] += 0.7043478260869566;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ebd158c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3050847457627119;
    result[1] += 0.6949152542372882;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 0.9166666666666666;
    result[1] += 0.08333333333333333;
  } else {
    result[0] += 0.2643171806167401;
    result[1] += 0.73568281938326;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.33183856502242154;
    result[1] += 0.6681614349775785;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
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
    result[0] += 0.29831932773109243;
    result[1] += 0.7016806722689075;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23636363636363636;
    result[1] += 0.7636363636363637;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9253731343283582;
    result[1] += 0.07462686567164178;
  } else {
    result[0] += 0.2755102040816326;
    result[1] += 0.7244897959183674;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5b5200))) ) ) {
    result[0] += 0.6701030927835051;
    result[1] += 0.32989690721649484;
  } else {
    result[0] += 0.2469879518072289;
    result[1] += 0.7530120481927711;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.6310679611650486;
    result[1] += 0.36893203883495146;
  } else {
    result[0] += 0.19375;
    result[1] += 0.80625;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.21354166666666666;
    result[1] += 0.7864583333333334;
  } else {
    result[0] += 0.8309859154929577;
    result[1] += 0.16901408450704225;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e45b813))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28054298642533937;
    result[1] += 0.7194570135746606;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.19047619047619047;
    result[1] += 0.8095238095238095;
  } else {
    result[0] += 0.8648648648648649;
    result[1] += 0.13513513513513514;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e09ff))) ) ) {
    result[0] += 0.651685393258427;
    result[1] += 0.34831460674157305;
  } else {
    result[0] += 0.23563218390804597;
    result[1] += 0.764367816091954;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d1844d0))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24880382775119617;
    result[1] += 0.7511961722488039;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3167420814479638;
    result[1] += 0.6832579185520362;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29411764705882354;
    result[1] += 0.7058823529411765;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.20855614973262032;
    result[1] += 0.7914438502673797;
  } else {
    result[0] += 0.8289473684210527;
    result[1] += 0.17105263157894737;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1861a6))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2889908256880734;
    result[1] += 0.7110091743119266;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9137931034482759;
    result[1] += 0.08620689655172414;
  } else {
    result[0] += 0.2097560975609756;
    result[1] += 0.7902439024390244;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21495327102803738;
    result[1] += 0.7850467289719626;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.17098445595854922;
    result[1] += 0.8290155440414507;
  } else {
    result[0] += 0.8857142857142857;
    result[1] += 0.11428571428571428;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 0.8648648648648649;
    result[1] += 0.13513513513513514;
  } else {
    result[0] += 0.30973451327433627;
    result[1] += 0.6902654867256637;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23414634146341465;
    result[1] += 0.7658536585365854;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.648936170212766;
    result[1] += 0.35106382978723405;
  } else {
    result[0] += 0.15976331360946747;
    result[1] += 0.8402366863905325;
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7b9043))) ) ) {
    result[0] += 0.314410480349345;
    result[1] += 0.6855895196506551;
  } else {
    result[0] += 0.9117647058823529;
    result[1] += 0.08823529411764706;
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
    result[0] += 0.30869565217391304;
    result[1] += 0.691304347826087;
  } else {
    result[0] += 0.9393939393939394;
    result[1] += 0.06060606060606061;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2669491525423729;
    result[1] += 0.7330508474576272;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18181818181818182;
    result[1] += 0.8181818181818182;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9;
    result[1] += 0.1;
  } else {
    result[0] += 0.22065727699530516;
    result[1] += 0.7793427230046949;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3008474576271186;
    result[1] += 0.6991525423728814;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22522522522522523;
    result[1] += 0.7747747747747747;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27312775330396477;
    result[1] += 0.7268722466960352;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22705314009661837;
    result[1] += 0.7729468599033816;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9411764705882353;
    result[1] += 0.058823529411764705;
  } else {
    result[0] += 0.20754716981132076;
    result[1] += 0.7924528301886793;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.74;
    result[1] += 0.26;
  } else {
    result[0] += 0.15337423312883436;
    result[1] += 0.8466257668711656;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0b1ceb))) ) ) {
    result[0] += 0.972972972972973;
    result[1] += 0.02702702702702703;
  } else {
    result[0] += 0.24778761061946902;
    result[1] += 0.7522123893805309;
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
