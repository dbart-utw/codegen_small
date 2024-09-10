
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.8005511679097794;
    result[1] += 0.19944883209022052;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.004558795978267658;
    result[1] += 0.9954412040217323;
  } else {
    result[0] += 0.7662935412939567;
    result[1] += 0.2337064587060433;
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    result[0] += 0.005166005166005166;
    result[1] += 0.9948339948339948;
  } else {
    result[0] += 0.7647478789287553;
    result[1] += 0.23525212107124474;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.4704887551739281;
    result[1] += 0.5295112448260719;
  } else {
    result[0] += 0.9833580914299755;
    result[1] += 0.01664190857002446;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8071375265281373;
    result[1] += 0.1928624734718627;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.062040502927344275;
    result[1] += 0.9379594970726557;
  } else {
    result[0] += 0.937673484927145;
    result[1] += 0.06232651507285502;
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
    result[0] += 0.7166889477270717;
    result[1] += 0.28331105227292824;
  } else {
    result[0] += 0.021764297291039594;
    result[1] += 0.9782357027089604;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.799804715711141;
    result[1] += 0.20019528428885897;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7787926166721033;
    result[1] += 0.2212073833278967;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05660961821420274;
    result[1] += 0.9433903817857973;
  } else {
    result[0] += 0.9349656333673779;
    result[1] += 0.06503436663262208;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9395714537253999;
    result[1] += 0.0604285462746001;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.054891774891774894;
    result[1] += 0.9451082251082251;
  } else {
    result[0] += 0.9358647162568732;
    result[1] += 0.06413528374312688;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7987281399046104;
    result[1] += 0.2012718600953895;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9396732385196036;
    result[1] += 0.06032676148039635;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8071333056939148;
    result[1] += 0.19286669430608516;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8045087483176312;
    result[1] += 0.19549125168236878;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47407764429853677;
    result[1] += 0.5259223557014632;
  } else {
    result[0] += 0.9985565319814774;
    result[1] += 0.0014434680185225815;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05791356472976893;
    result[1] += 0.9420864352702311;
  } else {
    result[0] += 0.9349373468190134;
    result[1] += 0.06506265318098657;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.47599477437265253;
    result[1] += 0.5240052256273474;
  } else {
    result[0] += 0.9984826371997128;
    result[1] += 0.0015173628002872566;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.47082257883514755;
    result[1] += 0.5291774211648524;
  } else {
    result[0] += 0.9819476056589459;
    result[1] += 0.018052394341054136;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.7993274577209699;
    result[1] += 0.20067254227903006;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8098517785983042;
    result[1] += 0.1901482214016958;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9403971710226848;
    result[1] += 0.05960282897731519;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8099396392391737;
    result[1] += 0.19006036076082633;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.4995984722358241;
    result[1] += 0.5004015277641759;
  } else {
    result[0] += 0.9214081524616199;
    result[1] += 0.0785918475383801;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.057012806665638016;
    result[1] += 0.942987193334362;
  } else {
    result[0] += 0.9352783459561059;
    result[1] += 0.06472165404389407;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05703583565029348;
    result[1] += 0.9429641643497065;
  } else {
    result[0] += 0.9360977564102564;
    result[1] += 0.06390224358974358;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9397813940209634;
    result[1] += 0.060218605979036666;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8103444237548162;
    result[1] += 0.1896555762451838;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.806802276756555;
    result[1] += 0.193197723243445;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9409045102952391;
    result[1] += 0.05909548970476087;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.47147427228383026;
    result[1] += 0.5285257277161697;
  } else {
    result[0] += 0.9816321733582566;
    result[1] += 0.018367826641743433;
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    result[0] += 0.005256542109473203;
    result[1] += 0.9947434578905268;
  } else {
    result[0] += 0.811710616709824;
    result[1] += 0.18828938329017597;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    result[0] += 0.47217711075021934;
    result[1] += 0.5278228892497807;
  } else {
    result[0] += 0.9822407121608625;
    result[1] += 0.017759287839137532;
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    result[0] += 0.799675442801125;
    result[1] += 0.20032455719887501;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05675722443329296;
    result[1] += 0.943242775566707;
  } else {
    result[0] += 0.9359110059564577;
    result[1] += 0.06408899404354233;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8011106468908851;
    result[1] += 0.19888935310911496;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8063795667259527;
    result[1] += 0.1936204332740473;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.799396123389807;
    result[1] += 0.20060387661019302;
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    result[0] += 0.004201161497590511;
    result[1] += 0.9957988385024095;
  } else {
    result[0] += 0.7646501158703582;
    result[1] += 0.23534988412964175;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5096828079171766;
    result[1] += 0.4903171920828235;
  } else {
    result[0] += 0.9197491292176849;
    result[1] += 0.0802508707823151;
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    result[0] += 0.5012493359828437;
    result[1] += 0.49875066401715623;
  } else {
    result[0] += 0.9238088213600826;
    result[1] += 0.0761911786399174;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    result[0] += 0.4729930825494458;
    result[1] += 0.5270069174505542;
  } else {
    result[0] += 0.9983426897445175;
    result[1] += 0.0016573102554825457;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 9.804882831650162e-05;
    result[1] += 0.9999019511716835;
  } else {
    result[0] += 0.7825240403719304;
    result[1] += 0.21747595962806962;
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8081885740284891;
    result[1] += 0.1918114259715109;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    result[0] += 0.06365554276946682;
    result[1] += 0.9363444572305332;
  } else {
    result[0] += 0.9380072012186678;
    result[1] += 0.06199279878133222;
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    result[0] += 0.008785309011042646;
    result[1] += 0.9912146909889573;
  } else {
    result[0] += 0.7667911793926813;
    result[1] += 0.23320882060731868;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    result[0] += 0.05657773689052438;
    result[1] += 0.9434222631094756;
  } else {
    result[0] += 0.9353321697695035;
    result[1] += 0.06466783023049645;
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    result[0] += 0.009287925696594427;
    result[1] += 0.9907120743034056;
  } else {
    result[0] += 0.7674346288182934;
    result[1] += 0.23256537118170661;
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8087849100745723;
    result[1] += 0.19121508992542768;
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
