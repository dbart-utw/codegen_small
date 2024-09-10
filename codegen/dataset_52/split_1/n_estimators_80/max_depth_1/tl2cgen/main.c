
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
    result[0] += 0.967741935483871;
    result[1] += 0.03225806451612903;
  } else {
    result[0] += 0.27155172413793105;
    result[1] += 0.728448275862069;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    result[0] += 0.1902439024390244;
    result[1] += 0.8097560975609757;
  } else {
    result[0] += 0.8448275862068966;
    result[1] += 0.15517241379310345;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02878000028431415558) ) ) {
    result[0] += 0.9230769230769231;
    result[1] += 0.07692307692307693;
  } else {
    result[0] += 0.16964285714285715;
    result[1] += 0.8303571428571429;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.28991596638655465;
    result[1] += 0.7100840336134454;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.16908212560386474;
    result[1] += 0.8309178743961353;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2725899964570999146) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22330097087378642;
    result[1] += 0.7766990291262136;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9003050029277801514) ) ) {
    result[0] += 0.9428571428571428;
    result[1] += 0.05714285714285714;
  } else {
    result[0] += 0.31140350877192985;
    result[1] += 0.6885964912280702;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.08312500268220901489) ) ) {
    result[0] += 0.8;
    result[1] += 0.2;
  } else {
    result[0] += 0.22065727699530516;
    result[1] += 0.7793427230046949;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 0.9803921568627451;
    result[1] += 0.0196078431372549;
  } else {
    result[0] += 0.18396226415094338;
    result[1] += 0.8160377358490566;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.18617021276595744;
    result[1] += 0.8138297872340425;
  } else {
    result[0] += 0.8133333333333334;
    result[1] += 0.18666666666666668;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8586249947547912598) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2918454935622318;
    result[1] += 0.7081545064377682;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22966507177033493;
    result[1] += 0.7703349282296651;
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1205449998378753662) ) ) {
    result[0] += 0.5454545454545454;
    result[1] += 0.45454545454545453;
  } else {
    result[0] += 0.21951219512195122;
    result[1] += 0.7804878048780488;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4220199882984161377) ) ) {
    result[0] += 0.9565217391304348;
    result[1] += 0.043478260869565216;
  } else {
    result[0] += 0.14432989690721648;
    result[1] += 0.8556701030927835;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2146118721461187;
    result[1] += 0.7853881278538812;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.05560999922454357147) ) ) {
    result[0] += 0.7368421052631579;
    result[1] += 0.2631578947368421;
  } else {
    result[0] += 0.24757281553398058;
    result[1] += 0.7524271844660194;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9069299995899200439) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2916666666666667;
    result[1] += 0.7083333333333334;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22790697674418606;
    result[1] += 0.772093023255814;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2629310344827586;
    result[1] += 0.7370689655172413;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.24873096446700507;
    result[1] += 0.751269035532995;
  } else {
    result[0] += 0.8181818181818182;
    result[1] += 0.18181818181818182;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 0.9761904761904762;
    result[1] += 0.023809523809523808;
  } else {
    result[0] += 0.2398190045248869;
    result[1] += 0.7601809954751131;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9807692307692307;
    result[1] += 0.019230769230769232;
  } else {
    result[0] += 0.26540284360189575;
    result[1] += 0.7345971563981043;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2725899964570999146) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.17073170731707318;
    result[1] += 0.8292682926829268;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    result[0] += 0.7011494252873564;
    result[1] += 0.2988505747126437;
  } else {
    result[0] += 0.26704545454545453;
    result[1] += 0.7329545454545454;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8983099758625030518) ) ) {
    result[0] += 0.9696969696969697;
    result[1] += 0.030303030303030304;
  } else {
    result[0] += 0.2782608695652174;
    result[1] += 0.7217391304347827;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2328767123287671;
    result[1] += 0.7671232876712328;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
    result[0] += 0.5714285714285714;
    result[1] += 0.42857142857142855;
  } else {
    result[0] += 0.1390728476821192;
    result[1] += 0.8609271523178808;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1477899998426437378) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21717171717171718;
    result[1] += 0.7828282828282829;
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 0.9629629629629629;
    result[1] += 0.037037037037037035;
  } else {
    result[0] += 0.2669491525423729;
    result[1] += 0.7330508474576272;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.18316831683168316;
    result[1] += 0.8168316831683168;
  } else {
    result[0] += 0.8032786885245902;
    result[1] += 0.19672131147540983;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.21338912133891214;
    result[1] += 0.7866108786610879;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24056603773584906;
    result[1] += 0.7594339622641509;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2643171806167401;
    result[1] += 0.73568281938326;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4572850018739700317) ) ) {
    result[0] += 0.9615384615384616;
    result[1] += 0.038461538461538464;
  } else {
    result[0] += 0.29535864978902954;
    result[1] += 0.7046413502109705;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9821428571428571;
    result[1] += 0.017857142857142856;
  } else {
    result[0] += 0.2463768115942029;
    result[1] += 0.7536231884057971;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
  } else {
    result[0] += 0.2146118721461187;
    result[1] += 0.7853881278538812;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.29914529914529914;
    result[1] += 0.7008547008547008;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4330900013446807861) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.22660098522167488;
    result[1] += 0.7733990147783252;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 0.9142857142857143;
    result[1] += 0.08571428571428572;
  } else {
    result[0] += 0.2850877192982456;
    result[1] += 0.7149122807017544;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.1792452830188679;
    result[1] += 0.8207547169811321;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
    result[0] += 0.927536231884058;
    result[1] += 0.07246376811594203;
  } else {
    result[0] += 0.1958762886597938;
    result[1] += 0.8041237113402062;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
    result[0] += 0.3021276595744681;
    result[1] += 0.6978723404255319;
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9811320754716981;
    result[1] += 0.018867924528301886;
  } else {
    result[0] += 0.19047619047619047;
    result[1] += 0.8095238095238095;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    result[0] += 0.9454545454545454;
    result[1] += 0.05454545454545454;
  } else {
    result[0] += 0.18269230769230768;
    result[1] += 0.8173076923076923;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.20465116279069767;
    result[1] += 0.7953488372093023;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2895199954509735107) ) ) {
    result[0] += 0.5677966101694916;
    result[1] += 0.4322033898305085;
  } else {
    result[0] += 0.15862068965517243;
    result[1] += 0.8413793103448276;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
    result[0] += 0.9655172413793104;
    result[1] += 0.034482758620689655;
  } else {
    result[0] += 0.24786324786324787;
    result[1] += 0.7521367521367521;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2754237288135593;
    result[1] += 0.7245762711864406;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4287499934434890747) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.18719211822660098;
    result[1] += 0.812807881773399;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
    result[0] += 0.6063829787234043;
    result[1] += 0.39361702127659576;
  } else {
    result[0] += 0.16568047337278108;
    result[1] += 0.834319526627219;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4372749924659729004) ) ) {
    result[0] += 0.9090909090909091;
    result[1] += 0.09090909090909091;
  } else {
    result[0] += 0.14423076923076922;
    result[1] += 0.8557692307692307;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9404099881649017334) ) ) {
    result[0] += 0.9642857142857143;
    result[1] += 0.03571428571428571;
  } else {
    result[0] += 0.23404255319148937;
    result[1] += 0.7659574468085106;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
    result[0] += 0.6146788990825688;
    result[1] += 0.3853211009174312;
  } else {
    result[0] += 0.15584415584415584;
    result[1] += 0.8441558441558441;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    result[0] += 0.6632653061224489;
    result[1] += 0.336734693877551;
  } else {
    result[0] += 0.21212121212121213;
    result[1] += 0.7878787878787878;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    result[0] += 0.18848167539267016;
    result[1] += 0.8115183246073299;
  } else {
    result[0] += 0.7777777777777778;
    result[1] += 0.2222222222222222;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.06627999991178512573) ) ) {
    result[0] += 0.6976744186046512;
    result[1] += 0.3023255813953488;
  } else {
    result[0] += 0.1751412429378531;
    result[1] += 0.8248587570621468;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24669603524229075;
    result[1] += 0.7533039647577092;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
    result[0] += 0.6907216494845361;
    result[1] += 0.30927835051546393;
  } else {
    result[0] += 0.1746987951807229;
    result[1] += 0.8253012048192772;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2234649956226348877) ) ) {
    result[0] += 0.6559139784946236;
    result[1] += 0.34408602150537637;
  } else {
    result[0] += 0.19411764705882353;
    result[1] += 0.8058823529411765;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9682539682539683;
    result[1] += 0.031746031746031744;
  } else {
    result[0] += 0.175;
    result[1] += 0.825;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1515449956059455872) ) ) {
    result[0] += 0.625;
    result[1] += 0.375;
  } else {
    result[0] += 0.16167664670658682;
    result[1] += 0.8383233532934131;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4414650052785873413) ) ) {
    result[0] += 0.918918918918919;
    result[1] += 0.08108108108108109;
  } else {
    result[0] += 0.24778761061946902;
    result[1] += 0.7522123893805309;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    result[0] += 0.9672131147540983;
    result[1] += 0.03278688524590164;
  } else {
    result[0] += 0.22277227722772278;
    result[1] += 0.7772277227722773;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25663716814159293;
    result[1] += 0.7433628318584071;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 0.9838709677419355;
    result[1] += 0.016129032258064516;
  } else {
    result[0] += 0.12935323383084577;
    result[1] += 0.8706467661691543;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    result[0] += 0.9591836734693877;
    result[1] += 0.04081632653061224;
  } else {
    result[0] += 0.20093457943925233;
    result[1] += 0.7990654205607477;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6764650046825408936) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2916666666666667;
    result[1] += 0.7083333333333334;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2951499968767166138) ) ) {
    result[0] += 0.6213592233009708;
    result[1] += 0.3786407766990291;
  } else {
    result[0] += 0.15625;
    result[1] += 0.84375;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5845049917697906494) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3135593220338983;
    result[1] += 0.6864406779661016;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    result[0] += 0.15135135135135136;
    result[1] += 0.8486486486486486;
  } else {
    result[0] += 0.8461538461538461;
    result[1] += 0.15384615384615385;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2672250047326087952) ) ) {
    result[0] += 0.5858585858585859;
    result[1] += 0.41414141414141414;
  } else {
    result[0] += 0.2073170731707317;
    result[1] += 0.7926829268292683;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 0.9682539682539683;
    result[1] += 0.031746031746031744;
  } else {
    result[0] += 0.185;
    result[1] += 0.815;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2719449996948242188) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.23148148148148148;
    result[1] += 0.7685185185185185;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2129049971699714661) ) ) {
    result[0] += 0.6582278481012658;
    result[1] += 0.34177215189873417;
  } else {
    result[0] += 0.22826086956521738;
    result[1] += 0.7717391304347826;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22705314009661837;
    result[1] += 0.7729468599033816;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    result[0] += 0.9666666666666667;
    result[1] += 0.03333333333333333;
  } else {
    result[0] += 0.18226600985221675;
    result[1] += 0.8177339901477833;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22613065326633167;
    result[1] += 0.7738693467336684;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
    result[0] += 0.9803921568627451;
    result[1] += 0.0196078431372549;
  } else {
    result[0] += 0.16981132075471697;
    result[1] += 0.8301886792452831;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2146341463414634;
    result[1] += 0.7853658536585366;
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1895800009369850159) ) ) {
    result[0] += 0.67;
    result[1] += 0.33;
  } else {
    result[0] += 0.22699386503067484;
    result[1] += 0.7730061349693251;
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
