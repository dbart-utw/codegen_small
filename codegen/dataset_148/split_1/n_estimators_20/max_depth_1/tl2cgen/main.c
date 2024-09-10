
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.19705500216543959;
    result[1] += 0.0045474231268947595;
    result[2] += 0.00519705500216544;
    result[3] += 0.43525335643135554;
    result[4] += 0.35794716327414466;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8576719304562523;
    result[1] += 0.00033434494110385276;
    result[2] += 0.002700478370454195;
    result[3] += 0.11753510621881592;
    result[4] += 0.02119232549765959;
    result[5] += 0.00030862609948047946;
    result[6] += 0.0002571884162337329;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9992760525814441;
    result[1] += 0;
    result[2] += 0.0006096399314155078;
    result[3] += 0;
    result[4] += 3.810249571346924e-05;
    result[5] += 0;
    result[6] += 7.620499142693847e-05;
  } else {
    result[0] += 0.47041437264561;
    result[1] += 0.0020863517820921473;
    result[2] += 0.006954505940307157;
    result[3] += 0.3782092147203709;
    result[4] += 0.14129237902057373;
    result[5] += 0.00040567951318458417;
    result[6] += 0.0006374963778614895;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.12053366048152124;
    result[1] += 0.001993559270050606;
    result[2] += 0.0032203649746971323;
    result[3] += 0.49670295966876243;
    result[4] += 0.37616929918724124;
    result[5] += 0.0013801564177273425;
    result[6] += 0;
  } else {
    result[0] += 0.9043511182022229;
    result[1] += 0.00024338137862029802;
    result[2] += 0.003082830795857108;
    result[3] += 0.0920252034938749;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0002974661294248087;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.23493747631678666;
    result[1] += 0.0035998484274346342;
    result[2] += 0.007957559681697613;
    result[3] += 0.4170140204622963;
    result[4] += 0.33649109511178477;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.864973052168908;
    result[1] += 0.00041860708492491236;
    result[2] += 0.00245931662393386;
    result[3] += 0.11373031238553713;
    result[4] += 0.017947778766155616;
    result[5] += 7.848882842342106e-05;
    result[6] += 0.00039244414211710534;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.999196233781146;
    result[1] += 0;
    result[2] += 0.0006506678914532858;
    result[3] += 0;
    result[4] += 7.654916370038657e-05;
    result[5] += 0;
    result[6] += 7.654916370038657e-05;
  } else {
    result[0] += 0.45737638864905317;
    result[1] += 0.0018994992229321363;
    result[2] += 0.007022391066597595;
    result[3] += 0.38928221953606174;
    result[4] += 0.14372877453519833;
    result[5] += 0.0002878029125654752;
    result[6] += 0.0004029240775916653;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.20489690721649484;
    result[1] += 0.004725085910652921;
    result[2] += 0.006013745704467354;
    result[3] += 0.4334192439862543;
    result[4] += 0.35094501718213056;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8575069508804448;
    result[1] += 0.00025744001647616104;
    result[2] += 0.002419936154875914;
    result[3] += 0.11842240757903409;
    result[4] += 0.020929873339511892;
    result[5] += 0.00020595201318092884;
    result[6] += 0.00025744001647616104;
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    result[0] += 0.7634968484516306;
    result[1] += 0.0007536311318169361;
    result[2] += 0.003357084132639079;
    result[3] += 0.18498218690052068;
    result[4] += 0.04706768977802137;
    result[5] += 0.00013702384214853386;
    result[6] += 0.00020553576322280076;
  } else {
    result[0] += 0.8012039856075285;
    result[1] += 0.0007611403265983948;
    result[2] += 0.0028715748685303076;
    result[3] += 0.13126210905065044;
    result[4] += 0.06362441184611128;
    result[5] += 0.00020758372543592586;
    result[6] += 6.919457514530862e-05;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
    result[0] += 0.9092168324237472;
    result[1] += 0.00030473446546804445;
    result[2] += 0.0016898911266864283;
    result[3] += 0.08737568218965565;
    result[4] += 0.0010804221957503393;
    result[5] += 5.5406266448735354e-05;
    result[6] += 0.00027703133224367675;
  } else {
    result[0] += 0.19289477238957178;
    result[1] += 0.002026205592327435;
    result[2] += 0.00810482236930974;
    result[3] += 0.4637309198973389;
    result[4] += 0.33270295826016477;
    result[5] += 0.0005403214912873159;
    result[6] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.1154690931910888;
    result[1] += 0.0010982114841543774;
    result[2] += 0.00580483213053028;
    result[3] += 0.5053341700658928;
    result[4] += 0.37119548164417954;
    result[5] += 0.0010982114841543774;
    result[6] += 0;
  } else {
    result[0] += 0.9046220977212736;
    result[1] += 0.0005925766309325002;
    result[2] += 0.0032053008673167053;
    result[3] += 0.0913376070678231;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0002424177126542046;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.20251277683134583;
    result[1] += 0.002981260647359455;
    result[2] += 0.006175468483816013;
    result[3] += 0.42482964224872233;
    result[4] += 0.3635008517887564;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8541129780435007;
    result[1] += 0.0003092464694361407;
    result[2] += 0.002267807442531698;
    result[3] += 0.12207504380991652;
    result[4] += 0.020874136686939493;
    result[5] += 0.0001803937738377487;
    result[6] += 0.0001803937738377487;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    result[0] += 0.8402640653090094;
    result[1] += 0.00100203353865197;
    result[2] += 0.0027408564439598006;
    result[3] += 0.10376941439981138;
    result[4] += 0.05210574400990245;
    result[5] += 5.8943149332468837e-05;
    result[6] += 5.8943149332468837e-05;
  } else {
    result[0] += 0.594419479569443;
    result[1] += 0;
    result[2] += 0.006061239418957049;
    result[3] += 0.33127808548437665;
    result[4] += 0.06782317901557111;
    result[5] += 0.00020900825582610512;
    result[6] += 0.00020900825582610512;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993541524200289;
    result[1] += 0;
    result[2] += 0.0005318744776232809;
    result[3] += 0;
    result[4] += 3.7991034115948635e-05;
    result[5] += 0;
    result[6] += 7.598206823189727e-05;
  } else {
    result[0] += 0.46233554546512984;
    result[1] += 0.0017464198393293748;
    result[2] += 0.006228897426941437;
    result[3] += 0.3866573524275236;
    result[4] += 0.14186750494818953;
    result[5] += 0.0005239259517988125;
    result[6] += 0.0006403539410874374;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.23477594791267714;
    result[1] += 0.00248946763692072;
    result[2] += 0.008234392952891613;
    result[3] += 0.40444274224435084;
    result[4] += 0.35005744925315974;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8630806207220858;
    result[1] += 0.0002612466691049689;
    result[2] += 0.00193322535137677;
    result[3] += 0.11536652907675427;
    result[4] += 0.018783635508647263;
    result[5] += 0.00015674800146298136;
    result[6] += 0.00041799467056795027;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.1123946300343428;
    result[1] += 0.001248829222603809;
    result[2] += 0.004214798626287855;
    result[3] += 0.5009366219169529;
    result[4] += 0.3791757727130815;
    result[5] += 0.0020293474867311896;
    result[6] += 0;
  } else {
    result[0] += 0.9027605542675365;
    result[1] += 0.0005661292931471397;
    result[2] += 0.0023184342481263817;
    result[3] += 0.09413921388903866;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00021566830215129131;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9989789358242257;
    result[1] += 0;
    result[2] += 0.0008697954089929282;
    result[3] += 0;
    result[4] += 0.00015126876678137882;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.46514627425690336;
    result[1] += 0.0028727208770592725;
    result[2] += 0.007035234800961483;
    result[3] += 0.37996130620859475;
    result[4] += 0.14357741689628895;
    result[5] += 0.00046901565339743217;
    result[6] += 0.0009380313067948643;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11090371752994245;
    result[1] += 0.002644268159900451;
    result[2] += 0.004977445948047908;
    result[3] += 0.4968113236895318;
    result[4] += 0.38435215430082437;
    result[5] += 0.00031109037175299425;
    result[6] += 0;
  } else {
    result[0] += 0.9030778775862535;
    result[1] += 0.0003776536915648351;
    result[2] += 0.003102155323568288;
    result[3] += 0.09311861023441506;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0003237031641984301;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11681582666038624;
    result[1] += 0.0009420631182289214;
    result[2] += 0.004396294551734966;
    result[3] += 0.49018684251844874;
    result[4] += 0.38530381535562885;
    result[5] += 0.0023551577955723034;
    result[6] += 0;
  } else {
    result[0] += 0.9015647302792815;
    result[1] += 0.0005117018125016834;
    result[2] += 0.0027200991085615796;
    result[3] += 0.09493415205623335;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0002693167434219386;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993901044446138;
    result[1] += 0;
    result[2] += 0.0005336586109628726;
    result[3] += 0;
    result[4] += 7.623694442326752e-05;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.46026873624464265;
    result[1] += 0.001390015058496467;
    result[2] += 0.006950075292482335;
    result[3] += 0.383933742615545;
    result[4] += 0.14600949843623307;
    result[5] += 0.0005791729410401946;
    result[6] += 0.0008687594115602919;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9991264053479185;
    result[1] += 0;
    result[2] += 0.0007216651473716196;
    result[3] += 0;
    result[4] += 0.00011394712853236098;
    result[5] += 0;
    result[6] += 3.798237617745366e-05;
  } else {
    result[0] += 0.4673305380852551;
    result[1] += 0.0015140927090612627;
    result[2] += 0.005823433496389472;
    result[3] += 0.38446307943163294;
    result[4] += 0.13929652923363617;
    result[5] += 0.0005823433496389473;
    result[6] += 0.0009899836943862103;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9991616492645379;
    result[1] += 0;
    result[2] += 0.0006859233290145569;
    result[3] += 0;
    result[4] += 0.00011432055483575948;
    result[5] += 0;
    result[6] += 3.810685161191983e-05;
  } else {
    result[0] += 0.46111948082048904;
    result[1] += 0.001912156680959555;
    result[2] += 0.0066635763124348124;
    result[3] += 0.38950052149727665;
    result[4] += 0.1398771584192838;
    result[5] += 0.0002897207092362962;
    result[6] += 0.0006373855603198517;
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  result[6] /= 20;
  
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
