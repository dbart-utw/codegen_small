
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
    result[0] += 0.2288135593220339;
    result[1] += 0.7711864406779662;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df4341a))) ) ) {
    result[0] += 0.7341772151898734;
    result[1] += 0.26582278481012656;
  } else {
    result[0] += 0.20652173913043478;
    result[1] += 0.7934782608695652;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0e5c92))) ) ) {
    result[0] += 0.7558139534883721;
    result[1] += 0.2441860465116279;
  } else {
    result[0] += 0.23163841807909605;
    result[1] += 0.768361581920904;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
    result[0] += 0.7083333333333334;
    result[1] += 0.2916666666666667;
  } else {
    result[0] += 0.17964071856287425;
    result[1] += 0.8203592814371258;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 0.20618556701030927;
    result[1] += 0.7938144329896907;
  } else {
    result[0] += 0.8840579710144928;
    result[1] += 0.11594202898550725;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0ee4e2))) ) ) {
    result[0] += 0.6756756756756757;
    result[1] += 0.32432432432432434;
  } else {
    result[0] += 0.2857142857142857;
    result[1] += 0.7142857142857143;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31666666666666665;
    result[1] += 0.6833333333333333;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.2127659574468085;
    result[1] += 0.7872340425531915;
  } else {
    result[0] += 0.8133333333333334;
    result[1] += 0.18666666666666668;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.20212765957446807;
    result[1] += 0.7978723404255319;
  } else {
    result[0] += 0.8666666666666667;
    result[1] += 0.13333333333333333;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3093220338983051;
    result[1] += 0.690677966101695;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3504273504273504;
    result[1] += 0.6495726495726496;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    result[0] += 0.648936170212766;
    result[1] += 0.35106382978723405;
  } else {
    result[0] += 0.17159763313609466;
    result[1] += 0.8284023668639053;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27751196172248804;
    result[1] += 0.722488038277512;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9298245614035088;
    result[1] += 0.07017543859649122;
  } else {
    result[0] += 0.22815533980582525;
    result[1] += 0.7718446601941747;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3dacd9e8))) ) ) {
    result[0] += 0.723404255319149;
    result[1] += 0.2765957446808511;
  } else {
    result[0] += 0.2485207100591716;
    result[1] += 0.7514792899408284;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18981481481481483;
    result[1] += 0.8101851851851852;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17391304347826086;
    result[1] += 0.8260869565217391;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    result[0] += 0.6296296296296297;
    result[1] += 0.37037037037037035;
  } else {
    result[0] += 0.23870967741935484;
    result[1] += 0.7612903225806451;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f1b9faa))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2754237288135593;
    result[1] += 0.7245762711864406;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.2;
    result[1] += 0.8;
  } else {
    result[0] += 0.7941176470588235;
    result[1] += 0.20588235294117646;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.20512820512820512;
    result[1] += 0.7948717948717948;
  } else {
    result[0] += 0.8235294117647058;
    result[1] += 0.17647058823529413;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9634146341463414;
    result[1] += 0.036585365853658534;
  } else {
    result[0] += 0.1712707182320442;
    result[1] += 0.8287292817679558;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 0.6666666666666666;
    result[1] += 0.3333333333333333;
  } else {
    result[0] += 0.2032967032967033;
    result[1] += 0.7967032967032966;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.22;
    result[1] += 0.78;
  } else {
    result[0] += 0.873015873015873;
    result[1] += 0.12698412698412698;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.20855614973262032;
    result[1] += 0.7914438502673797;
  } else {
    result[0] += 0.8289473684210527;
    result[1] += 0.17105263157894737;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebfd60e))) ) ) {
    result[0] += 0.7021276595744681;
    result[1] += 0.2978723404255319;
  } else {
    result[0] += 0.23076923076923078;
    result[1] += 0.7692307692307693;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27014218009478674;
    result[1] += 0.7298578199052133;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edb851e))) ) ) {
    result[0] += 0.9344262295081968;
    result[1] += 0.06557377049180328;
  } else {
    result[0] += 0.28217821782178215;
    result[1] += 0.7178217821782178;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9272727272727272;
    result[1] += 0.07272727272727272;
  } else {
    result[0] += 0.24519230769230768;
    result[1] += 0.7548076923076923;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e986984))) ) ) {
    result[0] += 0.5798319327731093;
    result[1] += 0.42016806722689076;
  } else {
    result[0] += 0.18055555555555555;
    result[1] += 0.8194444444444444;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24766355140186916;
    result[1] += 0.7523364485981309;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28773584905660377;
    result[1] += 0.7122641509433962;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    result[0] += 0.9365079365079365;
    result[1] += 0.06349206349206349;
  } else {
    result[0] += 0.205;
    result[1] += 0.795;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.19718309859154928;
    result[1] += 0.8028169014084507;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    result[0] += 0.6413043478260869;
    result[1] += 0.358695652173913;
  } else {
    result[0] += 0.1871345029239766;
    result[1] += 0.8128654970760234;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31512605042016806;
    result[1] += 0.6848739495798319;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df4341a))) ) ) {
    result[0] += 0.7142857142857143;
    result[1] += 0.2857142857142857;
  } else {
    result[0] += 0.19553072625698323;
    result[1] += 0.8044692737430168;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2627118644067797;
    result[1] += 0.7372881355932204;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3cb866e4))) ) ) {
    result[0] += 0.7040816326530612;
    result[1] += 0.29591836734693877;
  } else {
    result[0] += 0.21818181818181817;
    result[1] += 0.7818181818181819;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    result[0] += 0.20218579234972678;
    result[1] += 0.7978142076502732;
  } else {
    result[0] += 0.8625;
    result[1] += 0.1375;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17567567567567569;
    result[1] += 0.8243243243243243;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ec176de))) ) ) {
    result[0] += 0.6446280991735537;
    result[1] += 0.35537190082644626;
  } else {
    result[0] += 0.21830985915492956;
    result[1] += 0.7816901408450704;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30131004366812225;
    result[1] += 0.6986899563318777;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2894736842105263;
    result[1] += 0.7105263157894737;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.16346153846153846;
    result[1] += 0.8365384615384616;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23300970873786409;
    result[1] += 0.7669902912621359;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2936170212765957;
    result[1] += 0.7063829787234043;
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e1f9f02))) ) ) {
    result[0] += 0.7027027027027027;
    result[1] += 0.2972972972972973;
  } else {
    result[0] += 0.25396825396825395;
    result[1] += 0.746031746031746;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    result[0] += 0.9803921568627451;
    result[1] += 0.0196078431372549;
  } else {
    result[0] += 0.2688679245283019;
    result[1] += 0.7311320754716981;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    result[0] += 0.205;
    result[1] += 0.795;
  } else {
    result[0] += 0.8571428571428571;
    result[1] += 0.14285714285714285;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
    result[0] += 0.6534653465346535;
    result[1] += 0.3465346534653465;
  } else {
    result[0] += 0.17901234567901234;
    result[1] += 0.8209876543209876;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24472573839662448;
    result[1] += 0.7552742616033755;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    result[0] += 0.7526881720430108;
    result[1] += 0.24731182795698925;
  } else {
    result[0] += 0.2;
    result[1] += 0.8;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2268041237113402;
    result[1] += 0.7731958762886598;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.1787709497206704;
    result[1] += 0.8212290502793296;
  } else {
    result[0] += 0.8452380952380952;
    result[1] += 0.15476190476190477;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 0.6388888888888888;
    result[1] += 0.3611111111111111;
  } else {
    result[0] += 0.16774193548387098;
    result[1] += 0.832258064516129;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9393939393939394;
    result[1] += 0.06060606060606061;
  } else {
    result[0] += 0.19289340101522842;
    result[1] += 0.8071065989847716;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.18719211822660098;
    result[1] += 0.812807881773399;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f66f640))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2826086956521739;
    result[1] += 0.717391304347826;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e84b1ee))) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.19900497512437812;
    result[1] += 0.8009950248756219;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e9859c9))) ) ) {
    result[0] += 0.6311475409836066;
    result[1] += 0.36885245901639346;
  } else {
    result[0] += 0.16312056737588654;
    result[1] += 0.8368794326241135;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2923728813559322;
    result[1] += 0.7076271186440678;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e410b))) ) ) {
    result[0] += 0.7471264367816092;
    result[1] += 0.25287356321839083;
  } else {
    result[0] += 0.19318181818181818;
    result[1] += 0.8068181818181818;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d60bf5d))) ) ) {
    result[0] += 0.9454545454545454;
    result[1] += 0.05454545454545454;
  } else {
    result[0] += 0.23557692307692307;
    result[1] += 0.7644230769230769;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3d85f5ae))) ) ) {
    result[0] += 0.6458333333333334;
    result[1] += 0.3541666666666667;
  } else {
    result[0] += 0.23952095808383234;
    result[1] += 0.7604790419161677;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 0.9574468085106383;
    result[1] += 0.0425531914893617;
  } else {
    result[0] += 0.16666666666666666;
    result[1] += 0.8333333333333334;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3418803418803419;
    result[1] += 0.6581196581196581;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    result[0] += 0.9607843137254902;
    result[1] += 0.0392156862745098;
  } else {
    result[0] += 0.2358490566037736;
    result[1] += 0.7641509433962265;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e4bd512))) ) ) {
    result[0] += 0.6228070175438597;
    result[1] += 0.37719298245614036;
  } else {
    result[0] += 0.16778523489932887;
    result[1] += 0.8322147651006712;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
    result[0] += 0.9811320754716981;
    result[1] += 0.018867924528301886;
  } else {
    result[0] += 0.18571428571428572;
    result[1] += 0.8142857142857143;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 0.9821428571428571;
    result[1] += 0.017857142857142856;
  } else {
    result[0] += 0.2222222222222222;
    result[1] += 0.7777777777777778;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
    result[0] += 0.96875;
    result[1] += 0.03125;
  } else {
    result[0] += 0.3203463203463203;
    result[1] += 0.6796536796536796;
  }
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3073770491803279;
    result[1] += 0.6926229508196722;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee17c1c))) ) ) {
    result[0] += 0.8857142857142857;
    result[1] += 0.11428571428571428;
  } else {
    result[0] += 0.18652849740932642;
    result[1] += 0.8134715025906736;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2532188841201717;
    result[1] += 0.7467811158798283;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e924b34))) ) ) {
    result[0] += 0.9333333333333333;
    result[1] += 0.06666666666666667;
  } else {
    result[0] += 0.1921182266009852;
    result[1] += 0.8078817733990148;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22167487684729065;
    result[1] += 0.7783251231527094;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
    result[0] += 0.9642857142857143;
    result[1] += 0.03571428571428571;
  } else {
    result[0] += 0.1642512077294686;
    result[1] += 0.8357487922705314;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 0.8909090909090909;
    result[1] += 0.10909090909090909;
  } else {
    result[0] += 0.25;
    result[1] += 0.75;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.27848101265822783;
    result[1] += 0.7215189873417721;
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
