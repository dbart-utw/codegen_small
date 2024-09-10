
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0051506567087303634;
        result[3] += 0.7983517898532063;
        result[4] += 0.19366469224826166;
        result[5] += 0.0028328611898017;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004119464469618949;
        result[2] += 0;
        result[3] += 0.09577754891864057;
        result[4] += 0.9001029866117405;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0.9984153185869924;
        result[1] += 0;
        result[2] += 0.0014526246285902938;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00013205678441729945;
      } else {
        result[0] += 0.999804916113929;
        result[1] += 0;
        result[2] += 0.00019508388607101054;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0.5220439033388674;
        result[1] += 0.0020291459140380002;
        result[2] += 0.004427227448810182;
        result[3] += 0.4707618520568161;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007378712414683637;
      } else {
        result[0] += 0.8516879711569977;
        result[1] += 0.0011471648639790233;
        result[2] += 0.010488364470665356;
        result[3] += 0.13569321533923304;
        result[4] += 0;
        result[5] += 0.00016388069485414618;
        result[6] += 0.0008194034742707309;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.3019762845849802;
        result[1] += 0;
        result[2] += 0.0015810276679841897;
        result[3] += 0.15731225296442689;
        result[4] += 0.5383399209486166;
        result[5] += 0.0007905138339920949;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0007701193685021178;
        result[2] += 0.008856372737774355;
        result[3] += 0.9634193299961494;
        result[4] += 0.02502887947631883;
        result[5] += 0.0019252984212552945;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.30517241379310345;
        result[4] += 0.6948275862068966;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0037481259370314842;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9962518740629686;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.9728997289972899;
        result[1] += 0.005420054200542005;
        result[2] += 0.0027100271002710027;
        result[3] += 0.018970189701897018;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.42343173431734316;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5765682656826568;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.8735596747466183;
        result[1] += 0.0006936683494546996;
        result[2] += 0.0023507649620409265;
        result[3] += 0.12308759489768392;
        result[4] += 0;
        result[5] += 3.853713052526109e-05;
        result[6] += 0.0002697599136768276;
      } else {
        result[0] += 0.9859523348188336;
        result[1] += 0;
        result[2] += 0.0027126525867080024;
        result[3] += 0.01085061034683201;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000484402247626429;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 0.9632802937576499;
        result[1] += 0;
        result[2] += 0.03671970624235006;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05504261363636364;
        result[1] += 0.0035511363636363635;
        result[2] += 0.0014204545454545455;
        result[3] += 0.6658380681818182;
        result[4] += 0.2741477272727273;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.0032102728731942215;
        result[1] += 0.011235955056179775;
        result[2] += 0;
        result[3] += 0.04975922953451043;
        result[4] += 0.9357945425361156;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2676923076923077;
        result[4] += 0.7323076923076923;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9990436844923877;
        result[1] += 0;
        result[2] += 0.000803305026394308;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015301048121796343;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.6378080707772863;
        result[1] += 0.0015347115645030242;
        result[2] += 0.004784688995215311;
        result[3] += 0.3265324546357317;
        result[4] += 0.028617856820438745;
        result[5] += 0.0002708314525593572;
        result[6] += 0.00045138575426559535;
      } else {
        result[0] += 0.012956419316843345;
        result[1] += 0;
        result[2] += 0.018256772673733806;
        result[3] += 0.6690223792697291;
        result[4] += 0.29740871613663133;
        result[5] += 0.002355712603062426;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.21349009900990099;
        result[1] += 0.0037128712871287127;
        result[2] += 0;
        result[3] += 0.7821782178217822;
        result[4] += 0.0006188118811881188;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5392762577228597;
        result[1] += 0;
        result[2] += 0.03089143865842895;
        result[3] += 0.4298323036187114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0.005235602094240838;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7643979057591623;
        result[4] += 0.23036649214659685;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0017201834862385322;
        result[1] += 0.0045871559633027525;
        result[2] += 0;
        result[3] += 0.0768348623853211;
        result[4] += 0.9168577981651376;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9992351816443594;
        result[1] += 0;
        result[2] += 0.000650095602294455;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001147227533460803;
      } else {
        result[0] += 0.5936845631962476;
        result[1] += 0.001758941284864729;
        result[2] += 0.007454560683474328;
        result[3] += 0.3850406231677695;
        result[4] += 0.010972443253203786;
        result[5] += 0.0005863137616215763;
        result[6] += 0.000502554652818494;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0009025270758122745;
        result[1] += 0;
        result[2] += 0.003610108303249098;
        result[3] += 0.9554753309265945;
        result[4] += 0.03880866425992781;
        result[5] += 0.001203369434416366;
        result[6] += 0;
      } else {
        result[0] += 0.5174377224199288;
        result[1] += 0;
        result[2] += 0.01494661921708185;
        result[3] += 0;
        result[4] += 0.46761565836298935;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2717149220489978;
        result[4] += 0.7282850779510023;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007971014492753623;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9920289855072464;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0.9969604863221885;
        result[1] += 0.0005126890540886952;
        result[2] += 0.0021606181565166443;
        result[3] += 7.324129344124217e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002929651737649687;
      } else {
        result[0] += 0.32079646017699115;
        result[1] += 0.01991150442477876;
        result[2] += 0;
        result[3] += 0.6592920353982301;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4521239554317549;
        result[1] += 0;
        result[2] += 0.0012186629526462396;
        result[3] += 0.5466573816155988;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9877871474265775;
        result[1] += 0;
        result[2] += 0.00959581273626054;
        result[3] += 0.0011631288165164292;
        result[4] += 0;
        result[5] += 0.0002907822041291073;
        result[6] += 0.0011631288165164292;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  result[6] /= 5;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
