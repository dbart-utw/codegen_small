
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8403276092443214;
    result[1] += 0.00029692680754194096;
    result[2] += 0.0026475973672489737;
    result[3] += 0.13257781956747663;
    result[4] += 0.0236304251002128;
    result[5] += 0.00029692680754194096;
    result[6] += 0.00022269510565645572;
  } else {
    result[0] += 0.09235255994815295;
    result[1] += 0.010045366169799093;
    result[2] += 0.002268308489954634;
    result[3] += 0.4001944264419961;
    result[4] += 0.4951393389500972;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9994261887456486;
    result[1] += 0;
    result[2] += 0.0004973030871045484;
    result[3] += 0;
    result[4] += 3.8254083623426804e-05;
    result[5] += 0;
    result[6] += 3.8254083623426804e-05;
  } else {
    result[0] += 0.4654646004954203;
    result[1] += 0.002707529235555044;
    result[2] += 0.006970447606428943;
    result[3] += 0.3799181980528833;
    result[4] += 0.14407511953453542;
    result[5] += 0.00028803502505904725;
    result[6] += 0.0005760700501180945;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.24028889322662503;
    result[1] += 0.003318368143665821;
    result[2] += 0.00722233066562561;
    result[3] += 0.4136248292016397;
    result[4] += 0.3355455787624439;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.861818276571905;
    result[1] += 0.00026057273888005836;
    result[2] += 0.0019803528154884436;
    result[3] += 0.11582458243218595;
    result[4] += 0.019621127237668394;
    result[5] += 0.00013028636944002918;
    result[6] += 0.0003648018344320817;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.225;
    result[1] += 0.004069767441860465;
    result[2] += 0.005813953488372093;
    result[3] += 0.42441860465116277;
    result[4] += 0.34069767441860466;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8623369848721961;
    result[1] += 0.00033907146583202923;
    result[2] += 0.002190923317683881;
    result[3] += 0.11669274908711529;
    result[4] += 0.017996870109546165;
    result[5] += 0.00015649452269170578;
    result[6] += 0.00028690662493479393;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9995826377295493;
    result[1] += 0;
    result[2] += 0.0003794202458643193;
    result[3] += 0;
    result[4] += 3.7942024586431934e-05;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.4656439570695287;
    result[1] += 0.0022748483434437703;
    result[2] += 0.007291180587960803;
    result[3] += 0.38724918338777414;
    result[4] += 0.13649090060662622;
    result[5] += 0.0005249650023331778;
    result[6] += 0.0005249650023331778;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2077721351291676;
    result[1] += 0.002428792227864871;
    result[2] += 0.004857584455729742;
    result[3] += 0.42636343563700596;
    result[4] += 0.35857805255023184;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8567396269020554;
    result[1] += 0.00041056169972543687;
    result[2] += 0.002489030304585461;
    result[3] += 0.11937081419517077;
    result[4] += 0.020502424880039002;
    result[5] += 0.00012830053116419902;
    result[6] += 0.0003592414872597573;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8404005439485721;
    result[1] += 0.00037087402645568057;
    result[2] += 0.002472493509704537;
    result[3] += 0.13294597601681296;
    result[4] += 0.023463963407096056;
    result[5] += 0.00012362467548522686;
    result[6] += 0.00022252441587340834;
  } else {
    result[0] += 0.10376432078559739;
    result[1] += 0.007201309328968904;
    result[2] += 0.0029459901800327334;
    result[3] += 0.39901800327332243;
    result[4] += 0.48707037643207857;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9992779783393502;
    result[1] += 0;
    result[2] += 0.0006460193805814175;
    result[3] += 0;
    result[4] += 7.600228006840206e-05;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.4631946464940355;
    result[1] += 0.0019784695955775387;
    result[2] += 0.006750072737852778;
    result[3] += 0.3892347977887693;
    result[4] += 0.1377363980215304;
    result[5] += 0.000523712540005819;
    result[6] += 0.0005819028222286878;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.2358771060455897;
    result[1] += 0.005153617443012884;
    result[2] += 0.00713577799801784;
    result[3] += 0.4196233894945491;
    result[4] += 0.3322101090188305;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.864803016512807;
    result[1] += 0.0005200884150305551;
    result[2] += 0.0021323625016252757;
    result[3] += 0.11379534520868545;
    result[4] += 0.018333116629827065;
    result[5] += 0.00013002210375763878;
    result[6] += 0.0002860486282668053;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9991209631186699;
    result[1] += 0;
    result[2] += 0.0006115039174469712;
    result[3] += 0;
    result[4] += 0.00022931396904261417;
    result[5] += 0;
    result[6] += 3.82189948404357e-05;
  } else {
    result[0] += 0.4646091721949813;
    result[1] += 0.0016152293048745316;
    result[2] += 0.005884049610614365;
    result[3] += 0.383732333429478;
    result[4] += 0.14323622728583793;
    result[5] += 0.0003461205653302568;
    result[6] += 0.0005768676088837612;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11532602071907373;
    result[1] += 0.002894576477757465;
    result[2] += 0.004722730042656917;
    result[3] += 0.48202315661182205;
    result[4] += 0.39457647775746496;
    result[5] += 0.0004570383912248629;
    result[6] += 0;
  } else {
    result[0] += 0.9058100498158977;
    result[1] += 0.0004061078622482131;
    result[2] += 0.002951050465670349;
    result[3] += 0.09042668399393546;
    result[4] += 0;
    result[5] += 2.7073857483214208e-05;
    result[6] += 0.00037903400476499893;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993163431957157;
    result[1] += 0;
    result[2] += 0.0005317330699988606;
    result[3] += 0;
    result[4] += 0.00011394280071404155;
    result[5] += 0;
    result[6] += 3.798093357134719e-05;
  } else {
    result[0] += 0.46526119620290024;
    result[1] += 0.0020383204239706482;
    result[2] += 0.00675557626230272;
    result[3] += 0.3857084619416458;
    result[4] += 0.13912992836759652;
    result[5] += 0.0006988527167899366;
    result[6] += 0.00040766408479412964;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.22733503035049932;
    result[1] += 0.003916193459956922;
    result[2] += 0.008419815938907381;
    result[3] += 0.41629136479342077;
    result[4] += 0.3440375954572156;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8617716771286432;
    result[1] += 0.0004427890500872555;
    result[2] += 0.001849295444482067;
    result[3] += 0.11676607714948037;
    result[4] += 0.018805511421352852;
    result[5] += 7.813924413304508e-05;
    result[6] += 0.0002865105618211653;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8426741689494337;
    result[1] += 0.0003701784260013327;
    result[2] += 0.002912070284543817;
    result[3] += 0.1309444485575381;
    result[4] += 0.022605562547814716;
    result[5] += 7.403568520026654e-05;
    result[6] += 0.000419535549468177;
  } else {
    result[0] += 0.0909701242027526;
    result[1] += 0.007720711648204095;
    result[2] += 0.0016784155756965425;
    result[3] += 0.40986908358509566;
    result[4] += 0.4897616649882511;
    result[5] += 0;
    result[6] += 0;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    result[0] += 0.23164284315645192;
    result[1] += 0.0033287644409633835;
    result[2] += 0.006853338554924614;
    result[3] += 0.42334051302134323;
    result[4] += 0.3348345408263168;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.8626833016435289;
    result[1] += 0.00036464980595421047;
    result[2] += 0.0022139452504362778;
    result[3] += 0.11582840621988384;
    result[4] += 0.01846690803010966;
    result[5] += 0.00018232490297710524;
    result[6] += 0.00026046414711015036;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    result[0] += 0.2074978204010462;
    result[1] += 0.004577157802964254;
    result[2] += 0.006320836965998256;
    result[3] += 0.42000871839581516;
    result[4] += 0.3615954664341761;
    result[5] += 0;
    result[6] += 0;
  } else {
    result[0] += 0.859631990131579;
    result[1] += 0.0002826891447368421;
    result[2] += 0.002312911184210526;
    result[3] += 0.1181383634868421;
    result[4] += 0.019120065789473683;
    result[5] += 0.00020559210526315788;
    result[6] += 0.0003083881578947368;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11659614480488951;
    result[1] += 0.001567152483936687;
    result[2] += 0.005171603196991067;
    result[3] += 0.49302617144648175;
    result[4] += 0.38238520608055165;
    result[5] += 0.0012537219871493496;
    result[6] += 0;
  } else {
    result[0] += 0.9055739648158625;
    result[1] += 0.0007004499043616477;
    result[2] += 0.0028556803793205634;
    result[3] += 0.09051967994827446;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.0003502249521808238;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    result[0] += 0.9993547407576102;
    result[1] += 0;
    result[2] += 0.00041752068625218247;
    result[3] += 0;
    result[4] += 0.0001897821301146284;
    result[5] += 0;
    result[6] += 3.7956426022925684e-05;
  } else {
    result[0] += 0.4690451206715635;
    result[1] += 0.002448408534452606;
    result[2] += 0.0061793167774280055;
    result[3] += 0.3824180949049784;
    result[4] += 0.1390346274921301;
    result[5] += 0.00023318176518596245;
    result[6] += 0.0006412498542613967;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    result[0] += 0.11850023144576455;
    result[1] += 0.0007714858818083629;
    result[2] += 0.004011726585403487;
    result[3] += 0.49051072365375714;
    result[4] += 0.38512575219873474;
    result[5] += 0.001080080234531708;
    result[6] += 0;
  } else {
    result[0] += 0.9042923903941219;
    result[1] += 0.0006483157297603933;
    result[2] += 0.0022961182095680597;
    result[3] += 0.09260109673410952;
    result[4] += 0;
    result[5] += 0;
    result[6] += 0.00016207893244009832;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    result[0] += 0.8413477022172675;
    result[1] += 0.0002725133159915769;
    result[2] += 0.0031462901028118423;
    result[3] += 0.13164870556174907;
    result[4] += 0.023188405797101453;
    result[5] += 0.0001486436269044965;
    result[6] += 0.00024773937817416084;
  } else {
    result[0] += 0.09027113237639553;
    result[1] += 0.007017543859649123;
    result[2] += 0.003827751196172249;
    result[3] += 0.3990430622009569;
    result[4] += 0.49984051036682614;
    result[5] += 0;
    result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
